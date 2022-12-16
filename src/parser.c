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
#define STATE_COUNT 508
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
  sym__when_keyword = 64,
  sym_when = 65,
  sym_unescaped_buffered_code = 66,
  sym_buffered_code = 67,
  sym_script_block = 68,
  sym_tag = 69,
  sym__content_after_dot = 70,
  sym_attributes = 71,
  sym_attribute = 72,
  sym__ternary_attribute_value = 73,
  sym__string_attribute_value = 74,
  sym__variable_attribute_value = 75,
  sym__object_attribute_value = 76,
  sym__template_attribute_value = 77,
  sym__array_attribute_value = 78,
  sym__attribute = 79,
  sym__angular_attribute = 80,
  sym_children = 81,
  sym__children_choice = 82,
  sym_comment = 83,
  sym_angular_attribute_name = 84,
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
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(636);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '\'') ADVANCE(632);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(197);
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
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(67);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '`') ADVANCE(216);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(219);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(142);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(223);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(224);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(223);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(224);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(231);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(67);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(251);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(253);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(255);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(140);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(257);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(640);
      if (lookahead != 0) ADVANCE(641);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(190);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(498);
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
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(637);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(473);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(637);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(473);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(636);
      if (lookahead == '\'') ADVANCE(632);
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
      if (lookahead == '"') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead != 0) ADVANCE(639);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '[') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 67:
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(71);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 75:
      if (lookahead == ')') ADVANCE(452);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '}') ADVANCE(433);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(433);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(200);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(520);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(482);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(510);
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
      if (lookahead == ']') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(424);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(446);
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
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(156);
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
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(170);
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
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(160);
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
      if (lookahead == 'n') ADVANCE(186);
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
      if (lookahead == 's') ADVANCE(173);
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
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(191);
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
      if (lookahead == '}') ADVANCE(658);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 142:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 149:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(424);
      END_STATE();
    case 151:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') SKIP(151)
      if (lookahead == '!') ADVANCE(664);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '/') ADVANCE(663);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == 'w') ADVANCE(561);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 152:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') SKIP(152)
      if (lookahead == '!') ADVANCE(664);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '/') ADVANCE(663);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 153:
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == 'w') ADVANCE(562);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(648);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
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
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(67);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '`') ADVANCE(216);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(219);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(142);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(223);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(224);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(231);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(251);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(253);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(255);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(257);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(263);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(263);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(265);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(267);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(269);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(271);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(275);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(275);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(281);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(283);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(285);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(245);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(247);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == ']') ADVANCE(249);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(249);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(251);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == ']') ADVANCE(253);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(253);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == ']') ADVANCE(255);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(255);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(257);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(275);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '[') ADVANCE(277);
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == ']') ADVANCE(279);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(285);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(245);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(247);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(249);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(251);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(253);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(255);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(257);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(273);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(275);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(277);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(279);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(315);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(281);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(316);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(283);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(285);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(67);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(94);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(140);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(331);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(67);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(94);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(335);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(336);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(337);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(140);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(338);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(341);
      if (lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(326);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(344);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(343);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == '`') ADVANCE(335);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ']') ADVANCE(319);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(319);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(320);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(351);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(321);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(352);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(322);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(353);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(323);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(354);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(324);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(332);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '`') ADVANCE(357);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(359);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(360);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(361);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(362);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(318);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(319);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(320);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(366);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '`') ADVANCE(371);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(372);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(373);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(374);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(375);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(375);
      if (lookahead == '}') ADVANCE(375);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(338);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(379);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(380);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(381);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(382);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(274);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(276);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(278);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(280);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(282);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(284);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(286);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(382);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(246);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(250);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(256);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(258);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '?') ADVANCE(264);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '?') ADVANCE(270);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '?') ADVANCE(272);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(451);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '}') ADVANCE(419);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '}') ADVANCE(420);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(275);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '`') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(263);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(433);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(434);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == '`') ADVANCE(277);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(445);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(263);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(451);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(231);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '[') ADVANCE(482);
      if (lookahead == ']') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(480);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead == '}') ADVANCE(434);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(637);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(473);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '`') ADVANCE(482);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(223);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(224);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(624);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(635);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(655);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(657);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(646);
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead == '.') ADVANCE(651);
      if (lookahead == '/') ADVANCE(645);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(578);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(624);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(646);
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead == '.') ADVANCE(651);
      if (lookahead == '/') ADVANCE(645);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(578);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(664);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '/') ADVANCE(663);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == 'w') ADVANCE(561);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(664);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '/') ADVANCE(663);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 154},
  [3] = {.lex_state = 154},
  [4] = {.lex_state = 153, .external_lex_state = 2},
  [5] = {.lex_state = 153, .external_lex_state = 2},
  [6] = {.lex_state = 153, .external_lex_state = 2},
  [7] = {.lex_state = 154, .external_lex_state = 2},
  [8] = {.lex_state = 154, .external_lex_state = 2},
  [9] = {.lex_state = 154, .external_lex_state = 2},
  [10] = {.lex_state = 153, .external_lex_state = 1},
  [11] = {.lex_state = 153, .external_lex_state = 3},
  [12] = {.lex_state = 153, .external_lex_state = 1},
  [13] = {.lex_state = 153, .external_lex_state = 1},
  [14] = {.lex_state = 153, .external_lex_state = 2},
  [15] = {.lex_state = 153, .external_lex_state = 1},
  [16] = {.lex_state = 153, .external_lex_state = 3},
  [17] = {.lex_state = 153, .external_lex_state = 1},
  [18] = {.lex_state = 153, .external_lex_state = 1},
  [19] = {.lex_state = 151, .external_lex_state = 3},
  [20] = {.lex_state = 153, .external_lex_state = 4},
  [21] = {.lex_state = 153, .external_lex_state = 4},
  [22] = {.lex_state = 153, .external_lex_state = 1},
  [23] = {.lex_state = 153, .external_lex_state = 4},
  [24] = {.lex_state = 151, .external_lex_state = 3},
  [25] = {.lex_state = 153},
  [26] = {.lex_state = 153, .external_lex_state = 4},
  [27] = {.lex_state = 153, .external_lex_state = 4},
  [28] = {.lex_state = 153},
  [29] = {.lex_state = 153, .external_lex_state = 3},
  [30] = {.lex_state = 153, .external_lex_state = 3},
  [31] = {.lex_state = 153, .external_lex_state = 4},
  [32] = {.lex_state = 153, .external_lex_state = 2},
  [33] = {.lex_state = 153, .external_lex_state = 3},
  [34] = {.lex_state = 153, .external_lex_state = 2},
  [35] = {.lex_state = 153, .external_lex_state = 2},
  [36] = {.lex_state = 154, .external_lex_state = 1},
  [37] = {.lex_state = 153, .external_lex_state = 4},
  [38] = {.lex_state = 153, .external_lex_state = 4},
  [39] = {.lex_state = 153, .external_lex_state = 2},
  [40] = {.lex_state = 153, .external_lex_state = 2},
  [41] = {.lex_state = 153, .external_lex_state = 2},
  [42] = {.lex_state = 153, .external_lex_state = 2},
  [43] = {.lex_state = 154, .external_lex_state = 1},
  [44] = {.lex_state = 153, .external_lex_state = 2},
  [45] = {.lex_state = 154, .external_lex_state = 1},
  [46] = {.lex_state = 153, .external_lex_state = 2},
  [47] = {.lex_state = 154, .external_lex_state = 1},
  [48] = {.lex_state = 153, .external_lex_state = 2},
  [49] = {.lex_state = 153, .external_lex_state = 2},
  [50] = {.lex_state = 154, .external_lex_state = 1},
  [51] = {.lex_state = 151, .external_lex_state = 3},
  [52] = {.lex_state = 153, .external_lex_state = 2},
  [53] = {.lex_state = 153, .external_lex_state = 2},
  [54] = {.lex_state = 153, .external_lex_state = 2},
  [55] = {.lex_state = 154, .external_lex_state = 1},
  [56] = {.lex_state = 153, .external_lex_state = 2},
  [57] = {.lex_state = 153, .external_lex_state = 2},
  [58] = {.lex_state = 153, .external_lex_state = 2},
  [59] = {.lex_state = 153, .external_lex_state = 2},
  [60] = {.lex_state = 153, .external_lex_state = 2},
  [61] = {.lex_state = 153, .external_lex_state = 2},
  [62] = {.lex_state = 153, .external_lex_state = 2},
  [63] = {.lex_state = 153, .external_lex_state = 3},
  [64] = {.lex_state = 153, .external_lex_state = 3},
  [65] = {.lex_state = 153, .external_lex_state = 3},
  [66] = {.lex_state = 153, .external_lex_state = 3},
  [67] = {.lex_state = 152, .external_lex_state = 3},
  [68] = {.lex_state = 153, .external_lex_state = 3},
  [69] = {.lex_state = 153, .external_lex_state = 3},
  [70] = {.lex_state = 153, .external_lex_state = 3},
  [71] = {.lex_state = 152, .external_lex_state = 3},
  [72] = {.lex_state = 153, .external_lex_state = 3},
  [73] = {.lex_state = 153, .external_lex_state = 3},
  [74] = {.lex_state = 153, .external_lex_state = 3},
  [75] = {.lex_state = 153, .external_lex_state = 3},
  [76] = {.lex_state = 154, .external_lex_state = 1},
  [77] = {.lex_state = 654, .external_lex_state = 3},
  [78] = {.lex_state = 654, .external_lex_state = 3},
  [79] = {.lex_state = 153, .external_lex_state = 3},
  [80] = {.lex_state = 153, .external_lex_state = 3},
  [81] = {.lex_state = 153, .external_lex_state = 3},
  [82] = {.lex_state = 153, .external_lex_state = 3},
  [83] = {.lex_state = 153, .external_lex_state = 3},
  [84] = {.lex_state = 153, .external_lex_state = 3},
  [85] = {.lex_state = 153, .external_lex_state = 3},
  [86] = {.lex_state = 654, .external_lex_state = 2},
  [87] = {.lex_state = 654, .external_lex_state = 3},
  [88] = {.lex_state = 153, .external_lex_state = 3},
  [89] = {.lex_state = 153, .external_lex_state = 3},
  [90] = {.lex_state = 153, .external_lex_state = 3},
  [91] = {.lex_state = 153, .external_lex_state = 3},
  [92] = {.lex_state = 153, .external_lex_state = 3},
  [93] = {.lex_state = 154, .external_lex_state = 2},
  [94] = {.lex_state = 154, .external_lex_state = 2},
  [95] = {.lex_state = 154, .external_lex_state = 2},
  [96] = {.lex_state = 154, .external_lex_state = 5},
  [97] = {.lex_state = 154, .external_lex_state = 4},
  [98] = {.lex_state = 60, .external_lex_state = 6},
  [99] = {.lex_state = 154, .external_lex_state = 2},
  [100] = {.lex_state = 154, .external_lex_state = 2},
  [101] = {.lex_state = 154, .external_lex_state = 2},
  [102] = {.lex_state = 60, .external_lex_state = 6},
  [103] = {.lex_state = 60, .external_lex_state = 6},
  [104] = {.lex_state = 154, .external_lex_state = 2},
  [105] = {.lex_state = 60, .external_lex_state = 6},
  [106] = {.lex_state = 154, .external_lex_state = 5},
  [107] = {.lex_state = 154, .external_lex_state = 2},
  [108] = {.lex_state = 154, .external_lex_state = 2},
  [109] = {.lex_state = 60, .external_lex_state = 6},
  [110] = {.lex_state = 154, .external_lex_state = 2},
  [111] = {.lex_state = 153},
  [112] = {.lex_state = 154, .external_lex_state = 2},
  [113] = {.lex_state = 60, .external_lex_state = 6},
  [114] = {.lex_state = 154, .external_lex_state = 2},
  [115] = {.lex_state = 154, .external_lex_state = 2},
  [116] = {.lex_state = 154, .external_lex_state = 4},
  [117] = {.lex_state = 154, .external_lex_state = 2},
  [118] = {.lex_state = 154, .external_lex_state = 2},
  [119] = {.lex_state = 654, .external_lex_state = 3},
  [120] = {.lex_state = 154, .external_lex_state = 2},
  [121] = {.lex_state = 60, .external_lex_state = 6},
  [122] = {.lex_state = 154, .external_lex_state = 2},
  [123] = {.lex_state = 60, .external_lex_state = 6},
  [124] = {.lex_state = 154, .external_lex_state = 2},
  [125] = {.lex_state = 154, .external_lex_state = 2},
  [126] = {.lex_state = 154, .external_lex_state = 2},
  [127] = {.lex_state = 60, .external_lex_state = 6},
  [128] = {.lex_state = 60, .external_lex_state = 6},
  [129] = {.lex_state = 60, .external_lex_state = 6},
  [130] = {.lex_state = 60, .external_lex_state = 6},
  [131] = {.lex_state = 154, .external_lex_state = 5},
  [132] = {.lex_state = 60, .external_lex_state = 6},
  [133] = {.lex_state = 152, .external_lex_state = 3},
  [134] = {.lex_state = 60, .external_lex_state = 6},
  [135] = {.lex_state = 60, .external_lex_state = 6},
  [136] = {.lex_state = 154, .external_lex_state = 5},
  [137] = {.lex_state = 154, .external_lex_state = 5},
  [138] = {.lex_state = 153},
  [139] = {.lex_state = 154, .external_lex_state = 5},
  [140] = {.lex_state = 60, .external_lex_state = 6},
  [141] = {.lex_state = 60, .external_lex_state = 6},
  [142] = {.lex_state = 60, .external_lex_state = 6},
  [143] = {.lex_state = 154, .external_lex_state = 3},
  [144] = {.lex_state = 154, .external_lex_state = 5},
  [145] = {.lex_state = 154, .external_lex_state = 3},
  [146] = {.lex_state = 154, .external_lex_state = 3},
  [147] = {.lex_state = 154, .external_lex_state = 5},
  [148] = {.lex_state = 154, .external_lex_state = 3},
  [149] = {.lex_state = 154},
  [150] = {.lex_state = 154},
  [151] = {.lex_state = 154},
  [152] = {.lex_state = 154},
  [153] = {.lex_state = 154},
  [154] = {.lex_state = 154},
  [155] = {.lex_state = 154},
  [156] = {.lex_state = 154},
  [157] = {.lex_state = 154},
  [158] = {.lex_state = 154},
  [159] = {.lex_state = 154},
  [160] = {.lex_state = 154},
  [161] = {.lex_state = 154},
  [162] = {.lex_state = 154},
  [163] = {.lex_state = 154},
  [164] = {.lex_state = 154},
  [165] = {.lex_state = 154},
  [166] = {.lex_state = 154},
  [167] = {.lex_state = 154},
  [168] = {.lex_state = 154},
  [169] = {.lex_state = 154},
  [170] = {.lex_state = 154},
  [171] = {.lex_state = 154},
  [172] = {.lex_state = 154},
  [173] = {.lex_state = 154},
  [174] = {.lex_state = 154},
  [175] = {.lex_state = 154},
  [176] = {.lex_state = 60, .external_lex_state = 2},
  [177] = {.lex_state = 60, .external_lex_state = 2},
  [178] = {.lex_state = 60, .external_lex_state = 2},
  [179] = {.lex_state = 60, .external_lex_state = 6},
  [180] = {.lex_state = 54, .external_lex_state = 6},
  [181] = {.lex_state = 54, .external_lex_state = 6},
  [182] = {.lex_state = 54, .external_lex_state = 6},
  [183] = {.lex_state = 60, .external_lex_state = 6},
  [184] = {.lex_state = 60, .external_lex_state = 6},
  [185] = {.lex_state = 60, .external_lex_state = 6},
  [186] = {.lex_state = 54, .external_lex_state = 6},
  [187] = {.lex_state = 54, .external_lex_state = 6},
  [188] = {.lex_state = 60, .external_lex_state = 6},
  [189] = {.lex_state = 54, .external_lex_state = 6},
  [190] = {.lex_state = 54, .external_lex_state = 6},
  [191] = {.lex_state = 60, .external_lex_state = 6},
  [192] = {.lex_state = 54, .external_lex_state = 6},
  [193] = {.lex_state = 54, .external_lex_state = 6},
  [194] = {.lex_state = 54, .external_lex_state = 6},
  [195] = {.lex_state = 54, .external_lex_state = 6},
  [196] = {.lex_state = 54, .external_lex_state = 6},
  [197] = {.lex_state = 60, .external_lex_state = 1},
  [198] = {.lex_state = 55},
  [199] = {.lex_state = 60, .external_lex_state = 1},
  [200] = {.lex_state = 60, .external_lex_state = 1},
  [201] = {.lex_state = 55},
  [202] = {.lex_state = 60, .external_lex_state = 1},
  [203] = {.lex_state = 60, .external_lex_state = 1},
  [204] = {.lex_state = 60, .external_lex_state = 1},
  [205] = {.lex_state = 60, .external_lex_state = 1},
  [206] = {.lex_state = 60, .external_lex_state = 2},
  [207] = {.lex_state = 60, .external_lex_state = 2},
  [208] = {.lex_state = 65},
  [209] = {.lex_state = 60, .external_lex_state = 2},
  [210] = {.lex_state = 60, .external_lex_state = 2},
  [211] = {.lex_state = 65},
  [212] = {.lex_state = 60, .external_lex_state = 2},
  [213] = {.lex_state = 60, .external_lex_state = 2},
  [214] = {.lex_state = 65},
  [215] = {.lex_state = 60, .external_lex_state = 2},
  [216] = {.lex_state = 60, .external_lex_state = 2},
  [217] = {.lex_state = 54, .external_lex_state = 6},
  [218] = {.lex_state = 60, .external_lex_state = 2},
  [219] = {.lex_state = 60, .external_lex_state = 2},
  [220] = {.lex_state = 60, .external_lex_state = 2},
  [221] = {.lex_state = 60, .external_lex_state = 2},
  [222] = {.lex_state = 60, .external_lex_state = 2},
  [223] = {.lex_state = 60, .external_lex_state = 2},
  [224] = {.lex_state = 60, .external_lex_state = 2},
  [225] = {.lex_state = 60, .external_lex_state = 2},
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
  [242] = {.lex_state = 61},
  [243] = {.lex_state = 49, .external_lex_state = 3},
  [244] = {.lex_state = 49, .external_lex_state = 3},
  [245] = {.lex_state = 49, .external_lex_state = 3},
  [246] = {.lex_state = 49, .external_lex_state = 3},
  [247] = {.lex_state = 49, .external_lex_state = 3},
  [248] = {.lex_state = 49, .external_lex_state = 3},
  [249] = {.lex_state = 49, .external_lex_state = 3},
  [250] = {.lex_state = 49, .external_lex_state = 3},
  [251] = {.lex_state = 49, .external_lex_state = 3},
  [252] = {.lex_state = 49, .external_lex_state = 3},
  [253] = {.lex_state = 49, .external_lex_state = 3},
  [254] = {.lex_state = 49, .external_lex_state = 3},
  [255] = {.lex_state = 49, .external_lex_state = 3},
  [256] = {.lex_state = 64, .external_lex_state = 2},
  [257] = {.lex_state = 49, .external_lex_state = 6},
  [258] = {.lex_state = 64, .external_lex_state = 2},
  [259] = {.lex_state = 49, .external_lex_state = 6},
  [260] = {.lex_state = 64, .external_lex_state = 2},
  [261] = {.lex_state = 49, .external_lex_state = 6},
  [262] = {.lex_state = 64, .external_lex_state = 2},
  [263] = {.lex_state = 49},
  [264] = {.lex_state = 49, .external_lex_state = 6},
  [265] = {.lex_state = 64, .external_lex_state = 2},
  [266] = {.lex_state = 49, .external_lex_state = 6},
  [267] = {.lex_state = 64, .external_lex_state = 2},
  [268] = {.lex_state = 49, .external_lex_state = 6},
  [269] = {.lex_state = 49},
  [270] = {.lex_state = 49, .external_lex_state = 6},
  [271] = {.lex_state = 49, .external_lex_state = 6},
  [272] = {.lex_state = 49},
  [273] = {.lex_state = 49, .external_lex_state = 6},
  [274] = {.lex_state = 49, .external_lex_state = 6},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 49, .external_lex_state = 6},
  [277] = {.lex_state = 49, .external_lex_state = 6},
  [278] = {.lex_state = 49, .external_lex_state = 6},
  [279] = {.lex_state = 49, .external_lex_state = 6},
  [280] = {.lex_state = 49},
  [281] = {.lex_state = 49},
  [282] = {.lex_state = 64, .external_lex_state = 1},
  [283] = {.lex_state = 49, .external_lex_state = 6},
  [284] = {.lex_state = 64, .external_lex_state = 2},
  [285] = {.lex_state = 64, .external_lex_state = 1},
  [286] = {.lex_state = 49},
  [287] = {.lex_state = 49, .external_lex_state = 6},
  [288] = {.lex_state = 49, .external_lex_state = 6},
  [289] = {.lex_state = 49, .external_lex_state = 6},
  [290] = {.lex_state = 49, .external_lex_state = 6},
  [291] = {.lex_state = 49, .external_lex_state = 6},
  [292] = {.lex_state = 64, .external_lex_state = 1},
  [293] = {.lex_state = 49, .external_lex_state = 6},
  [294] = {.lex_state = 64, .external_lex_state = 1},
  [295] = {.lex_state = 49, .external_lex_state = 6},
  [296] = {.lex_state = 49, .external_lex_state = 6},
  [297] = {.lex_state = 64, .external_lex_state = 1},
  [298] = {.lex_state = 49},
  [299] = {.lex_state = 64, .external_lex_state = 1},
  [300] = {.lex_state = 64, .external_lex_state = 2},
  [301] = {.lex_state = 49, .external_lex_state = 6},
  [302] = {.lex_state = 49, .external_lex_state = 6},
  [303] = {.lex_state = 49},
  [304] = {.lex_state = 49},
  [305] = {.lex_state = 49, .external_lex_state = 6},
  [306] = {.lex_state = 49, .external_lex_state = 6},
  [307] = {.lex_state = 49, .external_lex_state = 6},
  [308] = {.lex_state = 49},
  [309] = {.lex_state = 49},
  [310] = {.lex_state = 55},
  [311] = {.lex_state = 49},
  [312] = {.lex_state = 49},
  [313] = {.lex_state = 49},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 49},
  [316] = {.lex_state = 49},
  [317] = {.lex_state = 64, .external_lex_state = 6},
  [318] = {.lex_state = 49, .external_lex_state = 6},
  [319] = {.lex_state = 64, .external_lex_state = 6},
  [320] = {.lex_state = 64, .external_lex_state = 6},
  [321] = {.lex_state = 49},
  [322] = {.lex_state = 49},
  [323] = {.lex_state = 49},
  [324] = {.lex_state = 55, .external_lex_state = 6},
  [325] = {.lex_state = 55, .external_lex_state = 6},
  [326] = {.lex_state = 49},
  [327] = {.lex_state = 49},
  [328] = {.lex_state = 64, .external_lex_state = 6},
  [329] = {.lex_state = 64, .external_lex_state = 6},
  [330] = {.lex_state = 49},
  [331] = {.lex_state = 55, .external_lex_state = 6},
  [332] = {.lex_state = 49},
  [333] = {.lex_state = 49},
  [334] = {.lex_state = 49},
  [335] = {.lex_state = 64, .external_lex_state = 6},
  [336] = {.lex_state = 49},
  [337] = {.lex_state = 49},
  [338] = {.lex_state = 64, .external_lex_state = 1},
  [339] = {.lex_state = 49},
  [340] = {.lex_state = 64, .external_lex_state = 6},
  [341] = {.lex_state = 64, .external_lex_state = 2},
  [342] = {.lex_state = 64, .external_lex_state = 2},
  [343] = {.lex_state = 49, .external_lex_state = 6},
  [344] = {.lex_state = 49, .external_lex_state = 6},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 65},
  [347] = {.lex_state = 49, .external_lex_state = 6},
  [348] = {.lex_state = 55},
  [349] = {.lex_state = 64, .external_lex_state = 2},
  [350] = {.lex_state = 64, .external_lex_state = 2},
  [351] = {.lex_state = 64, .external_lex_state = 2},
  [352] = {.lex_state = 64, .external_lex_state = 2},
  [353] = {.lex_state = 64, .external_lex_state = 2},
  [354] = {.lex_state = 64, .external_lex_state = 2},
  [355] = {.lex_state = 64, .external_lex_state = 2},
  [356] = {.lex_state = 64, .external_lex_state = 2},
  [357] = {.lex_state = 64, .external_lex_state = 2},
  [358] = {.lex_state = 64, .external_lex_state = 2},
  [359] = {.lex_state = 64, .external_lex_state = 2},
  [360] = {.lex_state = 64, .external_lex_state = 2},
  [361] = {.lex_state = 64, .external_lex_state = 2},
  [362] = {.lex_state = 64, .external_lex_state = 2},
  [363] = {.lex_state = 64},
  [364] = {.lex_state = 64},
  [365] = {.lex_state = 64},
  [366] = {.lex_state = 49, .external_lex_state = 6},
  [367] = {.lex_state = 54},
  [368] = {.lex_state = 54},
  [369] = {.lex_state = 64},
  [370] = {.lex_state = 64},
  [371] = {.lex_state = 49, .external_lex_state = 6},
  [372] = {.lex_state = 64},
  [373] = {.lex_state = 64},
  [374] = {.lex_state = 49, .external_lex_state = 6},
  [375] = {.lex_state = 64},
  [376] = {.lex_state = 64},
  [377] = {.lex_state = 50, .external_lex_state = 2},
  [378] = {.lex_state = 64},
  [379] = {.lex_state = 64},
  [380] = {.lex_state = 64},
  [381] = {.lex_state = 64},
  [382] = {.lex_state = 64},
  [383] = {.lex_state = 64},
  [384] = {.lex_state = 49, .external_lex_state = 3},
  [385] = {.lex_state = 64},
  [386] = {.lex_state = 64},
  [387] = {.lex_state = 50, .external_lex_state = 2},
  [388] = {.lex_state = 53, .external_lex_state = 6},
  [389] = {.lex_state = 53, .external_lex_state = 6},
  [390] = {.lex_state = 64},
  [391] = {.lex_state = 54},
  [392] = {.lex_state = 54},
  [393] = {.lex_state = 54},
  [394] = {.lex_state = 50, .external_lex_state = 6},
  [395] = {.lex_state = 53},
  [396] = {.lex_state = 54},
  [397] = {.lex_state = 54},
  [398] = {.lex_state = 53},
  [399] = {.lex_state = 54},
  [400] = {.lex_state = 54},
  [401] = {.lex_state = 53},
  [402] = {.lex_state = 54},
  [403] = {.lex_state = 54},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 54},
  [406] = {.lex_state = 54},
  [407] = {.lex_state = 53},
  [408] = {.lex_state = 53},
  [409] = {.lex_state = 53},
  [410] = {.lex_state = 53},
  [411] = {.lex_state = 54},
  [412] = {.lex_state = 53},
  [413] = {.lex_state = 50, .external_lex_state = 2},
  [414] = {.lex_state = 54},
  [415] = {.lex_state = 53},
  [416] = {.lex_state = 50, .external_lex_state = 2},
  [417] = {.lex_state = 54},
  [418] = {.lex_state = 53},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 53},
  [421] = {.lex_state = 53},
  [422] = {.lex_state = 54},
  [423] = {.lex_state = 54},
  [424] = {.lex_state = 53},
  [425] = {.lex_state = 53},
  [426] = {.lex_state = 650},
  [427] = {.lex_state = 0, .external_lex_state = 5},
  [428] = {.lex_state = 53},
  [429] = {.lex_state = 54},
  [430] = {.lex_state = 53},
  [431] = {.lex_state = 0, .external_lex_state = 5},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 66},
  [434] = {.lex_state = 53},
  [435] = {.lex_state = 0, .external_lex_state = 5},
  [436] = {.lex_state = 62},
  [437] = {.lex_state = 0, .external_lex_state = 5},
  [438] = {.lex_state = 650, .external_lex_state = 6},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 650},
  [441] = {.lex_state = 66},
  [442] = {.lex_state = 0, .external_lex_state = 5},
  [443] = {.lex_state = 53},
  [444] = {.lex_state = 62},
  [445] = {.lex_state = 0, .external_lex_state = 5},
  [446] = {.lex_state = 143},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 5},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 0, .external_lex_state = 5},
  [451] = {.lex_state = 0, .external_lex_state = 5},
  [452] = {.lex_state = 0, .external_lex_state = 5},
  [453] = {.lex_state = 0, .external_lex_state = 6},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 154},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 0, .external_lex_state = 6},
  [461] = {.lex_state = 675},
  [462] = {.lex_state = 0, .external_lex_state = 6},
  [463] = {.lex_state = 0, .external_lex_state = 6},
  [464] = {.lex_state = 0, .external_lex_state = 6},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 0, .external_lex_state = 6},
  [467] = {.lex_state = 0, .external_lex_state = 5},
  [468] = {.lex_state = 0, .external_lex_state = 6},
  [469] = {.lex_state = 0, .external_lex_state = 6},
  [470] = {.lex_state = 51},
  [471] = {.lex_state = 0, .external_lex_state = 6},
  [472] = {.lex_state = 0, .external_lex_state = 6},
  [473] = {.lex_state = 0, .external_lex_state = 6},
  [474] = {.lex_state = 52},
  [475] = {.lex_state = 52},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 675},
  [478] = {.lex_state = 0, .external_lex_state = 5},
  [479] = {.lex_state = 0, .external_lex_state = 6},
  [480] = {.lex_state = 0, .external_lex_state = 6},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 53},
  [483] = {.lex_state = 0, .external_lex_state = 6},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0, .external_lex_state = 5},
  [487] = {.lex_state = 0, .external_lex_state = 5},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0, .external_lex_state = 5},
  [490] = {.lex_state = 0, .external_lex_state = 5},
  [491] = {.lex_state = 0, .external_lex_state = 6},
  [492] = {.lex_state = 0, .external_lex_state = 5},
  [493] = {.lex_state = 0, .external_lex_state = 5},
  [494] = {.lex_state = 0, .external_lex_state = 5},
  [495] = {.lex_state = 0, .external_lex_state = 5},
  [496] = {.lex_state = 0, .external_lex_state = 5},
  [497] = {.lex_state = 0, .external_lex_state = 5},
  [498] = {.lex_state = 0, .external_lex_state = 6},
  [499] = {.lex_state = 0, .external_lex_state = 6},
  [500] = {.lex_state = 0, .external_lex_state = 6},
  [501] = {.lex_state = 0, .external_lex_state = 6},
  [502] = {.lex_state = 0, .external_lex_state = 6},
  [503] = {.lex_state = 0, .external_lex_state = 6},
  [504] = {.lex_state = 0, .external_lex_state = 6},
  [505] = {.lex_state = 0, .external_lex_state = 6},
  [506] = {.lex_state = 0, .external_lex_state = 6},
  [507] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(476),
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
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(25),
    [sym_tag_name] = ACTIONS(27),
    [sym_class] = ACTIONS(29),
    [sym_id] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(68), 1,
      sym_tag_name,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(71), 2,
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
  [61] = 16,
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
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(29), 2,
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
  [122] = 11,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(97), 1,
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
    STATE(6), 5,
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
  [171] = 11,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(99), 1,
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
    STATE(6), 5,
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
  [220] = 10,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(111), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(117), 1,
      sym_tag_name,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(108), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(120), 2,
      sym_class,
      sym_id,
    ACTIONS(103), 5,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(101), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [267] = 11,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(138), 1,
      sym__newline,
    ACTIONS(140), 1,
      sym__dedent,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    ACTIONS(81), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(9), 5,
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
  [314] = 11,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(138), 1,
      sym__newline,
    ACTIONS(142), 1,
      sym__dedent,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    ACTIONS(81), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(9), 5,
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
  [361] = 10,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    ACTIONS(150), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(156), 1,
      sym_tag_name,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(159), 2,
      sym_class,
      sym_id,
    ACTIONS(103), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(101), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [406] = 4,
    ACTIONS(169), 1,
      sym__indent,
    STATE(56), 1,
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
  [438] = 7,
    ACTIONS(175), 1,
      sym_tag_name,
    ACTIONS(179), 1,
      anon_sym_DASH,
    STATE(66), 1,
      sym_unbuffered_code,
    ACTIONS(177), 2,
      sym_class,
      sym_id,
    STATE(30), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(171), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(173), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [476] = 4,
    ACTIONS(185), 1,
      sym__indent,
    STATE(42), 1,
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
  [508] = 4,
    ACTIONS(169), 1,
      sym__indent,
    STATE(60), 1,
      sym_children,
    ACTIONS(189), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 12,
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
  [540] = 6,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym__dedent,
    STATE(69), 1,
      sym__when_content,
    ACTIONS(193), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(191), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [576] = 4,
    ACTIONS(169), 1,
      sym__indent,
    STATE(58), 1,
      sym_children,
    ACTIONS(203), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 12,
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
  [608] = 7,
    ACTIONS(175), 1,
      sym_tag_name,
    ACTIONS(179), 1,
      anon_sym_DASH,
    STATE(72), 1,
      sym_unbuffered_code,
    ACTIONS(177), 2,
      sym_class,
      sym_id,
    STATE(33), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(205), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(207), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [646] = 4,
    ACTIONS(213), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(211), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 12,
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
  [678] = 4,
    ACTIONS(215), 1,
      sym__indent,
    STATE(56), 1,
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
  [710] = 4,
    ACTIONS(221), 1,
      sym__un_delimited_javascript_line,
    STATE(19), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(217), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(219), 18,
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
  [741] = 4,
    ACTIONS(224), 1,
      sym__indent,
    STATE(80), 1,
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
  [772] = 4,
    ACTIONS(226), 1,
      sym__indent,
    STATE(80), 1,
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
  [803] = 3,
    ACTIONS(232), 1,
      sym__indent,
    ACTIONS(230), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(228), 12,
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
  [832] = 4,
    ACTIONS(234), 1,
      sym__indent,
    STATE(83), 1,
      sym_children,
    ACTIONS(211), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 11,
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
  [863] = 4,
    ACTIONS(240), 1,
      sym__un_delimited_javascript_line,
    STATE(19), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(236), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(238), 18,
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
  [894] = 6,
    ACTIONS(246), 1,
      anon_sym_when,
    ACTIONS(249), 1,
      anon_sym_default,
    STATE(14), 1,
      sym__when_keyword,
    STATE(25), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(244), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(242), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [929] = 4,
    ACTIONS(252), 1,
      sym__indent,
    STATE(89), 1,
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
  [960] = 4,
    ACTIONS(224), 1,
      sym__indent,
    STATE(63), 1,
      sym_children,
    ACTIONS(203), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 11,
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
  [991] = 6,
    ACTIONS(258), 1,
      anon_sym_when,
    ACTIONS(260), 1,
      anon_sym_default,
    STATE(14), 1,
      sym__when_keyword,
    STATE(25), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(256), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(254), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1026] = 5,
    ACTIONS(266), 1,
      sym_tag_name,
    ACTIONS(269), 2,
      sym_class,
      sym_id,
    STATE(29), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(264), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(262), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [1059] = 5,
    ACTIONS(175), 1,
      sym_tag_name,
    ACTIONS(177), 2,
      sym_class,
      sym_id,
    STATE(29), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(207), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [1092] = 4,
    ACTIONS(224), 1,
      sym__indent,
    STATE(73), 1,
      sym_children,
    ACTIONS(189), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 11,
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
  [1123] = 2,
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
    ACTIONS(272), 13,
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
  [1150] = 5,
    ACTIONS(175), 1,
      sym_tag_name,
    ACTIONS(177), 2,
      sym_class,
      sym_id,
    STATE(29), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(278), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(276), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [1183] = 2,
    ACTIONS(203), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 12,
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
  [1235] = 4,
    ACTIONS(284), 1,
      sym__indent,
    STATE(115), 1,
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
  [1265] = 3,
    ACTIONS(286), 1,
      sym__indent,
    ACTIONS(230), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(228), 11,
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
  [1293] = 4,
    ACTIONS(292), 1,
      sym__indent,
    ACTIONS(294), 1,
      sym__dedent,
    ACTIONS(290), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1323] = 2,
    ACTIONS(298), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(296), 12,
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
  [1349] = 2,
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
  [1375] = 2,
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
  [1401] = 2,
    ACTIONS(211), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 12,
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
  [1427] = 4,
    ACTIONS(304), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
    ACTIONS(211), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 12,
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
  [1457] = 2,
    ACTIONS(211), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 12,
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
  [1483] = 4,
    ACTIONS(306), 1,
      sym__indent,
    STATE(100), 1,
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
  [1513] = 2,
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
  [1539] = 4,
    ACTIONS(308), 1,
      sym__indent,
    STATE(100), 1,
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
  [1569] = 2,
    ACTIONS(312), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(310), 12,
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
  [1595] = 2,
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
  [1621] = 4,
    ACTIONS(306), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 12,
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
  [1651] = 2,
    ACTIONS(314), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(316), 19,
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
  [1677] = 2,
    ACTIONS(320), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(318), 12,
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
  [1703] = 2,
    ACTIONS(324), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(322), 12,
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
  [1729] = 2,
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
  [1755] = 4,
    ACTIONS(306), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(189), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 12,
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
  [1785] = 2,
    ACTIONS(203), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 12,
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
  [1811] = 2,
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
    ACTIONS(330), 12,
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
  [1837] = 2,
    ACTIONS(189), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 12,
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
  [1863] = 2,
    ACTIONS(189), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 12,
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
    ACTIONS(336), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(334), 12,
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
  [1941] = 2,
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
  [1967] = 2,
    ACTIONS(189), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 11,
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
  [2017] = 2,
    ACTIONS(298), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(296), 11,
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
  [2042] = 2,
    ACTIONS(207), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [2067] = 4,
    ACTIONS(346), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(217), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(219), 16,
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
  [2096] = 2,
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
  [2121] = 3,
    ACTIONS(294), 1,
      sym__dedent,
    ACTIONS(290), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2148] = 2,
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
  [2173] = 4,
    ACTIONS(349), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(236), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(238), 16,
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
  [2202] = 2,
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
  [2227] = 2,
    ACTIONS(336), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(334), 11,
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
  [2252] = 2,
    ACTIONS(189), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 11,
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
  [2277] = 2,
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
    ACTIONS(330), 11,
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
  [2302] = 3,
    ACTIONS(351), 1,
      sym__indent,
    ACTIONS(230), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(228), 12,
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
  [2329] = 5,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      sym__comment_content,
    ACTIONS(359), 1,
      sym__dedent,
    STATE(78), 1,
      aux_sym_comment_repeat1,
    ACTIONS(355), 16,
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
  [2360] = 4,
    ACTIONS(365), 1,
      sym__comment_content,
    STATE(78), 1,
      aux_sym_comment_repeat1,
    ACTIONS(361), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(363), 16,
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
  [2389] = 2,
    ACTIONS(203), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 11,
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
  [2414] = 2,
    ACTIONS(203), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 11,
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
  [2439] = 2,
    ACTIONS(370), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(368), 11,
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
  [2464] = 2,
    ACTIONS(324), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(322), 11,
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
  [2489] = 2,
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
  [2514] = 2,
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
  [2539] = 3,
    ACTIONS(376), 1,
      sym__dedent,
    ACTIONS(374), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(372), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2566] = 3,
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
  [2593] = 5,
    ACTIONS(357), 1,
      sym__comment_content,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym__dedent,
    STATE(78), 1,
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
  [2624] = 2,
    ACTIONS(211), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 11,
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
  [2649] = 2,
    ACTIONS(211), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 11,
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
  [2726] = 2,
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
  [2751] = 2,
    ACTIONS(189), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 12,
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
  [2775] = 2,
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
  [2799] = 2,
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
  [2823] = 4,
    ACTIONS(400), 1,
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
  [2851] = 4,
    ACTIONS(402), 1,
      sym__indent,
    ACTIONS(404), 1,
      sym__dedent,
    ACTIONS(230), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(228), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2879] = 12,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(414), 1,
      anon_sym_BANG_EQ,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(355), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2923] = 2,
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 12,
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
  [2947] = 2,
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 12,
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
  [2971] = 2,
    ACTIONS(324), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(322), 12,
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
  [2995] = 12,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(426), 1,
      anon_sym_BANG_EQ,
    ACTIONS(428), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(206), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3039] = 12,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(167), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3083] = 2,
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
  [3107] = 12,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(414), 1,
      anon_sym_BANG_EQ,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(358), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3151] = 4,
    ACTIONS(438), 1,
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
  [3179] = 2,
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
  [3203] = 2,
    ACTIONS(312), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(310), 12,
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
  [3227] = 12,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(440), 1,
      anon_sym_BANG_EQ,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(93), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3271] = 2,
    ACTIONS(189), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 12,
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
  [3295] = 2,
    ACTIONS(450), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [3319] = 2,
    ACTIONS(211), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 12,
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
  [3343] = 12,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(150), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3387] = 2,
    ACTIONS(336), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(334), 12,
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
  [3411] = 2,
    ACTIONS(211), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 12,
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
  [3435] = 3,
    ACTIONS(452), 1,
      sym__indent,
    ACTIONS(230), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(228), 11,
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
  [3461] = 2,
    ACTIONS(320), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(318), 12,
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
  [3485] = 2,
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
  [3509] = 2,
    ACTIONS(361), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(363), 17,
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
  [3533] = 2,
    ACTIONS(332), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(330), 12,
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
  [3557] = 12,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(440), 1,
      anon_sym_BANG_EQ,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(99), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3601] = 2,
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
  [3625] = 12,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(46), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3669] = 2,
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
  [3693] = 2,
    ACTIONS(298), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(296), 12,
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
  [3717] = 2,
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
  [3741] = 12,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(440), 1,
      anon_sym_BANG_EQ,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(107), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3785] = 12,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(59), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3829] = 12,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(34), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3873] = 12,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
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
  [3917] = 4,
    ACTIONS(400), 1,
      sym__indent,
    STATE(149), 1,
      sym_children,
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3945] = 12,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(170), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3989] = 2,
    ACTIONS(314), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(316), 17,
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
  [4013] = 12,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(79), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4057] = 12,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(74), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4101] = 4,
    ACTIONS(470), 1,
      sym__indent,
    STATE(151), 1,
      sym_children,
    ACTIONS(211), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
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
    ACTIONS(472), 1,
      sym__indent,
    STATE(168), 1,
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
  [4157] = 2,
    ACTIONS(290), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4181] = 4,
    ACTIONS(400), 1,
      sym__indent,
    STATE(169), 1,
      sym_children,
    ACTIONS(189), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4209] = 12,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(426), 1,
      anon_sym_BANG_EQ,
    ACTIONS(428), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(221), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4253] = 12,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(426), 1,
      anon_sym_BANG_EQ,
    ACTIONS(428), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(229), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4297] = 12,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(414), 1,
      anon_sym_BANG_EQ,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(362), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4341] = 3,
    ACTIONS(474), 1,
      sym__dedent,
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
  [4366] = 3,
    ACTIONS(480), 1,
      sym__indent,
    ACTIONS(478), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(476), 10,
      ts_builtin_sym_end,
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
  [4416] = 3,
    ACTIONS(484), 1,
      sym__dedent,
    ACTIONS(374), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(372), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4441] = 3,
    ACTIONS(490), 1,
      sym__indent,
    ACTIONS(488), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(486), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4466] = 2,
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
  [4489] = 2,
    ACTIONS(189), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 10,
      ts_builtin_sym_end,
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
  [4555] = 2,
    ACTIONS(312), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(310), 10,
      ts_builtin_sym_end,
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
  [4599] = 2,
    ACTIONS(324), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(322), 10,
      ts_builtin_sym_end,
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
  [4643] = 2,
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
  [4665] = 2,
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
  [4687] = 2,
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
  [4709] = 2,
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
  [4731] = 2,
    ACTIONS(298), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(296), 10,
      ts_builtin_sym_end,
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
    ACTIONS(332), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
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
    ACTIONS(355), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(353), 10,
      ts_builtin_sym_end,
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
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
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
  [4863] = 2,
    ACTIONS(211), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
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
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
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
    ACTIONS(211), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
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
    ACTIONS(336), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(334), 10,
      ts_builtin_sym_end,
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
    ACTIONS(189), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(187), 10,
      ts_builtin_sym_end,
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
    ACTIONS(320), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(318), 10,
      ts_builtin_sym_end,
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
  [5017] = 2,
    ACTIONS(370), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(368), 10,
      ts_builtin_sym_end,
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
  [5083] = 9,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(512), 1,
      sym__newline,
    ACTIONS(514), 1,
      sym__dedent,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(178), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5117] = 9,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(512), 1,
      sym__newline,
    ACTIONS(516), 1,
      sym__dedent,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(178), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5151] = 9,
    ACTIONS(101), 1,
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
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(177), 5,
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
    STATE(217), 1,
      aux_sym_tag_repeat1,
    STATE(236), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(342), 3,
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
    ACTIONS(565), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym_tag_repeat1,
    STATE(239), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(112), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5290] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_COLON,
    ACTIONS(569), 1,
      anon_sym_BANG_EQ,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(573), 1,
      anon_sym_,
    ACTIONS(575), 1,
      anon_sym_DOT,
    ACTIONS(577), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym_tag_repeat1,
    STATE(234), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(44), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5327] = 8,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(446), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5358] = 8,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(420), 1,
      sym_tag_name,
    ACTIONS(432), 1,
      sym__newline,
    ACTIONS(408), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(422), 2,
      sym_class,
      sym_id,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5389] = 8,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(460), 1,
      sym__newline,
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
  [5420] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(581), 1,
      anon_sym_BANG_EQ,
    ACTIONS(583), 1,
      anon_sym_EQ,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(591), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym_tag_repeat1,
    STATE(233), 1,
      sym_attributes,
    ACTIONS(589), 2,
      sym_class,
      sym_id,
    STATE(92), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5457] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_COLON,
    ACTIONS(595), 1,
      anon_sym_BANG_EQ,
    ACTIONS(597), 1,
      anon_sym_EQ,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(603), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym_tag_repeat1,
    STATE(237), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(216), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5494] = 8,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(468), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5525] = 11,
    ACTIONS(541), 1,
      anon_sym_BANG_EQ,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(607), 1,
      anon_sym_,
    ACTIONS(611), 1,
      sym__newline,
    STATE(180), 1,
      aux_sym_tag_repeat1,
    STATE(231), 1,
      sym_attributes,
    ACTIONS(609), 2,
      sym_class,
      sym_id,
    STATE(357), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5562] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_BANG_EQ,
    ACTIONS(583), 1,
      anon_sym_EQ,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(615), 1,
      anon_sym_,
    ACTIONS(617), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym_tag_repeat1,
    STATE(230), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(88), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5599] = 8,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5630] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(619), 1,
      anon_sym_COLON,
    ACTIONS(621), 1,
      anon_sym_BANG_EQ,
    ACTIONS(623), 1,
      anon_sym_EQ,
    ACTIONS(625), 1,
      anon_sym_,
    ACTIONS(627), 1,
      anon_sym_DOT,
    ACTIONS(629), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym_tag_repeat1,
    STATE(238), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(166), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5667] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_BANG_EQ,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_DOT,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(633), 1,
      anon_sym_,
    ACTIONS(637), 1,
      sym__newline,
    STATE(182), 1,
      aux_sym_tag_repeat1,
    STATE(232), 1,
      sym_attributes,
    ACTIONS(635), 2,
      sym_class,
      sym_id,
    STATE(41), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5704] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_BANG_EQ,
    ACTIONS(597), 1,
      anon_sym_EQ,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(639), 1,
      anon_sym_COLON,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(645), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    STATE(240), 1,
      sym_attributes,
    ACTIONS(643), 2,
      sym_class,
      sym_id,
    STATE(212), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5741] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_BANG_EQ,
    ACTIONS(623), 1,
      anon_sym_EQ,
    ACTIONS(627), 1,
      anon_sym_DOT,
    ACTIONS(647), 1,
      anon_sym_COLON,
    ACTIONS(649), 1,
      anon_sym_,
    ACTIONS(653), 1,
      sym__newline,
    STATE(192), 1,
      aux_sym_tag_repeat1,
    STATE(235), 1,
      sym_attributes,
    ACTIONS(651), 2,
      sym_class,
      sym_id,
    STATE(172), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5778] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      anon_sym_BANG_EQ,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(655), 1,
      anon_sym_COLON,
    ACTIONS(657), 1,
      anon_sym_,
    ACTIONS(661), 1,
      sym__newline,
    STATE(181), 1,
      aux_sym_tag_repeat1,
    STATE(241), 1,
      sym_attributes,
    ACTIONS(659), 2,
      sym_class,
      sym_id,
    STATE(94), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5815] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(223), 1,
      sym_children,
    ACTIONS(203), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(201), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5836] = 6,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(667), 1,
      anon_sym_,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(310), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(671), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(397), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [5861] = 4,
    ACTIONS(673), 1,
      sym__indent,
    STATE(215), 1,
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
  [5882] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(219), 1,
      sym_children,
    ACTIONS(189), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(187), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5903] = 6,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(669), 1,
      anon_sym_DOT,
    ACTIONS(675), 1,
      anon_sym_,
    STATE(198), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(422), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [5928] = 4,
    ACTIONS(679), 1,
      sym__indent,
    STATE(228), 1,
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
  [5949] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(228), 1,
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
  [5970] = 4,
    ACTIONS(681), 1,
      sym__indent,
    STATE(222), 1,
      sym_children,
    ACTIONS(211), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(209), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5991] = 3,
    ACTIONS(683), 1,
      sym__indent,
    ACTIONS(230), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(228), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6009] = 2,
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
  [6024] = 2,
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
  [6039] = 7,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    ACTIONS(689), 1,
      sym_attribute_name,
    STATE(211), 1,
      aux_sym_attributes_repeat1,
    STATE(368), 1,
      sym_angular_attribute_name,
    STATE(396), 1,
      sym_attribute,
    STATE(399), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(687), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6064] = 2,
    ACTIONS(298), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(296), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6079] = 2,
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
  [6094] = 7,
    ACTIONS(689), 1,
      sym_attribute_name,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_attributes_repeat1,
    STATE(368), 1,
      sym_angular_attribute_name,
    STATE(417), 1,
      sym_attribute,
    STATE(399), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(687), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6119] = 2,
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
  [6134] = 2,
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
  [6149] = 7,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(698), 1,
      sym_attribute_name,
    STATE(214), 1,
      aux_sym_attributes_repeat1,
    STATE(368), 1,
      sym_angular_attribute_name,
    STATE(429), 1,
      sym_attribute,
    STATE(399), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(695), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6174] = 2,
    ACTIONS(211), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(209), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6189] = 2,
    ACTIONS(211), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(209), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6204] = 4,
    STATE(217), 1,
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
  [6223] = 2,
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
  [6238] = 2,
    ACTIONS(336), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(334), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6253] = 2,
    ACTIONS(312), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(310), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6268] = 2,
    ACTIONS(189), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(187), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6283] = 2,
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
  [6298] = 2,
    ACTIONS(189), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(187), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6313] = 2,
    ACTIONS(324), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(322), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6328] = 2,
    ACTIONS(320), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(318), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6343] = 2,
    ACTIONS(332), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(330), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6358] = 2,
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
  [6373] = 2,
    ACTIONS(203), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(201), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6388] = 2,
    ACTIONS(203), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(201), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6403] = 7,
    ACTIONS(581), 1,
      anon_sym_BANG_EQ,
    ACTIONS(583), 1,
      anon_sym_EQ,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(710), 1,
      anon_sym_,
    ACTIONS(712), 1,
      sym__newline,
    STATE(64), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6427] = 7,
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
    STATE(342), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6451] = 7,
    ACTIONS(567), 1,
      anon_sym_COLON,
    ACTIONS(569), 1,
      anon_sym_BANG_EQ,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(573), 1,
      anon_sym_,
    ACTIONS(575), 1,
      anon_sym_DOT,
    ACTIONS(577), 1,
      sym__newline,
    STATE(44), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6475] = 7,
    ACTIONS(581), 1,
      anon_sym_BANG_EQ,
    ACTIONS(583), 1,
      anon_sym_EQ,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(615), 1,
      anon_sym_,
    ACTIONS(617), 1,
      sym__newline,
    STATE(88), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6499] = 7,
    ACTIONS(569), 1,
      anon_sym_BANG_EQ,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(716), 1,
      anon_sym_,
    ACTIONS(718), 1,
      sym__newline,
    STATE(46), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6523] = 7,
    ACTIONS(619), 1,
      anon_sym_COLON,
    ACTIONS(621), 1,
      anon_sym_BANG_EQ,
    ACTIONS(623), 1,
      anon_sym_EQ,
    ACTIONS(625), 1,
      anon_sym_,
    ACTIONS(627), 1,
      anon_sym_DOT,
    ACTIONS(629), 1,
      sym__newline,
    STATE(166), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6547] = 7,
    ACTIONS(541), 1,
      anon_sym_BANG_EQ,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(720), 1,
      anon_sym_COLON,
    ACTIONS(722), 1,
      anon_sym_,
    ACTIONS(724), 1,
      sym__newline,
    STATE(362), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6571] = 7,
    ACTIONS(595), 1,
      anon_sym_BANG_EQ,
    ACTIONS(597), 1,
      anon_sym_EQ,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      sym__newline,
    STATE(206), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6595] = 7,
    ACTIONS(621), 1,
      anon_sym_BANG_EQ,
    ACTIONS(623), 1,
      anon_sym_EQ,
    ACTIONS(627), 1,
      anon_sym_DOT,
    ACTIONS(732), 1,
      anon_sym_COLON,
    ACTIONS(734), 1,
      anon_sym_,
    ACTIONS(736), 1,
      sym__newline,
    STATE(150), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6619] = 7,
    ACTIONS(557), 1,
      anon_sym_BANG_EQ,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 1,
      sym__newline,
    STATE(107), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6643] = 7,
    ACTIONS(593), 1,
      anon_sym_COLON,
    ACTIONS(595), 1,
      anon_sym_BANG_EQ,
    ACTIONS(597), 1,
      anon_sym_EQ,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(603), 1,
      sym__newline,
    STATE(216), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6667] = 7,
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
    ACTIONS(565), 1,
      sym__newline,
    STATE(112), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6691] = 8,
    ACTIONS(744), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(746), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(748), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(750), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(752), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(754), 1,
      anon_sym_SQUOTE,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    STATE(400), 1,
      sym_quoted_attribute_value,
  [6716] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(764), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6739] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(766), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6762] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(768), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6785] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6808] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(772), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6831] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(774), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6854] = 7,
    ACTIONS(776), 1,
      aux_sym_content_token1,
    ACTIONS(779), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(785), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6877] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(787), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6900] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(789), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6923] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(791), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6946] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6969] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(795), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6992] = 7,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      sym__dedent,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7015] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(803), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7031] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7051] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(807), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7067] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(305), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7087] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(811), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7103] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(813), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7123] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(815), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7139] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(254), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7159] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(817), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7179] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(819), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7195] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(821), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7215] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(823), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7231] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(825), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(290), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7251] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7271] = 6,
    ACTIONS(827), 1,
      aux_sym_content_token1,
    ACTIONS(830), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(833), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(836), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7291] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7311] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7331] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(840), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7351] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(842), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(273), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7371] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7391] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(844), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7411] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(846), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7431] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(848), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7451] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(850), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7471] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7491] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7511] = 3,
    ACTIONS(852), 1,
      sym__indent,
    STATE(356), 1,
      sym_children,
    ACTIONS(201), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7525] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7545] = 4,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(856), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7561] = 3,
    ACTIONS(858), 1,
      sym__indent,
    STATE(359), 1,
      sym_children,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7575] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(250), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7595] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(860), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7615] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(862), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7635] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7655] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7675] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(868), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7695] = 3,
    ACTIONS(852), 1,
      sym__indent,
    STATE(359), 1,
      sym_children,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7709] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7729] = 3,
    ACTIONS(872), 1,
      sym__indent,
    STATE(361), 1,
      sym_children,
    ACTIONS(209), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7743] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(874), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7763] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(876), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(257), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7783] = 3,
    ACTIONS(878), 1,
      sym__indent,
    STATE(350), 1,
      sym_children,
    ACTIONS(181), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7797] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(244), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7817] = 3,
    ACTIONS(852), 1,
      sym__indent,
    STATE(341), 1,
      sym_children,
    ACTIONS(187), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7831] = 4,
    ACTIONS(883), 1,
      sym__newline,
    ACTIONS(886), 1,
      sym__dedent,
    STATE(300), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(880), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7847] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(888), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7867] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(890), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7887] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7907] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(255), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7927] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(892), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7947] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(894), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7967] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(896), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(270), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7987] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8007] = 6,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(306), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8027] = 4,
    ACTIONS(900), 1,
      anon_sym_,
    ACTIONS(902), 1,
      anon_sym_DOT,
    STATE(310), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(898), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8042] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(271), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8059] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(276), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8076] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8093] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(288), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8110] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(289), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8127] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(307), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8144] = 3,
    ACTIONS(905), 1,
      sym__newline,
    STATE(267), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8157] = 4,
    ACTIONS(909), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(913), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8172] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(260), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8185] = 3,
    ACTIONS(917), 1,
      sym__newline,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8198] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(261), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8215] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(283), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8232] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(295), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8249] = 2,
    ACTIONS(921), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(919), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [8260] = 2,
    ACTIONS(925), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(923), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [8271] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(301), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8288] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(287), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8305] = 3,
    ACTIONS(927), 1,
      sym__newline,
    STATE(284), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8318] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(256), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8331] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(302), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8348] = 2,
    ACTIONS(933), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(931), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [8359] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(293), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8376] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(277), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8393] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(278), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8410] = 3,
    ACTIONS(935), 1,
      sym__newline,
    STATE(258), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8423] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(279), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8440] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(291), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8457] = 2,
    ACTIONS(937), 1,
      sym__indent,
    ACTIONS(228), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8468] = 5,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(760), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym_content_repeat1,
    STATE(266), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8485] = 3,
    ACTIONS(939), 1,
      sym__newline,
    STATE(262), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8498] = 1,
    ACTIONS(334), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8506] = 1,
    ACTIONS(209), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8514] = 3,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    ACTIONS(941), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(945), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8526] = 4,
    ACTIONS(941), 1,
      sym__newline,
    ACTIONS(947), 1,
      aux_sym_content_token1,
    STATE(344), 1,
      aux_sym_content_repeat1,
    ACTIONS(945), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8540] = 4,
    ACTIONS(950), 1,
      anon_sym_when,
    ACTIONS(952), 1,
      anon_sym_default,
    STATE(14), 1,
      sym__when_keyword,
    STATE(28), 2,
      sym_when,
      aux_sym_case_repeat1,
  [8554] = 1,
    ACTIONS(693), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [8562] = 4,
    ACTIONS(758), 1,
      aux_sym_content_token1,
    ACTIONS(956), 1,
      sym__newline,
    STATE(344), 1,
      aux_sym_content_repeat1,
    ACTIONS(954), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8576] = 2,
    ACTIONS(900), 1,
      anon_sym_,
    ACTIONS(898), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8586] = 1,
    ACTIONS(280), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8594] = 1,
    ACTIONS(209), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8602] = 1,
    ACTIONS(300), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8610] = 1,
    ACTIONS(296), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8618] = 1,
    ACTIONS(330), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8626] = 1,
    ACTIONS(342), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8634] = 1,
    ACTIONS(187), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8642] = 1,
    ACTIONS(187), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8650] = 1,
    ACTIONS(181), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8658] = 1,
    ACTIONS(201), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8666] = 1,
    ACTIONS(201), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8674] = 1,
    ACTIONS(322), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8682] = 1,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8690] = 1,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8698] = 2,
    STATE(88), 1,
      sym_tag,
    ACTIONS(177), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8707] = 2,
    STATE(79), 1,
      sym_tag,
    ACTIONS(177), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8716] = 2,
    STATE(99), 1,
      sym_tag,
    ACTIONS(136), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8725] = 2,
    ACTIONS(941), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(945), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8734] = 2,
    ACTIONS(960), 1,
      anon_sym_,
    ACTIONS(958), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8743] = 3,
    ACTIONS(962), 1,
      anon_sym_EQ,
    ACTIONS(964), 1,
      anon_sym_,
    ACTIONS(966), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8754] = 2,
    STATE(150), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8763] = 2,
    STATE(34), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8772] = 2,
    ACTIONS(968), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(970), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8781] = 2,
    STATE(342), 1,
      sym_tag,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8790] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8799] = 2,
    ACTIONS(972), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(974), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8808] = 2,
    STATE(107), 1,
      sym_tag,
    ACTIONS(136), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8817] = 2,
    STATE(44), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8826] = 4,
    ACTIONS(976), 1,
      aux_sym_script_block_token1,
    ACTIONS(978), 1,
      sym__newline,
    ACTIONS(980), 1,
      sym__dedent,
    STATE(387), 1,
      aux_sym_script_block_repeat1,
  [8839] = 2,
    STATE(362), 1,
      sym_tag,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8848] = 2,
    STATE(229), 1,
      sym_tag,
    ACTIONS(422), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8857] = 2,
    STATE(112), 1,
      sym_tag,
    ACTIONS(136), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8866] = 2,
    STATE(358), 1,
      sym_tag,
    ACTIONS(799), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8875] = 2,
    STATE(206), 1,
      sym_tag,
    ACTIONS(422), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8884] = 2,
    STATE(167), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8893] = 2,
    ACTIONS(785), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(982), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8902] = 2,
    STATE(166), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8911] = 2,
    STATE(216), 1,
      sym_tag,
    ACTIONS(422), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8920] = 4,
    ACTIONS(984), 1,
      aux_sym_script_block_token1,
    ACTIONS(987), 1,
      sym__newline,
    ACTIONS(990), 1,
      sym__dedent,
    STATE(387), 1,
      aux_sym_script_block_repeat1,
  [8933] = 4,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(994), 1,
      sym__newline,
    STATE(85), 1,
      sym__single_line_buf_code,
    STATE(473), 1,
      sym__un_delimited_javascript,
  [8946] = 4,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(996), 1,
      sym__newline,
    STATE(146), 1,
      sym__single_line_buf_code,
    STATE(463), 1,
      sym__un_delimited_javascript,
  [8959] = 2,
    STATE(64), 1,
      sym_tag,
    ACTIONS(177), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8968] = 2,
    ACTIONS(998), 1,
      anon_sym_,
    ACTIONS(1000), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8976] = 2,
    ACTIONS(1002), 1,
      anon_sym_,
    ACTIONS(1004), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8984] = 2,
    ACTIONS(1006), 1,
      anon_sym_,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8992] = 3,
    ACTIONS(976), 1,
      aux_sym_script_block_token1,
    ACTIONS(978), 1,
      sym__newline,
    STATE(377), 1,
      aux_sym_script_block_repeat1,
  [9002] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(352), 1,
      sym__single_line_buf_code,
    STATE(480), 1,
      sym__un_delimited_javascript,
  [9012] = 3,
    ACTIONS(1010), 1,
      anon_sym_,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [9022] = 2,
    ACTIONS(1016), 1,
      anon_sym_,
    ACTIONS(1018), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9030] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(125), 1,
      sym__single_line_buf_code,
    STATE(491), 1,
      sym__un_delimited_javascript,
  [9040] = 2,
    ACTIONS(1020), 1,
      anon_sym_,
    ACTIONS(1022), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9048] = 2,
    ACTIONS(1024), 1,
      anon_sym_,
    ACTIONS(1026), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9056] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(351), 1,
      sym__single_line_buf_code,
    STATE(480), 1,
      sym__un_delimited_javascript,
  [9066] = 2,
    ACTIONS(1028), 1,
      anon_sym_,
    ACTIONS(1030), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9074] = 2,
    ACTIONS(1032), 1,
      anon_sym_,
    ACTIONS(1034), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9082] = 1,
    ACTIONS(1036), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [9088] = 2,
    ACTIONS(1038), 1,
      anon_sym_,
    ACTIONS(1040), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9096] = 2,
    ACTIONS(1042), 1,
      anon_sym_,
    ACTIONS(1044), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9104] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(124), 1,
      sym__single_line_buf_code,
    STATE(491), 1,
      sym__un_delimited_javascript,
  [9114] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(209), 1,
      sym__single_line_buf_code,
    STATE(459), 1,
      sym__un_delimited_javascript,
  [9124] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(210), 1,
      sym__single_line_buf_code,
    STATE(459), 1,
      sym__un_delimited_javascript,
  [9134] = 3,
    ACTIONS(1046), 1,
      sym__un_delimited_javascript_line,
    STATE(24), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(90), 1,
      sym__multi_line_buf_code,
  [9144] = 2,
    ACTIONS(1048), 1,
      anon_sym_,
    ACTIONS(1050), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9152] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(65), 1,
      sym__single_line_buf_code,
    STATE(473), 1,
      sym__un_delimited_javascript,
  [9162] = 1,
    ACTIONS(990), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [9168] = 2,
    ACTIONS(1052), 1,
      anon_sym_,
    ACTIONS(1054), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9176] = 3,
    ACTIONS(1056), 1,
      sym__un_delimited_javascript_line,
    STATE(71), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(145), 1,
      sym__multi_line_buf_code,
  [9186] = 1,
    ACTIONS(1058), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [9192] = 3,
    ACTIONS(1010), 1,
      anon_sym_,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
  [9202] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(84), 1,
      sym__single_line_buf_code,
    STATE(473), 1,
      sym__un_delimited_javascript,
  [9212] = 3,
    ACTIONS(1062), 1,
      anon_sym_SQUOTE,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    STATE(414), 1,
      sym_quoted_javascript,
  [9222] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(162), 1,
      sym__single_line_buf_code,
    STATE(468), 1,
      sym__un_delimited_javascript,
  [9232] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(160), 1,
      sym__single_line_buf_code,
    STATE(468), 1,
      sym__un_delimited_javascript,
  [9242] = 2,
    ACTIONS(667), 1,
      anon_sym_,
    ACTIONS(671), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9250] = 2,
    ACTIONS(1066), 1,
      anon_sym_,
    ACTIONS(1068), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9258] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(40), 1,
      sym__single_line_buf_code,
    STATE(454), 1,
      sym__un_delimited_javascript,
  [9268] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(39), 1,
      sym__single_line_buf_code,
    STATE(454), 1,
      sym__un_delimited_javascript,
  [9278] = 2,
    ACTIONS(1070), 1,
      sym__comment_content,
    STATE(77), 1,
      aux_sym_comment_repeat1,
  [9285] = 2,
    ACTIONS(306), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
  [9292] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(471), 1,
      sym__un_delimited_javascript,
  [9299] = 2,
    ACTIONS(1010), 1,
      anon_sym_,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
  [9306] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(447), 1,
      sym__un_delimited_javascript,
  [9313] = 2,
    ACTIONS(400), 1,
      sym__indent,
    STATE(171), 1,
      sym_children,
  [9320] = 2,
    ACTIONS(663), 1,
      sym__indent,
    STATE(220), 1,
      sym_children,
  [9327] = 2,
    ACTIONS(1072), 1,
      anon_sym_SQUOTE,
    ACTIONS(1074), 1,
      aux_sym_quoted_javascript_token1,
  [9334] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(457), 1,
      sym__un_delimited_javascript,
  [9341] = 2,
    ACTIONS(663), 1,
      sym__indent,
    STATE(225), 1,
      sym_children,
  [9348] = 2,
    ACTIONS(1072), 1,
      anon_sym_DQUOTE,
    ACTIONS(1076), 1,
      aux_sym_quoted_javascript_token2,
  [9355] = 2,
    ACTIONS(169), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
  [9362] = 2,
    ACTIONS(1078), 1,
      sym__comment_content,
    ACTIONS(1080), 1,
      sym__newline,
  [9369] = 2,
    ACTIONS(169), 1,
      sym__indent,
    STATE(52), 1,
      sym_children,
  [9376] = 2,
    ACTIONS(1070), 1,
      sym__comment_content,
    STATE(87), 1,
      aux_sym_comment_repeat1,
  [9383] = 2,
    ACTIONS(1082), 1,
      anon_sym_SQUOTE,
    ACTIONS(1084), 1,
      aux_sym_quoted_javascript_token1,
  [9390] = 2,
    ACTIONS(400), 1,
      sym__indent,
    STATE(152), 1,
      sym_children,
  [9397] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(465), 1,
      sym__un_delimited_javascript,
  [9404] = 2,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      aux_sym_quoted_javascript_token2,
  [9411] = 2,
    ACTIONS(306), 1,
      sym__indent,
    STATE(117), 1,
      sym_children,
  [9418] = 1,
    ACTIONS(1088), 1,
      aux_sym__attribute_token1,
  [9422] = 1,
    ACTIONS(1090), 1,
      sym__newline,
  [9426] = 1,
    ACTIONS(1092), 1,
      sym__indent,
  [9430] = 1,
    ACTIONS(1094), 1,
      sym__newline,
  [9434] = 1,
    ACTIONS(1096), 1,
      sym__indent,
  [9438] = 1,
    ACTIONS(1098), 1,
      sym__indent,
  [9442] = 1,
    ACTIONS(1100), 1,
      sym__indent,
  [9446] = 1,
    ACTIONS(1102), 1,
      sym__newline,
  [9450] = 1,
    ACTIONS(1104), 1,
      sym__newline,
  [9454] = 1,
    ACTIONS(1106), 1,
      anon_sym_RBRACE_RBRACE,
  [9458] = 1,
    ACTIONS(1108), 1,
      sym__newline,
  [9462] = 1,
    ACTIONS(1110), 1,
      sym__newline,
  [9466] = 1,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
  [9470] = 1,
    ACTIONS(1112), 1,
      sym__newline,
  [9474] = 1,
    ACTIONS(1114), 1,
      sym__newline,
  [9478] = 1,
    ACTIONS(1116), 1,
      aux_sym_unbuffered_code_token1,
  [9482] = 1,
    ACTIONS(1118), 1,
      sym__newline,
  [9486] = 1,
    ACTIONS(1120), 1,
      sym__newline,
  [9490] = 1,
    ACTIONS(1122), 1,
      sym__newline,
  [9494] = 1,
    ACTIONS(1124), 1,
      sym__newline,
  [9498] = 1,
    ACTIONS(1126), 1,
      sym__newline,
  [9502] = 1,
    ACTIONS(1128), 1,
      sym__indent,
  [9506] = 1,
    ACTIONS(1130), 1,
      sym__newline,
  [9510] = 1,
    ACTIONS(1132), 1,
      sym__newline,
  [9514] = 1,
    ACTIONS(1134), 1,
      aux_sym__when_keyword_token1,
  [9518] = 1,
    ACTIONS(1136), 1,
      sym__newline,
  [9522] = 1,
    ACTIONS(1138), 1,
      sym__newline,
  [9526] = 1,
    ACTIONS(1140), 1,
      sym__newline,
  [9530] = 1,
    ACTIONS(1142), 1,
      sym__delimited_javascript,
  [9534] = 1,
    ACTIONS(1144), 1,
      sym__delimited_javascript,
  [9538] = 1,
    ACTIONS(1146), 1,
      ts_builtin_sym_end,
  [9542] = 1,
    ACTIONS(1148), 1,
      aux_sym_unbuffered_code_token1,
  [9546] = 1,
    ACTIONS(1150), 1,
      sym__indent,
  [9550] = 1,
    ACTIONS(1152), 1,
      sym__newline,
  [9554] = 1,
    ACTIONS(1154), 1,
      sym__newline,
  [9558] = 1,
    ACTIONS(1156), 1,
      anon_sym_SQUOTE,
  [9562] = 1,
    ACTIONS(1158), 1,
      sym__un_delimited_javascript_line,
  [9566] = 1,
    ACTIONS(1160), 1,
      sym__newline,
  [9570] = 1,
    ACTIONS(1156), 1,
      anon_sym_DQUOTE,
  [9574] = 1,
    ACTIONS(1162), 1,
      anon_sym_SQUOTE,
  [9578] = 1,
    ACTIONS(1164), 1,
      sym__indent,
  [9582] = 1,
    ACTIONS(1166), 1,
      sym__indent,
  [9586] = 1,
    ACTIONS(1162), 1,
      anon_sym_DQUOTE,
  [9590] = 1,
    ACTIONS(1168), 1,
      sym__indent,
  [9594] = 1,
    ACTIONS(1170), 1,
      sym__indent,
  [9598] = 1,
    ACTIONS(1172), 1,
      sym__newline,
  [9602] = 1,
    ACTIONS(1174), 1,
      sym__indent,
  [9606] = 1,
    ACTIONS(1176), 1,
      sym__indent,
  [9610] = 1,
    ACTIONS(1178), 1,
      sym__indent,
  [9614] = 1,
    ACTIONS(1180), 1,
      sym__indent,
  [9618] = 1,
    ACTIONS(1182), 1,
      sym__indent,
  [9622] = 1,
    ACTIONS(1184), 1,
      sym__indent,
  [9626] = 1,
    ACTIONS(1186), 1,
      sym__newline,
  [9630] = 1,
    ACTIONS(1188), 1,
      sym__newline,
  [9634] = 1,
    ACTIONS(1190), 1,
      sym__newline,
  [9638] = 1,
    ACTIONS(1192), 1,
      sym__newline,
  [9642] = 1,
    ACTIONS(1194), 1,
      sym__newline,
  [9646] = 1,
    ACTIONS(1196), 1,
      sym__newline,
  [9650] = 1,
    ACTIONS(1198), 1,
      sym__newline,
  [9654] = 1,
    ACTIONS(1200), 1,
      sym__newline,
  [9658] = 1,
    ACTIONS(1202), 1,
      sym__newline,
  [9662] = 1,
    ACTIONS(1204), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 508,
  [SMALL_STATE(14)] = 540,
  [SMALL_STATE(15)] = 576,
  [SMALL_STATE(16)] = 608,
  [SMALL_STATE(17)] = 646,
  [SMALL_STATE(18)] = 678,
  [SMALL_STATE(19)] = 710,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 772,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 863,
  [SMALL_STATE(25)] = 894,
  [SMALL_STATE(26)] = 929,
  [SMALL_STATE(27)] = 960,
  [SMALL_STATE(28)] = 991,
  [SMALL_STATE(29)] = 1026,
  [SMALL_STATE(30)] = 1059,
  [SMALL_STATE(31)] = 1092,
  [SMALL_STATE(32)] = 1123,
  [SMALL_STATE(33)] = 1150,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1209,
  [SMALL_STATE(36)] = 1235,
  [SMALL_STATE(37)] = 1265,
  [SMALL_STATE(38)] = 1293,
  [SMALL_STATE(39)] = 1323,
  [SMALL_STATE(40)] = 1349,
  [SMALL_STATE(41)] = 1375,
  [SMALL_STATE(42)] = 1401,
  [SMALL_STATE(43)] = 1427,
  [SMALL_STATE(44)] = 1457,
  [SMALL_STATE(45)] = 1483,
  [SMALL_STATE(46)] = 1513,
  [SMALL_STATE(47)] = 1539,
  [SMALL_STATE(48)] = 1569,
  [SMALL_STATE(49)] = 1595,
  [SMALL_STATE(50)] = 1621,
  [SMALL_STATE(51)] = 1651,
  [SMALL_STATE(52)] = 1677,
  [SMALL_STATE(53)] = 1703,
  [SMALL_STATE(54)] = 1729,
  [SMALL_STATE(55)] = 1755,
  [SMALL_STATE(56)] = 1785,
  [SMALL_STATE(57)] = 1811,
  [SMALL_STATE(58)] = 1837,
  [SMALL_STATE(59)] = 1863,
  [SMALL_STATE(60)] = 1889,
  [SMALL_STATE(61)] = 1915,
  [SMALL_STATE(62)] = 1941,
  [SMALL_STATE(63)] = 1967,
  [SMALL_STATE(64)] = 1992,
  [SMALL_STATE(65)] = 2017,
  [SMALL_STATE(66)] = 2042,
  [SMALL_STATE(67)] = 2067,
  [SMALL_STATE(68)] = 2096,
  [SMALL_STATE(69)] = 2121,
  [SMALL_STATE(70)] = 2148,
  [SMALL_STATE(71)] = 2173,
  [SMALL_STATE(72)] = 2202,
  [SMALL_STATE(73)] = 2227,
  [SMALL_STATE(74)] = 2252,
  [SMALL_STATE(75)] = 2277,
  [SMALL_STATE(76)] = 2302,
  [SMALL_STATE(77)] = 2329,
  [SMALL_STATE(78)] = 2360,
  [SMALL_STATE(79)] = 2389,
  [SMALL_STATE(80)] = 2414,
  [SMALL_STATE(81)] = 2439,
  [SMALL_STATE(82)] = 2464,
  [SMALL_STATE(83)] = 2489,
  [SMALL_STATE(84)] = 2514,
  [SMALL_STATE(85)] = 2539,
  [SMALL_STATE(86)] = 2566,
  [SMALL_STATE(87)] = 2593,
  [SMALL_STATE(88)] = 2624,
  [SMALL_STATE(89)] = 2649,
  [SMALL_STATE(90)] = 2674,
  [SMALL_STATE(91)] = 2701,
  [SMALL_STATE(92)] = 2726,
  [SMALL_STATE(93)] = 2751,
  [SMALL_STATE(94)] = 2775,
  [SMALL_STATE(95)] = 2799,
  [SMALL_STATE(96)] = 2823,
  [SMALL_STATE(97)] = 2851,
  [SMALL_STATE(98)] = 2879,
  [SMALL_STATE(99)] = 2923,
  [SMALL_STATE(100)] = 2947,
  [SMALL_STATE(101)] = 2971,
  [SMALL_STATE(102)] = 2995,
  [SMALL_STATE(103)] = 3039,
  [SMALL_STATE(104)] = 3083,
  [SMALL_STATE(105)] = 3107,
  [SMALL_STATE(106)] = 3151,
  [SMALL_STATE(107)] = 3179,
  [SMALL_STATE(108)] = 3203,
  [SMALL_STATE(109)] = 3227,
  [SMALL_STATE(110)] = 3271,
  [SMALL_STATE(111)] = 3295,
  [SMALL_STATE(112)] = 3319,
  [SMALL_STATE(113)] = 3343,
  [SMALL_STATE(114)] = 3387,
  [SMALL_STATE(115)] = 3411,
  [SMALL_STATE(116)] = 3435,
  [SMALL_STATE(117)] = 3461,
  [SMALL_STATE(118)] = 3485,
  [SMALL_STATE(119)] = 3509,
  [SMALL_STATE(120)] = 3533,
  [SMALL_STATE(121)] = 3557,
  [SMALL_STATE(122)] = 3601,
  [SMALL_STATE(123)] = 3625,
  [SMALL_STATE(124)] = 3669,
  [SMALL_STATE(125)] = 3693,
  [SMALL_STATE(126)] = 3717,
  [SMALL_STATE(127)] = 3741,
  [SMALL_STATE(128)] = 3785,
  [SMALL_STATE(129)] = 3829,
  [SMALL_STATE(130)] = 3873,
  [SMALL_STATE(131)] = 3917,
  [SMALL_STATE(132)] = 3945,
  [SMALL_STATE(133)] = 3989,
  [SMALL_STATE(134)] = 4013,
  [SMALL_STATE(135)] = 4057,
  [SMALL_STATE(136)] = 4101,
  [SMALL_STATE(137)] = 4129,
  [SMALL_STATE(138)] = 4157,
  [SMALL_STATE(139)] = 4181,
  [SMALL_STATE(140)] = 4209,
  [SMALL_STATE(141)] = 4253,
  [SMALL_STATE(142)] = 4297,
  [SMALL_STATE(143)] = 4341,
  [SMALL_STATE(144)] = 4366,
  [SMALL_STATE(145)] = 4391,
  [SMALL_STATE(146)] = 4416,
  [SMALL_STATE(147)] = 4441,
  [SMALL_STATE(148)] = 4466,
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
  [SMALL_STATE(183)] = 5327,
  [SMALL_STATE(184)] = 5358,
  [SMALL_STATE(185)] = 5389,
  [SMALL_STATE(186)] = 5420,
  [SMALL_STATE(187)] = 5457,
  [SMALL_STATE(188)] = 5494,
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
  [SMALL_STATE(199)] = 5861,
  [SMALL_STATE(200)] = 5882,
  [SMALL_STATE(201)] = 5903,
  [SMALL_STATE(202)] = 5928,
  [SMALL_STATE(203)] = 5949,
  [SMALL_STATE(204)] = 5970,
  [SMALL_STATE(205)] = 5991,
  [SMALL_STATE(206)] = 6009,
  [SMALL_STATE(207)] = 6024,
  [SMALL_STATE(208)] = 6039,
  [SMALL_STATE(209)] = 6064,
  [SMALL_STATE(210)] = 6079,
  [SMALL_STATE(211)] = 6094,
  [SMALL_STATE(212)] = 6119,
  [SMALL_STATE(213)] = 6134,
  [SMALL_STATE(214)] = 6149,
  [SMALL_STATE(215)] = 6174,
  [SMALL_STATE(216)] = 6189,
  [SMALL_STATE(217)] = 6204,
  [SMALL_STATE(218)] = 6223,
  [SMALL_STATE(219)] = 6238,
  [SMALL_STATE(220)] = 6253,
  [SMALL_STATE(221)] = 6268,
  [SMALL_STATE(222)] = 6283,
  [SMALL_STATE(223)] = 6298,
  [SMALL_STATE(224)] = 6313,
  [SMALL_STATE(225)] = 6328,
  [SMALL_STATE(226)] = 6343,
  [SMALL_STATE(227)] = 6358,
  [SMALL_STATE(228)] = 6373,
  [SMALL_STATE(229)] = 6388,
  [SMALL_STATE(230)] = 6403,
  [SMALL_STATE(231)] = 6427,
  [SMALL_STATE(232)] = 6451,
  [SMALL_STATE(233)] = 6475,
  [SMALL_STATE(234)] = 6499,
  [SMALL_STATE(235)] = 6523,
  [SMALL_STATE(236)] = 6547,
  [SMALL_STATE(237)] = 6571,
  [SMALL_STATE(238)] = 6595,
  [SMALL_STATE(239)] = 6619,
  [SMALL_STATE(240)] = 6643,
  [SMALL_STATE(241)] = 6667,
  [SMALL_STATE(242)] = 6691,
  [SMALL_STATE(243)] = 6716,
  [SMALL_STATE(244)] = 6739,
  [SMALL_STATE(245)] = 6762,
  [SMALL_STATE(246)] = 6785,
  [SMALL_STATE(247)] = 6808,
  [SMALL_STATE(248)] = 6831,
  [SMALL_STATE(249)] = 6854,
  [SMALL_STATE(250)] = 6877,
  [SMALL_STATE(251)] = 6900,
  [SMALL_STATE(252)] = 6923,
  [SMALL_STATE(253)] = 6946,
  [SMALL_STATE(254)] = 6969,
  [SMALL_STATE(255)] = 6992,
  [SMALL_STATE(256)] = 7015,
  [SMALL_STATE(257)] = 7031,
  [SMALL_STATE(258)] = 7051,
  [SMALL_STATE(259)] = 7067,
  [SMALL_STATE(260)] = 7087,
  [SMALL_STATE(261)] = 7103,
  [SMALL_STATE(262)] = 7123,
  [SMALL_STATE(263)] = 7139,
  [SMALL_STATE(264)] = 7159,
  [SMALL_STATE(265)] = 7179,
  [SMALL_STATE(266)] = 7195,
  [SMALL_STATE(267)] = 7215,
  [SMALL_STATE(268)] = 7231,
  [SMALL_STATE(269)] = 7251,
  [SMALL_STATE(270)] = 7271,
  [SMALL_STATE(271)] = 7291,
  [SMALL_STATE(272)] = 7311,
  [SMALL_STATE(273)] = 7331,
  [SMALL_STATE(274)] = 7351,
  [SMALL_STATE(275)] = 7371,
  [SMALL_STATE(276)] = 7391,
  [SMALL_STATE(277)] = 7411,
  [SMALL_STATE(278)] = 7431,
  [SMALL_STATE(279)] = 7451,
  [SMALL_STATE(280)] = 7471,
  [SMALL_STATE(281)] = 7491,
  [SMALL_STATE(282)] = 7511,
  [SMALL_STATE(283)] = 7525,
  [SMALL_STATE(284)] = 7545,
  [SMALL_STATE(285)] = 7561,
  [SMALL_STATE(286)] = 7575,
  [SMALL_STATE(287)] = 7595,
  [SMALL_STATE(288)] = 7615,
  [SMALL_STATE(289)] = 7635,
  [SMALL_STATE(290)] = 7655,
  [SMALL_STATE(291)] = 7675,
  [SMALL_STATE(292)] = 7695,
  [SMALL_STATE(293)] = 7709,
  [SMALL_STATE(294)] = 7729,
  [SMALL_STATE(295)] = 7743,
  [SMALL_STATE(296)] = 7763,
  [SMALL_STATE(297)] = 7783,
  [SMALL_STATE(298)] = 7797,
  [SMALL_STATE(299)] = 7817,
  [SMALL_STATE(300)] = 7831,
  [SMALL_STATE(301)] = 7847,
  [SMALL_STATE(302)] = 7867,
  [SMALL_STATE(303)] = 7887,
  [SMALL_STATE(304)] = 7907,
  [SMALL_STATE(305)] = 7927,
  [SMALL_STATE(306)] = 7947,
  [SMALL_STATE(307)] = 7967,
  [SMALL_STATE(308)] = 7987,
  [SMALL_STATE(309)] = 8007,
  [SMALL_STATE(310)] = 8027,
  [SMALL_STATE(311)] = 8042,
  [SMALL_STATE(312)] = 8059,
  [SMALL_STATE(313)] = 8076,
  [SMALL_STATE(314)] = 8093,
  [SMALL_STATE(315)] = 8110,
  [SMALL_STATE(316)] = 8127,
  [SMALL_STATE(317)] = 8144,
  [SMALL_STATE(318)] = 8157,
  [SMALL_STATE(319)] = 8172,
  [SMALL_STATE(320)] = 8185,
  [SMALL_STATE(321)] = 8198,
  [SMALL_STATE(322)] = 8215,
  [SMALL_STATE(323)] = 8232,
  [SMALL_STATE(324)] = 8249,
  [SMALL_STATE(325)] = 8260,
  [SMALL_STATE(326)] = 8271,
  [SMALL_STATE(327)] = 8288,
  [SMALL_STATE(328)] = 8305,
  [SMALL_STATE(329)] = 8318,
  [SMALL_STATE(330)] = 8331,
  [SMALL_STATE(331)] = 8348,
  [SMALL_STATE(332)] = 8359,
  [SMALL_STATE(333)] = 8376,
  [SMALL_STATE(334)] = 8393,
  [SMALL_STATE(335)] = 8410,
  [SMALL_STATE(336)] = 8423,
  [SMALL_STATE(337)] = 8440,
  [SMALL_STATE(338)] = 8457,
  [SMALL_STATE(339)] = 8468,
  [SMALL_STATE(340)] = 8485,
  [SMALL_STATE(341)] = 8498,
  [SMALL_STATE(342)] = 8506,
  [SMALL_STATE(343)] = 8514,
  [SMALL_STATE(344)] = 8526,
  [SMALL_STATE(345)] = 8540,
  [SMALL_STATE(346)] = 8554,
  [SMALL_STATE(347)] = 8562,
  [SMALL_STATE(348)] = 8576,
  [SMALL_STATE(349)] = 8586,
  [SMALL_STATE(350)] = 8594,
  [SMALL_STATE(351)] = 8602,
  [SMALL_STATE(352)] = 8610,
  [SMALL_STATE(353)] = 8618,
  [SMALL_STATE(354)] = 8626,
  [SMALL_STATE(355)] = 8634,
  [SMALL_STATE(356)] = 8642,
  [SMALL_STATE(357)] = 8650,
  [SMALL_STATE(358)] = 8658,
  [SMALL_STATE(359)] = 8666,
  [SMALL_STATE(360)] = 8674,
  [SMALL_STATE(361)] = 8682,
  [SMALL_STATE(362)] = 8690,
  [SMALL_STATE(363)] = 8698,
  [SMALL_STATE(364)] = 8707,
  [SMALL_STATE(365)] = 8716,
  [SMALL_STATE(366)] = 8725,
  [SMALL_STATE(367)] = 8734,
  [SMALL_STATE(368)] = 8743,
  [SMALL_STATE(369)] = 8754,
  [SMALL_STATE(370)] = 8763,
  [SMALL_STATE(371)] = 8772,
  [SMALL_STATE(372)] = 8781,
  [SMALL_STATE(373)] = 8790,
  [SMALL_STATE(374)] = 8799,
  [SMALL_STATE(375)] = 8808,
  [SMALL_STATE(376)] = 8817,
  [SMALL_STATE(377)] = 8826,
  [SMALL_STATE(378)] = 8839,
  [SMALL_STATE(379)] = 8848,
  [SMALL_STATE(380)] = 8857,
  [SMALL_STATE(381)] = 8866,
  [SMALL_STATE(382)] = 8875,
  [SMALL_STATE(383)] = 8884,
  [SMALL_STATE(384)] = 8893,
  [SMALL_STATE(385)] = 8902,
  [SMALL_STATE(386)] = 8911,
  [SMALL_STATE(387)] = 8920,
  [SMALL_STATE(388)] = 8933,
  [SMALL_STATE(389)] = 8946,
  [SMALL_STATE(390)] = 8959,
  [SMALL_STATE(391)] = 8968,
  [SMALL_STATE(392)] = 8976,
  [SMALL_STATE(393)] = 8984,
  [SMALL_STATE(394)] = 8992,
  [SMALL_STATE(395)] = 9002,
  [SMALL_STATE(396)] = 9012,
  [SMALL_STATE(397)] = 9022,
  [SMALL_STATE(398)] = 9030,
  [SMALL_STATE(399)] = 9040,
  [SMALL_STATE(400)] = 9048,
  [SMALL_STATE(401)] = 9056,
  [SMALL_STATE(402)] = 9066,
  [SMALL_STATE(403)] = 9074,
  [SMALL_STATE(404)] = 9082,
  [SMALL_STATE(405)] = 9088,
  [SMALL_STATE(406)] = 9096,
  [SMALL_STATE(407)] = 9104,
  [SMALL_STATE(408)] = 9114,
  [SMALL_STATE(409)] = 9124,
  [SMALL_STATE(410)] = 9134,
  [SMALL_STATE(411)] = 9144,
  [SMALL_STATE(412)] = 9152,
  [SMALL_STATE(413)] = 9162,
  [SMALL_STATE(414)] = 9168,
  [SMALL_STATE(415)] = 9176,
  [SMALL_STATE(416)] = 9186,
  [SMALL_STATE(417)] = 9192,
  [SMALL_STATE(418)] = 9202,
  [SMALL_STATE(419)] = 9212,
  [SMALL_STATE(420)] = 9222,
  [SMALL_STATE(421)] = 9232,
  [SMALL_STATE(422)] = 9242,
  [SMALL_STATE(423)] = 9250,
  [SMALL_STATE(424)] = 9258,
  [SMALL_STATE(425)] = 9268,
  [SMALL_STATE(426)] = 9278,
  [SMALL_STATE(427)] = 9285,
  [SMALL_STATE(428)] = 9292,
  [SMALL_STATE(429)] = 9299,
  [SMALL_STATE(430)] = 9306,
  [SMALL_STATE(431)] = 9313,
  [SMALL_STATE(432)] = 9320,
  [SMALL_STATE(433)] = 9327,
  [SMALL_STATE(434)] = 9334,
  [SMALL_STATE(435)] = 9341,
  [SMALL_STATE(436)] = 9348,
  [SMALL_STATE(437)] = 9355,
  [SMALL_STATE(438)] = 9362,
  [SMALL_STATE(439)] = 9369,
  [SMALL_STATE(440)] = 9376,
  [SMALL_STATE(441)] = 9383,
  [SMALL_STATE(442)] = 9390,
  [SMALL_STATE(443)] = 9397,
  [SMALL_STATE(444)] = 9404,
  [SMALL_STATE(445)] = 9411,
  [SMALL_STATE(446)] = 9418,
  [SMALL_STATE(447)] = 9422,
  [SMALL_STATE(448)] = 9426,
  [SMALL_STATE(449)] = 9430,
  [SMALL_STATE(450)] = 9434,
  [SMALL_STATE(451)] = 9438,
  [SMALL_STATE(452)] = 9442,
  [SMALL_STATE(453)] = 9446,
  [SMALL_STATE(454)] = 9450,
  [SMALL_STATE(455)] = 9454,
  [SMALL_STATE(456)] = 9458,
  [SMALL_STATE(457)] = 9462,
  [SMALL_STATE(458)] = 9466,
  [SMALL_STATE(459)] = 9470,
  [SMALL_STATE(460)] = 9474,
  [SMALL_STATE(461)] = 9478,
  [SMALL_STATE(462)] = 9482,
  [SMALL_STATE(463)] = 9486,
  [SMALL_STATE(464)] = 9490,
  [SMALL_STATE(465)] = 9494,
  [SMALL_STATE(466)] = 9498,
  [SMALL_STATE(467)] = 9502,
  [SMALL_STATE(468)] = 9506,
  [SMALL_STATE(469)] = 9510,
  [SMALL_STATE(470)] = 9514,
  [SMALL_STATE(471)] = 9518,
  [SMALL_STATE(472)] = 9522,
  [SMALL_STATE(473)] = 9526,
  [SMALL_STATE(474)] = 9530,
  [SMALL_STATE(475)] = 9534,
  [SMALL_STATE(476)] = 9538,
  [SMALL_STATE(477)] = 9542,
  [SMALL_STATE(478)] = 9546,
  [SMALL_STATE(479)] = 9550,
  [SMALL_STATE(480)] = 9554,
  [SMALL_STATE(481)] = 9558,
  [SMALL_STATE(482)] = 9562,
  [SMALL_STATE(483)] = 9566,
  [SMALL_STATE(484)] = 9570,
  [SMALL_STATE(485)] = 9574,
  [SMALL_STATE(486)] = 9578,
  [SMALL_STATE(487)] = 9582,
  [SMALL_STATE(488)] = 9586,
  [SMALL_STATE(489)] = 9590,
  [SMALL_STATE(490)] = 9594,
  [SMALL_STATE(491)] = 9598,
  [SMALL_STATE(492)] = 9602,
  [SMALL_STATE(493)] = 9606,
  [SMALL_STATE(494)] = 9610,
  [SMALL_STATE(495)] = 9614,
  [SMALL_STATE(496)] = 9618,
  [SMALL_STATE(497)] = 9622,
  [SMALL_STATE(498)] = 9626,
  [SMALL_STATE(499)] = 9630,
  [SMALL_STATE(500)] = 9634,
  [SMALL_STATE(501)] = 9638,
  [SMALL_STATE(502)] = 9642,
  [SMALL_STATE(503)] = 9646,
  [SMALL_STATE(504)] = 9650,
  [SMALL_STATE(505)] = 9654,
  [SMALL_STATE(506)] = 9658,
  [SMALL_STATE(507)] = 9662,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(404),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(483),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(482),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(421),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(479),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(438),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(438),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(477),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(268),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(443),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(443),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(464),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(193),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(193),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(274),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(430),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(430),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(460),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(196),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(196),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(51),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(470),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(186),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(186),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(133),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(86),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(296),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(434),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(434),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(456),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(194),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(194),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(178),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(367),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(201),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(217),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(318),
  [779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(475),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(474),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(318),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(475),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(474),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(189),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(300),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(446),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(318),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(453),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(416),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
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
