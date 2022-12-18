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
#define STATE_COUNT 751
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
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
  anon_sym_SLASH = 19,
  anon_sym_ = 20,
  anon_sym_DOT = 21,
  anon_sym_LPAREN = 22,
  anon_sym_COMMA = 23,
  anon_sym_RPAREN = 24,
  aux_sym__ternary_attribute_value_token1 = 25,
  aux_sym__variable_attribute_value_token1 = 26,
  aux_sym__object_attribute_value_token1 = 27,
  aux_sym__template_attribute_value_token1 = 28,
  aux_sym__array_attribute_value_token1 = 29,
  aux_sym__attribute_token1 = 30,
  anon_sym_SLASH_SLASH = 31,
  anon_sym_SLASH_SLASH_DASH = 32,
  sym_tag_name = 33,
  sym_class = 34,
  sym_id = 35,
  aux_sym_angular_attribute_name_token1 = 36,
  aux_sym_angular_attribute_name_token2 = 37,
  aux_sym_angular_attribute_name_token3 = 38,
  sym_attribute_name = 39,
  anon_sym_SQUOTE = 40,
  aux_sym_quoted_javascript_token1 = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_quoted_javascript_token2 = 43,
  aux_sym_content_token1 = 44,
  anon_sym_POUND = 45,
  anon_sym_LBRACE = 46,
  sym__comment_content = 47,
  anon_sym_POUND_LBRACE = 48,
  anon_sym_RBRACE = 49,
  anon_sym_LBRACE_LBRACE = 50,
  anon_sym_RBRACE_RBRACE = 51,
  sym__delimited_javascript = 52,
  sym__un_delimited_javascript_line = 53,
  anon_sym_DASH = 54,
  aux_sym_unbuffered_code_token1 = 55,
  sym__newline = 56,
  sym__indent = 57,
  sym__dedent = 58,
  sym_source_file = 59,
  sym_doctype = 60,
  sym_pipe = 61,
  sym_conditional = 62,
  sym_case = 63,
  sym__when_content = 64,
  sym__dummy_tag = 65,
  sym__when_keyword = 66,
  sym_when = 67,
  sym_unescaped_buffered_code = 68,
  sym_buffered_code = 69,
  sym_script_block = 70,
  sym_tag = 71,
  sym__content_after_dot = 72,
  sym_attributes = 73,
  sym_attribute = 74,
  sym__ternary_attribute_value = 75,
  sym__string_attribute_value = 76,
  sym__variable_attribute_value = 77,
  sym__object_attribute_value = 78,
  sym__template_attribute_value = 79,
  sym__array_attribute_value = 80,
  sym__attribute = 81,
  sym__angular_attribute = 82,
  sym_children = 83,
  sym__children_choice = 84,
  sym_comment = 85,
  sym__comment = 86,
  sym__comment_not_first_line = 87,
  sym_angular_attribute_name = 88,
  sym_quoted_javascript = 89,
  sym_quoted_attribute_value = 90,
  sym_content = 91,
  aux_sym__content_or_javascript = 92,
  sym__un_delimited_javascript = 93,
  aux_sym__un_delimited_javascript_multiline = 94,
  sym__single_line_buf_code = 95,
  sym__multi_line_buf_code = 96,
  sym_unbuffered_code = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_case_repeat1 = 99,
  aux_sym_script_block_repeat1 = 100,
  aux_sym_tag_repeat1 = 101,
  aux_sym__content_after_dot_repeat1 = 102,
  aux_sym_attributes_repeat1 = 103,
  aux_sym__attribute_repeat1 = 104,
  aux_sym_children_repeat1 = 105,
  aux_sym__comment_repeat1 = 106,
  aux_sym_content_repeat1 = 107,
  aux_sym__single_line_buf_code_repeat1 = 108,
  alias_sym_attribute_value = 109,
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
  [sym__comment] = "_comment",
  [sym__comment_not_first_line] = "_comment_not_first_line",
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
  [sym__comment] = sym__comment,
  [sym__comment_not_first_line] = sym__comment_not_first_line,
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
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '#') ADVANCE(654);
      if (lookahead == '\'') ADVANCE(644);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(207);
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
      if (lookahead == '{') ADVANCE(655);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(216);
      if (lookahead == '`') ADVANCE(512);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(220);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ']') ADVANCE(521);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(654);
      if (lookahead == '{') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0) ADVANCE(653);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(495);
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
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == '}') ADVANCE(496);
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
          lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(497);
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
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(498);
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
          lookahead == '`') ADVANCE(229);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(499);
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
          lookahead == '`') ADVANCE(230);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(229);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(499);
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
          lookahead == '`') ADVANCE(230);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(234);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(236);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(237);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(246);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(247);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(254);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(137);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(258);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(260);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(141);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
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
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0) ADVANCE(685);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(501);
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
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(649);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '[') ADVANCE(469);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(649);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead == '[') ADVANCE(469);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '\'') ADVANCE(644);
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
      if (lookahead == '"') ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(650);
      if (lookahead != 0) ADVANCE(651);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(444);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '[') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(646);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '`') ADVANCE(510);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(455);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(436);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(436);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(523);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(481);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(485);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(513);
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
      if (lookahead == ']') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(427);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(449);
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
      if (lookahead == '}') ADVANCE(672);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 141:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(453);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(427);
      END_STATE();
    case 150:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == '!') ADVANCE(678);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '.') ADVANCE(683);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(568);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0) ADVANCE(685);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(151)
      if (lookahead == '!') ADVANCE(678);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '.') ADVANCE(683);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0) ADVANCE(685);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(585);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(585);
      if (lookahead == 'w') ADVANCE(569);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
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
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(523);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(216);
      if (lookahead == '`') ADVANCE(512);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(220);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ']') ADVANCE(521);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(229);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(234);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(236);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(237);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(246);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(247);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(258);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(260);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(270);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(272);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(274);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(288);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(284);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(286);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(288);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(288);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(398);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == '`') ADVANCE(288);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(248);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(250);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(252);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(254);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == ']') ADVANCE(256);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(256);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(258);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(260);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == ']') ADVANCE(278);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == ']') ADVANCE(284);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(250);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(252);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(256);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(258);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(260);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(276);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(315);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(278);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(319);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(316);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(280);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(282);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(318);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(284);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(319);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(286);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead == '}') ADVANCE(320);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(288);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(326);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(327);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '`') ADVANCE(330);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(331);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(332);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(333);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(338);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(339);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(340);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(344);
      if (lookahead == '`') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '`') ADVANCE(329);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(347);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '`') ADVANCE(335);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '`') ADVANCE(336);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(350);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(321);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(322);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == '`') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(323);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(354);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(324);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(355);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(325);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(356);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(326);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ']') ADVANCE(327);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(327);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '`') ADVANCE(360);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(361);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(362);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(363);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(368);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(325);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(370);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(371);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(327);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '`') ADVANCE(374);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(375);
      if (lookahead == '}') ADVANCE(375);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(338);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(376);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(376);
      if (lookahead == '}') ADVANCE(376);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(339);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(377);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(377);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(340);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(378);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(378);
      if (lookahead == '}') ADVANCE(378);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(341);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(382);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(383);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(384);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(385);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(277);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(279);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(285);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(287);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(289);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(382);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead == '?') ADVANCE(383);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead == '?') ADVANCE(384);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '?') ADVANCE(385);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(251);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '?') ADVANCE(263);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '?') ADVANCE(271);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '?') ADVANCE(273);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '[') ADVANCE(446);
      if (lookahead == ']') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(423);
      if (lookahead == '}') ADVANCE(423);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == '?') ADVANCE(454);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '?') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(427);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(425);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(436);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(437);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(448);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(443);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(443);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(216);
      if (lookahead == '`') ADVANCE(512);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(234);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(236);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(237);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '[') ADVANCE(483);
      if (lookahead == ']') ADVANCE(483);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(470);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(483);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '?') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(428);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == '[') ADVANCE(428);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(435);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == '}') ADVANCE(437);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(437);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(649);
      if (lookahead == '\'') ADVANCE(645);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '[') ADVANCE(469);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(481);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '(') ADVANCE(443);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(485);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(485);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(229);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(635);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(636);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(651);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(669);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(671);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(659);
      if (lookahead == '#') ADVANCE(665);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '/') ADVANCE(658);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(588);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(659);
      if (lookahead == '#') ADVANCE(665);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '/') ADVANCE(658);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(570);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(636);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(659);
      if (lookahead == '#') ADVANCE(665);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '/') ADVANCE(658);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(588);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(659);
      if (lookahead == '#') ADVANCE(665);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '/') ADVANCE(658);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(570);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(678);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '.') ADVANCE(683);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(568);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(678);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '.') ADVANCE(683);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(635);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(689);
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
  [12] = {.lex_state = 152, .external_lex_state = 3},
  [13] = {.lex_state = 152, .external_lex_state = 3},
  [14] = {.lex_state = 152, .external_lex_state = 3},
  [15] = {.lex_state = 152, .external_lex_state = 3},
  [16] = {.lex_state = 152, .external_lex_state = 3},
  [17] = {.lex_state = 152, .external_lex_state = 3},
  [18] = {.lex_state = 152, .external_lex_state = 3},
  [19] = {.lex_state = 152, .external_lex_state = 3},
  [20] = {.lex_state = 152, .external_lex_state = 3},
  [21] = {.lex_state = 152, .external_lex_state = 2},
  [22] = {.lex_state = 152, .external_lex_state = 3},
  [23] = {.lex_state = 152, .external_lex_state = 3},
  [24] = {.lex_state = 152, .external_lex_state = 3},
  [25] = {.lex_state = 152, .external_lex_state = 3},
  [26] = {.lex_state = 152, .external_lex_state = 3},
  [27] = {.lex_state = 152, .external_lex_state = 3},
  [28] = {.lex_state = 152, .external_lex_state = 3},
  [29] = {.lex_state = 152, .external_lex_state = 3},
  [30] = {.lex_state = 152, .external_lex_state = 2},
  [31] = {.lex_state = 152, .external_lex_state = 3},
  [32] = {.lex_state = 152, .external_lex_state = 3},
  [33] = {.lex_state = 152, .external_lex_state = 3},
  [34] = {.lex_state = 152, .external_lex_state = 3},
  [35] = {.lex_state = 152, .external_lex_state = 2},
  [36] = {.lex_state = 152, .external_lex_state = 3},
  [37] = {.lex_state = 152, .external_lex_state = 3},
  [38] = {.lex_state = 152, .external_lex_state = 3},
  [39] = {.lex_state = 152, .external_lex_state = 3},
  [40] = {.lex_state = 152, .external_lex_state = 3},
  [41] = {.lex_state = 152, .external_lex_state = 3},
  [42] = {.lex_state = 152, .external_lex_state = 3},
  [43] = {.lex_state = 152, .external_lex_state = 3},
  [44] = {.lex_state = 152, .external_lex_state = 3},
  [45] = {.lex_state = 152, .external_lex_state = 3},
  [46] = {.lex_state = 152, .external_lex_state = 3},
  [47] = {.lex_state = 152, .external_lex_state = 3},
  [48] = {.lex_state = 152},
  [49] = {.lex_state = 152},
  [50] = {.lex_state = 153, .external_lex_state = 2},
  [51] = {.lex_state = 153, .external_lex_state = 2},
  [52] = {.lex_state = 153, .external_lex_state = 1},
  [53] = {.lex_state = 153, .external_lex_state = 1},
  [54] = {.lex_state = 153, .external_lex_state = 1},
  [55] = {.lex_state = 153, .external_lex_state = 1},
  [56] = {.lex_state = 150, .external_lex_state = 2},
  [57] = {.lex_state = 153, .external_lex_state = 1},
  [58] = {.lex_state = 668, .external_lex_state = 2},
  [59] = {.lex_state = 153, .external_lex_state = 2},
  [60] = {.lex_state = 153, .external_lex_state = 1},
  [61] = {.lex_state = 153, .external_lex_state = 2},
  [62] = {.lex_state = 153, .external_lex_state = 1},
  [63] = {.lex_state = 668, .external_lex_state = 2},
  [64] = {.lex_state = 153, .external_lex_state = 1},
  [65] = {.lex_state = 153, .external_lex_state = 1},
  [66] = {.lex_state = 150, .external_lex_state = 2},
  [67] = {.lex_state = 668, .external_lex_state = 2},
  [68] = {.lex_state = 153, .external_lex_state = 1},
  [69] = {.lex_state = 153, .external_lex_state = 1},
  [70] = {.lex_state = 153, .external_lex_state = 4},
  [71] = {.lex_state = 153, .external_lex_state = 4},
  [72] = {.lex_state = 153, .external_lex_state = 4},
  [73] = {.lex_state = 153, .external_lex_state = 4},
  [74] = {.lex_state = 153},
  [75] = {.lex_state = 668, .external_lex_state = 2},
  [76] = {.lex_state = 153, .external_lex_state = 1},
  [77] = {.lex_state = 668, .external_lex_state = 2},
  [78] = {.lex_state = 153, .external_lex_state = 4},
  [79] = {.lex_state = 150, .external_lex_state = 2},
  [80] = {.lex_state = 153, .external_lex_state = 4},
  [81] = {.lex_state = 153, .external_lex_state = 1},
  [82] = {.lex_state = 153, .external_lex_state = 4},
  [83] = {.lex_state = 153, .external_lex_state = 1},
  [84] = {.lex_state = 153, .external_lex_state = 1},
  [85] = {.lex_state = 153, .external_lex_state = 4},
  [86] = {.lex_state = 153},
  [87] = {.lex_state = 153, .external_lex_state = 1},
  [88] = {.lex_state = 153, .external_lex_state = 1},
  [89] = {.lex_state = 153, .external_lex_state = 1},
  [90] = {.lex_state = 153, .external_lex_state = 1},
  [91] = {.lex_state = 153, .external_lex_state = 1},
  [92] = {.lex_state = 153, .external_lex_state = 4},
  [93] = {.lex_state = 150, .external_lex_state = 2},
  [94] = {.lex_state = 150, .external_lex_state = 2},
  [95] = {.lex_state = 153, .external_lex_state = 2},
  [96] = {.lex_state = 153, .external_lex_state = 2},
  [97] = {.lex_state = 153, .external_lex_state = 2},
  [98] = {.lex_state = 153, .external_lex_state = 2},
  [99] = {.lex_state = 153, .external_lex_state = 2},
  [100] = {.lex_state = 153, .external_lex_state = 2},
  [101] = {.lex_state = 152, .external_lex_state = 1},
  [102] = {.lex_state = 150, .external_lex_state = 2},
  [103] = {.lex_state = 153, .external_lex_state = 2},
  [104] = {.lex_state = 153, .external_lex_state = 2},
  [105] = {.lex_state = 153, .external_lex_state = 2},
  [106] = {.lex_state = 152, .external_lex_state = 1},
  [107] = {.lex_state = 153, .external_lex_state = 2},
  [108] = {.lex_state = 153, .external_lex_state = 2},
  [109] = {.lex_state = 152, .external_lex_state = 1},
  [110] = {.lex_state = 152, .external_lex_state = 1},
  [111] = {.lex_state = 153, .external_lex_state = 2},
  [112] = {.lex_state = 153, .external_lex_state = 2},
  [113] = {.lex_state = 153, .external_lex_state = 1},
  [114] = {.lex_state = 153, .external_lex_state = 2},
  [115] = {.lex_state = 153, .external_lex_state = 2},
  [116] = {.lex_state = 153, .external_lex_state = 2},
  [117] = {.lex_state = 153, .external_lex_state = 2},
  [118] = {.lex_state = 153, .external_lex_state = 2},
  [119] = {.lex_state = 667, .external_lex_state = 2},
  [120] = {.lex_state = 152, .external_lex_state = 1},
  [121] = {.lex_state = 153, .external_lex_state = 2},
  [122] = {.lex_state = 153, .external_lex_state = 1},
  [123] = {.lex_state = 152, .external_lex_state = 1},
  [124] = {.lex_state = 153, .external_lex_state = 4},
  [125] = {.lex_state = 667, .external_lex_state = 2},
  [126] = {.lex_state = 151, .external_lex_state = 2},
  [127] = {.lex_state = 153, .external_lex_state = 2},
  [128] = {.lex_state = 153, .external_lex_state = 2},
  [129] = {.lex_state = 152, .external_lex_state = 1},
  [130] = {.lex_state = 151, .external_lex_state = 2},
  [131] = {.lex_state = 668, .external_lex_state = 2},
  [132] = {.lex_state = 153, .external_lex_state = 2},
  [133] = {.lex_state = 153, .external_lex_state = 2},
  [134] = {.lex_state = 153, .external_lex_state = 2},
  [135] = {.lex_state = 152, .external_lex_state = 1},
  [136] = {.lex_state = 153, .external_lex_state = 2},
  [137] = {.lex_state = 153, .external_lex_state = 2},
  [138] = {.lex_state = 153, .external_lex_state = 2},
  [139] = {.lex_state = 153, .external_lex_state = 2},
  [140] = {.lex_state = 152, .external_lex_state = 1},
  [141] = {.lex_state = 153, .external_lex_state = 5},
  [142] = {.lex_state = 153, .external_lex_state = 2},
  [143] = {.lex_state = 151, .external_lex_state = 2},
  [144] = {.lex_state = 153, .external_lex_state = 5},
  [145] = {.lex_state = 153, .external_lex_state = 5},
  [146] = {.lex_state = 153, .external_lex_state = 2},
  [147] = {.lex_state = 151, .external_lex_state = 2},
  [148] = {.lex_state = 153, .external_lex_state = 2},
  [149] = {.lex_state = 153, .external_lex_state = 2},
  [150] = {.lex_state = 153, .external_lex_state = 5},
  [151] = {.lex_state = 153, .external_lex_state = 2},
  [152] = {.lex_state = 151, .external_lex_state = 5},
  [153] = {.lex_state = 153, .external_lex_state = 2},
  [154] = {.lex_state = 153, .external_lex_state = 2},
  [155] = {.lex_state = 153, .external_lex_state = 5},
  [156] = {.lex_state = 667, .external_lex_state = 2},
  [157] = {.lex_state = 153, .external_lex_state = 5},
  [158] = {.lex_state = 153, .external_lex_state = 5},
  [159] = {.lex_state = 153, .external_lex_state = 2},
  [160] = {.lex_state = 153, .external_lex_state = 2},
  [161] = {.lex_state = 153, .external_lex_state = 2},
  [162] = {.lex_state = 153, .external_lex_state = 2},
  [163] = {.lex_state = 667, .external_lex_state = 2},
  [164] = {.lex_state = 153, .external_lex_state = 2},
  [165] = {.lex_state = 153, .external_lex_state = 2},
  [166] = {.lex_state = 153, .external_lex_state = 5},
  [167] = {.lex_state = 153, .external_lex_state = 5},
  [168] = {.lex_state = 153, .external_lex_state = 5},
  [169] = {.lex_state = 153, .external_lex_state = 2},
  [170] = {.lex_state = 153, .external_lex_state = 2},
  [171] = {.lex_state = 153, .external_lex_state = 5},
  [172] = {.lex_state = 153, .external_lex_state = 2},
  [173] = {.lex_state = 153, .external_lex_state = 2},
  [174] = {.lex_state = 153, .external_lex_state = 2},
  [175] = {.lex_state = 151, .external_lex_state = 5},
  [176] = {.lex_state = 153, .external_lex_state = 5},
  [177] = {.lex_state = 153, .external_lex_state = 2},
  [178] = {.lex_state = 153, .external_lex_state = 5},
  [179] = {.lex_state = 153, .external_lex_state = 5},
  [180] = {.lex_state = 153, .external_lex_state = 2},
  [181] = {.lex_state = 153, .external_lex_state = 2},
  [182] = {.lex_state = 152, .external_lex_state = 1},
  [183] = {.lex_state = 153, .external_lex_state = 5},
  [184] = {.lex_state = 152, .external_lex_state = 1},
  [185] = {.lex_state = 152, .external_lex_state = 1},
  [186] = {.lex_state = 153, .external_lex_state = 2},
  [187] = {.lex_state = 153, .external_lex_state = 2},
  [188] = {.lex_state = 153, .external_lex_state = 5},
  [189] = {.lex_state = 152, .external_lex_state = 1},
  [190] = {.lex_state = 152, .external_lex_state = 1},
  [191] = {.lex_state = 152, .external_lex_state = 1},
  [192] = {.lex_state = 152, .external_lex_state = 1},
  [193] = {.lex_state = 153, .external_lex_state = 2},
  [194] = {.lex_state = 151, .external_lex_state = 2},
  [195] = {.lex_state = 152, .external_lex_state = 1},
  [196] = {.lex_state = 153, .external_lex_state = 2},
  [197] = {.lex_state = 153, .external_lex_state = 2},
  [198] = {.lex_state = 152, .external_lex_state = 1},
  [199] = {.lex_state = 667, .external_lex_state = 2},
  [200] = {.lex_state = 153, .external_lex_state = 2},
  [201] = {.lex_state = 153, .external_lex_state = 2},
  [202] = {.lex_state = 152, .external_lex_state = 6},
  [203] = {.lex_state = 152, .external_lex_state = 2},
  [204] = {.lex_state = 152, .external_lex_state = 2},
  [205] = {.lex_state = 152, .external_lex_state = 2},
  [206] = {.lex_state = 667, .external_lex_state = 2},
  [207] = {.lex_state = 152, .external_lex_state = 2},
  [208] = {.lex_state = 152, .external_lex_state = 2},
  [209] = {.lex_state = 152, .external_lex_state = 2},
  [210] = {.lex_state = 151, .external_lex_state = 2},
  [211] = {.lex_state = 152, .external_lex_state = 6},
  [212] = {.lex_state = 152, .external_lex_state = 2},
  [213] = {.lex_state = 152, .external_lex_state = 6},
  [214] = {.lex_state = 152, .external_lex_state = 2},
  [215] = {.lex_state = 667},
  [216] = {.lex_state = 152, .external_lex_state = 4},
  [217] = {.lex_state = 152, .external_lex_state = 6},
  [218] = {.lex_state = 152, .external_lex_state = 2},
  [219] = {.lex_state = 151, .external_lex_state = 5},
  [220] = {.lex_state = 152, .external_lex_state = 2},
  [221] = {.lex_state = 152, .external_lex_state = 2},
  [222] = {.lex_state = 152, .external_lex_state = 1},
  [223] = {.lex_state = 152, .external_lex_state = 2},
  [224] = {.lex_state = 152, .external_lex_state = 6},
  [225] = {.lex_state = 152, .external_lex_state = 2},
  [226] = {.lex_state = 152, .external_lex_state = 6},
  [227] = {.lex_state = 152, .external_lex_state = 4},
  [228] = {.lex_state = 152, .external_lex_state = 2},
  [229] = {.lex_state = 152, .external_lex_state = 2},
  [230] = {.lex_state = 153},
  [231] = {.lex_state = 152, .external_lex_state = 2},
  [232] = {.lex_state = 152, .external_lex_state = 2},
  [233] = {.lex_state = 152, .external_lex_state = 2},
  [234] = {.lex_state = 152, .external_lex_state = 1},
  [235] = {.lex_state = 152, .external_lex_state = 2},
  [236] = {.lex_state = 152, .external_lex_state = 2},
  [237] = {.lex_state = 152, .external_lex_state = 6},
  [238] = {.lex_state = 152, .external_lex_state = 2},
  [239] = {.lex_state = 152, .external_lex_state = 2},
  [240] = {.lex_state = 152, .external_lex_state = 2},
  [241] = {.lex_state = 152, .external_lex_state = 2},
  [242] = {.lex_state = 667},
  [243] = {.lex_state = 152, .external_lex_state = 6},
  [244] = {.lex_state = 152, .external_lex_state = 2},
  [245] = {.lex_state = 152, .external_lex_state = 5},
  [246] = {.lex_state = 152, .external_lex_state = 6},
  [247] = {.lex_state = 152, .external_lex_state = 2},
  [248] = {.lex_state = 152, .external_lex_state = 2},
  [249] = {.lex_state = 152, .external_lex_state = 2},
  [250] = {.lex_state = 152, .external_lex_state = 2},
  [251] = {.lex_state = 152, .external_lex_state = 2},
  [252] = {.lex_state = 152, .external_lex_state = 2},
  [253] = {.lex_state = 152, .external_lex_state = 2},
  [254] = {.lex_state = 152, .external_lex_state = 2},
  [255] = {.lex_state = 152, .external_lex_state = 2},
  [256] = {.lex_state = 152, .external_lex_state = 2},
  [257] = {.lex_state = 152, .external_lex_state = 2},
  [258] = {.lex_state = 152, .external_lex_state = 2},
  [259] = {.lex_state = 152, .external_lex_state = 2},
  [260] = {.lex_state = 152, .external_lex_state = 2},
  [261] = {.lex_state = 152, .external_lex_state = 5},
  [262] = {.lex_state = 152, .external_lex_state = 2},
  [263] = {.lex_state = 152, .external_lex_state = 2},
  [264] = {.lex_state = 152, .external_lex_state = 2},
  [265] = {.lex_state = 152, .external_lex_state = 2},
  [266] = {.lex_state = 152, .external_lex_state = 2},
  [267] = {.lex_state = 152, .external_lex_state = 2},
  [268] = {.lex_state = 152, .external_lex_state = 2},
  [269] = {.lex_state = 152, .external_lex_state = 5},
  [270] = {.lex_state = 152, .external_lex_state = 5},
  [271] = {.lex_state = 152, .external_lex_state = 2},
  [272] = {.lex_state = 152, .external_lex_state = 2},
  [273] = {.lex_state = 667},
  [274] = {.lex_state = 152, .external_lex_state = 2},
  [275] = {.lex_state = 152, .external_lex_state = 2},
  [276] = {.lex_state = 152},
  [277] = {.lex_state = 152},
  [278] = {.lex_state = 152},
  [279] = {.lex_state = 152},
  [280] = {.lex_state = 152},
  [281] = {.lex_state = 152},
  [282] = {.lex_state = 152},
  [283] = {.lex_state = 152},
  [284] = {.lex_state = 152},
  [285] = {.lex_state = 152},
  [286] = {.lex_state = 152},
  [287] = {.lex_state = 152},
  [288] = {.lex_state = 152},
  [289] = {.lex_state = 152},
  [290] = {.lex_state = 152},
  [291] = {.lex_state = 152},
  [292] = {.lex_state = 152},
  [293] = {.lex_state = 152},
  [294] = {.lex_state = 152},
  [295] = {.lex_state = 152},
  [296] = {.lex_state = 152},
  [297] = {.lex_state = 152},
  [298] = {.lex_state = 152},
  [299] = {.lex_state = 152},
  [300] = {.lex_state = 54, .external_lex_state = 3},
  [301] = {.lex_state = 54, .external_lex_state = 3},
  [302] = {.lex_state = 54, .external_lex_state = 3},
  [303] = {.lex_state = 54, .external_lex_state = 3},
  [304] = {.lex_state = 54, .external_lex_state = 3},
  [305] = {.lex_state = 54, .external_lex_state = 3},
  [306] = {.lex_state = 54, .external_lex_state = 3},
  [307] = {.lex_state = 54, .external_lex_state = 3},
  [308] = {.lex_state = 54, .external_lex_state = 3},
  [309] = {.lex_state = 54, .external_lex_state = 3},
  [310] = {.lex_state = 54, .external_lex_state = 3},
  [311] = {.lex_state = 54, .external_lex_state = 3},
  [312] = {.lex_state = 54, .external_lex_state = 3},
  [313] = {.lex_state = 54, .external_lex_state = 3},
  [314] = {.lex_state = 55},
  [315] = {.lex_state = 55},
  [316] = {.lex_state = 54, .external_lex_state = 3},
  [317] = {.lex_state = 55, .external_lex_state = 3},
  [318] = {.lex_state = 55, .external_lex_state = 3},
  [319] = {.lex_state = 55, .external_lex_state = 3},
  [320] = {.lex_state = 55, .external_lex_state = 3},
  [321] = {.lex_state = 64},
  [322] = {.lex_state = 55, .external_lex_state = 3},
  [323] = {.lex_state = 55, .external_lex_state = 3},
  [324] = {.lex_state = 55, .external_lex_state = 3},
  [325] = {.lex_state = 55, .external_lex_state = 3},
  [326] = {.lex_state = 55, .external_lex_state = 3},
  [327] = {.lex_state = 55, .external_lex_state = 3},
  [328] = {.lex_state = 55, .external_lex_state = 3},
  [329] = {.lex_state = 64},
  [330] = {.lex_state = 55, .external_lex_state = 3},
  [331] = {.lex_state = 64},
  [332] = {.lex_state = 55, .external_lex_state = 3},
  [333] = {.lex_state = 55, .external_lex_state = 3},
  [334] = {.lex_state = 55, .external_lex_state = 3},
  [335] = {.lex_state = 55, .external_lex_state = 3},
  [336] = {.lex_state = 55, .external_lex_state = 3},
  [337] = {.lex_state = 55, .external_lex_state = 3},
  [338] = {.lex_state = 55, .external_lex_state = 3},
  [339] = {.lex_state = 55, .external_lex_state = 3},
  [340] = {.lex_state = 55, .external_lex_state = 3},
  [341] = {.lex_state = 55, .external_lex_state = 3},
  [342] = {.lex_state = 55, .external_lex_state = 3},
  [343] = {.lex_state = 55, .external_lex_state = 3},
  [344] = {.lex_state = 55, .external_lex_state = 3},
  [345] = {.lex_state = 55, .external_lex_state = 3},
  [346] = {.lex_state = 55, .external_lex_state = 3},
  [347] = {.lex_state = 55, .external_lex_state = 3},
  [348] = {.lex_state = 55, .external_lex_state = 3},
  [349] = {.lex_state = 55, .external_lex_state = 3},
  [350] = {.lex_state = 55, .external_lex_state = 3},
  [351] = {.lex_state = 55, .external_lex_state = 3},
  [352] = {.lex_state = 55, .external_lex_state = 3},
  [353] = {.lex_state = 55, .external_lex_state = 3},
  [354] = {.lex_state = 55, .external_lex_state = 3},
  [355] = {.lex_state = 11, .external_lex_state = 5},
  [356] = {.lex_state = 11, .external_lex_state = 5},
  [357] = {.lex_state = 11, .external_lex_state = 5},
  [358] = {.lex_state = 11, .external_lex_state = 5},
  [359] = {.lex_state = 11, .external_lex_state = 5},
  [360] = {.lex_state = 11, .external_lex_state = 5},
  [361] = {.lex_state = 11, .external_lex_state = 5},
  [362] = {.lex_state = 11, .external_lex_state = 5},
  [363] = {.lex_state = 11, .external_lex_state = 5},
  [364] = {.lex_state = 60},
  [365] = {.lex_state = 11, .external_lex_state = 5},
  [366] = {.lex_state = 11, .external_lex_state = 5},
  [367] = {.lex_state = 11, .external_lex_state = 5},
  [368] = {.lex_state = 11, .external_lex_state = 5},
  [369] = {.lex_state = 11, .external_lex_state = 5},
  [370] = {.lex_state = 11, .external_lex_state = 5},
  [371] = {.lex_state = 63, .external_lex_state = 1},
  [372] = {.lex_state = 11, .external_lex_state = 3},
  [373] = {.lex_state = 11, .external_lex_state = 3},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 63, .external_lex_state = 2},
  [376] = {.lex_state = 11, .external_lex_state = 3},
  [377] = {.lex_state = 11, .external_lex_state = 3},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 11, .external_lex_state = 3},
  [380] = {.lex_state = 11, .external_lex_state = 3},
  [381] = {.lex_state = 11},
  [382] = {.lex_state = 63, .external_lex_state = 1},
  [383] = {.lex_state = 55, .external_lex_state = 3},
  [384] = {.lex_state = 11, .external_lex_state = 3},
  [385] = {.lex_state = 63, .external_lex_state = 1},
  [386] = {.lex_state = 11},
  [387] = {.lex_state = 11},
  [388] = {.lex_state = 11, .external_lex_state = 3},
  [389] = {.lex_state = 11, .external_lex_state = 3},
  [390] = {.lex_state = 11, .external_lex_state = 3},
  [391] = {.lex_state = 11, .external_lex_state = 3},
  [392] = {.lex_state = 11, .external_lex_state = 3},
  [393] = {.lex_state = 11, .external_lex_state = 3},
  [394] = {.lex_state = 11},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 11},
  [397] = {.lex_state = 11, .external_lex_state = 3},
  [398] = {.lex_state = 11, .external_lex_state = 3},
  [399] = {.lex_state = 63, .external_lex_state = 2},
  [400] = {.lex_state = 11, .external_lex_state = 3},
  [401] = {.lex_state = 11, .external_lex_state = 3},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 11, .external_lex_state = 3},
  [404] = {.lex_state = 63, .external_lex_state = 2},
  [405] = {.lex_state = 11, .external_lex_state = 3},
  [406] = {.lex_state = 55, .external_lex_state = 3},
  [407] = {.lex_state = 11, .external_lex_state = 3},
  [408] = {.lex_state = 11, .external_lex_state = 3},
  [409] = {.lex_state = 11, .external_lex_state = 3},
  [410] = {.lex_state = 11, .external_lex_state = 3},
  [411] = {.lex_state = 63, .external_lex_state = 2},
  [412] = {.lex_state = 11, .external_lex_state = 3},
  [413] = {.lex_state = 63, .external_lex_state = 1},
  [414] = {.lex_state = 11, .external_lex_state = 3},
  [415] = {.lex_state = 11, .external_lex_state = 3},
  [416] = {.lex_state = 63, .external_lex_state = 2},
  [417] = {.lex_state = 11, .external_lex_state = 3},
  [418] = {.lex_state = 55, .external_lex_state = 3},
  [419] = {.lex_state = 63, .external_lex_state = 1},
  [420] = {.lex_state = 63, .external_lex_state = 1},
  [421] = {.lex_state = 63, .external_lex_state = 2},
  [422] = {.lex_state = 11},
  [423] = {.lex_state = 63, .external_lex_state = 2},
  [424] = {.lex_state = 63, .external_lex_state = 2},
  [425] = {.lex_state = 11, .external_lex_state = 3},
  [426] = {.lex_state = 11},
  [427] = {.lex_state = 11, .external_lex_state = 3},
  [428] = {.lex_state = 11, .external_lex_state = 3},
  [429] = {.lex_state = 11, .external_lex_state = 3},
  [430] = {.lex_state = 63, .external_lex_state = 1},
  [431] = {.lex_state = 11},
  [432] = {.lex_state = 11, .external_lex_state = 3},
  [433] = {.lex_state = 11, .external_lex_state = 3},
  [434] = {.lex_state = 11},
  [435] = {.lex_state = 11, .external_lex_state = 3},
  [436] = {.lex_state = 11, .external_lex_state = 3},
  [437] = {.lex_state = 11, .external_lex_state = 3},
  [438] = {.lex_state = 11, .external_lex_state = 3},
  [439] = {.lex_state = 63, .external_lex_state = 2},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 63, .external_lex_state = 1},
  [442] = {.lex_state = 11, .external_lex_state = 3},
  [443] = {.lex_state = 11, .external_lex_state = 3},
  [444] = {.lex_state = 11, .external_lex_state = 3},
  [445] = {.lex_state = 63, .external_lex_state = 3},
  [446] = {.lex_state = 11},
  [447] = {.lex_state = 11},
  [448] = {.lex_state = 55},
  [449] = {.lex_state = 63, .external_lex_state = 1},
  [450] = {.lex_state = 11},
  [451] = {.lex_state = 63, .external_lex_state = 3},
  [452] = {.lex_state = 11},
  [453] = {.lex_state = 11},
  [454] = {.lex_state = 63, .external_lex_state = 3},
  [455] = {.lex_state = 11},
  [456] = {.lex_state = 63, .external_lex_state = 3},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 11},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 11},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 11},
  [463] = {.lex_state = 11},
  [464] = {.lex_state = 11},
  [465] = {.lex_state = 11},
  [466] = {.lex_state = 11},
  [467] = {.lex_state = 11},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 11, .external_lex_state = 3},
  [470] = {.lex_state = 63, .external_lex_state = 3},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 11},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 63, .external_lex_state = 3},
  [475] = {.lex_state = 63, .external_lex_state = 3},
  [476] = {.lex_state = 11},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 11},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 63, .external_lex_state = 3},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 63, .external_lex_state = 2},
  [485] = {.lex_state = 63, .external_lex_state = 2},
  [486] = {.lex_state = 63, .external_lex_state = 2},
  [487] = {.lex_state = 63, .external_lex_state = 2},
  [488] = {.lex_state = 64},
  [489] = {.lex_state = 63, .external_lex_state = 2},
  [490] = {.lex_state = 63, .external_lex_state = 2},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 63, .external_lex_state = 2},
  [493] = {.lex_state = 11, .external_lex_state = 3},
  [494] = {.lex_state = 63, .external_lex_state = 2},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 63, .external_lex_state = 2},
  [497] = {.lex_state = 63},
  [498] = {.lex_state = 63, .external_lex_state = 2},
  [499] = {.lex_state = 63},
  [500] = {.lex_state = 11, .external_lex_state = 3},
  [501] = {.lex_state = 63, .external_lex_state = 2},
  [502] = {.lex_state = 55},
  [503] = {.lex_state = 11, .external_lex_state = 3},
  [504] = {.lex_state = 63},
  [505] = {.lex_state = 63, .external_lex_state = 2},
  [506] = {.lex_state = 63, .external_lex_state = 2},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 63},
  [509] = {.lex_state = 63},
  [510] = {.lex_state = 50, .external_lex_state = 2},
  [511] = {.lex_state = 63},
  [512] = {.lex_state = 63},
  [513] = {.lex_state = 63},
  [514] = {.lex_state = 63},
  [515] = {.lex_state = 63},
  [516] = {.lex_state = 50, .external_lex_state = 2},
  [517] = {.lex_state = 63},
  [518] = {.lex_state = 53, .external_lex_state = 3},
  [519] = {.lex_state = 63},
  [520] = {.lex_state = 63},
  [521] = {.lex_state = 63},
  [522] = {.lex_state = 63},
  [523] = {.lex_state = 63},
  [524] = {.lex_state = 11, .external_lex_state = 5},
  [525] = {.lex_state = 53, .external_lex_state = 3},
  [526] = {.lex_state = 50, .external_lex_state = 2},
  [527] = {.lex_state = 53, .external_lex_state = 3},
  [528] = {.lex_state = 53, .external_lex_state = 3},
  [529] = {.lex_state = 63},
  [530] = {.lex_state = 11, .external_lex_state = 3},
  [531] = {.lex_state = 63},
  [532] = {.lex_state = 63},
  [533] = {.lex_state = 50, .external_lex_state = 2},
  [534] = {.lex_state = 63},
  [535] = {.lex_state = 63},
  [536] = {.lex_state = 63},
  [537] = {.lex_state = 63},
  [538] = {.lex_state = 63},
  [539] = {.lex_state = 54},
  [540] = {.lex_state = 53, .external_lex_state = 3},
  [541] = {.lex_state = 54},
  [542] = {.lex_state = 11, .external_lex_state = 3},
  [543] = {.lex_state = 11, .external_lex_state = 3},
  [544] = {.lex_state = 63},
  [545] = {.lex_state = 50, .external_lex_state = 2},
  [546] = {.lex_state = 63},
  [547] = {.lex_state = 50, .external_lex_state = 2},
  [548] = {.lex_state = 63},
  [549] = {.lex_state = 63},
  [550] = {.lex_state = 63},
  [551] = {.lex_state = 63},
  [552] = {.lex_state = 63},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 50, .external_lex_state = 2},
  [555] = {.lex_state = 50, .external_lex_state = 3},
  [556] = {.lex_state = 53},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 53},
  [559] = {.lex_state = 50, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 3},
  [561] = {.lex_state = 54},
  [562] = {.lex_state = 53},
  [563] = {.lex_state = 54},
  [564] = {.lex_state = 54},
  [565] = {.lex_state = 663, .external_lex_state = 5},
  [566] = {.lex_state = 50, .external_lex_state = 3},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 53},
  [570] = {.lex_state = 663, .external_lex_state = 5},
  [571] = {.lex_state = 54},
  [572] = {.lex_state = 50, .external_lex_state = 3},
  [573] = {.lex_state = 54},
  [574] = {.lex_state = 54},
  [575] = {.lex_state = 53},
  [576] = {.lex_state = 50, .external_lex_state = 3},
  [577] = {.lex_state = 53},
  [578] = {.lex_state = 53},
  [579] = {.lex_state = 54},
  [580] = {.lex_state = 53},
  [581] = {.lex_state = 53},
  [582] = {.lex_state = 53},
  [583] = {.lex_state = 53},
  [584] = {.lex_state = 663, .external_lex_state = 5},
  [585] = {.lex_state = 54},
  [586] = {.lex_state = 0, .external_lex_state = 3},
  [587] = {.lex_state = 663, .external_lex_state = 5},
  [588] = {.lex_state = 54},
  [589] = {.lex_state = 54},
  [590] = {.lex_state = 663, .external_lex_state = 5},
  [591] = {.lex_state = 53},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 53},
  [594] = {.lex_state = 53},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 53},
  [597] = {.lex_state = 54},
  [598] = {.lex_state = 54},
  [599] = {.lex_state = 53},
  [600] = {.lex_state = 50, .external_lex_state = 3},
  [601] = {.lex_state = 54},
  [602] = {.lex_state = 54},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 53},
  [605] = {.lex_state = 54},
  [606] = {.lex_state = 53},
  [607] = {.lex_state = 53},
  [608] = {.lex_state = 663, .external_lex_state = 5},
  [609] = {.lex_state = 54},
  [610] = {.lex_state = 663},
  [611] = {.lex_state = 0, .external_lex_state = 6},
  [612] = {.lex_state = 663},
  [613] = {.lex_state = 0, .external_lex_state = 6},
  [614] = {.lex_state = 65},
  [615] = {.lex_state = 663, .external_lex_state = 3},
  [616] = {.lex_state = 0, .external_lex_state = 6},
  [617] = {.lex_state = 61},
  [618] = {.lex_state = 65},
  [619] = {.lex_state = 0, .external_lex_state = 6},
  [620] = {.lex_state = 61},
  [621] = {.lex_state = 663, .external_lex_state = 5},
  [622] = {.lex_state = 54},
  [623] = {.lex_state = 0, .external_lex_state = 6},
  [624] = {.lex_state = 0, .external_lex_state = 3},
  [625] = {.lex_state = 0, .external_lex_state = 6},
  [626] = {.lex_state = 663},
  [627] = {.lex_state = 663},
  [628] = {.lex_state = 0, .external_lex_state = 6},
  [629] = {.lex_state = 0, .external_lex_state = 6},
  [630] = {.lex_state = 663, .external_lex_state = 3},
  [631] = {.lex_state = 663},
  [632] = {.lex_state = 663, .external_lex_state = 3},
  [633] = {.lex_state = 663},
  [634] = {.lex_state = 53},
  [635] = {.lex_state = 53},
  [636] = {.lex_state = 53},
  [637] = {.lex_state = 663},
  [638] = {.lex_state = 663},
  [639] = {.lex_state = 663},
  [640] = {.lex_state = 663, .external_lex_state = 3},
  [641] = {.lex_state = 0, .external_lex_state = 6},
  [642] = {.lex_state = 0, .external_lex_state = 6},
  [643] = {.lex_state = 53},
  [644] = {.lex_state = 663, .external_lex_state = 3},
  [645] = {.lex_state = 53},
  [646] = {.lex_state = 663},
  [647] = {.lex_state = 0, .external_lex_state = 3},
  [648] = {.lex_state = 0, .external_lex_state = 3},
  [649] = {.lex_state = 0, .external_lex_state = 3},
  [650] = {.lex_state = 0, .external_lex_state = 6},
  [651] = {.lex_state = 689},
  [652] = {.lex_state = 0, .external_lex_state = 3},
  [653] = {.lex_state = 0, .external_lex_state = 3},
  [654] = {.lex_state = 0, .external_lex_state = 6},
  [655] = {.lex_state = 0, .external_lex_state = 6},
  [656] = {.lex_state = 0, .external_lex_state = 3},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0, .external_lex_state = 6},
  [659] = {.lex_state = 0, .external_lex_state = 3},
  [660] = {.lex_state = 0, .external_lex_state = 3},
  [661] = {.lex_state = 142},
  [662] = {.lex_state = 0, .external_lex_state = 6},
  [663] = {.lex_state = 53},
  [664] = {.lex_state = 0, .external_lex_state = 3},
  [665] = {.lex_state = 0, .external_lex_state = 6},
  [666] = {.lex_state = 689},
  [667] = {.lex_state = 0, .external_lex_state = 3},
  [668] = {.lex_state = 0, .external_lex_state = 3},
  [669] = {.lex_state = 689},
  [670] = {.lex_state = 0, .external_lex_state = 3},
  [671] = {.lex_state = 0, .external_lex_state = 3},
  [672] = {.lex_state = 0, .external_lex_state = 6},
  [673] = {.lex_state = 51},
  [674] = {.lex_state = 0, .external_lex_state = 6},
  [675] = {.lex_state = 152},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0, .external_lex_state = 3},
  [678] = {.lex_state = 0, .external_lex_state = 3},
  [679] = {.lex_state = 0, .external_lex_state = 6},
  [680] = {.lex_state = 689},
  [681] = {.lex_state = 0, .external_lex_state = 3},
  [682] = {.lex_state = 0, .external_lex_state = 6},
  [683] = {.lex_state = 0, .external_lex_state = 3},
  [684] = {.lex_state = 0, .external_lex_state = 3},
  [685] = {.lex_state = 0, .external_lex_state = 6},
  [686] = {.lex_state = 0, .external_lex_state = 6},
  [687] = {.lex_state = 0, .external_lex_state = 3},
  [688] = {.lex_state = 0, .external_lex_state = 3},
  [689] = {.lex_state = 0, .external_lex_state = 3},
  [690] = {.lex_state = 0, .external_lex_state = 3},
  [691] = {.lex_state = 0, .external_lex_state = 3},
  [692] = {.lex_state = 0, .external_lex_state = 3},
  [693] = {.lex_state = 52},
  [694] = {.lex_state = 52},
  [695] = {.lex_state = 0, .external_lex_state = 3},
  [696] = {.lex_state = 0, .external_lex_state = 3},
  [697] = {.lex_state = 0, .external_lex_state = 3},
  [698] = {.lex_state = 0, .external_lex_state = 3},
  [699] = {.lex_state = 0, .external_lex_state = 3},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0, .external_lex_state = 3},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0, .external_lex_state = 3},
  [706] = {.lex_state = 0, .external_lex_state = 3},
  [707] = {.lex_state = 0, .external_lex_state = 3},
  [708] = {.lex_state = 0, .external_lex_state = 3},
  [709] = {.lex_state = 0, .external_lex_state = 6},
  [710] = {.lex_state = 0, .external_lex_state = 6},
  [711] = {.lex_state = 0, .external_lex_state = 6},
  [712] = {.lex_state = 0, .external_lex_state = 6},
  [713] = {.lex_state = 0, .external_lex_state = 3},
  [714] = {.lex_state = 0, .external_lex_state = 3},
  [715] = {.lex_state = 0, .external_lex_state = 6},
  [716] = {.lex_state = 0, .external_lex_state = 6},
  [717] = {.lex_state = 0, .external_lex_state = 6},
  [718] = {.lex_state = 0, .external_lex_state = 6},
  [719] = {.lex_state = 689},
  [720] = {.lex_state = 0, .external_lex_state = 6},
  [721] = {.lex_state = 0, .external_lex_state = 6},
  [722] = {.lex_state = 0, .external_lex_state = 6},
  [723] = {.lex_state = 0, .external_lex_state = 6},
  [724] = {.lex_state = 0, .external_lex_state = 3},
  [725] = {.lex_state = 0, .external_lex_state = 6},
  [726] = {.lex_state = 0, .external_lex_state = 6},
  [727] = {.lex_state = 0, .external_lex_state = 6},
  [728] = {.lex_state = 0, .external_lex_state = 6},
  [729] = {.lex_state = 0, .external_lex_state = 6},
  [730] = {.lex_state = 0, .external_lex_state = 6},
  [731] = {.lex_state = 0, .external_lex_state = 6},
  [732] = {.lex_state = 0, .external_lex_state = 6},
  [733] = {.lex_state = 53},
  [734] = {.lex_state = 0, .external_lex_state = 3},
  [735] = {.lex_state = 0, .external_lex_state = 3},
  [736] = {.lex_state = 0, .external_lex_state = 3},
  [737] = {.lex_state = 53},
  [738] = {.lex_state = 0, .external_lex_state = 3},
  [739] = {.lex_state = 0, .external_lex_state = 3},
  [740] = {.lex_state = 0, .external_lex_state = 3},
  [741] = {.lex_state = 0, .external_lex_state = 3},
  [742] = {.lex_state = 0, .external_lex_state = 3},
  [743] = {.lex_state = 0, .external_lex_state = 3},
  [744] = {.lex_state = 0, .external_lex_state = 3},
  [745] = {.lex_state = 0, .external_lex_state = 3},
  [746] = {.lex_state = 0, .external_lex_state = 3},
  [747] = {.lex_state = 0, .external_lex_state = 3},
  [748] = {.lex_state = 0, .external_lex_state = 3},
  [749] = {.lex_state = 0, .external_lex_state = 3},
  [750] = {.lex_state = 0, .external_lex_state = 3},
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
    [sym_source_file] = STATE(657),
    [sym_doctype] = STATE(48),
    [sym_pipe] = STATE(48),
    [sym_conditional] = STATE(48),
    [sym_case] = STATE(48),
    [sym_unescaped_buffered_code] = STATE(48),
    [sym_buffered_code] = STATE(48),
    [sym_script_block] = STATE(48),
    [sym_tag] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__comment] = STATE(288),
    [sym__comment_not_first_line] = STATE(288),
    [sym_unbuffered_code] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
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
  [0] = 19,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [74] = 20,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [150] = 20,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [226] = 19,
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
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [299] = 19,
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
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [372] = 19,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(223), 1,
      sym__newline,
    ACTIONS(225), 1,
      sym__dedent,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [444] = 19,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(223), 1,
      sym__newline,
    ACTIONS(227), 1,
      sym__dedent,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [516] = 18,
    ACTIONS(50), 1,
      anon_sym_case,
    ACTIONS(229), 1,
      anon_sym_doctype,
    ACTIONS(232), 1,
      anon_sym_PIPE,
    ACTIONS(238), 1,
      anon_sym_elseif,
    ACTIONS(241), 1,
      anon_sym_else,
    ACTIONS(244), 1,
      anon_sym_BANG_EQ,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_script_DOT,
    ACTIONS(253), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(265), 1,
      anon_sym_DASH,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(33), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(235), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(262), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [586] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [655] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 12,
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
  [724] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(30), 12,
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
  [793] = 18,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [862] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(30), 12,
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
  [931] = 18,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1000] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 12,
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
  [1069] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1138] = 18,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1207] = 18,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1276] = 18,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1345] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(319), 1,
      sym__dedent,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(35), 12,
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
  [1414] = 18,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1483] = 18,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1552] = 18,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1621] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1690] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1759] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1828] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(30), 12,
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
  [1897] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1966] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(329), 1,
      sym__dedent,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(35), 12,
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
  [2035] = 18,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2104] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 12,
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
  [2173] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 12,
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
  [2242] = 18,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2311] = 18,
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
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(35), 12,
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
  [2380] = 18,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(30), 12,
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
  [2449] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2518] = 18,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2587] = 18,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2656] = 18,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2725] = 17,
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
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2791] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2857] = 17,
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
    STATE(136), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2923] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(30), 12,
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
  [2989] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_elseif,
    ACTIONS(205), 1,
      anon_sym_else,
    ACTIONS(207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_script_DOT,
    ACTIONS(213), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(217), 1,
      sym_tag_name,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(244), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [3055] = 17,
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
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(160), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [3121] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(275), 1,
      anon_sym_doctype,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      anon_sym_elseif,
    ACTIONS(283), 1,
      anon_sym_else,
    ACTIONS(285), 1,
      anon_sym_BANG_EQ,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_script_DOT,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(297), 1,
      sym_tag_name,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(260), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 12,
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
  [3187] = 17,
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
    STATE(288), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(49), 11,
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
  [3252] = 17,
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
    STATE(288), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(49), 11,
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
  [3317] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(426), 1,
      anon_sym_default,
    STATE(603), 1,
      sym__when_keyword,
    STATE(50), 2,
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
  [3354] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(435), 1,
      anon_sym_default,
    STATE(603), 1,
      sym__when_keyword,
    STATE(50), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(431), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(429), 12,
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
  [3391] = 4,
    ACTIONS(441), 1,
      sym__indent,
    STATE(99), 1,
      sym_children,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 12,
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
  [3423] = 4,
    ACTIONS(447), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(445), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 12,
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
  [3455] = 4,
    ACTIONS(449), 1,
      sym__indent,
    STATE(99), 1,
      sym_children,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 12,
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
  [3487] = 4,
    ACTIONS(441), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 12,
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
  [3519] = 4,
    ACTIONS(459), 1,
      sym__un_delimited_javascript_line,
    STATE(66), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(455), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(457), 18,
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
  [3551] = 4,
    ACTIONS(441), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
    ACTIONS(463), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 12,
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
  [3583] = 4,
    ACTIONS(469), 1,
      sym__comment_content,
    STATE(58), 1,
      aux_sym__comment_repeat1,
    ACTIONS(465), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(467), 18,
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
  [3615] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(472), 1,
      anon_sym_default,
    STATE(560), 1,
      sym__when_keyword,
    STATE(59), 2,
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
  [3651] = 4,
    ACTIONS(479), 1,
      sym__indent,
    STATE(117), 1,
      sym_children,
    ACTIONS(477), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 12,
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
  [3683] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(481), 1,
      anon_sym_default,
    STATE(560), 1,
      sym__when_keyword,
    STATE(59), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(431), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(429), 11,
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
  [3719] = 4,
    ACTIONS(441), 1,
      sym__indent,
    STATE(116), 1,
      sym_children,
    ACTIONS(485), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 12,
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
  [3751] = 4,
    ACTIONS(491), 1,
      sym__comment_content,
    STATE(58), 1,
      aux_sym__comment_repeat1,
    ACTIONS(487), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(489), 18,
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
  [3783] = 4,
    ACTIONS(441), 1,
      sym__indent,
    STATE(132), 1,
      sym_children,
    ACTIONS(495), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(493), 12,
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
  [3815] = 4,
    ACTIONS(497), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 12,
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
  [3847] = 4,
    ACTIONS(503), 1,
      sym__un_delimited_javascript_line,
    STATE(66), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(499), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(501), 18,
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
  [3879] = 4,
    ACTIONS(506), 1,
      sym__comment_content,
    STATE(77), 1,
      aux_sym__comment_repeat1,
    ACTIONS(487), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(489), 18,
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
  [3910] = 4,
    ACTIONS(508), 1,
      sym__indent,
    STATE(170), 1,
      sym_children,
    ACTIONS(445), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 11,
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
  [3941] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(180), 1,
      sym_children,
    ACTIONS(495), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(493), 11,
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
  [3972] = 4,
    ACTIONS(512), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
    ACTIONS(463), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4003] = 4,
    ACTIONS(512), 1,
      sym__indent,
    STATE(158), 1,
      sym_children,
    ACTIONS(485), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4034] = 4,
    ACTIONS(512), 1,
      sym__indent,
    STATE(145), 1,
      sym_children,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4065] = 5,
    ACTIONS(512), 1,
      sym__indent,
    ACTIONS(514), 1,
      sym__dedent,
    STATE(178), 1,
      sym_children,
    ACTIONS(495), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(493), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4098] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(516), 1,
      anon_sym_default,
    STATE(586), 1,
      sym__when_keyword,
    STATE(74), 2,
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
  [4133] = 2,
    ACTIONS(465), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(467), 19,
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
  [4160] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(142), 1,
      sym_children,
    ACTIONS(485), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 11,
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
  [4191] = 4,
    ACTIONS(519), 1,
      sym__comment_content,
    STATE(77), 1,
      aux_sym__comment_repeat1,
    ACTIONS(465), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(467), 18,
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
  [4222] = 4,
    ACTIONS(522), 1,
      sym__indent,
    STATE(150), 1,
      sym_children,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4253] = 2,
    ACTIONS(524), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(526), 19,
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
  [4280] = 4,
    ACTIONS(512), 1,
      sym__indent,
    STATE(150), 1,
      sym_children,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4311] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(149), 1,
      sym_children,
    ACTIONS(463), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 11,
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
  [4342] = 4,
    ACTIONS(528), 1,
      sym__indent,
    STATE(168), 1,
      sym_children,
    ACTIONS(477), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4373] = 3,
    ACTIONS(534), 1,
      sym__indent,
    ACTIONS(532), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 12,
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
  [4402] = 4,
    ACTIONS(536), 1,
      sym__indent,
    STATE(153), 1,
      sym_children,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
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
  [4433] = 4,
    ACTIONS(538), 1,
      sym__indent,
    STATE(176), 1,
      sym_children,
    ACTIONS(445), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4464] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(540), 1,
      anon_sym_default,
    STATE(586), 1,
      sym__when_keyword,
    STATE(74), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(431), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(429), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4499] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(153), 1,
      sym_children,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
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
  [4530] = 4,
    ACTIONS(542), 1,
      sym__indent,
    STATE(159), 1,
      sym_children,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
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
  [4561] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(159), 1,
      sym_children,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
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
  [4592] = 4,
    ACTIONS(544), 1,
      sym__indent,
    STATE(165), 1,
      sym_children,
    ACTIONS(477), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 11,
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
  [4623] = 3,
    ACTIONS(550), 1,
      sym__indent,
    ACTIONS(548), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(546), 12,
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
  [4652] = 4,
    ACTIONS(552), 1,
      sym__indent,
    STATE(145), 1,
      sym_children,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4683] = 4,
    ACTIONS(554), 1,
      sym__un_delimited_javascript_line,
    STATE(93), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(499), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(501), 18,
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
  [4714] = 4,
    ACTIONS(557), 1,
      sym__un_delimited_javascript_line,
    STATE(93), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(455), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(457), 18,
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
  [4745] = 2,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 12,
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
  [4771] = 2,
    ACTIONS(561), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(559), 12,
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
  [4797] = 2,
    ACTIONS(565), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(563), 12,
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
  [4823] = 2,
    ACTIONS(569), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(567), 12,
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
  [4849] = 2,
    ACTIONS(463), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 12,
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
  [4875] = 2,
    ACTIONS(573), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 12,
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
  [4901] = 4,
    ACTIONS(575), 1,
      sym__indent,
    STATE(218), 1,
      sym_children,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 12,
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
  [4931] = 2,
    ACTIONS(524), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(526), 19,
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
  [4957] = 2,
    ACTIONS(579), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(577), 12,
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
  [4983] = 2,
    ACTIONS(583), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 12,
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
  [5009] = 2,
    ACTIONS(587), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(585), 12,
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
  [5035] = 4,
    ACTIONS(589), 1,
      sym__indent,
    STATE(218), 1,
      sym_children,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 12,
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
  [5065] = 3,
    ACTIONS(595), 1,
      sym__dedent,
    ACTIONS(593), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(591), 11,
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
  [5093] = 2,
    ACTIONS(485), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 12,
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
  [5119] = 4,
    ACTIONS(597), 1,
      sym__indent,
    STATE(207), 1,
      sym_children,
    ACTIONS(477), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 12,
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
  [5149] = 4,
    ACTIONS(599), 1,
      sym__indent,
    STATE(239), 1,
      sym_children,
    ACTIONS(445), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 12,
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
  [5179] = 2,
    ACTIONS(603), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(601), 12,
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
  [5205] = 2,
    ACTIONS(607), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(605), 12,
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
  [5231] = 3,
    ACTIONS(609), 1,
      sym__indent,
    ACTIONS(532), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 11,
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
  [5259] = 2,
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
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5285] = 2,
    ACTIONS(617), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(615), 12,
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
  [5311] = 2,
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
  [5337] = 2,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 12,
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
  [5363] = 2,
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
  [5389] = 4,
    ACTIONS(627), 1,
      sym__comment_content,
    STATE(125), 1,
      aux_sym__comment_repeat1,
    ACTIONS(487), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(489), 16,
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
  [5419] = 4,
    ACTIONS(589), 1,
      sym__indent,
    STATE(228), 1,
      sym_children,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 12,
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
  [5449] = 2,
    ACTIONS(477), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 12,
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
  [5475] = 3,
    ACTIONS(629), 1,
      sym__indent,
    ACTIONS(548), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(546), 11,
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
  [5503] = 4,
    ACTIONS(631), 1,
      sym__indent,
    STATE(228), 1,
      sym_children,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 12,
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
  [5533] = 3,
    ACTIONS(633), 1,
      sym__indent,
    ACTIONS(532), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5561] = 4,
    ACTIONS(635), 1,
      sym__comment_content,
    STATE(125), 1,
      aux_sym__comment_repeat1,
    ACTIONS(465), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(467), 16,
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
  [5591] = 4,
    ACTIONS(638), 1,
      sym__un_delimited_javascript_line,
    STATE(130), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(455), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(457), 16,
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
  [5621] = 2,
    ACTIONS(495), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(493), 12,
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
  [5647] = 2,
    ACTIONS(445), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 12,
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
  [5673] = 4,
    ACTIONS(589), 1,
      sym__indent,
    STATE(236), 1,
      sym_children,
    ACTIONS(463), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 12,
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
  [5703] = 4,
    ACTIONS(640), 1,
      sym__un_delimited_javascript_line,
    STATE(130), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(499), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(501), 16,
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
  [5733] = 2,
    ACTIONS(465), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(467), 19,
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
  [5759] = 2,
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
  [5785] = 3,
    ACTIONS(651), 1,
      sym__dedent,
    ACTIONS(649), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(647), 11,
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
  [5813] = 2,
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
    ACTIONS(653), 12,
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
  [5839] = 4,
    ACTIONS(589), 1,
      sym__indent,
    STATE(203), 1,
      sym_children,
    ACTIONS(485), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 12,
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
  [5869] = 2,
    ACTIONS(659), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(657), 12,
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
  [5895] = 2,
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
  [5921] = 2,
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
  [5947] = 2,
    ACTIONS(671), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(669), 12,
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
  [5973] = 4,
    ACTIONS(673), 1,
      sym__indent,
    STATE(250), 1,
      sym_children,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
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
  [6002] = 2,
    ACTIONS(485), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6027] = 2,
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
  [6052] = 4,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(143), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(499), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(501), 16,
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
  [6081] = 2,
    ACTIONS(569), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(567), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6106] = 2,
    ACTIONS(463), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6131] = 2,
    ACTIONS(495), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(493), 11,
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
  [6156] = 4,
    ACTIONS(678), 1,
      sym__un_delimited_javascript_line,
    STATE(143), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(455), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(457), 16,
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
  [6185] = 2,
    ACTIONS(617), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(615), 11,
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
  [6210] = 2,
    ACTIONS(485), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 11,
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
  [6235] = 2,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6260] = 2,
    ACTIONS(569), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(567), 11,
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
  [6285] = 4,
    ACTIONS(680), 1,
      sym__un_delimited_javascript_line,
    STATE(175), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(455), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(457), 16,
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
  [6314] = 2,
    ACTIONS(463), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 11,
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
  [6339] = 2,
    ACTIONS(573), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 11,
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
  [6364] = 2,
    ACTIONS(617), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(615), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6389] = 4,
    ACTIONS(682), 1,
      sym__comment_content,
    STATE(199), 1,
      aux_sym__comment_repeat1,
    ACTIONS(487), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(489), 16,
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
  [6418] = 3,
    ACTIONS(514), 1,
      sym__dedent,
    ACTIONS(495), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(493), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6445] = 2,
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
  [6470] = 2,
    ACTIONS(439), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
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
  [6495] = 2,
    ACTIONS(659), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(657), 11,
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
  [6520] = 2,
    ACTIONS(603), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(601), 11,
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
  [6545] = 2,
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
  [6570] = 2,
    ACTIONS(465), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(467), 17,
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
  [6595] = 2,
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
  [6620] = 2,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
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
  [6645] = 2,
    ACTIONS(671), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(669), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6670] = 2,
    ACTIONS(607), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(605), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6695] = 2,
    ACTIONS(453), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6720] = 2,
    ACTIONS(587), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(585), 11,
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
  [6745] = 2,
    ACTIONS(477), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 11,
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
  [6770] = 2,
    ACTIONS(603), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(601), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6795] = 2,
    ACTIONS(445), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 11,
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
  [6820] = 2,
    ACTIONS(607), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(605), 11,
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
  [6845] = 2,
    ACTIONS(579), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(577), 11,
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
  [6870] = 4,
    ACTIONS(684), 1,
      sym__un_delimited_javascript_line,
    STATE(175), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(499), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(501), 16,
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
  [6899] = 2,
    ACTIONS(477), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 11,
      sym__dedent,
      ts_builtin_sym_end,
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
    ACTIONS(671), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(669), 11,
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
  [6949] = 2,
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
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6974] = 2,
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
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6999] = 2,
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
  [7024] = 2,
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
  [7049] = 4,
    ACTIONS(687), 1,
      sym__indent,
    STATE(255), 1,
      sym_children,
    ACTIONS(485), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 11,
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
  [7078] = 2,
    ACTIONS(445), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7103] = 3,
    ACTIONS(689), 1,
      sym__indent,
    ACTIONS(532), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 12,
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
  [7130] = 4,
    ACTIONS(687), 1,
      sym__indent,
    STATE(248), 1,
      sym_children,
    ACTIONS(463), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 11,
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
  [7159] = 3,
    ACTIONS(691), 1,
      sym__dedent,
    ACTIONS(593), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(591), 10,
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
  [7186] = 2,
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
  [7211] = 2,
    ACTIONS(573), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7236] = 4,
    ACTIONS(687), 1,
      sym__indent,
    STATE(250), 1,
      sym_children,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
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
  [7265] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(254), 1,
      sym_children,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
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
  [7294] = 4,
    ACTIONS(687), 1,
      sym__indent,
    STATE(254), 1,
      sym_children,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
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
  [7323] = 4,
    ACTIONS(695), 1,
      sym__indent,
    STATE(256), 1,
      sym_children,
    ACTIONS(477), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 11,
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
  [7352] = 2,
    ACTIONS(583), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 11,
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
  [7377] = 2,
    ACTIONS(524), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(526), 17,
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
  [7402] = 4,
    ACTIONS(697), 1,
      sym__indent,
    STATE(258), 1,
      sym_children,
    ACTIONS(445), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 11,
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
  [7431] = 2,
    ACTIONS(565), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(563), 11,
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
  [7456] = 3,
    ACTIONS(699), 1,
      sym__dedent,
    ACTIONS(649), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(647), 10,
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
  [7483] = 3,
    ACTIONS(701), 1,
      sym__indent,
    ACTIONS(548), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(546), 12,
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
  [7510] = 4,
    ACTIONS(703), 1,
      sym__comment_content,
    STATE(199), 1,
      aux_sym__comment_repeat1,
    ACTIONS(465), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(467), 16,
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
  [7539] = 2,
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
    ACTIONS(611), 11,
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
  [7564] = 2,
    ACTIONS(561), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(559), 11,
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
  [7589] = 4,
    ACTIONS(706), 1,
      sym__indent,
    STATE(282), 1,
      sym_children,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7617] = 2,
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
  [7641] = 3,
    ACTIONS(708), 1,
      sym__dedent,
    ACTIONS(593), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(591), 11,
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
  [7667] = 2,
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
  [7691] = 2,
    ACTIONS(465), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(467), 17,
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
  [7715] = 2,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 12,
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
  [7739] = 2,
    ACTIONS(583), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 12,
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
  [7763] = 2,
    ACTIONS(603), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(601), 12,
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
  [7787] = 2,
    ACTIONS(524), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(526), 17,
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
  [7811] = 4,
    ACTIONS(710), 1,
      sym__indent,
    STATE(282), 1,
      sym_children,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7839] = 2,
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
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7863] = 4,
    ACTIONS(712), 1,
      sym__indent,
    STATE(279), 1,
      sym_children,
    ACTIONS(445), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7891] = 2,
    ACTIONS(561), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(559), 12,
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
  [7915] = 4,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(714), 1,
      sym__comment_content,
    STATE(215), 1,
      aux_sym__comment_repeat1,
    ACTIONS(467), 16,
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
  [7943] = 3,
    ACTIONS(717), 1,
      sym__indent,
    ACTIONS(532), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7969] = 4,
    ACTIONS(719), 1,
      sym__indent,
    STATE(290), 1,
      sym_children,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7997] = 2,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 12,
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
  [8021] = 2,
    ACTIONS(524), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(526), 17,
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
  [8045] = 2,
    ACTIONS(579), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(577), 12,
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
  [8069] = 2,
    ACTIONS(587), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(585), 12,
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
  [8093] = 3,
    ACTIONS(721), 1,
      sym__indent,
    ACTIONS(532), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 11,
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
  [8119] = 3,
    ACTIONS(723), 1,
      sym__dedent,
    ACTIONS(649), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(647), 11,
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
  [8145] = 4,
    ACTIONS(710), 1,
      sym__indent,
    STATE(298), 1,
      sym_children,
    ACTIONS(463), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8173] = 2,
    ACTIONS(445), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 12,
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
  [8197] = 4,
    ACTIONS(710), 1,
      sym__indent,
    STATE(290), 1,
      sym_children,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8225] = 4,
    ACTIONS(725), 1,
      sym__indent,
    ACTIONS(727), 1,
      sym__dedent,
    ACTIONS(532), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(530), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8253] = 2,
    ACTIONS(463), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 12,
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
  [8277] = 2,
    ACTIONS(569), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(567), 12,
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
  [8301] = 2,
    ACTIONS(731), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(729), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8325] = 2,
    ACTIONS(607), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(605), 12,
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
  [8349] = 2,
    ACTIONS(671), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(669), 12,
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
  [8373] = 2,
    ACTIONS(565), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(563), 12,
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
  [8397] = 3,
    ACTIONS(733), 1,
      sym__indent,
    ACTIONS(548), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(546), 11,
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
  [8423] = 2,
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
  [8447] = 2,
    ACTIONS(485), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 12,
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
  [8471] = 4,
    ACTIONS(735), 1,
      sym__indent,
    STATE(286), 1,
      sym_children,
    ACTIONS(477), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8499] = 2,
    ACTIONS(617), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(615), 12,
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
  [8523] = 2,
    ACTIONS(477), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 12,
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
  [8547] = 2,
    ACTIONS(573), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 12,
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
  [8571] = 2,
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
  [8595] = 4,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(737), 1,
      sym__comment_content,
    STATE(215), 1,
      aux_sym__comment_repeat1,
    ACTIONS(489), 16,
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
  [8623] = 4,
    ACTIONS(710), 1,
      sym__indent,
    STATE(297), 1,
      sym_children,
    ACTIONS(485), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8651] = 2,
    ACTIONS(659), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(657), 12,
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
  [8675] = 2,
    ACTIONS(573), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8698] = 3,
    ACTIONS(739), 1,
      sym__indent,
    ACTIONS(548), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(546), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8723] = 2,
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
  [8746] = 2,
    ACTIONS(485), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 11,
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
  [8769] = 2,
    ACTIONS(569), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(567), 11,
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
  [8792] = 2,
    ACTIONS(463), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 11,
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
  [8815] = 2,
    ACTIONS(587), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(585), 11,
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
  [8838] = 2,
    ACTIONS(579), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(577), 11,
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
  [8861] = 2,
    ACTIONS(617), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(615), 11,
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
  [8884] = 2,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 11,
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
  [8907] = 2,
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
  [8930] = 2,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 11,
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
  [8953] = 2,
    ACTIONS(603), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(601), 11,
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
  [8976] = 2,
    ACTIONS(477), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 11,
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
  [8999] = 3,
    ACTIONS(741), 1,
      sym__dedent,
    ACTIONS(649), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(647), 10,
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
  [9024] = 2,
    ACTIONS(659), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(657), 11,
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
  [9047] = 3,
    ACTIONS(743), 1,
      sym__dedent,
    ACTIONS(593), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(591), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9072] = 2,
    ACTIONS(445), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 11,
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
  [9095] = 3,
    ACTIONS(745), 1,
      sym__dedent,
    ACTIONS(593), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(591), 10,
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
  [9120] = 2,
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
  [9143] = 2,
    ACTIONS(583), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 11,
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
  [9166] = 2,
    ACTIONS(613), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 11,
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
  [9189] = 2,
    ACTIONS(561), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(559), 11,
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
  [9212] = 2,
    ACTIONS(573), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 11,
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
  [9235] = 3,
    ACTIONS(747), 1,
      sym__dedent,
    ACTIONS(573), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9260] = 3,
    ACTIONS(749), 1,
      sym__dedent,
    ACTIONS(649), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(647), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9285] = 2,
    ACTIONS(607), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(605), 11,
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
  [9308] = 2,
    ACTIONS(671), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(669), 11,
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
  [9331] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 17,
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
  [9354] = 2,
    ACTIONS(565), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(563), 11,
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
  [9377] = 2,
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
  [9400] = 2,
    ACTIONS(617), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(615), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9422] = 2,
    ACTIONS(753), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(751), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9444] = 2,
    ACTIONS(613), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9466] = 2,
    ACTIONS(477), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(475), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9488] = 2,
    ACTIONS(561), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(559), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9510] = 2,
    ACTIONS(579), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(577), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9532] = 2,
    ACTIONS(439), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(437), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9554] = 2,
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
  [9576] = 2,
    ACTIONS(583), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9598] = 2,
    ACTIONS(603), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(601), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9620] = 2,
    ACTIONS(453), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(451), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9642] = 2,
    ACTIONS(587), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(585), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9664] = 2,
    ACTIONS(659), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(657), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9686] = 2,
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
  [9708] = 2,
    ACTIONS(463), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(461), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9730] = 2,
    ACTIONS(569), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(567), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9752] = 2,
    ACTIONS(445), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(443), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9774] = 2,
    ACTIONS(607), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(605), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9796] = 2,
    ACTIONS(565), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(563), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9818] = 2,
    ACTIONS(757), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(755), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9840] = 2,
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
  [9862] = 2,
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
  [9884] = 2,
    ACTIONS(485), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(483), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9906] = 2,
    ACTIONS(671), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(669), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9928] = 12,
    ACTIONS(759), 1,
      anon_sym_COLON,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(765), 1,
      anon_sym_SLASH,
    ACTIONS(767), 1,
      anon_sym_,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(775), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(320), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(485), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9968] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(785), 1,
      anon_sym_,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(791), 1,
      sym__newline,
    STATE(313), 1,
      aux_sym_tag_repeat1,
    STATE(333), 1,
      sym_attributes,
    ACTIONS(789), 2,
      sym_class,
      sym_id,
    STATE(128), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10008] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(793), 1,
      anon_sym_COLON,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(799), 1,
      anon_sym_SLASH,
    ACTIONS(801), 1,
      anon_sym_,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(807), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_tag_repeat1,
    STATE(318), 1,
      sym_attributes,
    ACTIONS(805), 2,
      sym_class,
      sym_id,
    STATE(292), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10048] = 12,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_COLON,
    ACTIONS(811), 1,
      anon_sym_SLASH,
    ACTIONS(813), 1,
      anon_sym_,
    ACTIONS(817), 1,
      sym__newline,
    STATE(300), 1,
      aux_sym_tag_repeat1,
    STATE(317), 1,
      sym_attributes,
    ACTIONS(815), 2,
      sym_class,
      sym_id,
    STATE(505), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10088] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(825), 1,
      anon_sym_SLASH,
    ACTIONS(827), 1,
      anon_sym_,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(319), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(258), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10128] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(839), 1,
      anon_sym_SLASH,
    ACTIONS(841), 1,
      anon_sym_,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(845), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(328), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(176), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10168] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(847), 1,
      anon_sym_COLON,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(853), 1,
      anon_sym_SLASH,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(861), 1,
      sym__newline,
    STATE(309), 1,
      aux_sym_tag_repeat1,
    STATE(326), 1,
      sym_attributes,
    ACTIONS(859), 2,
      sym_class,
      sym_id,
    STATE(172), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10208] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(863), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(871), 1,
      anon_sym_,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(875), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(332), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(239), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10248] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(877), 1,
      anon_sym_COLON,
    ACTIONS(879), 1,
      anon_sym_SLASH,
    ACTIONS(881), 1,
      anon_sym_,
    ACTIONS(885), 1,
      sym__newline,
    STATE(305), 1,
      aux_sym_tag_repeat1,
    STATE(323), 1,
      sym_attributes,
    ACTIONS(883), 2,
      sym_class,
      sym_id,
    STATE(183), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10288] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_SLASH,
    ACTIONS(891), 1,
      anon_sym_,
    ACTIONS(893), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(322), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(170), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10328] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(895), 1,
      anon_sym_COLON,
    ACTIONS(897), 1,
      anon_sym_SLASH,
    ACTIONS(899), 1,
      anon_sym_,
    ACTIONS(903), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym_tag_repeat1,
    STATE(324), 1,
      sym_attributes,
    ACTIONS(901), 2,
      sym_class,
      sym_id,
    STATE(225), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10368] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON,
    ACTIONS(907), 1,
      anon_sym_SLASH,
    ACTIONS(909), 1,
      anon_sym_,
    ACTIONS(913), 1,
      sym__newline,
    STATE(304), 1,
      aux_sym_tag_repeat1,
    STATE(330), 1,
      sym_attributes,
    ACTIONS(911), 2,
      sym_class,
      sym_id,
    STATE(262), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10408] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(915), 1,
      anon_sym_COLON,
    ACTIONS(917), 1,
      anon_sym_SLASH,
    ACTIONS(919), 1,
      anon_sym_,
    ACTIONS(921), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(325), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(279), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10448] = 12,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(925), 1,
      anon_sym_SLASH,
    ACTIONS(927), 1,
      anon_sym_,
    ACTIONS(929), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(327), 1,
      sym_attributes,
    ACTIONS(773), 2,
      sym_class,
      sym_id,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10488] = 6,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(933), 1,
      anon_sym_,
    ACTIONS(935), 1,
      anon_sym_DOT,
    STATE(315), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(937), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(564), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [10513] = 6,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(939), 1,
      anon_sym_,
    STATE(448), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(941), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(597), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [10538] = 4,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    ACTIONS(945), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(947), 2,
      sym_class,
      sym_id,
    ACTIONS(943), 6,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [10558] = 8,
    ACTIONS(759), 1,
      anon_sym_COLON,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(765), 1,
      anon_sym_SLASH,
    ACTIONS(767), 1,
      anon_sym_,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(775), 1,
      sym__newline,
    STATE(485), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10585] = 8,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(915), 1,
      anon_sym_COLON,
    ACTIONS(917), 1,
      anon_sym_SLASH,
    ACTIONS(919), 1,
      anon_sym_,
    ACTIONS(921), 1,
      sym__newline,
    STATE(279), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10612] = 8,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(950), 1,
      anon_sym_COLON,
    ACTIONS(952), 1,
      anon_sym_SLASH,
    ACTIONS(954), 1,
      anon_sym_,
    ACTIONS(956), 1,
      sym__newline,
    STATE(256), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10639] = 8,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(958), 1,
      anon_sym_COLON,
    ACTIONS(960), 1,
      anon_sym_SLASH,
    ACTIONS(962), 1,
      anon_sym_,
    ACTIONS(964), 1,
      sym__newline,
    STATE(506), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10666] = 7,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    ACTIONS(970), 1,
      sym_attribute_name,
    STATE(329), 1,
      aux_sym_attributes_repeat1,
    STATE(541), 1,
      sym_angular_attribute_name,
    STATE(563), 1,
      sym_attribute,
    STATE(561), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(968), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [10691] = 8,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(974), 1,
      anon_sym_SLASH,
    ACTIONS(976), 1,
      anon_sym_,
    ACTIONS(978), 1,
      sym__newline,
    STATE(165), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10718] = 8,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(839), 1,
      anon_sym_SLASH,
    ACTIONS(841), 1,
      anon_sym_,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(845), 1,
      sym__newline,
    STATE(176), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10745] = 8,
    ACTIONS(863), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(871), 1,
      anon_sym_,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(875), 1,
      sym__newline,
    STATE(239), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10772] = 8,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(980), 1,
      anon_sym_COLON,
    ACTIONS(982), 1,
      anon_sym_SLASH,
    ACTIONS(984), 1,
      anon_sym_,
    ACTIONS(986), 1,
      sym__newline,
    STATE(286), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10799] = 8,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_SLASH,
    ACTIONS(891), 1,
      anon_sym_,
    ACTIONS(893), 1,
      sym__newline,
    STATE(170), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10826] = 8,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(988), 1,
      anon_sym_COLON,
    ACTIONS(990), 1,
      anon_sym_SLASH,
    ACTIONS(992), 1,
      anon_sym_,
    ACTIONS(994), 1,
      sym__newline,
    STATE(117), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10853] = 8,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(998), 1,
      anon_sym_SLASH,
    ACTIONS(1000), 1,
      anon_sym_,
    ACTIONS(1002), 1,
      sym__newline,
    STATE(168), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10880] = 7,
    ACTIONS(970), 1,
      sym_attribute_name,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_attributes_repeat1,
    STATE(541), 1,
      sym_angular_attribute_name,
    STATE(571), 1,
      sym_attribute,
    STATE(561), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(968), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [10905] = 8,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(825), 1,
      anon_sym_SLASH,
    ACTIONS(827), 1,
      anon_sym_,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      sym__newline,
    STATE(258), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10932] = 7,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    ACTIONS(1011), 1,
      sym_attribute_name,
    STATE(331), 1,
      aux_sym_attributes_repeat1,
    STATE(541), 1,
      sym_angular_attribute_name,
    STATE(622), 1,
      sym_attribute,
    STATE(561), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1008), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [10957] = 8,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(1014), 1,
      anon_sym_COLON,
    ACTIONS(1016), 1,
      anon_sym_SLASH,
    ACTIONS(1018), 1,
      anon_sym_,
    ACTIONS(1020), 1,
      sym__newline,
    STATE(207), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10984] = 8,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(925), 1,
      anon_sym_SLASH,
    ACTIONS(927), 1,
      anon_sym_,
    ACTIONS(929), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11011] = 7,
    ACTIONS(759), 1,
      anon_sym_COLON,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(767), 1,
      anon_sym_,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(775), 1,
      sym__newline,
    STATE(485), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11035] = 7,
    ACTIONS(863), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(871), 1,
      anon_sym_,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(875), 1,
      sym__newline,
    STATE(239), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11059] = 7,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(927), 1,
      anon_sym_,
    ACTIONS(929), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11083] = 7,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(980), 1,
      anon_sym_COLON,
    ACTIONS(984), 1,
      anon_sym_,
    ACTIONS(986), 1,
      sym__newline,
    STATE(286), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11107] = 7,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(976), 1,
      anon_sym_,
    ACTIONS(978), 1,
      sym__newline,
    STATE(165), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11131] = 7,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(1022), 1,
      anon_sym_COLON,
    ACTIONS(1024), 1,
      anon_sym_,
    ACTIONS(1026), 1,
      sym__newline,
    STATE(150), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11155] = 7,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(1000), 1,
      anon_sym_,
    ACTIONS(1002), 1,
      sym__newline,
    STATE(168), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11179] = 7,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(988), 1,
      anon_sym_COLON,
    ACTIONS(992), 1,
      anon_sym_,
    ACTIONS(994), 1,
      sym__newline,
    STATE(117), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11203] = 7,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(841), 1,
      anon_sym_,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(845), 1,
      sym__newline,
    STATE(176), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11227] = 7,
    ACTIONS(779), 1,
      anon_sym_BANG_EQ,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(1028), 1,
      anon_sym_COLON,
    ACTIONS(1030), 1,
      anon_sym_,
    ACTIONS(1032), 1,
      sym__newline,
    STATE(95), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11251] = 7,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(1034), 1,
      anon_sym_COLON,
    ACTIONS(1036), 1,
      anon_sym_,
    ACTIONS(1038), 1,
      sym__newline,
    STATE(282), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11275] = 7,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(1040), 1,
      anon_sym_COLON,
    ACTIONS(1042), 1,
      anon_sym_,
    ACTIONS(1044), 1,
      sym__newline,
    STATE(159), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11299] = 7,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(1014), 1,
      anon_sym_COLON,
    ACTIONS(1018), 1,
      anon_sym_,
    ACTIONS(1020), 1,
      sym__newline,
    STATE(207), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11323] = 7,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(1046), 1,
      anon_sym_COLON,
    ACTIONS(1048), 1,
      anon_sym_,
    ACTIONS(1050), 1,
      sym__newline,
    STATE(487), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11347] = 7,
    ACTIONS(795), 1,
      anon_sym_BANG_EQ,
    ACTIONS(797), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(915), 1,
      anon_sym_COLON,
    ACTIONS(919), 1,
      anon_sym_,
    ACTIONS(921), 1,
      sym__newline,
    STATE(279), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11371] = 7,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(958), 1,
      anon_sym_COLON,
    ACTIONS(962), 1,
      anon_sym_,
    ACTIONS(964), 1,
      sym__newline,
    STATE(506), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11395] = 7,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(827), 1,
      anon_sym_,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      sym__newline,
    STATE(258), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11419] = 7,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(950), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_,
    ACTIONS(956), 1,
      sym__newline,
    STATE(256), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11443] = 7,
    ACTIONS(821), 1,
      anon_sym_BANG_EQ,
    ACTIONS(823), 1,
      anon_sym_EQ,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(1052), 1,
      anon_sym_COLON,
    ACTIONS(1054), 1,
      anon_sym_,
    ACTIONS(1056), 1,
      sym__newline,
    STATE(254), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11467] = 7,
    ACTIONS(849), 1,
      anon_sym_BANG_EQ,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_,
    ACTIONS(893), 1,
      sym__newline,
    STATE(170), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11491] = 7,
    ACTIONS(865), 1,
      anon_sym_BANG_EQ,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(873), 1,
      anon_sym_DOT,
    ACTIONS(1058), 1,
      anon_sym_COLON,
    ACTIONS(1060), 1,
      anon_sym_,
    ACTIONS(1062), 1,
      sym__newline,
    STATE(218), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11515] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1070), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11538] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1072), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11561] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1074), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11584] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1076), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11607] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1078), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11630] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1080), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11653] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1082), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11676] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1084), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11699] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1086), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11722] = 8,
    ACTIONS(1088), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(1090), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(1092), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(1094), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(1096), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(1098), 1,
      anon_sym_SQUOTE,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
    STATE(598), 1,
      sym_quoted_attribute_value,
  [11747] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1102), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11770] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1104), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11793] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1106), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11816] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1108), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11839] = 7,
    ACTIONS(1110), 1,
      aux_sym_content_token1,
    ACTIONS(1113), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1116), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1119), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11862] = 7,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1121), 1,
      sym__dedent,
    STATE(369), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11885] = 3,
    ACTIONS(1123), 1,
      sym__indent,
    STATE(506), 1,
      sym_children,
    ACTIONS(475), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11899] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1125), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11919] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11939] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(370), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11959] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1133), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11975] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1135), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11995] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1137), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12015] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(365), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12035] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1139), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12055] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1141), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12075] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(367), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12095] = 3,
    ACTIONS(1143), 1,
      sym__indent,
    STATE(486), 1,
      sym_children,
    ACTIONS(483), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12109] = 2,
    ACTIONS(1147), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1145), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [12121] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1149), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(380), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12141] = 3,
    ACTIONS(1151), 1,
      sym__indent,
    STATE(485), 1,
      sym_children,
    ACTIONS(443), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12155] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(366), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12175] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(356), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12195] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1153), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12215] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1155), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12235] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1157), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12255] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(389), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12275] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1161), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(401), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12295] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1163), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12315] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(363), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12335] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(355), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12355] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(361), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12375] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1165), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12395] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1167), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12415] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1169), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12431] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1171), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12451] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1173), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12471] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(360), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12491] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12511] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1177), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12527] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1179), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12547] = 2,
    ACTIONS(1183), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1181), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [12559] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1185), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12579] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1187), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12599] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1189), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12619] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1191), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12639] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1193), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12655] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1195), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12675] = 3,
    ACTIONS(1143), 1,
      sym__indent,
    STATE(494), 1,
      sym_children,
    ACTIONS(461), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12689] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1197), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12709] = 6,
    ACTIONS(1199), 1,
      aux_sym_content_token1,
    ACTIONS(1202), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1208), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12729] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1210), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12745] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1212), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12765] = 2,
    ACTIONS(1216), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1214), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [12777] = 3,
    ACTIONS(1143), 1,
      sym__indent,
    STATE(487), 1,
      sym_children,
    ACTIONS(451), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12791] = 3,
    ACTIONS(1218), 1,
      sym__indent,
    STATE(487), 1,
      sym_children,
    ACTIONS(451), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12805] = 4,
    ACTIONS(1223), 1,
      sym__newline,
    ACTIONS(1226), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1220), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12821] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(359), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12841] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1228), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12857] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1230), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12873] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1232), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12893] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(357), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12913] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1234), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12933] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1236), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12953] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1238), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(432), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12973] = 3,
    ACTIONS(1240), 1,
      sym__indent,
    STATE(490), 1,
      sym_children,
    ACTIONS(437), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12987] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(358), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13007] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1242), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13027] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1244), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13047] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(362), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13067] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1246), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13087] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1248), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13107] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1250), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13127] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13147] = 4,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(421), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13163] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(368), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13183] = 3,
    ACTIONS(1143), 1,
      sym__indent,
    STATE(490), 1,
      sym_children,
    ACTIONS(437), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13197] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1256), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(436), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13217] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1258), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13237] = 6,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1260), 1,
      sym__newline,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13257] = 3,
    ACTIONS(1262), 1,
      sym__newline,
    STATE(416), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13270] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(437), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13287] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(417), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13304] = 4,
    ACTIONS(1266), 1,
      anon_sym_,
    ACTIONS(1268), 1,
      anon_sym_DOT,
    STATE(448), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1264), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13319] = 2,
    ACTIONS(1271), 1,
      sym__indent,
    ACTIONS(530), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13330] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(393), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13347] = 3,
    ACTIONS(1273), 1,
      sym__newline,
    STATE(424), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13360] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(428), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13377] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(433), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13394] = 3,
    ACTIONS(1275), 1,
      sym__newline,
    STATE(404), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13407] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(408), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13424] = 3,
    ACTIONS(1277), 1,
      sym__newline,
    STATE(411), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13437] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(397), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13454] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(388), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13471] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(410), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13488] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(443), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13505] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(390), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13522] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(427), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13539] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(398), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13556] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(400), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13573] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(425), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13590] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(372), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13607] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(407), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13624] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(412), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13641] = 4,
    ACTIONS(1281), 1,
      anon_sym_POUND,
    ACTIONS(1283), 1,
      anon_sym_LBRACE,
    ACTIONS(1279), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1285), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13656] = 3,
    ACTIONS(1287), 1,
      sym__newline,
    STATE(375), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13669] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(403), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13686] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(379), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13703] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(376), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13720] = 3,
    ACTIONS(1289), 1,
      sym__newline,
    STATE(423), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13733] = 3,
    ACTIONS(1291), 1,
      sym__newline,
    STATE(439), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13746] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(373), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13763] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(435), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13780] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(438), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13797] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(377), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13814] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(414), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13831] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(405), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13848] = 3,
    ACTIONS(1293), 1,
      sym__newline,
    STATE(399), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13861] = 5,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1066), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym_content_repeat1,
    STATE(444), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13878] = 1,
    ACTIONS(601), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13886] = 1,
    ACTIONS(475), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13894] = 1,
    ACTIONS(619), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13902] = 1,
    ACTIONS(437), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13910] = 1,
    ACTIONS(1006), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [13918] = 1,
    ACTIONS(615), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13926] = 1,
    ACTIONS(461), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13934] = 4,
    ACTIONS(1295), 1,
      anon_sym_when,
    ACTIONS(1297), 1,
      anon_sym_default,
    STATE(586), 1,
      sym__when_keyword,
    STATE(86), 2,
      sym_when,
      aux_sym_case_repeat1,
  [13948] = 1,
    ACTIONS(669), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13956] = 4,
    ACTIONS(1064), 1,
      aux_sym_content_token1,
    ACTIONS(1301), 1,
      sym__newline,
    STATE(500), 1,
      aux_sym_content_repeat1,
    ACTIONS(1299), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13970] = 1,
    ACTIONS(483), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13978] = 4,
    ACTIONS(1295), 1,
      anon_sym_when,
    ACTIONS(1303), 1,
      anon_sym_default,
    STATE(560), 1,
      sym__when_keyword,
    STATE(61), 2,
      sym_when,
      aux_sym_case_repeat1,
  [13992] = 1,
    ACTIONS(567), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14000] = 3,
    STATE(178), 1,
      sym__dummy_tag,
    STATE(179), 1,
      sym_tag,
    ACTIONS(1305), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14012] = 1,
    ACTIONS(605), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14020] = 3,
    STATE(132), 1,
      sym__dummy_tag,
    STATE(134), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14032] = 4,
    ACTIONS(1307), 1,
      aux_sym_content_token1,
    ACTIONS(1312), 1,
      sym__newline,
    STATE(500), 1,
      aux_sym_content_repeat1,
    ACTIONS(1310), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [14046] = 1,
    ACTIONS(571), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14054] = 2,
    ACTIONS(1266), 1,
      anon_sym_,
    ACTIONS(1264), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14064] = 3,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    ACTIONS(1310), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1312), 2,
      sym__newline,
      aux_sym_content_token1,
  [14076] = 3,
    STATE(180), 1,
      sym__dummy_tag,
    STATE(181), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14088] = 1,
    ACTIONS(443), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14096] = 1,
    ACTIONS(451), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14104] = 4,
    ACTIONS(1295), 1,
      anon_sym_when,
    ACTIONS(1316), 1,
      anon_sym_default,
    STATE(603), 1,
      sym__when_keyword,
    STATE(51), 2,
      sym_when,
      aux_sym_case_repeat1,
  [14118] = 2,
    STATE(95), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14127] = 2,
    STATE(99), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14136] = 4,
    ACTIONS(1318), 1,
      aux_sym_script_block_token1,
    ACTIONS(1321), 1,
      sym__newline,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(510), 1,
      aux_sym_script_block_repeat1,
  [14149] = 2,
    STATE(228), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14158] = 2,
    STATE(490), 1,
      sym_tag,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14167] = 2,
    STATE(250), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14176] = 2,
    STATE(218), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14185] = 2,
    STATE(170), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14194] = 4,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(510), 1,
      aux_sym_script_block_repeat1,
  [14207] = 2,
    STATE(207), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14216] = 4,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1334), 1,
      sym__newline,
    STATE(204), 1,
      sym__single_line_buf_code,
    STATE(697), 1,
      sym__un_delimited_javascript,
  [14229] = 2,
    STATE(239), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14238] = 2,
    STATE(165), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14247] = 2,
    STATE(176), 1,
      sym_tag,
    ACTIONS(1305), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14256] = 2,
    STATE(159), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14265] = 2,
    STATE(279), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14274] = 2,
    ACTIONS(1119), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1336), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [14283] = 4,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(263), 1,
      sym__single_line_buf_code,
    STATE(688), 1,
      sym__un_delimited_javascript,
  [14296] = 4,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    ACTIONS(1340), 1,
      sym__dedent,
    STATE(510), 1,
      aux_sym_script_block_repeat1,
  [14309] = 4,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1342), 1,
      sym__newline,
    STATE(261), 1,
      sym__single_line_buf_code,
    STATE(683), 1,
      sym__un_delimited_javascript,
  [14322] = 4,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1344), 1,
      sym__newline,
    STATE(107), 1,
      sym__single_line_buf_code,
    STATE(652), 1,
      sym__un_delimited_javascript,
  [14335] = 2,
    STATE(168), 1,
      sym_tag,
    ACTIONS(1305), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14344] = 2,
    ACTIONS(1310), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1312), 2,
      sym__newline,
      aux_sym_content_token1,
  [14353] = 2,
    STATE(485), 1,
      sym_tag,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14362] = 2,
    STATE(487), 1,
      sym_tag,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14371] = 4,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    ACTIONS(1346), 1,
      sym__dedent,
    STATE(510), 1,
      aux_sym_script_block_repeat1,
  [14384] = 2,
    STATE(153), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14393] = 2,
    STATE(117), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14402] = 2,
    STATE(254), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14411] = 2,
    STATE(286), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14420] = 2,
    STATE(150), 1,
      sym_tag,
    ACTIONS(1305), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14429] = 2,
    ACTIONS(1350), 1,
      anon_sym_,
    ACTIONS(1348), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14438] = 4,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1352), 1,
      sym__newline,
    STATE(186), 1,
      sym__single_line_buf_code,
    STATE(671), 1,
      sym__un_delimited_javascript,
  [14451] = 3,
    ACTIONS(1354), 1,
      anon_sym_EQ,
    ACTIONS(1356), 1,
      anon_sym_,
    ACTIONS(1358), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14462] = 2,
    ACTIONS(1360), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1362), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [14471] = 2,
    ACTIONS(1364), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1366), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [14480] = 2,
    STATE(145), 1,
      sym_tag,
    ACTIONS(1305), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14489] = 4,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    ACTIONS(1368), 1,
      sym__dedent,
    STATE(510), 1,
      aux_sym_script_block_repeat1,
  [14502] = 2,
    STATE(290), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14511] = 4,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    ACTIONS(1370), 1,
      sym__dedent,
    STATE(510), 1,
      aux_sym_script_block_repeat1,
  [14524] = 2,
    STATE(506), 1,
      sym_tag,
    ACTIONS(1129), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14533] = 2,
    STATE(256), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14542] = 2,
    STATE(121), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14551] = 2,
    STATE(282), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14560] = 2,
    STATE(258), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14569] = 1,
    ACTIONS(1372), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [14575] = 1,
    ACTIONS(1324), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [14581] = 3,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(545), 1,
      aux_sym_script_block_repeat1,
  [14591] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(167), 1,
      sym__single_line_buf_code,
    STATE(702), 1,
      sym__un_delimited_javascript,
  [14601] = 1,
    ACTIONS(1374), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [14607] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(166), 1,
      sym__single_line_buf_code,
    STATE(702), 1,
      sym__un_delimited_javascript,
  [14617] = 1,
    ACTIONS(1376), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [14623] = 3,
    ACTIONS(1378), 1,
      anon_sym_COLON,
    ACTIONS(1380), 1,
      sym__newline,
    STATE(146), 1,
      sym__when_content,
  [14633] = 2,
    ACTIONS(1382), 1,
      anon_sym_,
    ACTIONS(1384), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14641] = 3,
    ACTIONS(1386), 1,
      sym__un_delimited_javascript_line,
    STATE(147), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(259), 1,
      sym__multi_line_buf_code,
  [14651] = 3,
    ACTIONS(1388), 1,
      anon_sym_,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
  [14661] = 2,
    ACTIONS(939), 1,
      anon_sym_,
    ACTIONS(941), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14669] = 3,
    ACTIONS(1394), 1,
      sym__comment_content,
    ACTIONS(1396), 1,
      sym__dedent,
    STATE(590), 1,
      aux_sym__comment_repeat1,
  [14679] = 3,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(516), 1,
      aux_sym_script_block_repeat1,
  [14689] = 3,
    ACTIONS(1398), 1,
      anon_sym_SQUOTE,
    ACTIONS(1400), 1,
      anon_sym_DQUOTE,
    STATE(589), 1,
      sym_quoted_javascript,
  [14699] = 1,
    ACTIONS(1402), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [14705] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(299), 1,
      sym__single_line_buf_code,
    STATE(689), 1,
      sym__un_delimited_javascript,
  [14715] = 3,
    ACTIONS(1394), 1,
      sym__comment_content,
    ACTIONS(1404), 1,
      sym__dedent,
    STATE(590), 1,
      aux_sym__comment_repeat1,
  [14725] = 3,
    ACTIONS(1388), 1,
      anon_sym_,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
  [14735] = 3,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(533), 1,
      aux_sym_script_block_repeat1,
  [14745] = 2,
    ACTIONS(1408), 1,
      anon_sym_,
    ACTIONS(1410), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14753] = 2,
    ACTIONS(1412), 1,
      anon_sym_,
    ACTIONS(1414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14761] = 3,
    ACTIONS(1416), 1,
      sym__un_delimited_javascript_line,
    STATE(94), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(197), 1,
      sym__multi_line_buf_code,
  [14771] = 3,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(547), 1,
      aux_sym_script_block_repeat1,
  [14781] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(112), 1,
      sym__single_line_buf_code,
    STATE(652), 1,
      sym__un_delimited_javascript,
  [14791] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(139), 1,
      sym__single_line_buf_code,
    STATE(652), 1,
      sym__un_delimited_javascript,
  [14801] = 2,
    ACTIONS(1418), 1,
      anon_sym_,
    ACTIONS(1420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14809] = 3,
    ACTIONS(1422), 1,
      sym__un_delimited_javascript_line,
    STATE(56), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(133), 1,
      sym__multi_line_buf_code,
  [14819] = 3,
    ACTIONS(1424), 1,
      sym__un_delimited_javascript_line,
    STATE(152), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(270), 1,
      sym__multi_line_buf_code,
  [14829] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(272), 1,
      sym__single_line_buf_code,
    STATE(688), 1,
      sym__un_delimited_javascript,
  [14839] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(271), 1,
      sym__single_line_buf_code,
    STATE(688), 1,
      sym__un_delimited_javascript,
  [14849] = 3,
    ACTIONS(1394), 1,
      sym__comment_content,
    ACTIONS(1426), 1,
      sym__dedent,
    STATE(590), 1,
      aux_sym__comment_repeat1,
  [14859] = 2,
    ACTIONS(1428), 1,
      anon_sym_,
    ACTIONS(1430), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14867] = 3,
    ACTIONS(1432), 1,
      anon_sym_COLON,
    ACTIONS(1434), 1,
      sym__newline,
    STATE(157), 1,
      sym__when_content,
  [14877] = 3,
    ACTIONS(1394), 1,
      sym__comment_content,
    ACTIONS(1436), 1,
      sym__dedent,
    STATE(590), 1,
      aux_sym__comment_repeat1,
  [14887] = 2,
    ACTIONS(1438), 1,
      anon_sym_,
    ACTIONS(1440), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14895] = 2,
    ACTIONS(1442), 1,
      anon_sym_,
    ACTIONS(1444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14903] = 3,
    ACTIONS(465), 1,
      sym__dedent,
    ACTIONS(1446), 1,
      sym__comment_content,
    STATE(590), 1,
      aux_sym__comment_repeat1,
  [14913] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(293), 1,
      sym__single_line_buf_code,
    STATE(689), 1,
      sym__un_delimited_javascript,
  [14923] = 1,
    ACTIONS(1449), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [14929] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(498), 1,
      sym__single_line_buf_code,
    STATE(706), 1,
      sym__un_delimited_javascript,
  [14939] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(492), 1,
      sym__single_line_buf_code,
    STATE(706), 1,
      sym__un_delimited_javascript,
  [14949] = 1,
    ACTIONS(1451), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [14955] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(232), 1,
      sym__single_line_buf_code,
    STATE(697), 1,
      sym__un_delimited_javascript,
  [14965] = 2,
    ACTIONS(1453), 1,
      anon_sym_,
    ACTIONS(1455), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14973] = 2,
    ACTIONS(1457), 1,
      anon_sym_,
    ACTIONS(1459), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14981] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(697), 1,
      sym__un_delimited_javascript,
  [14991] = 3,
    ACTIONS(1326), 1,
      aux_sym_script_block_token1,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(526), 1,
      aux_sym_script_block_repeat1,
  [15001] = 2,
    ACTIONS(1461), 1,
      anon_sym_,
    ACTIONS(1463), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15009] = 2,
    ACTIONS(1465), 1,
      anon_sym_,
    ACTIONS(1467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15017] = 3,
    ACTIONS(1469), 1,
      anon_sym_COLON,
    ACTIONS(1471), 1,
      sym__newline,
    STATE(127), 1,
      sym__when_content,
  [15027] = 3,
    ACTIONS(1473), 1,
      sym__un_delimited_javascript_line,
    STATE(126), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(223), 1,
      sym__multi_line_buf_code,
  [15037] = 2,
    ACTIONS(1475), 1,
      anon_sym_,
    ACTIONS(1477), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15045] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(177), 1,
      sym__single_line_buf_code,
    STATE(671), 1,
      sym__un_delimited_javascript,
  [15055] = 3,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(173), 1,
      sym__single_line_buf_code,
    STATE(671), 1,
      sym__un_delimited_javascript,
  [15065] = 3,
    ACTIONS(1394), 1,
      sym__comment_content,
    ACTIONS(1479), 1,
      sym__dedent,
    STATE(590), 1,
      aux_sym__comment_repeat1,
  [15075] = 2,
    ACTIONS(1481), 1,
      anon_sym_,
    ACTIONS(1483), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15083] = 2,
    ACTIONS(1485), 1,
      sym__comment_content,
    STATE(119), 1,
      aux_sym__comment_repeat1,
  [15090] = 2,
    ACTIONS(710), 1,
      sym__indent,
    STATE(281), 1,
      sym_children,
  [15097] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(570), 1,
      aux_sym__comment_repeat1,
  [15104] = 2,
    ACTIONS(589), 1,
      sym__indent,
    STATE(205), 1,
      sym_children,
  [15111] = 2,
    ACTIONS(1487), 1,
      anon_sym_SQUOTE,
    ACTIONS(1489), 1,
      aux_sym_quoted_javascript_token1,
  [15118] = 2,
    ACTIONS(1491), 1,
      sym__comment_content,
    ACTIONS(1493), 1,
      sym__newline,
  [15125] = 2,
    ACTIONS(589), 1,
      sym__indent,
    STATE(220), 1,
      sym_children,
  [15132] = 2,
    ACTIONS(1487), 1,
      anon_sym_DQUOTE,
    ACTIONS(1495), 1,
      aux_sym_quoted_javascript_token2,
  [15139] = 2,
    ACTIONS(1497), 1,
      anon_sym_SQUOTE,
    ACTIONS(1499), 1,
      aux_sym_quoted_javascript_token1,
  [15146] = 2,
    ACTIONS(441), 1,
      sym__indent,
    STATE(103), 1,
      sym_children,
  [15153] = 2,
    ACTIONS(1497), 1,
      anon_sym_DQUOTE,
    ACTIONS(1501), 1,
      aux_sym_quoted_javascript_token2,
  [15160] = 1,
    ACTIONS(465), 2,
      sym__dedent,
      sym__comment_content,
  [15165] = 2,
    ACTIONS(1388), 1,
      anon_sym_,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
  [15172] = 2,
    ACTIONS(441), 1,
      sym__indent,
    STATE(118), 1,
      sym_children,
  [15179] = 1,
    ACTIONS(1503), 2,
      sym__newline,
      anon_sym_COLON,
  [15184] = 2,
    ACTIONS(710), 1,
      sym__indent,
    STATE(283), 1,
      sym_children,
  [15191] = 2,
    ACTIONS(1505), 1,
      sym__comment_content,
    STATE(63), 1,
      aux_sym__comment_repeat1,
  [15198] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(565), 1,
      aux_sym__comment_repeat1,
  [15205] = 2,
    ACTIONS(687), 1,
      sym__indent,
    STATE(252), 1,
      sym_children,
  [15212] = 2,
    ACTIONS(687), 1,
      sym__indent,
    STATE(264), 1,
      sym_children,
  [15219] = 2,
    ACTIONS(1507), 1,
      sym__comment_content,
    ACTIONS(1509), 1,
      sym__newline,
  [15226] = 2,
    ACTIONS(1511), 1,
      sym__comment_content,
    STATE(67), 1,
      aux_sym__comment_repeat1,
  [15233] = 2,
    ACTIONS(1513), 1,
      sym__comment_content,
    ACTIONS(1515), 1,
      sym__newline,
  [15240] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(587), 1,
      aux_sym__comment_repeat1,
  [15247] = 2,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(668), 1,
      sym__un_delimited_javascript,
  [15254] = 2,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(647), 1,
      sym__un_delimited_javascript,
  [15261] = 2,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(667), 1,
      sym__un_delimited_javascript,
  [15268] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(608), 1,
      aux_sym__comment_repeat1,
  [15275] = 2,
    ACTIONS(1517), 1,
      sym__comment_content,
    STATE(156), 1,
      aux_sym__comment_repeat1,
  [15282] = 2,
    ACTIONS(1519), 1,
      sym__comment_content,
    STATE(242), 1,
      aux_sym__comment_repeat1,
  [15289] = 2,
    ACTIONS(1521), 1,
      sym__comment_content,
    ACTIONS(1523), 1,
      sym__newline,
  [15296] = 2,
    ACTIONS(510), 1,
      sym__indent,
    STATE(187), 1,
      sym_children,
  [15303] = 2,
    ACTIONS(510), 1,
      sym__indent,
    STATE(174), 1,
      sym_children,
  [15310] = 2,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(691), 1,
      sym__un_delimited_javascript,
  [15317] = 2,
    ACTIONS(1525), 1,
      sym__comment_content,
    ACTIONS(1527), 1,
      sym__newline,
  [15324] = 2,
    ACTIONS(1332), 1,
      sym__un_delimited_javascript_line,
    STATE(681), 1,
      sym__un_delimited_javascript,
  [15331] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(584), 1,
      aux_sym__comment_repeat1,
  [15338] = 1,
    ACTIONS(1529), 1,
      sym__newline,
  [15342] = 1,
    ACTIONS(1531), 1,
      sym__newline,
  [15346] = 1,
    ACTIONS(1533), 1,
      sym__newline,
  [15350] = 1,
    ACTIONS(1535), 1,
      sym__indent,
  [15354] = 1,
    ACTIONS(1537), 1,
      aux_sym_unbuffered_code_token1,
  [15358] = 1,
    ACTIONS(1539), 1,
      sym__newline,
  [15362] = 1,
    ACTIONS(1541), 1,
      sym__newline,
  [15366] = 1,
    ACTIONS(1543), 1,
      sym__indent,
  [15370] = 1,
    ACTIONS(1545), 1,
      sym__indent,
  [15374] = 1,
    ACTIONS(1547), 1,
      sym__newline,
  [15378] = 1,
    ACTIONS(1549), 1,
      ts_builtin_sym_end,
  [15382] = 1,
    ACTIONS(1551), 1,
      sym__indent,
  [15386] = 1,
    ACTIONS(1553), 1,
      sym__newline,
  [15390] = 1,
    ACTIONS(1555), 1,
      sym__newline,
  [15394] = 1,
    ACTIONS(1557), 1,
      aux_sym__attribute_token1,
  [15398] = 1,
    ACTIONS(1559), 1,
      sym__indent,
  [15402] = 1,
    ACTIONS(1561), 1,
      sym__un_delimited_javascript_line,
  [15406] = 1,
    ACTIONS(1563), 1,
      sym__newline,
  [15410] = 1,
    ACTIONS(1565), 1,
      sym__indent,
  [15414] = 1,
    ACTIONS(1567), 1,
      aux_sym_unbuffered_code_token1,
  [15418] = 1,
    ACTIONS(1569), 1,
      sym__newline,
  [15422] = 1,
    ACTIONS(1571), 1,
      sym__newline,
  [15426] = 1,
    ACTIONS(1573), 1,
      aux_sym_unbuffered_code_token1,
  [15430] = 1,
    ACTIONS(1575), 1,
      sym__newline,
  [15434] = 1,
    ACTIONS(1577), 1,
      sym__newline,
  [15438] = 1,
    ACTIONS(1579), 1,
      sym__indent,
  [15442] = 1,
    ACTIONS(1581), 1,
      aux_sym__when_keyword_token1,
  [15446] = 1,
    ACTIONS(1583), 1,
      sym__indent,
  [15450] = 1,
    ACTIONS(1585), 1,
      anon_sym_RBRACE_RBRACE,
  [15454] = 1,
    ACTIONS(1585), 1,
      anon_sym_RBRACE,
  [15458] = 1,
    ACTIONS(1587), 1,
      sym__newline,
  [15462] = 1,
    ACTIONS(1589), 1,
      sym__newline,
  [15466] = 1,
    ACTIONS(1591), 1,
      sym__indent,
  [15470] = 1,
    ACTIONS(1593), 1,
      aux_sym_unbuffered_code_token1,
  [15474] = 1,
    ACTIONS(1595), 1,
      sym__newline,
  [15478] = 1,
    ACTIONS(1597), 1,
      sym__indent,
  [15482] = 1,
    ACTIONS(1599), 1,
      sym__newline,
  [15486] = 1,
    ACTIONS(1601), 1,
      sym__newline,
  [15490] = 1,
    ACTIONS(1603), 1,
      sym__indent,
  [15494] = 1,
    ACTIONS(1605), 1,
      sym__indent,
  [15498] = 1,
    ACTIONS(1607), 1,
      sym__newline,
  [15502] = 1,
    ACTIONS(1609), 1,
      sym__newline,
  [15506] = 1,
    ACTIONS(1611), 1,
      sym__newline,
  [15510] = 1,
    ACTIONS(1613), 1,
      sym__newline,
  [15514] = 1,
    ACTIONS(1615), 1,
      sym__newline,
  [15518] = 1,
    ACTIONS(1617), 1,
      sym__newline,
  [15522] = 1,
    ACTIONS(1619), 1,
      sym__delimited_javascript,
  [15526] = 1,
    ACTIONS(1621), 1,
      sym__delimited_javascript,
  [15530] = 1,
    ACTIONS(1623), 1,
      sym__newline,
  [15534] = 1,
    ACTIONS(1625), 1,
      sym__newline,
  [15538] = 1,
    ACTIONS(1627), 1,
      sym__newline,
  [15542] = 1,
    ACTIONS(1629), 1,
      sym__newline,
  [15546] = 1,
    ACTIONS(1631), 1,
      sym__newline,
  [15550] = 1,
    ACTIONS(1633), 1,
      anon_sym_SQUOTE,
  [15554] = 1,
    ACTIONS(1633), 1,
      anon_sym_DQUOTE,
  [15558] = 1,
    ACTIONS(1635), 1,
      sym__newline,
  [15562] = 1,
    ACTIONS(1637), 1,
      anon_sym_SQUOTE,
  [15566] = 1,
    ACTIONS(1637), 1,
      anon_sym_DQUOTE,
  [15570] = 1,
    ACTIONS(1639), 1,
      sym__newline,
  [15574] = 1,
    ACTIONS(1641), 1,
      sym__newline,
  [15578] = 1,
    ACTIONS(1643), 1,
      sym__newline,
  [15582] = 1,
    ACTIONS(1645), 1,
      sym__newline,
  [15586] = 1,
    ACTIONS(1647), 1,
      sym__indent,
  [15590] = 1,
    ACTIONS(1649), 1,
      sym__indent,
  [15594] = 1,
    ACTIONS(1651), 1,
      sym__indent,
  [15598] = 1,
    ACTIONS(1653), 1,
      sym__indent,
  [15602] = 1,
    ACTIONS(1655), 1,
      sym__newline,
  [15606] = 1,
    ACTIONS(1657), 1,
      sym__newline,
  [15610] = 1,
    ACTIONS(1659), 1,
      sym__indent,
  [15614] = 1,
    ACTIONS(1661), 1,
      sym__indent,
  [15618] = 1,
    ACTIONS(1663), 1,
      sym__indent,
  [15622] = 1,
    ACTIONS(1665), 1,
      sym__indent,
  [15626] = 1,
    ACTIONS(1667), 1,
      aux_sym_unbuffered_code_token1,
  [15630] = 1,
    ACTIONS(1669), 1,
      sym__indent,
  [15634] = 1,
    ACTIONS(1671), 1,
      sym__indent,
  [15638] = 1,
    ACTIONS(1673), 1,
      sym__indent,
  [15642] = 1,
    ACTIONS(1675), 1,
      sym__indent,
  [15646] = 1,
    ACTIONS(1677), 1,
      sym__newline,
  [15650] = 1,
    ACTIONS(1679), 1,
      sym__indent,
  [15654] = 1,
    ACTIONS(1681), 1,
      sym__indent,
  [15658] = 1,
    ACTIONS(1683), 1,
      sym__indent,
  [15662] = 1,
    ACTIONS(1685), 1,
      sym__indent,
  [15666] = 1,
    ACTIONS(1687), 1,
      sym__indent,
  [15670] = 1,
    ACTIONS(1689), 1,
      sym__indent,
  [15674] = 1,
    ACTIONS(1691), 1,
      sym__indent,
  [15678] = 1,
    ACTIONS(1693), 1,
      sym__indent,
  [15682] = 1,
    ACTIONS(1695), 1,
      sym__un_delimited_javascript_line,
  [15686] = 1,
    ACTIONS(1697), 1,
      sym__newline,
  [15690] = 1,
    ACTIONS(1699), 1,
      sym__newline,
  [15694] = 1,
    ACTIONS(1701), 1,
      sym__newline,
  [15698] = 1,
    ACTIONS(1703), 1,
      sym__un_delimited_javascript_line,
  [15702] = 1,
    ACTIONS(1705), 1,
      sym__newline,
  [15706] = 1,
    ACTIONS(1707), 1,
      sym__newline,
  [15710] = 1,
    ACTIONS(1709), 1,
      sym__newline,
  [15714] = 1,
    ACTIONS(1711), 1,
      sym__newline,
  [15718] = 1,
    ACTIONS(1713), 1,
      sym__newline,
  [15722] = 1,
    ACTIONS(1715), 1,
      sym__newline,
  [15726] = 1,
    ACTIONS(1717), 1,
      sym__newline,
  [15730] = 1,
    ACTIONS(1719), 1,
      sym__newline,
  [15734] = 1,
    ACTIONS(1721), 1,
      sym__newline,
  [15738] = 1,
    ACTIONS(1723), 1,
      sym__newline,
  [15742] = 1,
    ACTIONS(1725), 1,
      sym__newline,
  [15746] = 1,
    ACTIONS(1727), 1,
      sym__newline,
  [15750] = 1,
    ACTIONS(1729), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 226,
  [SMALL_STATE(6)] = 299,
  [SMALL_STATE(7)] = 372,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 516,
  [SMALL_STATE(10)] = 586,
  [SMALL_STATE(11)] = 655,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 793,
  [SMALL_STATE(14)] = 862,
  [SMALL_STATE(15)] = 931,
  [SMALL_STATE(16)] = 1000,
  [SMALL_STATE(17)] = 1069,
  [SMALL_STATE(18)] = 1138,
  [SMALL_STATE(19)] = 1207,
  [SMALL_STATE(20)] = 1276,
  [SMALL_STATE(21)] = 1345,
  [SMALL_STATE(22)] = 1414,
  [SMALL_STATE(23)] = 1483,
  [SMALL_STATE(24)] = 1552,
  [SMALL_STATE(25)] = 1621,
  [SMALL_STATE(26)] = 1690,
  [SMALL_STATE(27)] = 1759,
  [SMALL_STATE(28)] = 1828,
  [SMALL_STATE(29)] = 1897,
  [SMALL_STATE(30)] = 1966,
  [SMALL_STATE(31)] = 2035,
  [SMALL_STATE(32)] = 2104,
  [SMALL_STATE(33)] = 2173,
  [SMALL_STATE(34)] = 2242,
  [SMALL_STATE(35)] = 2311,
  [SMALL_STATE(36)] = 2380,
  [SMALL_STATE(37)] = 2449,
  [SMALL_STATE(38)] = 2518,
  [SMALL_STATE(39)] = 2587,
  [SMALL_STATE(40)] = 2656,
  [SMALL_STATE(41)] = 2725,
  [SMALL_STATE(42)] = 2791,
  [SMALL_STATE(43)] = 2857,
  [SMALL_STATE(44)] = 2923,
  [SMALL_STATE(45)] = 2989,
  [SMALL_STATE(46)] = 3055,
  [SMALL_STATE(47)] = 3121,
  [SMALL_STATE(48)] = 3187,
  [SMALL_STATE(49)] = 3252,
  [SMALL_STATE(50)] = 3317,
  [SMALL_STATE(51)] = 3354,
  [SMALL_STATE(52)] = 3391,
  [SMALL_STATE(53)] = 3423,
  [SMALL_STATE(54)] = 3455,
  [SMALL_STATE(55)] = 3487,
  [SMALL_STATE(56)] = 3519,
  [SMALL_STATE(57)] = 3551,
  [SMALL_STATE(58)] = 3583,
  [SMALL_STATE(59)] = 3615,
  [SMALL_STATE(60)] = 3651,
  [SMALL_STATE(61)] = 3683,
  [SMALL_STATE(62)] = 3719,
  [SMALL_STATE(63)] = 3751,
  [SMALL_STATE(64)] = 3783,
  [SMALL_STATE(65)] = 3815,
  [SMALL_STATE(66)] = 3847,
  [SMALL_STATE(67)] = 3879,
  [SMALL_STATE(68)] = 3910,
  [SMALL_STATE(69)] = 3941,
  [SMALL_STATE(70)] = 3972,
  [SMALL_STATE(71)] = 4003,
  [SMALL_STATE(72)] = 4034,
  [SMALL_STATE(73)] = 4065,
  [SMALL_STATE(74)] = 4098,
  [SMALL_STATE(75)] = 4133,
  [SMALL_STATE(76)] = 4160,
  [SMALL_STATE(77)] = 4191,
  [SMALL_STATE(78)] = 4222,
  [SMALL_STATE(79)] = 4253,
  [SMALL_STATE(80)] = 4280,
  [SMALL_STATE(81)] = 4311,
  [SMALL_STATE(82)] = 4342,
  [SMALL_STATE(83)] = 4373,
  [SMALL_STATE(84)] = 4402,
  [SMALL_STATE(85)] = 4433,
  [SMALL_STATE(86)] = 4464,
  [SMALL_STATE(87)] = 4499,
  [SMALL_STATE(88)] = 4530,
  [SMALL_STATE(89)] = 4561,
  [SMALL_STATE(90)] = 4592,
  [SMALL_STATE(91)] = 4623,
  [SMALL_STATE(92)] = 4652,
  [SMALL_STATE(93)] = 4683,
  [SMALL_STATE(94)] = 4714,
  [SMALL_STATE(95)] = 4745,
  [SMALL_STATE(96)] = 4771,
  [SMALL_STATE(97)] = 4797,
  [SMALL_STATE(98)] = 4823,
  [SMALL_STATE(99)] = 4849,
  [SMALL_STATE(100)] = 4875,
  [SMALL_STATE(101)] = 4901,
  [SMALL_STATE(102)] = 4931,
  [SMALL_STATE(103)] = 4957,
  [SMALL_STATE(104)] = 4983,
  [SMALL_STATE(105)] = 5009,
  [SMALL_STATE(106)] = 5035,
  [SMALL_STATE(107)] = 5065,
  [SMALL_STATE(108)] = 5093,
  [SMALL_STATE(109)] = 5119,
  [SMALL_STATE(110)] = 5149,
  [SMALL_STATE(111)] = 5179,
  [SMALL_STATE(112)] = 5205,
  [SMALL_STATE(113)] = 5231,
  [SMALL_STATE(114)] = 5259,
  [SMALL_STATE(115)] = 5285,
  [SMALL_STATE(116)] = 5311,
  [SMALL_STATE(117)] = 5337,
  [SMALL_STATE(118)] = 5363,
  [SMALL_STATE(119)] = 5389,
  [SMALL_STATE(120)] = 5419,
  [SMALL_STATE(121)] = 5449,
  [SMALL_STATE(122)] = 5475,
  [SMALL_STATE(123)] = 5503,
  [SMALL_STATE(124)] = 5533,
  [SMALL_STATE(125)] = 5561,
  [SMALL_STATE(126)] = 5591,
  [SMALL_STATE(127)] = 5621,
  [SMALL_STATE(128)] = 5647,
  [SMALL_STATE(129)] = 5673,
  [SMALL_STATE(130)] = 5703,
  [SMALL_STATE(131)] = 5733,
  [SMALL_STATE(132)] = 5759,
  [SMALL_STATE(133)] = 5785,
  [SMALL_STATE(134)] = 5813,
  [SMALL_STATE(135)] = 5839,
  [SMALL_STATE(136)] = 5869,
  [SMALL_STATE(137)] = 5895,
  [SMALL_STATE(138)] = 5921,
  [SMALL_STATE(139)] = 5947,
  [SMALL_STATE(140)] = 5973,
  [SMALL_STATE(141)] = 6002,
  [SMALL_STATE(142)] = 6027,
  [SMALL_STATE(143)] = 6052,
  [SMALL_STATE(144)] = 6081,
  [SMALL_STATE(145)] = 6106,
  [SMALL_STATE(146)] = 6131,
  [SMALL_STATE(147)] = 6156,
  [SMALL_STATE(148)] = 6185,
  [SMALL_STATE(149)] = 6210,
  [SMALL_STATE(150)] = 6235,
  [SMALL_STATE(151)] = 6260,
  [SMALL_STATE(152)] = 6285,
  [SMALL_STATE(153)] = 6314,
  [SMALL_STATE(154)] = 6339,
  [SMALL_STATE(155)] = 6364,
  [SMALL_STATE(156)] = 6389,
  [SMALL_STATE(157)] = 6418,
  [SMALL_STATE(158)] = 6445,
  [SMALL_STATE(159)] = 6470,
  [SMALL_STATE(160)] = 6495,
  [SMALL_STATE(161)] = 6520,
  [SMALL_STATE(162)] = 6545,
  [SMALL_STATE(163)] = 6570,
  [SMALL_STATE(164)] = 6595,
  [SMALL_STATE(165)] = 6620,
  [SMALL_STATE(166)] = 6645,
  [SMALL_STATE(167)] = 6670,
  [SMALL_STATE(168)] = 6695,
  [SMALL_STATE(169)] = 6720,
  [SMALL_STATE(170)] = 6745,
  [SMALL_STATE(171)] = 6770,
  [SMALL_STATE(172)] = 6795,
  [SMALL_STATE(173)] = 6820,
  [SMALL_STATE(174)] = 6845,
  [SMALL_STATE(175)] = 6870,
  [SMALL_STATE(176)] = 6899,
  [SMALL_STATE(177)] = 6924,
  [SMALL_STATE(178)] = 6949,
  [SMALL_STATE(179)] = 6974,
  [SMALL_STATE(180)] = 6999,
  [SMALL_STATE(181)] = 7024,
  [SMALL_STATE(182)] = 7049,
  [SMALL_STATE(183)] = 7078,
  [SMALL_STATE(184)] = 7103,
  [SMALL_STATE(185)] = 7130,
  [SMALL_STATE(186)] = 7159,
  [SMALL_STATE(187)] = 7186,
  [SMALL_STATE(188)] = 7211,
  [SMALL_STATE(189)] = 7236,
  [SMALL_STATE(190)] = 7265,
  [SMALL_STATE(191)] = 7294,
  [SMALL_STATE(192)] = 7323,
  [SMALL_STATE(193)] = 7352,
  [SMALL_STATE(194)] = 7377,
  [SMALL_STATE(195)] = 7402,
  [SMALL_STATE(196)] = 7431,
  [SMALL_STATE(197)] = 7456,
  [SMALL_STATE(198)] = 7483,
  [SMALL_STATE(199)] = 7510,
  [SMALL_STATE(200)] = 7539,
  [SMALL_STATE(201)] = 7564,
  [SMALL_STATE(202)] = 7589,
  [SMALL_STATE(203)] = 7617,
  [SMALL_STATE(204)] = 7641,
  [SMALL_STATE(205)] = 7667,
  [SMALL_STATE(206)] = 7691,
  [SMALL_STATE(207)] = 7715,
  [SMALL_STATE(208)] = 7739,
  [SMALL_STATE(209)] = 7763,
  [SMALL_STATE(210)] = 7787,
  [SMALL_STATE(211)] = 7811,
  [SMALL_STATE(212)] = 7839,
  [SMALL_STATE(213)] = 7863,
  [SMALL_STATE(214)] = 7891,
  [SMALL_STATE(215)] = 7915,
  [SMALL_STATE(216)] = 7943,
  [SMALL_STATE(217)] = 7969,
  [SMALL_STATE(218)] = 7997,
  [SMALL_STATE(219)] = 8021,
  [SMALL_STATE(220)] = 8045,
  [SMALL_STATE(221)] = 8069,
  [SMALL_STATE(222)] = 8093,
  [SMALL_STATE(223)] = 8119,
  [SMALL_STATE(224)] = 8145,
  [SMALL_STATE(225)] = 8173,
  [SMALL_STATE(226)] = 8197,
  [SMALL_STATE(227)] = 8225,
  [SMALL_STATE(228)] = 8253,
  [SMALL_STATE(229)] = 8277,
  [SMALL_STATE(230)] = 8301,
  [SMALL_STATE(231)] = 8325,
  [SMALL_STATE(232)] = 8349,
  [SMALL_STATE(233)] = 8373,
  [SMALL_STATE(234)] = 8397,
  [SMALL_STATE(235)] = 8423,
  [SMALL_STATE(236)] = 8447,
  [SMALL_STATE(237)] = 8471,
  [SMALL_STATE(238)] = 8499,
  [SMALL_STATE(239)] = 8523,
  [SMALL_STATE(240)] = 8547,
  [SMALL_STATE(241)] = 8571,
  [SMALL_STATE(242)] = 8595,
  [SMALL_STATE(243)] = 8623,
  [SMALL_STATE(244)] = 8651,
  [SMALL_STATE(245)] = 8675,
  [SMALL_STATE(246)] = 8698,
  [SMALL_STATE(247)] = 8723,
  [SMALL_STATE(248)] = 8746,
  [SMALL_STATE(249)] = 8769,
  [SMALL_STATE(250)] = 8792,
  [SMALL_STATE(251)] = 8815,
  [SMALL_STATE(252)] = 8838,
  [SMALL_STATE(253)] = 8861,
  [SMALL_STATE(254)] = 8884,
  [SMALL_STATE(255)] = 8907,
  [SMALL_STATE(256)] = 8930,
  [SMALL_STATE(257)] = 8953,
  [SMALL_STATE(258)] = 8976,
  [SMALL_STATE(259)] = 8999,
  [SMALL_STATE(260)] = 9024,
  [SMALL_STATE(261)] = 9047,
  [SMALL_STATE(262)] = 9072,
  [SMALL_STATE(263)] = 9095,
  [SMALL_STATE(264)] = 9120,
  [SMALL_STATE(265)] = 9143,
  [SMALL_STATE(266)] = 9166,
  [SMALL_STATE(267)] = 9189,
  [SMALL_STATE(268)] = 9212,
  [SMALL_STATE(269)] = 9235,
  [SMALL_STATE(270)] = 9260,
  [SMALL_STATE(271)] = 9285,
  [SMALL_STATE(272)] = 9308,
  [SMALL_STATE(273)] = 9331,
  [SMALL_STATE(274)] = 9354,
  [SMALL_STATE(275)] = 9377,
  [SMALL_STATE(276)] = 9400,
  [SMALL_STATE(277)] = 9422,
  [SMALL_STATE(278)] = 9444,
  [SMALL_STATE(279)] = 9466,
  [SMALL_STATE(280)] = 9488,
  [SMALL_STATE(281)] = 9510,
  [SMALL_STATE(282)] = 9532,
  [SMALL_STATE(283)] = 9554,
  [SMALL_STATE(284)] = 9576,
  [SMALL_STATE(285)] = 9598,
  [SMALL_STATE(286)] = 9620,
  [SMALL_STATE(287)] = 9642,
  [SMALL_STATE(288)] = 9664,
  [SMALL_STATE(289)] = 9686,
  [SMALL_STATE(290)] = 9708,
  [SMALL_STATE(291)] = 9730,
  [SMALL_STATE(292)] = 9752,
  [SMALL_STATE(293)] = 9774,
  [SMALL_STATE(294)] = 9796,
  [SMALL_STATE(295)] = 9818,
  [SMALL_STATE(296)] = 9840,
  [SMALL_STATE(297)] = 9862,
  [SMALL_STATE(298)] = 9884,
  [SMALL_STATE(299)] = 9906,
  [SMALL_STATE(300)] = 9928,
  [SMALL_STATE(301)] = 9968,
  [SMALL_STATE(302)] = 10008,
  [SMALL_STATE(303)] = 10048,
  [SMALL_STATE(304)] = 10088,
  [SMALL_STATE(305)] = 10128,
  [SMALL_STATE(306)] = 10168,
  [SMALL_STATE(307)] = 10208,
  [SMALL_STATE(308)] = 10248,
  [SMALL_STATE(309)] = 10288,
  [SMALL_STATE(310)] = 10328,
  [SMALL_STATE(311)] = 10368,
  [SMALL_STATE(312)] = 10408,
  [SMALL_STATE(313)] = 10448,
  [SMALL_STATE(314)] = 10488,
  [SMALL_STATE(315)] = 10513,
  [SMALL_STATE(316)] = 10538,
  [SMALL_STATE(317)] = 10558,
  [SMALL_STATE(318)] = 10585,
  [SMALL_STATE(319)] = 10612,
  [SMALL_STATE(320)] = 10639,
  [SMALL_STATE(321)] = 10666,
  [SMALL_STATE(322)] = 10691,
  [SMALL_STATE(323)] = 10718,
  [SMALL_STATE(324)] = 10745,
  [SMALL_STATE(325)] = 10772,
  [SMALL_STATE(326)] = 10799,
  [SMALL_STATE(327)] = 10826,
  [SMALL_STATE(328)] = 10853,
  [SMALL_STATE(329)] = 10880,
  [SMALL_STATE(330)] = 10905,
  [SMALL_STATE(331)] = 10932,
  [SMALL_STATE(332)] = 10957,
  [SMALL_STATE(333)] = 10984,
  [SMALL_STATE(334)] = 11011,
  [SMALL_STATE(335)] = 11035,
  [SMALL_STATE(336)] = 11059,
  [SMALL_STATE(337)] = 11083,
  [SMALL_STATE(338)] = 11107,
  [SMALL_STATE(339)] = 11131,
  [SMALL_STATE(340)] = 11155,
  [SMALL_STATE(341)] = 11179,
  [SMALL_STATE(342)] = 11203,
  [SMALL_STATE(343)] = 11227,
  [SMALL_STATE(344)] = 11251,
  [SMALL_STATE(345)] = 11275,
  [SMALL_STATE(346)] = 11299,
  [SMALL_STATE(347)] = 11323,
  [SMALL_STATE(348)] = 11347,
  [SMALL_STATE(349)] = 11371,
  [SMALL_STATE(350)] = 11395,
  [SMALL_STATE(351)] = 11419,
  [SMALL_STATE(352)] = 11443,
  [SMALL_STATE(353)] = 11467,
  [SMALL_STATE(354)] = 11491,
  [SMALL_STATE(355)] = 11515,
  [SMALL_STATE(356)] = 11538,
  [SMALL_STATE(357)] = 11561,
  [SMALL_STATE(358)] = 11584,
  [SMALL_STATE(359)] = 11607,
  [SMALL_STATE(360)] = 11630,
  [SMALL_STATE(361)] = 11653,
  [SMALL_STATE(362)] = 11676,
  [SMALL_STATE(363)] = 11699,
  [SMALL_STATE(364)] = 11722,
  [SMALL_STATE(365)] = 11747,
  [SMALL_STATE(366)] = 11770,
  [SMALL_STATE(367)] = 11793,
  [SMALL_STATE(368)] = 11816,
  [SMALL_STATE(369)] = 11839,
  [SMALL_STATE(370)] = 11862,
  [SMALL_STATE(371)] = 11885,
  [SMALL_STATE(372)] = 11899,
  [SMALL_STATE(373)] = 11919,
  [SMALL_STATE(374)] = 11939,
  [SMALL_STATE(375)] = 11959,
  [SMALL_STATE(376)] = 11975,
  [SMALL_STATE(377)] = 11995,
  [SMALL_STATE(378)] = 12015,
  [SMALL_STATE(379)] = 12035,
  [SMALL_STATE(380)] = 12055,
  [SMALL_STATE(381)] = 12075,
  [SMALL_STATE(382)] = 12095,
  [SMALL_STATE(383)] = 12109,
  [SMALL_STATE(384)] = 12121,
  [SMALL_STATE(385)] = 12141,
  [SMALL_STATE(386)] = 12155,
  [SMALL_STATE(387)] = 12175,
  [SMALL_STATE(388)] = 12195,
  [SMALL_STATE(389)] = 12215,
  [SMALL_STATE(390)] = 12235,
  [SMALL_STATE(391)] = 12255,
  [SMALL_STATE(392)] = 12275,
  [SMALL_STATE(393)] = 12295,
  [SMALL_STATE(394)] = 12315,
  [SMALL_STATE(395)] = 12335,
  [SMALL_STATE(396)] = 12355,
  [SMALL_STATE(397)] = 12375,
  [SMALL_STATE(398)] = 12395,
  [SMALL_STATE(399)] = 12415,
  [SMALL_STATE(400)] = 12431,
  [SMALL_STATE(401)] = 12451,
  [SMALL_STATE(402)] = 12471,
  [SMALL_STATE(403)] = 12491,
  [SMALL_STATE(404)] = 12511,
  [SMALL_STATE(405)] = 12527,
  [SMALL_STATE(406)] = 12547,
  [SMALL_STATE(407)] = 12559,
  [SMALL_STATE(408)] = 12579,
  [SMALL_STATE(409)] = 12599,
  [SMALL_STATE(410)] = 12619,
  [SMALL_STATE(411)] = 12639,
  [SMALL_STATE(412)] = 12655,
  [SMALL_STATE(413)] = 12675,
  [SMALL_STATE(414)] = 12689,
  [SMALL_STATE(415)] = 12709,
  [SMALL_STATE(416)] = 12729,
  [SMALL_STATE(417)] = 12745,
  [SMALL_STATE(418)] = 12765,
  [SMALL_STATE(419)] = 12777,
  [SMALL_STATE(420)] = 12791,
  [SMALL_STATE(421)] = 12805,
  [SMALL_STATE(422)] = 12821,
  [SMALL_STATE(423)] = 12841,
  [SMALL_STATE(424)] = 12857,
  [SMALL_STATE(425)] = 12873,
  [SMALL_STATE(426)] = 12893,
  [SMALL_STATE(427)] = 12913,
  [SMALL_STATE(428)] = 12933,
  [SMALL_STATE(429)] = 12953,
  [SMALL_STATE(430)] = 12973,
  [SMALL_STATE(431)] = 12987,
  [SMALL_STATE(432)] = 13007,
  [SMALL_STATE(433)] = 13027,
  [SMALL_STATE(434)] = 13047,
  [SMALL_STATE(435)] = 13067,
  [SMALL_STATE(436)] = 13087,
  [SMALL_STATE(437)] = 13107,
  [SMALL_STATE(438)] = 13127,
  [SMALL_STATE(439)] = 13147,
  [SMALL_STATE(440)] = 13163,
  [SMALL_STATE(441)] = 13183,
  [SMALL_STATE(442)] = 13197,
  [SMALL_STATE(443)] = 13217,
  [SMALL_STATE(444)] = 13237,
  [SMALL_STATE(445)] = 13257,
  [SMALL_STATE(446)] = 13270,
  [SMALL_STATE(447)] = 13287,
  [SMALL_STATE(448)] = 13304,
  [SMALL_STATE(449)] = 13319,
  [SMALL_STATE(450)] = 13330,
  [SMALL_STATE(451)] = 13347,
  [SMALL_STATE(452)] = 13360,
  [SMALL_STATE(453)] = 13377,
  [SMALL_STATE(454)] = 13394,
  [SMALL_STATE(455)] = 13407,
  [SMALL_STATE(456)] = 13424,
  [SMALL_STATE(457)] = 13437,
  [SMALL_STATE(458)] = 13454,
  [SMALL_STATE(459)] = 13471,
  [SMALL_STATE(460)] = 13488,
  [SMALL_STATE(461)] = 13505,
  [SMALL_STATE(462)] = 13522,
  [SMALL_STATE(463)] = 13539,
  [SMALL_STATE(464)] = 13556,
  [SMALL_STATE(465)] = 13573,
  [SMALL_STATE(466)] = 13590,
  [SMALL_STATE(467)] = 13607,
  [SMALL_STATE(468)] = 13624,
  [SMALL_STATE(469)] = 13641,
  [SMALL_STATE(470)] = 13656,
  [SMALL_STATE(471)] = 13669,
  [SMALL_STATE(472)] = 13686,
  [SMALL_STATE(473)] = 13703,
  [SMALL_STATE(474)] = 13720,
  [SMALL_STATE(475)] = 13733,
  [SMALL_STATE(476)] = 13746,
  [SMALL_STATE(477)] = 13763,
  [SMALL_STATE(478)] = 13780,
  [SMALL_STATE(479)] = 13797,
  [SMALL_STATE(480)] = 13814,
  [SMALL_STATE(481)] = 13831,
  [SMALL_STATE(482)] = 13848,
  [SMALL_STATE(483)] = 13861,
  [SMALL_STATE(484)] = 13878,
  [SMALL_STATE(485)] = 13886,
  [SMALL_STATE(486)] = 13894,
  [SMALL_STATE(487)] = 13902,
  [SMALL_STATE(488)] = 13910,
  [SMALL_STATE(489)] = 13918,
  [SMALL_STATE(490)] = 13926,
  [SMALL_STATE(491)] = 13934,
  [SMALL_STATE(492)] = 13948,
  [SMALL_STATE(493)] = 13956,
  [SMALL_STATE(494)] = 13970,
  [SMALL_STATE(495)] = 13978,
  [SMALL_STATE(496)] = 13992,
  [SMALL_STATE(497)] = 14000,
  [SMALL_STATE(498)] = 14012,
  [SMALL_STATE(499)] = 14020,
  [SMALL_STATE(500)] = 14032,
  [SMALL_STATE(501)] = 14046,
  [SMALL_STATE(502)] = 14054,
  [SMALL_STATE(503)] = 14064,
  [SMALL_STATE(504)] = 14076,
  [SMALL_STATE(505)] = 14088,
  [SMALL_STATE(506)] = 14096,
  [SMALL_STATE(507)] = 14104,
  [SMALL_STATE(508)] = 14118,
  [SMALL_STATE(509)] = 14127,
  [SMALL_STATE(510)] = 14136,
  [SMALL_STATE(511)] = 14149,
  [SMALL_STATE(512)] = 14158,
  [SMALL_STATE(513)] = 14167,
  [SMALL_STATE(514)] = 14176,
  [SMALL_STATE(515)] = 14185,
  [SMALL_STATE(516)] = 14194,
  [SMALL_STATE(517)] = 14207,
  [SMALL_STATE(518)] = 14216,
  [SMALL_STATE(519)] = 14229,
  [SMALL_STATE(520)] = 14238,
  [SMALL_STATE(521)] = 14247,
  [SMALL_STATE(522)] = 14256,
  [SMALL_STATE(523)] = 14265,
  [SMALL_STATE(524)] = 14274,
  [SMALL_STATE(525)] = 14283,
  [SMALL_STATE(526)] = 14296,
  [SMALL_STATE(527)] = 14309,
  [SMALL_STATE(528)] = 14322,
  [SMALL_STATE(529)] = 14335,
  [SMALL_STATE(530)] = 14344,
  [SMALL_STATE(531)] = 14353,
  [SMALL_STATE(532)] = 14362,
  [SMALL_STATE(533)] = 14371,
  [SMALL_STATE(534)] = 14384,
  [SMALL_STATE(535)] = 14393,
  [SMALL_STATE(536)] = 14402,
  [SMALL_STATE(537)] = 14411,
  [SMALL_STATE(538)] = 14420,
  [SMALL_STATE(539)] = 14429,
  [SMALL_STATE(540)] = 14438,
  [SMALL_STATE(541)] = 14451,
  [SMALL_STATE(542)] = 14462,
  [SMALL_STATE(543)] = 14471,
  [SMALL_STATE(544)] = 14480,
  [SMALL_STATE(545)] = 14489,
  [SMALL_STATE(546)] = 14502,
  [SMALL_STATE(547)] = 14511,
  [SMALL_STATE(548)] = 14524,
  [SMALL_STATE(549)] = 14533,
  [SMALL_STATE(550)] = 14542,
  [SMALL_STATE(551)] = 14551,
  [SMALL_STATE(552)] = 14560,
  [SMALL_STATE(553)] = 14569,
  [SMALL_STATE(554)] = 14575,
  [SMALL_STATE(555)] = 14581,
  [SMALL_STATE(556)] = 14591,
  [SMALL_STATE(557)] = 14601,
  [SMALL_STATE(558)] = 14607,
  [SMALL_STATE(559)] = 14617,
  [SMALL_STATE(560)] = 14623,
  [SMALL_STATE(561)] = 14633,
  [SMALL_STATE(562)] = 14641,
  [SMALL_STATE(563)] = 14651,
  [SMALL_STATE(564)] = 14661,
  [SMALL_STATE(565)] = 14669,
  [SMALL_STATE(566)] = 14679,
  [SMALL_STATE(567)] = 14689,
  [SMALL_STATE(568)] = 14699,
  [SMALL_STATE(569)] = 14705,
  [SMALL_STATE(570)] = 14715,
  [SMALL_STATE(571)] = 14725,
  [SMALL_STATE(572)] = 14735,
  [SMALL_STATE(573)] = 14745,
  [SMALL_STATE(574)] = 14753,
  [SMALL_STATE(575)] = 14761,
  [SMALL_STATE(576)] = 14771,
  [SMALL_STATE(577)] = 14781,
  [SMALL_STATE(578)] = 14791,
  [SMALL_STATE(579)] = 14801,
  [SMALL_STATE(580)] = 14809,
  [SMALL_STATE(581)] = 14819,
  [SMALL_STATE(582)] = 14829,
  [SMALL_STATE(583)] = 14839,
  [SMALL_STATE(584)] = 14849,
  [SMALL_STATE(585)] = 14859,
  [SMALL_STATE(586)] = 14867,
  [SMALL_STATE(587)] = 14877,
  [SMALL_STATE(588)] = 14887,
  [SMALL_STATE(589)] = 14895,
  [SMALL_STATE(590)] = 14903,
  [SMALL_STATE(591)] = 14913,
  [SMALL_STATE(592)] = 14923,
  [SMALL_STATE(593)] = 14929,
  [SMALL_STATE(594)] = 14939,
  [SMALL_STATE(595)] = 14949,
  [SMALL_STATE(596)] = 14955,
  [SMALL_STATE(597)] = 14965,
  [SMALL_STATE(598)] = 14973,
  [SMALL_STATE(599)] = 14981,
  [SMALL_STATE(600)] = 14991,
  [SMALL_STATE(601)] = 15001,
  [SMALL_STATE(602)] = 15009,
  [SMALL_STATE(603)] = 15017,
  [SMALL_STATE(604)] = 15027,
  [SMALL_STATE(605)] = 15037,
  [SMALL_STATE(606)] = 15045,
  [SMALL_STATE(607)] = 15055,
  [SMALL_STATE(608)] = 15065,
  [SMALL_STATE(609)] = 15075,
  [SMALL_STATE(610)] = 15083,
  [SMALL_STATE(611)] = 15090,
  [SMALL_STATE(612)] = 15097,
  [SMALL_STATE(613)] = 15104,
  [SMALL_STATE(614)] = 15111,
  [SMALL_STATE(615)] = 15118,
  [SMALL_STATE(616)] = 15125,
  [SMALL_STATE(617)] = 15132,
  [SMALL_STATE(618)] = 15139,
  [SMALL_STATE(619)] = 15146,
  [SMALL_STATE(620)] = 15153,
  [SMALL_STATE(621)] = 15160,
  [SMALL_STATE(622)] = 15165,
  [SMALL_STATE(623)] = 15172,
  [SMALL_STATE(624)] = 15179,
  [SMALL_STATE(625)] = 15184,
  [SMALL_STATE(626)] = 15191,
  [SMALL_STATE(627)] = 15198,
  [SMALL_STATE(628)] = 15205,
  [SMALL_STATE(629)] = 15212,
  [SMALL_STATE(630)] = 15219,
  [SMALL_STATE(631)] = 15226,
  [SMALL_STATE(632)] = 15233,
  [SMALL_STATE(633)] = 15240,
  [SMALL_STATE(634)] = 15247,
  [SMALL_STATE(635)] = 15254,
  [SMALL_STATE(636)] = 15261,
  [SMALL_STATE(637)] = 15268,
  [SMALL_STATE(638)] = 15275,
  [SMALL_STATE(639)] = 15282,
  [SMALL_STATE(640)] = 15289,
  [SMALL_STATE(641)] = 15296,
  [SMALL_STATE(642)] = 15303,
  [SMALL_STATE(643)] = 15310,
  [SMALL_STATE(644)] = 15317,
  [SMALL_STATE(645)] = 15324,
  [SMALL_STATE(646)] = 15331,
  [SMALL_STATE(647)] = 15338,
  [SMALL_STATE(648)] = 15342,
  [SMALL_STATE(649)] = 15346,
  [SMALL_STATE(650)] = 15350,
  [SMALL_STATE(651)] = 15354,
  [SMALL_STATE(652)] = 15358,
  [SMALL_STATE(653)] = 15362,
  [SMALL_STATE(654)] = 15366,
  [SMALL_STATE(655)] = 15370,
  [SMALL_STATE(656)] = 15374,
  [SMALL_STATE(657)] = 15378,
  [SMALL_STATE(658)] = 15382,
  [SMALL_STATE(659)] = 15386,
  [SMALL_STATE(660)] = 15390,
  [SMALL_STATE(661)] = 15394,
  [SMALL_STATE(662)] = 15398,
  [SMALL_STATE(663)] = 15402,
  [SMALL_STATE(664)] = 15406,
  [SMALL_STATE(665)] = 15410,
  [SMALL_STATE(666)] = 15414,
  [SMALL_STATE(667)] = 15418,
  [SMALL_STATE(668)] = 15422,
  [SMALL_STATE(669)] = 15426,
  [SMALL_STATE(670)] = 15430,
  [SMALL_STATE(671)] = 15434,
  [SMALL_STATE(672)] = 15438,
  [SMALL_STATE(673)] = 15442,
  [SMALL_STATE(674)] = 15446,
  [SMALL_STATE(675)] = 15450,
  [SMALL_STATE(676)] = 15454,
  [SMALL_STATE(677)] = 15458,
  [SMALL_STATE(678)] = 15462,
  [SMALL_STATE(679)] = 15466,
  [SMALL_STATE(680)] = 15470,
  [SMALL_STATE(681)] = 15474,
  [SMALL_STATE(682)] = 15478,
  [SMALL_STATE(683)] = 15482,
  [SMALL_STATE(684)] = 15486,
  [SMALL_STATE(685)] = 15490,
  [SMALL_STATE(686)] = 15494,
  [SMALL_STATE(687)] = 15498,
  [SMALL_STATE(688)] = 15502,
  [SMALL_STATE(689)] = 15506,
  [SMALL_STATE(690)] = 15510,
  [SMALL_STATE(691)] = 15514,
  [SMALL_STATE(692)] = 15518,
  [SMALL_STATE(693)] = 15522,
  [SMALL_STATE(694)] = 15526,
  [SMALL_STATE(695)] = 15530,
  [SMALL_STATE(696)] = 15534,
  [SMALL_STATE(697)] = 15538,
  [SMALL_STATE(698)] = 15542,
  [SMALL_STATE(699)] = 15546,
  [SMALL_STATE(700)] = 15550,
  [SMALL_STATE(701)] = 15554,
  [SMALL_STATE(702)] = 15558,
  [SMALL_STATE(703)] = 15562,
  [SMALL_STATE(704)] = 15566,
  [SMALL_STATE(705)] = 15570,
  [SMALL_STATE(706)] = 15574,
  [SMALL_STATE(707)] = 15578,
  [SMALL_STATE(708)] = 15582,
  [SMALL_STATE(709)] = 15586,
  [SMALL_STATE(710)] = 15590,
  [SMALL_STATE(711)] = 15594,
  [SMALL_STATE(712)] = 15598,
  [SMALL_STATE(713)] = 15602,
  [SMALL_STATE(714)] = 15606,
  [SMALL_STATE(715)] = 15610,
  [SMALL_STATE(716)] = 15614,
  [SMALL_STATE(717)] = 15618,
  [SMALL_STATE(718)] = 15622,
  [SMALL_STATE(719)] = 15626,
  [SMALL_STATE(720)] = 15630,
  [SMALL_STATE(721)] = 15634,
  [SMALL_STATE(722)] = 15638,
  [SMALL_STATE(723)] = 15642,
  [SMALL_STATE(724)] = 15646,
  [SMALL_STATE(725)] = 15650,
  [SMALL_STATE(726)] = 15654,
  [SMALL_STATE(727)] = 15658,
  [SMALL_STATE(728)] = 15662,
  [SMALL_STATE(729)] = 15666,
  [SMALL_STATE(730)] = 15670,
  [SMALL_STATE(731)] = 15674,
  [SMALL_STATE(732)] = 15678,
  [SMALL_STATE(733)] = 15682,
  [SMALL_STATE(734)] = 15686,
  [SMALL_STATE(735)] = 15690,
  [SMALL_STATE(736)] = 15694,
  [SMALL_STATE(737)] = 15698,
  [SMALL_STATE(738)] = 15702,
  [SMALL_STATE(739)] = 15706,
  [SMALL_STATE(740)] = 15710,
  [SMALL_STATE(741)] = 15714,
  [SMALL_STATE(742)] = 15718,
  [SMALL_STATE(743)] = 15722,
  [SMALL_STATE(744)] = 15726,
  [SMALL_STATE(745)] = 15730,
  [SMALL_STATE(746)] = 15734,
  [SMALL_STATE(747)] = 15738,
  [SMALL_STATE(748)] = 15742,
  [SMALL_STATE(749)] = 15746,
  [SMALL_STATE(750)] = 15750,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(595),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(391),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(635),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(635),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(649),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(733),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(578),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(577),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(738),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(644),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(644),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(301),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(301),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(651),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(557),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(384),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(645),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(645),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(678),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(737),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(606),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(607),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(744),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(615),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(615),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(306),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(306),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(680),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(592),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(429),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(634),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(634),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(670),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(596),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(599),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(734),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(630),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(630),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(310),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(310),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(669),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(553),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(442),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(636),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(636),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(664),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(582),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(583),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(741),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(632),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(632),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(311),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(311),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(666),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(35),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(568),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(392),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(643),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(643),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(656),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(663),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(569),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(591),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(696),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(640),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(640),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(719),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(673),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(603),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(724),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(560),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(79),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(586),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(695),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(102),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(699),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(194),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(210),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(219),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(713),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(687),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(316),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(539),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(314),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(469),
  [1113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(694),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(693),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(469),
  [1202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(694),
  [1205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(693),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(303),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(421),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(661),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(469),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(698),
  [1321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(559),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(653),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1549] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
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
