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
#define STATE_COUNT 681
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
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
  sym__comment = 85,
  sym__comment_not_first_line = 86,
  sym_angular_attribute_name = 87,
  sym_quoted_javascript = 88,
  sym_quoted_attribute_value = 89,
  sym_content = 90,
  aux_sym__content_or_javascript = 91,
  sym__un_delimited_javascript = 92,
  aux_sym__un_delimited_javascript_multiline = 93,
  sym__single_line_buf_code = 94,
  sym__multi_line_buf_code = 95,
  sym_unbuffered_code = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_case_repeat1 = 98,
  aux_sym_script_block_repeat1 = 99,
  aux_sym_tag_repeat1 = 100,
  aux_sym__content_after_dot_repeat1 = 101,
  aux_sym_attributes_repeat1 = 102,
  aux_sym__attribute_repeat1 = 103,
  aux_sym_children_repeat1 = 104,
  aux_sym__comment_repeat1 = 105,
  aux_sym_content_repeat1 = 106,
  aux_sym__single_line_buf_code_repeat1 = 107,
  alias_sym_attribute_value = 108,
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
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(672);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0) ADVANCE(683);
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
  [12] = {.lex_state = 152, .external_lex_state = 3},
  [13] = {.lex_state = 152, .external_lex_state = 3},
  [14] = {.lex_state = 152, .external_lex_state = 3},
  [15] = {.lex_state = 152, .external_lex_state = 3},
  [16] = {.lex_state = 152, .external_lex_state = 2},
  [17] = {.lex_state = 152, .external_lex_state = 2},
  [18] = {.lex_state = 152, .external_lex_state = 3},
  [19] = {.lex_state = 152, .external_lex_state = 3},
  [20] = {.lex_state = 152, .external_lex_state = 3},
  [21] = {.lex_state = 152, .external_lex_state = 3},
  [22] = {.lex_state = 152, .external_lex_state = 3},
  [23] = {.lex_state = 152, .external_lex_state = 3},
  [24] = {.lex_state = 152, .external_lex_state = 3},
  [25] = {.lex_state = 152, .external_lex_state = 2},
  [26] = {.lex_state = 152, .external_lex_state = 3},
  [27] = {.lex_state = 152, .external_lex_state = 3},
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
  [45] = {.lex_state = 150, .external_lex_state = 2},
  [46] = {.lex_state = 153, .external_lex_state = 1},
  [47] = {.lex_state = 153, .external_lex_state = 2},
  [48] = {.lex_state = 150, .external_lex_state = 2},
  [49] = {.lex_state = 153, .external_lex_state = 1},
  [50] = {.lex_state = 153, .external_lex_state = 1},
  [51] = {.lex_state = 153, .external_lex_state = 1},
  [52] = {.lex_state = 153, .external_lex_state = 1},
  [53] = {.lex_state = 153, .external_lex_state = 1},
  [54] = {.lex_state = 153, .external_lex_state = 1},
  [55] = {.lex_state = 666, .external_lex_state = 2},
  [56] = {.lex_state = 153, .external_lex_state = 2},
  [57] = {.lex_state = 666, .external_lex_state = 2},
  [58] = {.lex_state = 153, .external_lex_state = 4},
  [59] = {.lex_state = 150, .external_lex_state = 2},
  [60] = {.lex_state = 153, .external_lex_state = 4},
  [61] = {.lex_state = 153},
  [62] = {.lex_state = 153, .external_lex_state = 1},
  [63] = {.lex_state = 153, .external_lex_state = 1},
  [64] = {.lex_state = 153, .external_lex_state = 1},
  [65] = {.lex_state = 153, .external_lex_state = 4},
  [66] = {.lex_state = 666, .external_lex_state = 2},
  [67] = {.lex_state = 153, .external_lex_state = 4},
  [68] = {.lex_state = 153, .external_lex_state = 4},
  [69] = {.lex_state = 153, .external_lex_state = 4},
  [70] = {.lex_state = 153, .external_lex_state = 4},
  [71] = {.lex_state = 153, .external_lex_state = 1},
  [72] = {.lex_state = 153, .external_lex_state = 1},
  [73] = {.lex_state = 153},
  [74] = {.lex_state = 153, .external_lex_state = 1},
  [75] = {.lex_state = 666, .external_lex_state = 2},
  [76] = {.lex_state = 153, .external_lex_state = 1},
  [77] = {.lex_state = 153, .external_lex_state = 1},
  [78] = {.lex_state = 666, .external_lex_state = 2},
  [79] = {.lex_state = 153, .external_lex_state = 1},
  [80] = {.lex_state = 150, .external_lex_state = 2},
  [81] = {.lex_state = 150, .external_lex_state = 2},
  [82] = {.lex_state = 153, .external_lex_state = 2},
  [83] = {.lex_state = 152, .external_lex_state = 1},
  [84] = {.lex_state = 665, .external_lex_state = 2},
  [85] = {.lex_state = 153, .external_lex_state = 2},
  [86] = {.lex_state = 153, .external_lex_state = 2},
  [87] = {.lex_state = 153, .external_lex_state = 2},
  [88] = {.lex_state = 153, .external_lex_state = 2},
  [89] = {.lex_state = 153, .external_lex_state = 2},
  [90] = {.lex_state = 153, .external_lex_state = 2},
  [91] = {.lex_state = 153, .external_lex_state = 2},
  [92] = {.lex_state = 153, .external_lex_state = 2},
  [93] = {.lex_state = 153, .external_lex_state = 2},
  [94] = {.lex_state = 153, .external_lex_state = 2},
  [95] = {.lex_state = 153, .external_lex_state = 2},
  [96] = {.lex_state = 153, .external_lex_state = 2},
  [97] = {.lex_state = 153, .external_lex_state = 2},
  [98] = {.lex_state = 153, .external_lex_state = 2},
  [99] = {.lex_state = 153, .external_lex_state = 2},
  [100] = {.lex_state = 153, .external_lex_state = 2},
  [101] = {.lex_state = 153, .external_lex_state = 2},
  [102] = {.lex_state = 151, .external_lex_state = 2},
  [103] = {.lex_state = 153, .external_lex_state = 2},
  [104] = {.lex_state = 153, .external_lex_state = 4},
  [105] = {.lex_state = 153, .external_lex_state = 2},
  [106] = {.lex_state = 666, .external_lex_state = 2},
  [107] = {.lex_state = 151, .external_lex_state = 2},
  [108] = {.lex_state = 150, .external_lex_state = 2},
  [109] = {.lex_state = 152, .external_lex_state = 1},
  [110] = {.lex_state = 153, .external_lex_state = 2},
  [111] = {.lex_state = 665, .external_lex_state = 2},
  [112] = {.lex_state = 153, .external_lex_state = 2},
  [113] = {.lex_state = 153, .external_lex_state = 1},
  [114] = {.lex_state = 153, .external_lex_state = 2},
  [115] = {.lex_state = 152, .external_lex_state = 1},
  [116] = {.lex_state = 153, .external_lex_state = 2},
  [117] = {.lex_state = 152, .external_lex_state = 1},
  [118] = {.lex_state = 153, .external_lex_state = 2},
  [119] = {.lex_state = 152, .external_lex_state = 1},
  [120] = {.lex_state = 152, .external_lex_state = 1},
  [121] = {.lex_state = 153, .external_lex_state = 2},
  [122] = {.lex_state = 153, .external_lex_state = 1},
  [123] = {.lex_state = 153, .external_lex_state = 2},
  [124] = {.lex_state = 153, .external_lex_state = 5},
  [125] = {.lex_state = 665, .external_lex_state = 2},
  [126] = {.lex_state = 153, .external_lex_state = 2},
  [127] = {.lex_state = 153, .external_lex_state = 2},
  [128] = {.lex_state = 153, .external_lex_state = 2},
  [129] = {.lex_state = 153, .external_lex_state = 2},
  [130] = {.lex_state = 153, .external_lex_state = 2},
  [131] = {.lex_state = 153, .external_lex_state = 2},
  [132] = {.lex_state = 153, .external_lex_state = 2},
  [133] = {.lex_state = 153, .external_lex_state = 2},
  [134] = {.lex_state = 153, .external_lex_state = 2},
  [135] = {.lex_state = 153, .external_lex_state = 2},
  [136] = {.lex_state = 153, .external_lex_state = 2},
  [137] = {.lex_state = 153, .external_lex_state = 2},
  [138] = {.lex_state = 152, .external_lex_state = 1},
  [139] = {.lex_state = 153, .external_lex_state = 5},
  [140] = {.lex_state = 152, .external_lex_state = 1},
  [141] = {.lex_state = 152, .external_lex_state = 1},
  [142] = {.lex_state = 152, .external_lex_state = 1},
  [143] = {.lex_state = 152, .external_lex_state = 1},
  [144] = {.lex_state = 152, .external_lex_state = 1},
  [145] = {.lex_state = 153, .external_lex_state = 2},
  [146] = {.lex_state = 151, .external_lex_state = 5},
  [147] = {.lex_state = 153, .external_lex_state = 2},
  [148] = {.lex_state = 665, .external_lex_state = 2},
  [149] = {.lex_state = 153, .external_lex_state = 2},
  [150] = {.lex_state = 153, .external_lex_state = 2},
  [151] = {.lex_state = 153, .external_lex_state = 5},
  [152] = {.lex_state = 153, .external_lex_state = 2},
  [153] = {.lex_state = 153, .external_lex_state = 2},
  [154] = {.lex_state = 153, .external_lex_state = 2},
  [155] = {.lex_state = 153, .external_lex_state = 2},
  [156] = {.lex_state = 153, .external_lex_state = 2},
  [157] = {.lex_state = 153, .external_lex_state = 5},
  [158] = {.lex_state = 153, .external_lex_state = 5},
  [159] = {.lex_state = 153, .external_lex_state = 2},
  [160] = {.lex_state = 153, .external_lex_state = 2},
  [161] = {.lex_state = 153, .external_lex_state = 2},
  [162] = {.lex_state = 153, .external_lex_state = 5},
  [163] = {.lex_state = 153, .external_lex_state = 5},
  [164] = {.lex_state = 151, .external_lex_state = 2},
  [165] = {.lex_state = 153, .external_lex_state = 5},
  [166] = {.lex_state = 153, .external_lex_state = 5},
  [167] = {.lex_state = 151, .external_lex_state = 5},
  [168] = {.lex_state = 151, .external_lex_state = 2},
  [169] = {.lex_state = 153, .external_lex_state = 5},
  [170] = {.lex_state = 153, .external_lex_state = 5},
  [171] = {.lex_state = 665, .external_lex_state = 2},
  [172] = {.lex_state = 153, .external_lex_state = 5},
  [173] = {.lex_state = 153, .external_lex_state = 5},
  [174] = {.lex_state = 153, .external_lex_state = 5},
  [175] = {.lex_state = 153, .external_lex_state = 2},
  [176] = {.lex_state = 153, .external_lex_state = 2},
  [177] = {.lex_state = 153, .external_lex_state = 2},
  [178] = {.lex_state = 152, .external_lex_state = 1},
  [179] = {.lex_state = 153, .external_lex_state = 5},
  [180] = {.lex_state = 151, .external_lex_state = 2},
  [181] = {.lex_state = 152, .external_lex_state = 1},
  [182] = {.lex_state = 152, .external_lex_state = 1},
  [183] = {.lex_state = 152, .external_lex_state = 6},
  [184] = {.lex_state = 152, .external_lex_state = 2},
  [185] = {.lex_state = 152, .external_lex_state = 2},
  [186] = {.lex_state = 152, .external_lex_state = 2},
  [187] = {.lex_state = 152, .external_lex_state = 2},
  [188] = {.lex_state = 665},
  [189] = {.lex_state = 152, .external_lex_state = 2},
  [190] = {.lex_state = 152, .external_lex_state = 2},
  [191] = {.lex_state = 152, .external_lex_state = 2},
  [192] = {.lex_state = 152, .external_lex_state = 4},
  [193] = {.lex_state = 152, .external_lex_state = 2},
  [194] = {.lex_state = 665, .external_lex_state = 2},
  [195] = {.lex_state = 152, .external_lex_state = 2},
  [196] = {.lex_state = 152, .external_lex_state = 2},
  [197] = {.lex_state = 152, .external_lex_state = 6},
  [198] = {.lex_state = 153},
  [199] = {.lex_state = 151, .external_lex_state = 2},
  [200] = {.lex_state = 152, .external_lex_state = 2},
  [201] = {.lex_state = 152, .external_lex_state = 6},
  [202] = {.lex_state = 152, .external_lex_state = 2},
  [203] = {.lex_state = 152, .external_lex_state = 2},
  [204] = {.lex_state = 152, .external_lex_state = 4},
  [205] = {.lex_state = 151, .external_lex_state = 5},
  [206] = {.lex_state = 152, .external_lex_state = 2},
  [207] = {.lex_state = 152, .external_lex_state = 6},
  [208] = {.lex_state = 152, .external_lex_state = 2},
  [209] = {.lex_state = 665},
  [210] = {.lex_state = 152, .external_lex_state = 2},
  [211] = {.lex_state = 152, .external_lex_state = 2},
  [212] = {.lex_state = 152, .external_lex_state = 6},
  [213] = {.lex_state = 152, .external_lex_state = 1},
  [214] = {.lex_state = 152, .external_lex_state = 2},
  [215] = {.lex_state = 152, .external_lex_state = 2},
  [216] = {.lex_state = 152, .external_lex_state = 6},
  [217] = {.lex_state = 152, .external_lex_state = 2},
  [218] = {.lex_state = 152, .external_lex_state = 2},
  [219] = {.lex_state = 152, .external_lex_state = 2},
  [220] = {.lex_state = 152, .external_lex_state = 2},
  [221] = {.lex_state = 152, .external_lex_state = 2},
  [222] = {.lex_state = 152, .external_lex_state = 2},
  [223] = {.lex_state = 152, .external_lex_state = 2},
  [224] = {.lex_state = 152, .external_lex_state = 2},
  [225] = {.lex_state = 152, .external_lex_state = 2},
  [226] = {.lex_state = 152, .external_lex_state = 6},
  [227] = {.lex_state = 152, .external_lex_state = 2},
  [228] = {.lex_state = 152, .external_lex_state = 5},
  [229] = {.lex_state = 152, .external_lex_state = 2},
  [230] = {.lex_state = 152, .external_lex_state = 2},
  [231] = {.lex_state = 152, .external_lex_state = 5},
  [232] = {.lex_state = 152, .external_lex_state = 2},
  [233] = {.lex_state = 152, .external_lex_state = 2},
  [234] = {.lex_state = 152, .external_lex_state = 2},
  [235] = {.lex_state = 152, .external_lex_state = 2},
  [236] = {.lex_state = 665},
  [237] = {.lex_state = 152, .external_lex_state = 2},
  [238] = {.lex_state = 152, .external_lex_state = 2},
  [239] = {.lex_state = 152, .external_lex_state = 5},
  [240] = {.lex_state = 152, .external_lex_state = 2},
  [241] = {.lex_state = 152, .external_lex_state = 2},
  [242] = {.lex_state = 152, .external_lex_state = 2},
  [243] = {.lex_state = 152, .external_lex_state = 2},
  [244] = {.lex_state = 152, .external_lex_state = 2},
  [245] = {.lex_state = 152, .external_lex_state = 2},
  [246] = {.lex_state = 152, .external_lex_state = 2},
  [247] = {.lex_state = 152, .external_lex_state = 2},
  [248] = {.lex_state = 152, .external_lex_state = 2},
  [249] = {.lex_state = 152, .external_lex_state = 2},
  [250] = {.lex_state = 152, .external_lex_state = 5},
  [251] = {.lex_state = 152, .external_lex_state = 2},
  [252] = {.lex_state = 152},
  [253] = {.lex_state = 152},
  [254] = {.lex_state = 152},
  [255] = {.lex_state = 152},
  [256] = {.lex_state = 152},
  [257] = {.lex_state = 152},
  [258] = {.lex_state = 152},
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
  [275] = {.lex_state = 54, .external_lex_state = 3},
  [276] = {.lex_state = 54, .external_lex_state = 3},
  [277] = {.lex_state = 54, .external_lex_state = 3},
  [278] = {.lex_state = 54, .external_lex_state = 3},
  [279] = {.lex_state = 54, .external_lex_state = 3},
  [280] = {.lex_state = 54, .external_lex_state = 3},
  [281] = {.lex_state = 54, .external_lex_state = 3},
  [282] = {.lex_state = 54, .external_lex_state = 3},
  [283] = {.lex_state = 54, .external_lex_state = 3},
  [284] = {.lex_state = 54, .external_lex_state = 3},
  [285] = {.lex_state = 54, .external_lex_state = 3},
  [286] = {.lex_state = 54, .external_lex_state = 3},
  [287] = {.lex_state = 54, .external_lex_state = 3},
  [288] = {.lex_state = 54, .external_lex_state = 3},
  [289] = {.lex_state = 55},
  [290] = {.lex_state = 55},
  [291] = {.lex_state = 54, .external_lex_state = 3},
  [292] = {.lex_state = 64},
  [293] = {.lex_state = 64},
  [294] = {.lex_state = 64},
  [295] = {.lex_state = 55, .external_lex_state = 3},
  [296] = {.lex_state = 55, .external_lex_state = 3},
  [297] = {.lex_state = 55, .external_lex_state = 3},
  [298] = {.lex_state = 55, .external_lex_state = 3},
  [299] = {.lex_state = 55, .external_lex_state = 3},
  [300] = {.lex_state = 55, .external_lex_state = 3},
  [301] = {.lex_state = 55, .external_lex_state = 3},
  [302] = {.lex_state = 55, .external_lex_state = 3},
  [303] = {.lex_state = 55, .external_lex_state = 3},
  [304] = {.lex_state = 55, .external_lex_state = 3},
  [305] = {.lex_state = 55, .external_lex_state = 3},
  [306] = {.lex_state = 55, .external_lex_state = 3},
  [307] = {.lex_state = 55, .external_lex_state = 3},
  [308] = {.lex_state = 55, .external_lex_state = 3},
  [309] = {.lex_state = 11, .external_lex_state = 5},
  [310] = {.lex_state = 11, .external_lex_state = 5},
  [311] = {.lex_state = 60},
  [312] = {.lex_state = 11, .external_lex_state = 5},
  [313] = {.lex_state = 11, .external_lex_state = 5},
  [314] = {.lex_state = 11, .external_lex_state = 5},
  [315] = {.lex_state = 11, .external_lex_state = 5},
  [316] = {.lex_state = 11, .external_lex_state = 5},
  [317] = {.lex_state = 11, .external_lex_state = 5},
  [318] = {.lex_state = 11, .external_lex_state = 5},
  [319] = {.lex_state = 11, .external_lex_state = 5},
  [320] = {.lex_state = 11, .external_lex_state = 5},
  [321] = {.lex_state = 11, .external_lex_state = 5},
  [322] = {.lex_state = 11, .external_lex_state = 5},
  [323] = {.lex_state = 11, .external_lex_state = 5},
  [324] = {.lex_state = 11, .external_lex_state = 5},
  [325] = {.lex_state = 11, .external_lex_state = 3},
  [326] = {.lex_state = 11, .external_lex_state = 3},
  [327] = {.lex_state = 11},
  [328] = {.lex_state = 63, .external_lex_state = 2},
  [329] = {.lex_state = 11, .external_lex_state = 3},
  [330] = {.lex_state = 11, .external_lex_state = 3},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 63, .external_lex_state = 2},
  [333] = {.lex_state = 11},
  [334] = {.lex_state = 63, .external_lex_state = 2},
  [335] = {.lex_state = 11, .external_lex_state = 3},
  [336] = {.lex_state = 11, .external_lex_state = 3},
  [337] = {.lex_state = 11, .external_lex_state = 3},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 11, .external_lex_state = 3},
  [340] = {.lex_state = 11, .external_lex_state = 3},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 63, .external_lex_state = 2},
  [343] = {.lex_state = 11, .external_lex_state = 3},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 11, .external_lex_state = 3},
  [346] = {.lex_state = 11, .external_lex_state = 3},
  [347] = {.lex_state = 11, .external_lex_state = 3},
  [348] = {.lex_state = 11, .external_lex_state = 3},
  [349] = {.lex_state = 11, .external_lex_state = 3},
  [350] = {.lex_state = 11, .external_lex_state = 3},
  [351] = {.lex_state = 63, .external_lex_state = 2},
  [352] = {.lex_state = 63, .external_lex_state = 2},
  [353] = {.lex_state = 11, .external_lex_state = 3},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 11, .external_lex_state = 3},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 11, .external_lex_state = 3},
  [358] = {.lex_state = 11, .external_lex_state = 3},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 11, .external_lex_state = 3},
  [361] = {.lex_state = 11, .external_lex_state = 3},
  [362] = {.lex_state = 63, .external_lex_state = 1},
  [363] = {.lex_state = 11, .external_lex_state = 3},
  [364] = {.lex_state = 63, .external_lex_state = 2},
  [365] = {.lex_state = 11, .external_lex_state = 3},
  [366] = {.lex_state = 11, .external_lex_state = 3},
  [367] = {.lex_state = 63, .external_lex_state = 1},
  [368] = {.lex_state = 11, .external_lex_state = 3},
  [369] = {.lex_state = 11, .external_lex_state = 3},
  [370] = {.lex_state = 11, .external_lex_state = 3},
  [371] = {.lex_state = 11},
  [372] = {.lex_state = 63, .external_lex_state = 1},
  [373] = {.lex_state = 11, .external_lex_state = 3},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 63, .external_lex_state = 1},
  [376] = {.lex_state = 11, .external_lex_state = 3},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 63, .external_lex_state = 1},
  [379] = {.lex_state = 63, .external_lex_state = 2},
  [380] = {.lex_state = 11, .external_lex_state = 3},
  [381] = {.lex_state = 11, .external_lex_state = 3},
  [382] = {.lex_state = 11, .external_lex_state = 3},
  [383] = {.lex_state = 11},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 63, .external_lex_state = 2},
  [386] = {.lex_state = 63, .external_lex_state = 1},
  [387] = {.lex_state = 11},
  [388] = {.lex_state = 11},
  [389] = {.lex_state = 11},
  [390] = {.lex_state = 63, .external_lex_state = 3},
  [391] = {.lex_state = 11},
  [392] = {.lex_state = 11},
  [393] = {.lex_state = 11},
  [394] = {.lex_state = 11},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 11},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 63, .external_lex_state = 3},
  [399] = {.lex_state = 11},
  [400] = {.lex_state = 55},
  [401] = {.lex_state = 63, .external_lex_state = 3},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 63, .external_lex_state = 3},
  [404] = {.lex_state = 11},
  [405] = {.lex_state = 63, .external_lex_state = 3},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 11},
  [408] = {.lex_state = 11, .external_lex_state = 3},
  [409] = {.lex_state = 55, .external_lex_state = 3},
  [410] = {.lex_state = 55, .external_lex_state = 3},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 63, .external_lex_state = 3},
  [415] = {.lex_state = 55, .external_lex_state = 3},
  [416] = {.lex_state = 63, .external_lex_state = 3},
  [417] = {.lex_state = 11},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 63, .external_lex_state = 3},
  [420] = {.lex_state = 63, .external_lex_state = 1},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 63, .external_lex_state = 2},
  [423] = {.lex_state = 63, .external_lex_state = 2},
  [424] = {.lex_state = 63, .external_lex_state = 2},
  [425] = {.lex_state = 63, .external_lex_state = 2},
  [426] = {.lex_state = 11, .external_lex_state = 3},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 63},
  [429] = {.lex_state = 63, .external_lex_state = 2},
  [430] = {.lex_state = 63, .external_lex_state = 2},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 63, .external_lex_state = 2},
  [433] = {.lex_state = 63, .external_lex_state = 2},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 63, .external_lex_state = 2},
  [436] = {.lex_state = 63},
  [437] = {.lex_state = 11, .external_lex_state = 3},
  [438] = {.lex_state = 64},
  [439] = {.lex_state = 63, .external_lex_state = 2},
  [440] = {.lex_state = 63, .external_lex_state = 2},
  [441] = {.lex_state = 11, .external_lex_state = 3},
  [442] = {.lex_state = 63},
  [443] = {.lex_state = 55},
  [444] = {.lex_state = 63, .external_lex_state = 2},
  [445] = {.lex_state = 63},
  [446] = {.lex_state = 63},
  [447] = {.lex_state = 11, .external_lex_state = 5},
  [448] = {.lex_state = 50, .external_lex_state = 2},
  [449] = {.lex_state = 63},
  [450] = {.lex_state = 50, .external_lex_state = 2},
  [451] = {.lex_state = 53, .external_lex_state = 3},
  [452] = {.lex_state = 11, .external_lex_state = 3},
  [453] = {.lex_state = 63},
  [454] = {.lex_state = 11, .external_lex_state = 3},
  [455] = {.lex_state = 63},
  [456] = {.lex_state = 63},
  [457] = {.lex_state = 50, .external_lex_state = 2},
  [458] = {.lex_state = 63},
  [459] = {.lex_state = 54},
  [460] = {.lex_state = 63},
  [461] = {.lex_state = 54},
  [462] = {.lex_state = 63},
  [463] = {.lex_state = 63},
  [464] = {.lex_state = 63},
  [465] = {.lex_state = 63},
  [466] = {.lex_state = 63},
  [467] = {.lex_state = 63},
  [468] = {.lex_state = 50, .external_lex_state = 2},
  [469] = {.lex_state = 53, .external_lex_state = 3},
  [470] = {.lex_state = 53, .external_lex_state = 3},
  [471] = {.lex_state = 11, .external_lex_state = 3},
  [472] = {.lex_state = 63},
  [473] = {.lex_state = 63},
  [474] = {.lex_state = 53, .external_lex_state = 3},
  [475] = {.lex_state = 53, .external_lex_state = 3},
  [476] = {.lex_state = 63},
  [477] = {.lex_state = 63},
  [478] = {.lex_state = 50, .external_lex_state = 2},
  [479] = {.lex_state = 63},
  [480] = {.lex_state = 63},
  [481] = {.lex_state = 50, .external_lex_state = 2},
  [482] = {.lex_state = 63},
  [483] = {.lex_state = 54},
  [484] = {.lex_state = 53},
  [485] = {.lex_state = 54},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 53},
  [488] = {.lex_state = 53},
  [489] = {.lex_state = 54},
  [490] = {.lex_state = 54},
  [491] = {.lex_state = 54},
  [492] = {.lex_state = 54},
  [493] = {.lex_state = 54},
  [494] = {.lex_state = 54},
  [495] = {.lex_state = 661, .external_lex_state = 5},
  [496] = {.lex_state = 50, .external_lex_state = 2},
  [497] = {.lex_state = 53},
  [498] = {.lex_state = 0, .external_lex_state = 3},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 53},
  [501] = {.lex_state = 53},
  [502] = {.lex_state = 54},
  [503] = {.lex_state = 50, .external_lex_state = 3},
  [504] = {.lex_state = 54},
  [505] = {.lex_state = 54},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 54},
  [508] = {.lex_state = 661, .external_lex_state = 5},
  [509] = {.lex_state = 50, .external_lex_state = 3},
  [510] = {.lex_state = 53},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 53},
  [513] = {.lex_state = 53},
  [514] = {.lex_state = 661, .external_lex_state = 5},
  [515] = {.lex_state = 0, .external_lex_state = 3},
  [516] = {.lex_state = 53},
  [517] = {.lex_state = 50, .external_lex_state = 3},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 54},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 54},
  [522] = {.lex_state = 50, .external_lex_state = 3},
  [523] = {.lex_state = 50, .external_lex_state = 2},
  [524] = {.lex_state = 661, .external_lex_state = 5},
  [525] = {.lex_state = 661, .external_lex_state = 5},
  [526] = {.lex_state = 53},
  [527] = {.lex_state = 53},
  [528] = {.lex_state = 53},
  [529] = {.lex_state = 54},
  [530] = {.lex_state = 0, .external_lex_state = 3},
  [531] = {.lex_state = 53},
  [532] = {.lex_state = 53},
  [533] = {.lex_state = 50, .external_lex_state = 3},
  [534] = {.lex_state = 54},
  [535] = {.lex_state = 661, .external_lex_state = 5},
  [536] = {.lex_state = 53},
  [537] = {.lex_state = 53},
  [538] = {.lex_state = 53},
  [539] = {.lex_state = 53},
  [540] = {.lex_state = 61},
  [541] = {.lex_state = 661, .external_lex_state = 3},
  [542] = {.lex_state = 53},
  [543] = {.lex_state = 53},
  [544] = {.lex_state = 53},
  [545] = {.lex_state = 53},
  [546] = {.lex_state = 0, .external_lex_state = 6},
  [547] = {.lex_state = 0, .external_lex_state = 6},
  [548] = {.lex_state = 0, .external_lex_state = 6},
  [549] = {.lex_state = 65},
  [550] = {.lex_state = 65},
  [551] = {.lex_state = 661},
  [552] = {.lex_state = 61},
  [553] = {.lex_state = 661},
  [554] = {.lex_state = 54},
  [555] = {.lex_state = 661},
  [556] = {.lex_state = 0, .external_lex_state = 6},
  [557] = {.lex_state = 0, .external_lex_state = 3},
  [558] = {.lex_state = 0, .external_lex_state = 6},
  [559] = {.lex_state = 0, .external_lex_state = 6},
  [560] = {.lex_state = 661},
  [561] = {.lex_state = 0, .external_lex_state = 6},
  [562] = {.lex_state = 661, .external_lex_state = 3},
  [563] = {.lex_state = 0, .external_lex_state = 6},
  [564] = {.lex_state = 661},
  [565] = {.lex_state = 661},
  [566] = {.lex_state = 0, .external_lex_state = 6},
  [567] = {.lex_state = 661, .external_lex_state = 3},
  [568] = {.lex_state = 661, .external_lex_state = 3},
  [569] = {.lex_state = 661},
  [570] = {.lex_state = 661},
  [571] = {.lex_state = 661, .external_lex_state = 3},
  [572] = {.lex_state = 661, .external_lex_state = 5},
  [573] = {.lex_state = 0, .external_lex_state = 6},
  [574] = {.lex_state = 661},
  [575] = {.lex_state = 53},
  [576] = {.lex_state = 661},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0, .external_lex_state = 6},
  [579] = {.lex_state = 53},
  [580] = {.lex_state = 0, .external_lex_state = 6},
  [581] = {.lex_state = 0, .external_lex_state = 3},
  [582] = {.lex_state = 0, .external_lex_state = 3},
  [583] = {.lex_state = 0, .external_lex_state = 6},
  [584] = {.lex_state = 0, .external_lex_state = 3},
  [585] = {.lex_state = 142},
  [586] = {.lex_state = 0, .external_lex_state = 3},
  [587] = {.lex_state = 0, .external_lex_state = 3},
  [588] = {.lex_state = 0, .external_lex_state = 3},
  [589] = {.lex_state = 687},
  [590] = {.lex_state = 0, .external_lex_state = 3},
  [591] = {.lex_state = 0, .external_lex_state = 3},
  [592] = {.lex_state = 0, .external_lex_state = 6},
  [593] = {.lex_state = 0, .external_lex_state = 6},
  [594] = {.lex_state = 0, .external_lex_state = 6},
  [595] = {.lex_state = 51},
  [596] = {.lex_state = 0, .external_lex_state = 3},
  [597] = {.lex_state = 0, .external_lex_state = 3},
  [598] = {.lex_state = 0, .external_lex_state = 3},
  [599] = {.lex_state = 0, .external_lex_state = 3},
  [600] = {.lex_state = 687},
  [601] = {.lex_state = 0, .external_lex_state = 3},
  [602] = {.lex_state = 0, .external_lex_state = 3},
  [603] = {.lex_state = 687},
  [604] = {.lex_state = 0, .external_lex_state = 3},
  [605] = {.lex_state = 0, .external_lex_state = 3},
  [606] = {.lex_state = 0, .external_lex_state = 6},
  [607] = {.lex_state = 0, .external_lex_state = 3},
  [608] = {.lex_state = 0, .external_lex_state = 6},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0, .external_lex_state = 6},
  [611] = {.lex_state = 0, .external_lex_state = 3},
  [612] = {.lex_state = 0, .external_lex_state = 3},
  [613] = {.lex_state = 687},
  [614] = {.lex_state = 0, .external_lex_state = 3},
  [615] = {.lex_state = 0, .external_lex_state = 3},
  [616] = {.lex_state = 0, .external_lex_state = 3},
  [617] = {.lex_state = 52},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0, .external_lex_state = 6},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0, .external_lex_state = 3},
  [622] = {.lex_state = 0, .external_lex_state = 3},
  [623] = {.lex_state = 0, .external_lex_state = 3},
  [624] = {.lex_state = 0, .external_lex_state = 6},
  [625] = {.lex_state = 0, .external_lex_state = 3},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 0, .external_lex_state = 3},
  [628] = {.lex_state = 0, .external_lex_state = 3},
  [629] = {.lex_state = 0, .external_lex_state = 3},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 52},
  [632] = {.lex_state = 687},
  [633] = {.lex_state = 0, .external_lex_state = 3},
  [634] = {.lex_state = 0, .external_lex_state = 3},
  [635] = {.lex_state = 0, .external_lex_state = 3},
  [636] = {.lex_state = 0, .external_lex_state = 6},
  [637] = {.lex_state = 152},
  [638] = {.lex_state = 0, .external_lex_state = 3},
  [639] = {.lex_state = 0, .external_lex_state = 6},
  [640] = {.lex_state = 0, .external_lex_state = 6},
  [641] = {.lex_state = 0, .external_lex_state = 6},
  [642] = {.lex_state = 0, .external_lex_state = 6},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0, .external_lex_state = 3},
  [645] = {.lex_state = 0, .external_lex_state = 6},
  [646] = {.lex_state = 0, .external_lex_state = 6},
  [647] = {.lex_state = 0, .external_lex_state = 6},
  [648] = {.lex_state = 0, .external_lex_state = 6},
  [649] = {.lex_state = 0, .external_lex_state = 3},
  [650] = {.lex_state = 0, .external_lex_state = 6},
  [651] = {.lex_state = 0, .external_lex_state = 6},
  [652] = {.lex_state = 0, .external_lex_state = 6},
  [653] = {.lex_state = 0, .external_lex_state = 6},
  [654] = {.lex_state = 0, .external_lex_state = 3},
  [655] = {.lex_state = 0, .external_lex_state = 6},
  [656] = {.lex_state = 0, .external_lex_state = 6},
  [657] = {.lex_state = 0, .external_lex_state = 6},
  [658] = {.lex_state = 0, .external_lex_state = 6},
  [659] = {.lex_state = 0, .external_lex_state = 6},
  [660] = {.lex_state = 0, .external_lex_state = 6},
  [661] = {.lex_state = 0, .external_lex_state = 6},
  [662] = {.lex_state = 0, .external_lex_state = 6},
  [663] = {.lex_state = 53},
  [664] = {.lex_state = 0, .external_lex_state = 3},
  [665] = {.lex_state = 0, .external_lex_state = 3},
  [666] = {.lex_state = 0, .external_lex_state = 3},
  [667] = {.lex_state = 53},
  [668] = {.lex_state = 0, .external_lex_state = 3},
  [669] = {.lex_state = 0, .external_lex_state = 3},
  [670] = {.lex_state = 0, .external_lex_state = 3},
  [671] = {.lex_state = 0, .external_lex_state = 3},
  [672] = {.lex_state = 0, .external_lex_state = 3},
  [673] = {.lex_state = 0, .external_lex_state = 3},
  [674] = {.lex_state = 0, .external_lex_state = 3},
  [675] = {.lex_state = 0, .external_lex_state = 3},
  [676] = {.lex_state = 0, .external_lex_state = 3},
  [677] = {.lex_state = 0, .external_lex_state = 3},
  [678] = {.lex_state = 0, .external_lex_state = 3},
  [679] = {.lex_state = 0, .external_lex_state = 3},
  [680] = {.lex_state = 0, .external_lex_state = 3},
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
    [sym_source_file] = STATE(630),
    [sym_doctype] = STATE(42),
    [sym_pipe] = STATE(42),
    [sym_conditional] = STATE(42),
    [sym_case] = STATE(42),
    [sym_unescaped_buffered_code] = STATE(42),
    [sym_buffered_code] = STATE(42),
    [sym_script_block] = STATE(42),
    [sym_tag] = STATE(42),
    [sym_comment] = STATE(42),
    [sym__comment] = STATE(261),
    [sym__comment_not_first_line] = STATE(261),
    [sym_unbuffered_code] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(42),
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
    STATE(98), 2,
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
    STATE(98), 2,
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
    STATE(98), 2,
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
    ACTIONS(33), 1,
      sym__dedent,
    ACTIONS(120), 1,
      anon_sym_doctype,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      anon_sym_elseif,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(135), 1,
      anon_sym_case,
    ACTIONS(138), 1,
      anon_sym_BANG_EQ,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_script_DOT,
    ACTIONS(147), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(153), 1,
      sym_tag_name,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(53), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(126), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(156), 2,
      sym_class,
      sym_id,
    STATE(161), 2,
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
  [299] = 19,
    ACTIONS(165), 1,
      anon_sym_doctype,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_elseif,
    ACTIONS(173), 1,
      anon_sym_else,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_script_DOT,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(195), 1,
      sym__dedent,
    ACTIONS(96), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(161), 2,
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
    STATE(217), 2,
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
  [444] = 18,
    ACTIONS(50), 1,
      anon_sym_case,
    ACTIONS(227), 1,
      anon_sym_doctype,
    ACTIONS(230), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      anon_sym_elseif,
    ACTIONS(239), 1,
      anon_sym_else,
    ACTIONS(242), 1,
      anon_sym_BANG_EQ,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      anon_sym_script_DOT,
    ACTIONS(251), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(257), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(266), 1,
      sym__newline,
    ACTIONS(33), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(233), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(260), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [514] = 19,
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
    ACTIONS(269), 1,
      sym__dedent,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [586] = 18,
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
    STATE(98), 2,
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
  [655] = 18,
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
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [724] = 18,
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
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(98), 2,
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
  [793] = 18,
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
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [862] = 18,
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
    STATE(98), 2,
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
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(98), 2,
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
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(315), 1,
      sym__dedent,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(25), 12,
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
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(317), 1,
      sym__dedent,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(25), 12,
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
    ACTIONS(165), 1,
      anon_sym_doctype,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_elseif,
    ACTIONS(173), 1,
      anon_sym_else,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_script_DOT,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(161), 2,
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
  [1207] = 18,
    ACTIONS(165), 1,
      anon_sym_doctype,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_elseif,
    ACTIONS(173), 1,
      anon_sym_else,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_script_DOT,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(161), 2,
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
  [1276] = 18,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1345] = 18,
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
    STATE(98), 2,
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
  [1414] = 18,
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
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [1483] = 18,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [1552] = 18,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 12,
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
    ACTIONS(33), 1,
      sym__dedent,
    ACTIONS(135), 1,
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
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(25), 12,
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
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
    ACTIONS(165), 1,
      anon_sym_doctype,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_elseif,
    ACTIONS(173), 1,
      anon_sym_else,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_script_DOT,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(161), 2,
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
  [1828] = 18,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 12,
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
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [1966] = 18,
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
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(98), 2,
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
  [2035] = 18,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2104] = 18,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 12,
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
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [2242] = 17,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 12,
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
  [2308] = 17,
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
    STATE(98), 2,
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
  [2374] = 17,
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
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [2440] = 17,
    ACTIONS(165), 1,
      anon_sym_doctype,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_elseif,
    ACTIONS(173), 1,
      anon_sym_else,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_script_DOT,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(161), 2,
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
  [2506] = 17,
    ACTIONS(175), 1,
      anon_sym_case,
    ACTIONS(287), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_elseif,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(297), 1,
      anon_sym_BANG_EQ,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_script_DOT,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(307), 1,
      sym_tag_name,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(291), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(309), 2,
      sym_class,
      sym_id,
    STATE(224), 2,
      sym__comment,
      sym__comment_not_first_line,
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
  [2572] = 17,
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
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(201), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(219), 2,
      sym_class,
      sym_id,
    STATE(217), 2,
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
  [2638] = 17,
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
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(98), 2,
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
  [2704] = 17,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      anon_sym_doctype,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(384), 1,
      anon_sym_elseif,
    ACTIONS(387), 1,
      anon_sym_else,
    ACTIONS(390), 1,
      anon_sym_case,
    ACTIONS(393), 1,
      anon_sym_BANG_EQ,
    ACTIONS(396), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_script_DOT,
    ACTIONS(402), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(405), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(408), 1,
      sym_tag_name,
    ACTIONS(414), 1,
      anon_sym_DASH,
    ACTIONS(381), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(411), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(41), 11,
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
  [2769] = 17,
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
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(29), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(41), 11,
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
  [2834] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(426), 1,
      anon_sym_default,
    STATE(530), 1,
      sym__when_keyword,
    STATE(43), 2,
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
  [2871] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(435), 1,
      anon_sym_default,
    STATE(530), 1,
      sym__when_keyword,
    STATE(43), 2,
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
  [2908] = 4,
    ACTIONS(441), 1,
      sym__un_delimited_javascript_line,
    STATE(48), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(437), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(439), 18,
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
  [2940] = 4,
    ACTIONS(447), 1,
      sym__indent,
    STATE(88), 1,
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
  [2972] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(449), 1,
      anon_sym_default,
    STATE(498), 1,
      sym__when_keyword,
    STATE(47), 2,
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
  [3008] = 4,
    ACTIONS(456), 1,
      sym__un_delimited_javascript_line,
    STATE(48), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(452), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(454), 18,
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
  [3040] = 4,
    ACTIONS(447), 1,
      sym__indent,
    STATE(90), 1,
      sym_children,
    ACTIONS(461), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 12,
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
  [3072] = 4,
    ACTIONS(467), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 12,
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
    ACTIONS(447), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(471), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(469), 12,
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
    ACTIONS(477), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
    ACTIONS(475), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 12,
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
  [3168] = 4,
    ACTIONS(447), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 12,
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
  [3200] = 4,
    ACTIONS(483), 1,
      sym__indent,
    STATE(93), 1,
      sym_children,
    ACTIONS(481), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 12,
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
  [3232] = 4,
    ACTIONS(489), 1,
      sym__comment_content,
    STATE(57), 1,
      aux_sym__comment_repeat1,
    ACTIONS(485), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(487), 18,
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
  [3264] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(491), 1,
      anon_sym_default,
    STATE(498), 1,
      sym__when_keyword,
    STATE(47), 2,
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
  [3300] = 4,
    ACTIONS(497), 1,
      sym__comment_content,
    STATE(57), 1,
      aux_sym__comment_repeat1,
    ACTIONS(493), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(495), 18,
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
  [3332] = 4,
    ACTIONS(500), 1,
      sym__indent,
    STATE(163), 1,
      sym_children,
    ACTIONS(461), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3363] = 4,
    ACTIONS(502), 1,
      sym__un_delimited_javascript_line,
    STATE(59), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(452), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(454), 18,
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
  [3394] = 5,
    ACTIONS(500), 1,
      sym__indent,
    ACTIONS(505), 1,
      sym__dedent,
    STATE(170), 1,
      sym_children,
    ACTIONS(471), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(469), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3427] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(507), 1,
      anon_sym_default,
    STATE(515), 1,
      sym__when_keyword,
    STATE(61), 2,
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
  [3462] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(128), 1,
      sym_children,
    ACTIONS(461), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 11,
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
  [3493] = 3,
    ACTIONS(516), 1,
      sym__indent,
    ACTIONS(514), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 12,
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
  [3522] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(129), 1,
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
  [3553] = 4,
    ACTIONS(500), 1,
      sym__indent,
    STATE(165), 1,
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
  [3584] = 2,
    ACTIONS(493), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(495), 19,
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
  [3611] = 4,
    ACTIONS(518), 1,
      sym__indent,
    STATE(169), 1,
      sym_children,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3642] = 4,
    ACTIONS(500), 1,
      sym__indent,
    STATE(169), 1,
      sym_children,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3673] = 4,
    ACTIONS(520), 1,
      sym__indent,
    STATE(172), 1,
      sym_children,
    ACTIONS(481), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3704] = 4,
    ACTIONS(522), 1,
      sym__indent,
    STATE(173), 1,
      sym_children,
    ACTIONS(475), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3735] = 4,
    ACTIONS(524), 1,
      sym__indent,
    STATE(131), 1,
      sym_children,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
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
  [3766] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(131), 1,
      sym_children,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
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
  [3797] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(526), 1,
      anon_sym_default,
    STATE(515), 1,
      sym__when_keyword,
    STATE(61), 2,
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
  [3832] = 4,
    ACTIONS(528), 1,
      sym__indent,
    STATE(133), 1,
      sym_children,
    ACTIONS(481), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 11,
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
  [3863] = 4,
    ACTIONS(530), 1,
      sym__comment_content,
    STATE(78), 1,
      aux_sym__comment_repeat1,
    ACTIONS(485), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(487), 18,
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
  [3894] = 4,
    ACTIONS(510), 1,
      sym__indent,
    STATE(176), 1,
      sym_children,
    ACTIONS(471), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(469), 11,
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
  [3925] = 4,
    ACTIONS(532), 1,
      sym__indent,
    STATE(134), 1,
      sym_children,
    ACTIONS(475), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 11,
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
  [3956] = 4,
    ACTIONS(534), 1,
      sym__comment_content,
    STATE(78), 1,
      aux_sym__comment_repeat1,
    ACTIONS(493), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(495), 18,
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
  [3987] = 3,
    ACTIONS(541), 1,
      sym__indent,
    ACTIONS(539), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(537), 12,
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
  [4016] = 2,
    ACTIONS(543), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(545), 19,
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
  [4043] = 4,
    ACTIONS(547), 1,
      sym__un_delimited_javascript_line,
    STATE(59), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(437), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(439), 18,
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
  [4074] = 2,
    ACTIONS(551), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(549), 12,
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
  [4100] = 4,
    ACTIONS(553), 1,
      sym__indent,
    STATE(218), 1,
      sym_children,
    ACTIONS(461), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 12,
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
  [4130] = 4,
    ACTIONS(555), 1,
      sym__comment_content,
    STATE(84), 1,
      aux_sym__comment_repeat1,
    ACTIONS(493), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(495), 16,
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
  [4160] = 2,
    ACTIONS(560), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(558), 12,
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
  [4186] = 2,
    ACTIONS(564), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(562), 12,
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
  [4212] = 2,
    ACTIONS(568), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(566), 12,
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
  [4238] = 2,
    ACTIONS(461), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 12,
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
  [4264] = 2,
    ACTIONS(572), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(570), 12,
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
  [4290] = 2,
    ACTIONS(576), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(574), 12,
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
  [4316] = 2,
    ACTIONS(580), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(578), 12,
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
  [4342] = 3,
    ACTIONS(586), 1,
      sym__dedent,
    ACTIONS(584), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(582), 11,
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
  [4370] = 2,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 12,
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
  [4396] = 2,
    ACTIONS(590), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(588), 12,
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
  [4422] = 2,
    ACTIONS(594), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(592), 12,
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
  [4448] = 2,
    ACTIONS(598), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(596), 12,
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
  [4474] = 2,
    ACTIONS(602), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(600), 12,
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
  [4500] = 2,
    ACTIONS(606), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(604), 12,
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
  [4526] = 2,
    ACTIONS(610), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(608), 12,
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
  [4552] = 2,
    ACTIONS(614), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(612), 12,
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
  [4578] = 2,
    ACTIONS(618), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(616), 12,
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
  [4604] = 4,
    ACTIONS(620), 1,
      sym__un_delimited_javascript_line,
    STATE(102), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(452), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(454), 16,
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
  [4634] = 2,
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
  [4660] = 3,
    ACTIONS(627), 1,
      sym__indent,
    ACTIONS(514), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4688] = 2,
    ACTIONS(471), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(469), 12,
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
  [4714] = 2,
    ACTIONS(493), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(495), 19,
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
  [4740] = 4,
    ACTIONS(629), 1,
      sym__un_delimited_javascript_line,
    STATE(102), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(437), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(439), 16,
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
  [4770] = 2,
    ACTIONS(543), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(545), 19,
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
  [4796] = 4,
    ACTIONS(553), 1,
      sym__indent,
    STATE(221), 1,
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
  [4826] = 2,
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
  [4852] = 4,
    ACTIONS(631), 1,
      sym__comment_content,
    STATE(84), 1,
      aux_sym__comment_repeat1,
    ACTIONS(485), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(487), 16,
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
  [4882] = 3,
    ACTIONS(637), 1,
      sym__dedent,
    ACTIONS(635), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(633), 11,
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
  [4910] = 3,
    ACTIONS(639), 1,
      sym__indent,
    ACTIONS(514), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 11,
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
  [4938] = 2,
    ACTIONS(643), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(641), 12,
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
  [4964] = 4,
    ACTIONS(645), 1,
      sym__indent,
    STATE(211), 1,
      sym_children,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 12,
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
  [4994] = 2,
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
    ACTIONS(647), 12,
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
  [5020] = 4,
    ACTIONS(553), 1,
      sym__indent,
    STATE(211), 1,
      sym_children,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 12,
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
  [5050] = 2,
    ACTIONS(653), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(651), 12,
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
  [5076] = 4,
    ACTIONS(655), 1,
      sym__indent,
    STATE(200), 1,
      sym_children,
    ACTIONS(481), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 12,
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
  [5106] = 4,
    ACTIONS(657), 1,
      sym__indent,
    STATE(193), 1,
      sym_children,
    ACTIONS(475), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 12,
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
  [5136] = 2,
    ACTIONS(475), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 12,
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
  [5162] = 3,
    ACTIONS(659), 1,
      sym__indent,
    ACTIONS(539), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(537), 11,
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
  [5190] = 2,
    ACTIONS(481), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 12,
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
  [5216] = 2,
    ACTIONS(610), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(608), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5241] = 2,
    ACTIONS(493), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(495), 17,
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
  [5266] = 2,
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
  [5291] = 2,
    ACTIONS(618), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(616), 11,
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
  [5316] = 2,
    ACTIONS(576), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(574), 11,
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
  [5341] = 2,
    ACTIONS(461), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 11,
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
  [5366] = 2,
    ACTIONS(568), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(566), 11,
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
  [5391] = 2,
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
  [5416] = 2,
    ACTIONS(580), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(578), 11,
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
  [5441] = 2,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
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
  [5466] = 2,
    ACTIONS(481), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 11,
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
  [5491] = 2,
    ACTIONS(475), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 11,
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
  [5516] = 2,
    ACTIONS(653), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(651), 11,
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
  [5541] = 2,
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
  [5566] = 4,
    ACTIONS(661), 1,
      sym__indent,
    STATE(244), 1,
      sym_children,
    ACTIONS(461), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 11,
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
  [5595] = 2,
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
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5620] = 4,
    ACTIONS(661), 1,
      sym__indent,
    STATE(241), 1,
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
  [5649] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(233), 1,
      sym_children,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
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
  [5678] = 4,
    ACTIONS(661), 1,
      sym__indent,
    STATE(233), 1,
      sym_children,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
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
  [5707] = 4,
    ACTIONS(665), 1,
      sym__indent,
    STATE(230), 1,
      sym_children,
    ACTIONS(481), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 11,
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
  [5736] = 4,
    ACTIONS(667), 1,
      sym__indent,
    STATE(229), 1,
      sym_children,
    ACTIONS(475), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 11,
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
  [5765] = 2,
    ACTIONS(643), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(641), 11,
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
  [5790] = 4,
    ACTIONS(669), 1,
      sym__un_delimited_javascript_line,
    STATE(167), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(437), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(439), 16,
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
  [5819] = 3,
    ACTIONS(671), 1,
      sym__dedent,
    ACTIONS(635), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(633), 10,
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
  [5846] = 4,
    ACTIONS(673), 1,
      sym__comment_content,
    STATE(148), 1,
      aux_sym__comment_repeat1,
    ACTIONS(493), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(495), 16,
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
  [5875] = 2,
    ACTIONS(560), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(558), 11,
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
  [5900] = 2,
    ACTIONS(564), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(562), 11,
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
  [5925] = 3,
    ACTIONS(505), 1,
      sym__dedent,
    ACTIONS(471), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(469), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5952] = 2,
    ACTIONS(572), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(570), 11,
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
  [5977] = 2,
    ACTIONS(551), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(549), 11,
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
  [6002] = 3,
    ACTIONS(676), 1,
      sym__dedent,
    ACTIONS(584), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(582), 10,
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
  [6029] = 2,
    ACTIONS(590), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(588), 11,
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
  [6054] = 2,
    ACTIONS(594), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(592), 11,
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
  [6079] = 2,
    ACTIONS(653), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(651), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6104] = 2,
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
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6129] = 2,
    ACTIONS(598), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(596), 11,
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
  [6154] = 2,
    ACTIONS(602), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(600), 11,
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
  [6179] = 2,
    ACTIONS(606), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(604), 11,
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
  [6204] = 2,
    ACTIONS(618), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(616), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6229] = 2,
    ACTIONS(576), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(574), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6254] = 4,
    ACTIONS(678), 1,
      sym__un_delimited_javascript_line,
    STATE(164), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(452), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(454), 16,
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
  [6283] = 2,
    ACTIONS(461), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6308] = 2,
    ACTIONS(568), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(566), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6333] = 4,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(167), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(452), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(454), 16,
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
  [6362] = 4,
    ACTIONS(684), 1,
      sym__un_delimited_javascript_line,
    STATE(164), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(437), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(439), 16,
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
  [6391] = 2,
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
  [6416] = 2,
    ACTIONS(614), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(612), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6441] = 4,
    ACTIONS(686), 1,
      sym__comment_content,
    STATE(148), 1,
      aux_sym__comment_repeat1,
    ACTIONS(485), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(487), 16,
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
  [6470] = 2,
    ACTIONS(465), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
      sym__dedent,
      ts_builtin_sym_end,
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
    ACTIONS(481), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 11,
      sym__dedent,
      ts_builtin_sym_end,
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
    ACTIONS(475), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 11,
      sym__dedent,
      ts_builtin_sym_end,
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
    ACTIONS(610), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(608), 11,
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
    ACTIONS(614), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(612), 11,
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
  [6595] = 2,
    ACTIONS(471), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(469), 11,
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
  [6620] = 3,
    ACTIONS(688), 1,
      sym__indent,
    ACTIONS(539), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(537), 12,
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
  [6647] = 2,
    ACTIONS(580), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(578), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6672] = 2,
    ACTIONS(543), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(545), 17,
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
  [6697] = 3,
    ACTIONS(690), 1,
      sym__indent,
    ACTIONS(514), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 12,
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
  [6724] = 3,
    ACTIONS(692), 1,
      sym__indent,
    ACTIONS(539), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(537), 11,
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
  [6750] = 4,
    ACTIONS(694), 1,
      sym__indent,
    STATE(269), 1,
      sym_children,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6778] = 2,
    ACTIONS(602), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(600), 12,
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
  [6802] = 2,
    ACTIONS(598), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(596), 12,
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
  [6826] = 2,
    ACTIONS(649), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(647), 12,
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
  [6850] = 2,
    ACTIONS(653), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(651), 12,
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
  [6874] = 4,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(696), 1,
      sym__comment_content,
    STATE(209), 1,
      aux_sym__comment_repeat1,
    ACTIONS(487), 16,
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
  [6902] = 2,
    ACTIONS(475), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 12,
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
  [6926] = 2,
    ACTIONS(594), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(592), 12,
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
  [6950] = 2,
    ACTIONS(590), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(588), 12,
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
  [6974] = 3,
    ACTIONS(698), 1,
      sym__indent,
    ACTIONS(514), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7000] = 2,
    ACTIONS(481), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 12,
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
  [7024] = 2,
    ACTIONS(493), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(495), 17,
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
  [7048] = 3,
    ACTIONS(700), 1,
      sym__dedent,
    ACTIONS(584), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(582), 11,
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
  [7074] = 2,
    ACTIONS(551), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(549), 12,
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
  [7098] = 4,
    ACTIONS(702), 1,
      sym__indent,
    STATE(271), 1,
      sym_children,
    ACTIONS(461), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7126] = 2,
    ACTIONS(706), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(704), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7150] = 2,
    ACTIONS(543), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(545), 17,
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
  [7174] = 2,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 12,
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
  [7198] = 4,
    ACTIONS(708), 1,
      sym__indent,
    STATE(270), 1,
      sym_children,
    ACTIONS(481), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7226] = 2,
    ACTIONS(572), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(570), 12,
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
  [7250] = 2,
    ACTIONS(580), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(578), 12,
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
  [7274] = 4,
    ACTIONS(710), 1,
      sym__indent,
    ACTIONS(712), 1,
      sym__dedent,
    ACTIONS(514), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7302] = 2,
    ACTIONS(543), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(545), 17,
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
  [7326] = 2,
    ACTIONS(564), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(562), 12,
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
  [7350] = 4,
    ACTIONS(702), 1,
      sym__indent,
    STATE(252), 1,
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
  [7378] = 2,
    ACTIONS(560), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(558), 12,
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
  [7402] = 4,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(714), 1,
      sym__comment_content,
    STATE(209), 1,
      aux_sym__comment_repeat1,
    ACTIONS(495), 16,
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
  [7430] = 2,
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
  [7454] = 2,
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
  [7478] = 4,
    ACTIONS(717), 1,
      sym__indent,
    STATE(273), 1,
      sym_children,
    ACTIONS(475), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7506] = 3,
    ACTIONS(719), 1,
      sym__indent,
    ACTIONS(514), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(512), 11,
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
  [7532] = 2,
    ACTIONS(643), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(641), 12,
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
  [7556] = 3,
    ACTIONS(721), 1,
      sym__dedent,
    ACTIONS(635), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(633), 11,
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
  [7582] = 4,
    ACTIONS(702), 1,
      sym__indent,
    STATE(269), 1,
      sym_children,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7610] = 2,
    ACTIONS(606), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(604), 12,
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
  [7634] = 2,
    ACTIONS(576), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(574), 12,
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
  [7658] = 2,
    ACTIONS(618), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(616), 12,
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
  [7682] = 2,
    ACTIONS(568), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(566), 12,
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
  [7706] = 2,
    ACTIONS(461), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 12,
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
  [7730] = 3,
    ACTIONS(723), 1,
      sym__dedent,
    ACTIONS(584), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(582), 10,
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
  [7755] = 3,
    ACTIONS(725), 1,
      sym__dedent,
    ACTIONS(635), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(633), 10,
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
  [7780] = 2,
    ACTIONS(606), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(604), 11,
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
  [7803] = 2,
    ACTIONS(475), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 11,
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
  [7826] = 3,
    ACTIONS(727), 1,
      sym__indent,
    ACTIONS(539), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(537), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7851] = 2,
    ACTIONS(598), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(596), 11,
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
  [7874] = 2,
    ACTIONS(625), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(623), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7897] = 2,
    ACTIONS(481), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 11,
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
  [7920] = 2,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 11,
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
  [7943] = 3,
    ACTIONS(729), 1,
      sym__dedent,
    ACTIONS(584), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(582), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7968] = 2,
    ACTIONS(580), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(578), 11,
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
  [7991] = 2,
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
  [8014] = 2,
    ACTIONS(643), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(641), 11,
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
  [8037] = 2,
    ACTIONS(602), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(600), 11,
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
  [8060] = 2,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 17,
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
  [8083] = 2,
    ACTIONS(590), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(588), 11,
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
  [8106] = 2,
    ACTIONS(653), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(651), 11,
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
  [8129] = 3,
    ACTIONS(731), 1,
      sym__dedent,
    ACTIONS(635), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(633), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8154] = 2,
    ACTIONS(568), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(566), 11,
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
  [8177] = 2,
    ACTIONS(461), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 11,
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
  [8200] = 2,
    ACTIONS(560), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(558), 11,
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
  [8223] = 2,
    ACTIONS(564), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(562), 11,
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
  [8246] = 2,
    ACTIONS(576), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(574), 11,
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
  [8269] = 2,
    ACTIONS(572), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(570), 11,
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
  [8292] = 2,
    ACTIONS(618), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(616), 11,
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
  [8315] = 2,
    ACTIONS(551), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(549), 11,
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
  [8338] = 2,
    ACTIONS(594), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(592), 11,
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
  [8361] = 2,
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
  [8384] = 3,
    ACTIONS(733), 1,
      sym__dedent,
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
  [8409] = 2,
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
  [8432] = 2,
    ACTIONS(461), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(459), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8454] = 2,
    ACTIONS(653), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(651), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8476] = 2,
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
  [8498] = 2,
    ACTIONS(572), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(570), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8520] = 2,
    ACTIONS(580), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(578), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8542] = 2,
    ACTIONS(737), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(735), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8564] = 2,
    ACTIONS(602), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(600), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8586] = 2,
    ACTIONS(475), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(473), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8608] = 2,
    ACTIONS(551), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(549), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8630] = 2,
    ACTIONS(606), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(604), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8652] = 2,
    ACTIONS(618), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(616), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8674] = 2,
    ACTIONS(741), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(739), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8696] = 2,
    ACTIONS(564), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(562), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8718] = 2,
    ACTIONS(643), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(641), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8740] = 2,
    ACTIONS(594), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(592), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8762] = 2,
    ACTIONS(598), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(596), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8784] = 2,
    ACTIONS(560), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(558), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8806] = 2,
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
  [8828] = 2,
    ACTIONS(465), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(463), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8850] = 2,
    ACTIONS(576), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(574), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8872] = 2,
    ACTIONS(568), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(566), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8894] = 2,
    ACTIONS(481), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(479), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8916] = 2,
    ACTIONS(590), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(588), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8938] = 11,
    ACTIONS(743), 1,
      anon_sym_COLON,
    ACTIONS(745), 1,
      anon_sym_BANG_EQ,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(749), 1,
      anon_sym_,
    ACTIONS(751), 1,
      anon_sym_DOT,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(295), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(123), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [8975] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      anon_sym_COLON,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(765), 1,
      anon_sym_,
    ACTIONS(767), 1,
      anon_sym_DOT,
    ACTIONS(771), 1,
      sym__newline,
    STATE(283), 1,
      aux_sym_tag_repeat1,
    STATE(303), 1,
      sym_attributes,
    ACTIONS(769), 2,
      sym_class,
      sym_id,
    STATE(135), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9012] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(773), 1,
      anon_sym_COLON,
    ACTIONS(775), 1,
      anon_sym_BANG_EQ,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      anon_sym_,
    ACTIONS(781), 1,
      anon_sym_DOT,
    ACTIONS(785), 1,
      sym__newline,
    STATE(286), 1,
      aux_sym_tag_repeat1,
    STATE(302), 1,
      sym_attributes,
    ACTIONS(783), 2,
      sym_class,
      sym_id,
    STATE(259), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9049] = 11,
    ACTIONS(745), 1,
      anon_sym_BANG_EQ,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(751), 1,
      anon_sym_DOT,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_COLON,
    ACTIONS(789), 1,
      anon_sym_,
    ACTIONS(793), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_tag_repeat1,
    STATE(307), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9086] = 11,
    ACTIONS(753), 1,
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
    ACTIONS(805), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(298), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9123] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(807), 1,
      anon_sym_COLON,
    ACTIONS(809), 1,
      anon_sym_BANG_EQ,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(813), 1,
      anon_sym_,
    ACTIONS(815), 1,
      anon_sym_DOT,
    ACTIONS(817), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(300), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9160] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      anon_sym_BANG_EQ,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
      anon_sym_,
    ACTIONS(825), 1,
      sym__newline,
    STATE(279), 1,
      aux_sym_tag_repeat1,
    STATE(308), 1,
      sym_attributes,
    ACTIONS(823), 2,
      sym_class,
      sym_id,
    STATE(225), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9197] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_BANG_EQ,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(815), 1,
      anon_sym_DOT,
    ACTIONS(827), 1,
      anon_sym_COLON,
    ACTIONS(829), 1,
      anon_sym_,
    ACTIONS(833), 1,
      sym__newline,
    STATE(280), 1,
      aux_sym_tag_repeat1,
    STATE(304), 1,
      sym_attributes,
    ACTIONS(831), 2,
      sym_class,
      sym_id,
    STATE(174), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9234] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(767), 1,
      anon_sym_DOT,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(837), 1,
      anon_sym_,
    ACTIONS(839), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(299), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(134), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9271] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(843), 1,
      anon_sym_BANG_EQ,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(847), 1,
      anon_sym_,
    ACTIONS(849), 1,
      anon_sym_DOT,
    ACTIONS(853), 1,
      sym__newline,
    STATE(287), 1,
      aux_sym_tag_repeat1,
    STATE(297), 1,
      sym_attributes,
    ACTIONS(851), 2,
      sym_class,
      sym_id,
    STATE(435), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9308] = 11,
    ACTIONS(753), 1,
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
    ACTIONS(865), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(306), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(193), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9345] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(775), 1,
      anon_sym_BANG_EQ,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(781), 1,
      anon_sym_DOT,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(869), 1,
      anon_sym_,
    ACTIONS(871), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(301), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(273), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9382] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_BANG_EQ,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(849), 1,
      anon_sym_DOT,
    ACTIONS(873), 1,
      anon_sym_COLON,
    ACTIONS(875), 1,
      anon_sym_,
    ACTIONS(877), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(296), 1,
      sym_attributes,
    ACTIONS(755), 2,
      sym_class,
      sym_id,
    STATE(439), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9419] = 11,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(857), 1,
      anon_sym_BANG_EQ,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(863), 1,
      anon_sym_DOT,
    ACTIONS(879), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_,
    ACTIONS(885), 1,
      sym__newline,
    STATE(285), 1,
      aux_sym_tag_repeat1,
    STATE(305), 1,
      sym_attributes,
    ACTIONS(883), 2,
      sym_class,
      sym_id,
    STATE(189), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9456] = 6,
    ACTIONS(887), 1,
      anon_sym_EQ,
    ACTIONS(889), 1,
      anon_sym_,
    ACTIONS(891), 1,
      anon_sym_DOT,
    STATE(400), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(893), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(493), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [9481] = 6,
    ACTIONS(887), 1,
      anon_sym_EQ,
    ACTIONS(891), 1,
      anon_sym_DOT,
    ACTIONS(895), 1,
      anon_sym_,
    STATE(289), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(897), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(521), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [9506] = 4,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    ACTIONS(901), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(903), 2,
      sym_class,
      sym_id,
    ACTIONS(899), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [9525] = 7,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      sym_attribute_name,
    STATE(292), 1,
      aux_sym_attributes_repeat1,
    STATE(459), 1,
      sym_angular_attribute_name,
    STATE(554), 1,
      sym_attribute,
    STATE(534), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(908), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [9550] = 7,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      sym_attribute_name,
    STATE(294), 1,
      aux_sym_attributes_repeat1,
    STATE(459), 1,
      sym_angular_attribute_name,
    STATE(529), 1,
      sym_attribute,
    STATE(534), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(916), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [9575] = 7,
    ACTIONS(918), 1,
      sym_attribute_name,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_attributes_repeat1,
    STATE(459), 1,
      sym_angular_attribute_name,
    STATE(519), 1,
      sym_attribute,
    STATE(534), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(916), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [9600] = 7,
    ACTIONS(745), 1,
      anon_sym_BANG_EQ,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(751), 1,
      anon_sym_DOT,
    ACTIONS(922), 1,
      anon_sym_COLON,
    ACTIONS(924), 1,
      anon_sym_,
    ACTIONS(926), 1,
      sym__newline,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9624] = 7,
    ACTIONS(843), 1,
      anon_sym_BANG_EQ,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(849), 1,
      anon_sym_DOT,
    ACTIONS(928), 1,
      anon_sym_COLON,
    ACTIONS(930), 1,
      anon_sym_,
    ACTIONS(932), 1,
      sym__newline,
    STATE(444), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9648] = 7,
    ACTIONS(843), 1,
      anon_sym_BANG_EQ,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(849), 1,
      anon_sym_DOT,
    ACTIONS(873), 1,
      anon_sym_COLON,
    ACTIONS(875), 1,
      anon_sym_,
    ACTIONS(877), 1,
      sym__newline,
    STATE(439), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9672] = 7,
    ACTIONS(797), 1,
      anon_sym_BANG_EQ,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_,
    ACTIONS(938), 1,
      sym__newline,
    STATE(230), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9696] = 7,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(767), 1,
      anon_sym_DOT,
    ACTIONS(940), 1,
      anon_sym_COLON,
    ACTIONS(942), 1,
      anon_sym_,
    ACTIONS(944), 1,
      sym__newline,
    STATE(133), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9720] = 7,
    ACTIONS(809), 1,
      anon_sym_BANG_EQ,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(815), 1,
      anon_sym_DOT,
    ACTIONS(946), 1,
      anon_sym_COLON,
    ACTIONS(948), 1,
      anon_sym_,
    ACTIONS(950), 1,
      sym__newline,
    STATE(172), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9744] = 7,
    ACTIONS(775), 1,
      anon_sym_BANG_EQ,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(781), 1,
      anon_sym_DOT,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_,
    ACTIONS(956), 1,
      sym__newline,
    STATE(270), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9768] = 7,
    ACTIONS(775), 1,
      anon_sym_BANG_EQ,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(781), 1,
      anon_sym_DOT,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(869), 1,
      anon_sym_,
    ACTIONS(871), 1,
      sym__newline,
    STATE(273), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9792] = 7,
    ACTIONS(761), 1,
      anon_sym_BANG_EQ,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(767), 1,
      anon_sym_DOT,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(837), 1,
      anon_sym_,
    ACTIONS(839), 1,
      sym__newline,
    STATE(134), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9816] = 7,
    ACTIONS(807), 1,
      anon_sym_COLON,
    ACTIONS(809), 1,
      anon_sym_BANG_EQ,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(813), 1,
      anon_sym_,
    ACTIONS(815), 1,
      anon_sym_DOT,
    ACTIONS(817), 1,
      sym__newline,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9840] = 7,
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
    ACTIONS(865), 1,
      sym__newline,
    STATE(193), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9864] = 7,
    ACTIONS(857), 1,
      anon_sym_BANG_EQ,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(863), 1,
      anon_sym_DOT,
    ACTIONS(958), 1,
      anon_sym_COLON,
    ACTIONS(960), 1,
      anon_sym_,
    ACTIONS(962), 1,
      sym__newline,
    STATE(200), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9888] = 7,
    ACTIONS(743), 1,
      anon_sym_COLON,
    ACTIONS(745), 1,
      anon_sym_BANG_EQ,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(749), 1,
      anon_sym_,
    ACTIONS(751), 1,
      anon_sym_DOT,
    ACTIONS(757), 1,
      sym__newline,
    STATE(123), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9912] = 7,
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
    ACTIONS(805), 1,
      sym__newline,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9936] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(970), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [9959] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(972), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [9982] = 8,
    ACTIONS(974), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(976), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(978), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(980), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(982), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(984), 1,
      anon_sym_SQUOTE,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      sym_quoted_attribute_value,
  [10007] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(988), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10030] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10053] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10076] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(994), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10099] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(996), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10122] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(998), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10145] = 7,
    ACTIONS(1000), 1,
      aux_sym_content_token1,
    ACTIONS(1003), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1009), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10168] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1011), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10191] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1013), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10214] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1015), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10237] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1017), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10260] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1019), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10283] = 7,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1021), 1,
      sym__dedent,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10306] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10326] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1025), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10346] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(315), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10366] = 4,
    ACTIONS(1030), 1,
      sym__newline,
    ACTIONS(1033), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1027), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10382] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1035), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10402] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1037), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10422] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(322), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10442] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1043), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10458] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(317), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10478] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1045), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10494] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1047), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(373), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10514] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1049), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10534] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1051), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10554] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(321), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10574] = 6,
    ACTIONS(1053), 1,
      aux_sym_content_token1,
    ACTIONS(1056), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1059), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1062), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10594] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1064), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10614] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10634] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1066), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10650] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1068), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(336), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10670] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(320), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10690] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1070), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10710] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1072), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10730] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1074), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10750] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1076), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10770] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1078), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10790] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1080), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(347), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10810] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1082), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10826] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1084), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10842] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1086), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10862] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(314), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10882] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1088), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10902] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(316), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10922] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1090), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(365), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10942] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1092), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10962] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(313), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10982] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1094), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11002] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11022] = 3,
    ACTIONS(1098), 1,
      sym__indent,
    STATE(423), 1,
      sym_children,
    ACTIONS(459), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11036] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1100), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11056] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1102), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11072] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1104), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11092] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1106), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11112] = 3,
    ACTIONS(1108), 1,
      sym__indent,
    STATE(439), 1,
      sym_children,
    ACTIONS(473), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11126] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1110), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11146] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1112), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11166] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1114), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11186] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11206] = 3,
    ACTIONS(1116), 1,
      sym__indent,
    STATE(444), 1,
      sym_children,
    ACTIONS(479), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11220] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1118), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11240] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(319), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11260] = 3,
    ACTIONS(1098), 1,
      sym__indent,
    STATE(424), 1,
      sym_children,
    ACTIONS(443), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11274] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1120), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11294] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(309), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11314] = 3,
    ACTIONS(1098), 1,
      sym__indent,
    STATE(440), 1,
      sym_children,
    ACTIONS(463), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11328] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1122), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11344] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1124), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11364] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1126), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(376), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11384] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1128), 1,
      sym__newline,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11404] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(323), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11424] = 6,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(312), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(337), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11444] = 4,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1130), 1,
      sym__dedent,
    STATE(328), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11460] = 3,
    ACTIONS(1132), 1,
      sym__indent,
    STATE(440), 1,
      sym_children,
    ACTIONS(463), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11474] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(353), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11491] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(348), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11508] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(326), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11525] = 3,
    ACTIONS(1134), 1,
      sym__newline,
    STATE(364), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11538] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(380), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11555] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(369), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11572] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(366), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11589] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(345), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11606] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(361), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11623] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(325), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11640] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(349), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11657] = 3,
    ACTIONS(1136), 1,
      sym__newline,
    STATE(351), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11670] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(382), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11687] = 4,
    ACTIONS(1140), 1,
      anon_sym_,
    ACTIONS(1142), 1,
      anon_sym_DOT,
    STATE(400), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1138), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11702] = 3,
    ACTIONS(1145), 1,
      sym__newline,
    STATE(332), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11715] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(370), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11732] = 3,
    ACTIONS(1147), 1,
      sym__newline,
    STATE(342), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11745] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(346), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11762] = 3,
    ACTIONS(1149), 1,
      sym__newline,
    STATE(352), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11775] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(360), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11792] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(355), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11809] = 4,
    ACTIONS(1153), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      anon_sym_LBRACE,
    ACTIONS(1151), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1157), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [11824] = 2,
    ACTIONS(1161), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1159), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [11835] = 2,
    ACTIONS(1165), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1163), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [11846] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(368), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11863] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(358), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11880] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(330), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11897] = 3,
    ACTIONS(1167), 1,
      sym__newline,
    STATE(334), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11910] = 2,
    ACTIONS(1171), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1169), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [11921] = 3,
    ACTIONS(1173), 1,
      sym__newline,
    STATE(379), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11934] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(363), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11951] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(329), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11968] = 3,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(385), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11981] = 2,
    ACTIONS(1177), 1,
      sym__indent,
    ACTIONS(512), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11992] = 5,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(966), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym_content_repeat1,
    STATE(340), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12009] = 1,
    ACTIONS(616), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12017] = 1,
    ACTIONS(574), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12025] = 1,
    ACTIONS(459), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12033] = 1,
    ACTIONS(578), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12041] = 4,
    ACTIONS(964), 1,
      aux_sym_content_token1,
    ACTIONS(1181), 1,
      sym__newline,
    STATE(441), 1,
      aux_sym_content_repeat1,
    ACTIONS(1179), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12055] = 4,
    ACTIONS(1183), 1,
      anon_sym_when,
    ACTIONS(1185), 1,
      anon_sym_default,
    STATE(530), 1,
      sym__when_keyword,
    STATE(44), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12069] = 3,
    STATE(99), 1,
      sym_tag,
    STATE(100), 1,
      sym__dummy_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12081] = 1,
    ACTIONS(647), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12089] = 1,
    ACTIONS(623), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12097] = 4,
    ACTIONS(1183), 1,
      anon_sym_when,
    ACTIONS(1187), 1,
      anon_sym_default,
    STATE(498), 1,
      sym__when_keyword,
    STATE(56), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12111] = 1,
    ACTIONS(651), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12119] = 1,
    ACTIONS(566), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12127] = 4,
    ACTIONS(1183), 1,
      anon_sym_when,
    ACTIONS(1189), 1,
      anon_sym_default,
    STATE(515), 1,
      sym__when_keyword,
    STATE(73), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12141] = 1,
    ACTIONS(473), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12149] = 3,
    STATE(175), 1,
      sym_tag,
    STATE(176), 1,
      sym__dummy_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12161] = 3,
    ACTIONS(1193), 1,
      anon_sym_LBRACE,
    ACTIONS(1191), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1195), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12173] = 1,
    ACTIONS(906), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [12181] = 1,
    ACTIONS(479), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12189] = 1,
    ACTIONS(443), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12197] = 4,
    ACTIONS(1191), 1,
      sym__newline,
    ACTIONS(1197), 1,
      aux_sym_content_token1,
    STATE(441), 1,
      aux_sym_content_repeat1,
    ACTIONS(1195), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12211] = 3,
    STATE(124), 1,
      sym_tag,
    STATE(170), 1,
      sym__dummy_tag,
    ACTIONS(1200), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12223] = 2,
    ACTIONS(1140), 1,
      anon_sym_,
    ACTIONS(1138), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12233] = 1,
    ACTIONS(463), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12241] = 2,
    STATE(193), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12250] = 2,
    STATE(93), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12259] = 2,
    ACTIONS(1009), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1202), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12268] = 4,
    ACTIONS(1204), 1,
      aux_sym_script_block_token1,
    ACTIONS(1207), 1,
      sym__newline,
    ACTIONS(1210), 1,
      sym__dedent,
    STATE(448), 1,
      aux_sym_script_block_repeat1,
  [12281] = 2,
    STATE(269), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12290] = 4,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    ACTIONS(1216), 1,
      sym__dedent,
    STATE(448), 1,
      aux_sym_script_block_repeat1,
  [12303] = 4,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1220), 1,
      sym__newline,
    STATE(195), 1,
      sym__single_line_buf_code,
    STATE(635), 1,
      sym__un_delimited_javascript,
  [12316] = 2,
    ACTIONS(1222), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1224), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12325] = 2,
    STATE(131), 1,
      sym_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12334] = 2,
    ACTIONS(1226), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1228), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12343] = 2,
    STATE(200), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12352] = 2,
    STATE(133), 1,
      sym_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12361] = 4,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    ACTIONS(1230), 1,
      sym__dedent,
    STATE(448), 1,
      aux_sym_script_block_repeat1,
  [12374] = 2,
    STATE(270), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12383] = 3,
    ACTIONS(1232), 1,
      anon_sym_EQ,
    ACTIONS(1234), 1,
      anon_sym_,
    ACTIONS(1236), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12394] = 2,
    STATE(134), 1,
      sym_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12403] = 2,
    ACTIONS(1240), 1,
      anon_sym_,
    ACTIONS(1238), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12412] = 2,
    STATE(211), 1,
      sym_tag,
    ACTIONS(219), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12421] = 2,
    STATE(233), 1,
      sym_tag,
    ACTIONS(309), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12430] = 2,
    STATE(230), 1,
      sym_tag,
    ACTIONS(309), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12439] = 2,
    STATE(123), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12448] = 2,
    STATE(110), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12457] = 2,
    STATE(169), 1,
      sym_tag,
    ACTIONS(1200), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12466] = 4,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    ACTIONS(1242), 1,
      sym__dedent,
    STATE(448), 1,
      aux_sym_script_block_repeat1,
  [12479] = 4,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1244), 1,
      sym__newline,
    STATE(154), 1,
      sym__single_line_buf_code,
    STATE(612), 1,
      sym__un_delimited_javascript,
  [12492] = 4,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1246), 1,
      sym__newline,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(597), 1,
      sym__un_delimited_javascript,
  [12505] = 2,
    ACTIONS(1191), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1195), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12514] = 2,
    STATE(173), 1,
      sym_tag,
    ACTIONS(1200), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12523] = 2,
    STATE(439), 1,
      sym_tag,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12532] = 4,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1248), 1,
      sym__newline,
    STATE(92), 1,
      sym__single_line_buf_code,
    STATE(602), 1,
      sym__un_delimited_javascript,
  [12545] = 4,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1250), 1,
      sym__newline,
    STATE(222), 1,
      sym__single_line_buf_code,
    STATE(627), 1,
      sym__un_delimited_javascript,
  [12558] = 2,
    STATE(273), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12567] = 2,
    STATE(444), 1,
      sym_tag,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12576] = 4,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    ACTIONS(1252), 1,
      sym__dedent,
    STATE(448), 1,
      aux_sym_script_block_repeat1,
  [12589] = 2,
    STATE(229), 1,
      sym_tag,
    ACTIONS(309), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12598] = 2,
    STATE(172), 1,
      sym_tag,
    ACTIONS(1200), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12607] = 4,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(448), 1,
      aux_sym_script_block_repeat1,
  [12620] = 2,
    STATE(440), 1,
      sym_tag,
    ACTIONS(1039), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12629] = 2,
    ACTIONS(1256), 1,
      anon_sym_,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12637] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(137), 1,
      sym__single_line_buf_code,
    STATE(612), 1,
      sym__un_delimited_javascript,
  [12647] = 2,
    ACTIONS(1260), 1,
      anon_sym_,
    ACTIONS(1262), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12655] = 1,
    ACTIONS(1264), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12661] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(429), 1,
      sym__single_line_buf_code,
    STATE(621), 1,
      sym__un_delimited_javascript,
  [12671] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(432), 1,
      sym__single_line_buf_code,
    STATE(621), 1,
      sym__un_delimited_javascript,
  [12681] = 2,
    ACTIONS(1266), 1,
      anon_sym_,
    ACTIONS(1268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12689] = 2,
    ACTIONS(1270), 1,
      anon_sym_,
    ACTIONS(1272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12697] = 2,
    ACTIONS(1274), 1,
      anon_sym_,
    ACTIONS(1276), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12705] = 2,
    ACTIONS(1278), 1,
      anon_sym_,
    ACTIONS(1280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12713] = 2,
    ACTIONS(1282), 1,
      anon_sym_,
    ACTIONS(1284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12721] = 2,
    ACTIONS(1286), 1,
      anon_sym_,
    ACTIONS(1288), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12729] = 3,
    ACTIONS(1290), 1,
      sym__comment_content,
    ACTIONS(1292), 1,
      sym__dedent,
    STATE(514), 1,
      aux_sym__comment_repeat1,
  [12739] = 1,
    ACTIONS(1210), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [12745] = 3,
    ACTIONS(1294), 1,
      sym__un_delimited_javascript_line,
    STATE(45), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(112), 1,
      sym__multi_line_buf_code,
  [12755] = 3,
    ACTIONS(1296), 1,
      anon_sym_COLON,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(177), 1,
      sym__when_content,
  [12765] = 1,
    ACTIONS(1300), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12771] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(116), 1,
      sym__single_line_buf_code,
    STATE(602), 1,
      sym__un_delimited_javascript,
  [12781] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(118), 1,
      sym__single_line_buf_code,
    STATE(602), 1,
      sym__un_delimited_javascript,
  [12791] = 2,
    ACTIONS(1302), 1,
      anon_sym_,
    ACTIONS(1304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12799] = 3,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12809] = 2,
    ACTIONS(1306), 1,
      anon_sym_,
    ACTIONS(1308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12817] = 2,
    ACTIONS(1310), 1,
      anon_sym_,
    ACTIONS(1312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12825] = 1,
    ACTIONS(1314), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12831] = 2,
    ACTIONS(1316), 1,
      anon_sym_,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12839] = 3,
    ACTIONS(1290), 1,
      sym__comment_content,
    ACTIONS(1320), 1,
      sym__dedent,
    STATE(514), 1,
      aux_sym__comment_repeat1,
  [12849] = 3,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    STATE(481), 1,
      aux_sym_script_block_repeat1,
  [12859] = 3,
    ACTIONS(1322), 1,
      sym__un_delimited_javascript_line,
    STATE(168), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(223), 1,
      sym__multi_line_buf_code,
  [12869] = 1,
    ACTIONS(1324), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12875] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(158), 1,
      sym__single_line_buf_code,
    STATE(649), 1,
      sym__un_delimited_javascript,
  [12885] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(157), 1,
      sym__single_line_buf_code,
    STATE(649), 1,
      sym__un_delimited_javascript,
  [12895] = 3,
    ACTIONS(493), 1,
      sym__dedent,
    ACTIONS(1326), 1,
      sym__comment_content,
    STATE(514), 1,
      aux_sym__comment_repeat1,
  [12905] = 3,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    ACTIONS(1331), 1,
      sym__newline,
    STATE(151), 1,
      sym__when_content,
  [12915] = 3,
    ACTIONS(1333), 1,
      sym__un_delimited_javascript_line,
    STATE(146), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(239), 1,
      sym__multi_line_buf_code,
  [12925] = 3,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    STATE(478), 1,
      aux_sym_script_block_repeat1,
  [12935] = 1,
    ACTIONS(1335), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12941] = 3,
    ACTIONS(1337), 1,
      anon_sym_,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [12951] = 3,
    ACTIONS(1343), 1,
      anon_sym_SQUOTE,
    ACTIONS(1345), 1,
      anon_sym_DQUOTE,
    STATE(494), 1,
      sym_quoted_javascript,
  [12961] = 2,
    ACTIONS(889), 1,
      anon_sym_,
    ACTIONS(893), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12969] = 3,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    STATE(457), 1,
      aux_sym_script_block_repeat1,
  [12979] = 1,
    ACTIONS(1347), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [12985] = 3,
    ACTIONS(1290), 1,
      sym__comment_content,
    ACTIONS(1349), 1,
      sym__dedent,
    STATE(514), 1,
      aux_sym__comment_repeat1,
  [12995] = 3,
    ACTIONS(1290), 1,
      sym__comment_content,
    ACTIONS(1351), 1,
      sym__dedent,
    STATE(514), 1,
      aux_sym__comment_repeat1,
  [13005] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(186), 1,
      sym__single_line_buf_code,
    STATE(635), 1,
      sym__un_delimited_javascript,
  [13015] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(136), 1,
      sym__single_line_buf_code,
    STATE(612), 1,
      sym__un_delimited_javascript,
  [13025] = 3,
    ACTIONS(1353), 1,
      sym__un_delimited_javascript_line,
    STATE(81), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(147), 1,
      sym__multi_line_buf_code,
  [13035] = 3,
    ACTIONS(1337), 1,
      anon_sym_,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [13045] = 3,
    ACTIONS(1357), 1,
      anon_sym_COLON,
    ACTIONS(1359), 1,
      sym__newline,
    STATE(105), 1,
      sym__when_content,
  [13055] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(251), 1,
      sym__single_line_buf_code,
    STATE(627), 1,
      sym__un_delimited_javascript,
  [13065] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(238), 1,
      sym__single_line_buf_code,
    STATE(627), 1,
      sym__un_delimited_javascript,
  [13075] = 3,
    ACTIONS(1212), 1,
      aux_sym_script_block_token1,
    ACTIONS(1214), 1,
      sym__newline,
    STATE(450), 1,
      aux_sym_script_block_repeat1,
  [13085] = 2,
    ACTIONS(1361), 1,
      anon_sym_,
    ACTIONS(1363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13093] = 3,
    ACTIONS(1290), 1,
      sym__comment_content,
    ACTIONS(1365), 1,
      sym__dedent,
    STATE(514), 1,
      aux_sym__comment_repeat1,
  [13103] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(253), 1,
      sym__single_line_buf_code,
    STATE(586), 1,
      sym__un_delimited_javascript,
  [13113] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(254), 1,
      sym__single_line_buf_code,
    STATE(586), 1,
      sym__un_delimited_javascript,
  [13123] = 3,
    ACTIONS(1367), 1,
      sym__un_delimited_javascript_line,
    STATE(107), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(215), 1,
      sym__multi_line_buf_code,
  [13133] = 3,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(187), 1,
      sym__single_line_buf_code,
    STATE(635), 1,
      sym__un_delimited_javascript,
  [13143] = 2,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1371), 1,
      aux_sym_quoted_javascript_token2,
  [13150] = 2,
    ACTIONS(1373), 1,
      sym__comment_content,
    ACTIONS(1375), 1,
      sym__newline,
  [13157] = 2,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(614), 1,
      sym__un_delimited_javascript,
  [13164] = 2,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(601), 1,
      sym__un_delimited_javascript,
  [13171] = 2,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(590), 1,
      sym__un_delimited_javascript,
  [13178] = 2,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(628), 1,
      sym__un_delimited_javascript,
  [13185] = 2,
    ACTIONS(447), 1,
      sym__indent,
    STATE(94), 1,
      sym_children,
  [13192] = 2,
    ACTIONS(702), 1,
      sym__indent,
    STATE(260), 1,
      sym_children,
  [13199] = 2,
    ACTIONS(447), 1,
      sym__indent,
    STATE(82), 1,
      sym_children,
  [13206] = 2,
    ACTIONS(1369), 1,
      anon_sym_SQUOTE,
    ACTIONS(1377), 1,
      aux_sym_quoted_javascript_token1,
  [13213] = 2,
    ACTIONS(1379), 1,
      anon_sym_SQUOTE,
    ACTIONS(1381), 1,
      aux_sym_quoted_javascript_token1,
  [13220] = 2,
    ACTIONS(1290), 1,
      sym__comment_content,
    STATE(524), 1,
      aux_sym__comment_repeat1,
  [13227] = 2,
    ACTIONS(1379), 1,
      anon_sym_DQUOTE,
    ACTIONS(1383), 1,
      aux_sym_quoted_javascript_token2,
  [13234] = 2,
    ACTIONS(1385), 1,
      sym__comment_content,
    STATE(55), 1,
      aux_sym__comment_repeat1,
  [13241] = 2,
    ACTIONS(1337), 1,
      anon_sym_,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
  [13248] = 2,
    ACTIONS(1387), 1,
      sym__comment_content,
    STATE(111), 1,
      aux_sym__comment_repeat1,
  [13255] = 2,
    ACTIONS(661), 1,
      sym__indent,
    STATE(237), 1,
      sym_children,
  [13262] = 1,
    ACTIONS(1389), 2,
      sym__newline,
      anon_sym_COLON,
  [13267] = 2,
    ACTIONS(553), 1,
      sym__indent,
    STATE(191), 1,
      sym_children,
  [13274] = 2,
    ACTIONS(702), 1,
      sym__indent,
    STATE(274), 1,
      sym_children,
  [13281] = 2,
    ACTIONS(1290), 1,
      sym__comment_content,
    STATE(525), 1,
      aux_sym__comment_repeat1,
  [13288] = 2,
    ACTIONS(661), 1,
      sym__indent,
    STATE(247), 1,
      sym_children,
  [13295] = 2,
    ACTIONS(1391), 1,
      sym__comment_content,
    ACTIONS(1393), 1,
      sym__newline,
  [13302] = 2,
    ACTIONS(553), 1,
      sym__indent,
    STATE(196), 1,
      sym_children,
  [13309] = 2,
    ACTIONS(1395), 1,
      sym__comment_content,
    STATE(171), 1,
      aux_sym__comment_repeat1,
  [13316] = 2,
    ACTIONS(1290), 1,
      sym__comment_content,
    STATE(508), 1,
      aux_sym__comment_repeat1,
  [13323] = 2,
    ACTIONS(510), 1,
      sym__indent,
    STATE(155), 1,
      sym_children,
  [13330] = 2,
    ACTIONS(1397), 1,
      sym__comment_content,
    ACTIONS(1399), 1,
      sym__newline,
  [13337] = 2,
    ACTIONS(1401), 1,
      sym__comment_content,
    ACTIONS(1403), 1,
      sym__newline,
  [13344] = 2,
    ACTIONS(1290), 1,
      sym__comment_content,
    STATE(495), 1,
      aux_sym__comment_repeat1,
  [13351] = 2,
    ACTIONS(1405), 1,
      sym__comment_content,
    STATE(75), 1,
      aux_sym__comment_repeat1,
  [13358] = 2,
    ACTIONS(1407), 1,
      sym__comment_content,
    ACTIONS(1409), 1,
      sym__newline,
  [13365] = 1,
    ACTIONS(493), 2,
      sym__dedent,
      sym__comment_content,
  [13370] = 2,
    ACTIONS(510), 1,
      sym__indent,
    STATE(153), 1,
      sym_children,
  [13377] = 2,
    ACTIONS(1290), 1,
      sym__comment_content,
    STATE(535), 1,
      aux_sym__comment_repeat1,
  [13384] = 2,
    ACTIONS(1218), 1,
      sym__un_delimited_javascript_line,
    STATE(623), 1,
      sym__un_delimited_javascript,
  [13391] = 2,
    ACTIONS(1411), 1,
      sym__comment_content,
    STATE(188), 1,
      aux_sym__comment_repeat1,
  [13398] = 1,
    ACTIONS(1413), 1,
      anon_sym_SQUOTE,
  [13402] = 1,
    ACTIONS(1415), 1,
      sym__indent,
  [13406] = 1,
    ACTIONS(1417), 1,
      sym__un_delimited_javascript_line,
  [13410] = 1,
    ACTIONS(1419), 1,
      sym__indent,
  [13414] = 1,
    ACTIONS(1421), 1,
      sym__newline,
  [13418] = 1,
    ACTIONS(1423), 1,
      sym__newline,
  [13422] = 1,
    ACTIONS(1425), 1,
      sym__indent,
  [13426] = 1,
    ACTIONS(1427), 1,
      sym__newline,
  [13430] = 1,
    ACTIONS(1429), 1,
      aux_sym__attribute_token1,
  [13434] = 1,
    ACTIONS(1431), 1,
      sym__newline,
  [13438] = 1,
    ACTIONS(1433), 1,
      sym__newline,
  [13442] = 1,
    ACTIONS(1435), 1,
      sym__newline,
  [13446] = 1,
    ACTIONS(1437), 1,
      aux_sym_unbuffered_code_token1,
  [13450] = 1,
    ACTIONS(1439), 1,
      sym__newline,
  [13454] = 1,
    ACTIONS(1441), 1,
      sym__newline,
  [13458] = 1,
    ACTIONS(1443), 1,
      sym__indent,
  [13462] = 1,
    ACTIONS(1445), 1,
      sym__indent,
  [13466] = 1,
    ACTIONS(1447), 1,
      sym__indent,
  [13470] = 1,
    ACTIONS(1449), 1,
      aux_sym__when_keyword_token1,
  [13474] = 1,
    ACTIONS(1451), 1,
      sym__newline,
  [13478] = 1,
    ACTIONS(1453), 1,
      sym__newline,
  [13482] = 1,
    ACTIONS(1455), 1,
      sym__newline,
  [13486] = 1,
    ACTIONS(1457), 1,
      sym__newline,
  [13490] = 1,
    ACTIONS(1459), 1,
      aux_sym_unbuffered_code_token1,
  [13494] = 1,
    ACTIONS(1461), 1,
      sym__newline,
  [13498] = 1,
    ACTIONS(1463), 1,
      sym__newline,
  [13502] = 1,
    ACTIONS(1465), 1,
      aux_sym_unbuffered_code_token1,
  [13506] = 1,
    ACTIONS(1467), 1,
      sym__newline,
  [13510] = 1,
    ACTIONS(1469), 1,
      sym__newline,
  [13514] = 1,
    ACTIONS(1471), 1,
      sym__indent,
  [13518] = 1,
    ACTIONS(1473), 1,
      sym__newline,
  [13522] = 1,
    ACTIONS(1475), 1,
      sym__indent,
  [13526] = 1,
    ACTIONS(1413), 1,
      anon_sym_DQUOTE,
  [13530] = 1,
    ACTIONS(1477), 1,
      sym__indent,
  [13534] = 1,
    ACTIONS(1479), 1,
      sym__newline,
  [13538] = 1,
    ACTIONS(1481), 1,
      sym__newline,
  [13542] = 1,
    ACTIONS(1483), 1,
      aux_sym_unbuffered_code_token1,
  [13546] = 1,
    ACTIONS(1485), 1,
      sym__newline,
  [13550] = 1,
    ACTIONS(1487), 1,
      sym__newline,
  [13554] = 1,
    ACTIONS(1489), 1,
      sym__newline,
  [13558] = 1,
    ACTIONS(1491), 1,
      sym__delimited_javascript,
  [13562] = 1,
    ACTIONS(1493), 1,
      anon_sym_DQUOTE,
  [13566] = 1,
    ACTIONS(1495), 1,
      sym__indent,
  [13570] = 1,
    ACTIONS(1493), 1,
      anon_sym_SQUOTE,
  [13574] = 1,
    ACTIONS(1497), 1,
      sym__newline,
  [13578] = 1,
    ACTIONS(1499), 1,
      sym__newline,
  [13582] = 1,
    ACTIONS(1501), 1,
      sym__newline,
  [13586] = 1,
    ACTIONS(1503), 1,
      sym__indent,
  [13590] = 1,
    ACTIONS(1505), 1,
      sym__newline,
  [13594] = 1,
    ACTIONS(1507), 1,
      sym__newline,
  [13598] = 1,
    ACTIONS(1509), 1,
      sym__newline,
  [13602] = 1,
    ACTIONS(1511), 1,
      sym__newline,
  [13606] = 1,
    ACTIONS(1513), 1,
      sym__newline,
  [13610] = 1,
    ACTIONS(1515), 1,
      ts_builtin_sym_end,
  [13614] = 1,
    ACTIONS(1517), 1,
      sym__delimited_javascript,
  [13618] = 1,
    ACTIONS(1519), 1,
      aux_sym_unbuffered_code_token1,
  [13622] = 1,
    ACTIONS(1521), 1,
      sym__newline,
  [13626] = 1,
    ACTIONS(1523), 1,
      sym__newline,
  [13630] = 1,
    ACTIONS(1525), 1,
      sym__newline,
  [13634] = 1,
    ACTIONS(1527), 1,
      sym__indent,
  [13638] = 1,
    ACTIONS(1529), 1,
      anon_sym_RBRACE_RBRACE,
  [13642] = 1,
    ACTIONS(1531), 1,
      sym__newline,
  [13646] = 1,
    ACTIONS(1533), 1,
      sym__indent,
  [13650] = 1,
    ACTIONS(1535), 1,
      sym__indent,
  [13654] = 1,
    ACTIONS(1537), 1,
      sym__indent,
  [13658] = 1,
    ACTIONS(1539), 1,
      sym__indent,
  [13662] = 1,
    ACTIONS(1529), 1,
      anon_sym_RBRACE,
  [13666] = 1,
    ACTIONS(1541), 1,
      sym__newline,
  [13670] = 1,
    ACTIONS(1543), 1,
      sym__indent,
  [13674] = 1,
    ACTIONS(1545), 1,
      sym__indent,
  [13678] = 1,
    ACTIONS(1547), 1,
      sym__indent,
  [13682] = 1,
    ACTIONS(1549), 1,
      sym__indent,
  [13686] = 1,
    ACTIONS(1551), 1,
      sym__newline,
  [13690] = 1,
    ACTIONS(1553), 1,
      sym__indent,
  [13694] = 1,
    ACTIONS(1555), 1,
      sym__indent,
  [13698] = 1,
    ACTIONS(1557), 1,
      sym__indent,
  [13702] = 1,
    ACTIONS(1559), 1,
      sym__indent,
  [13706] = 1,
    ACTIONS(1561), 1,
      sym__newline,
  [13710] = 1,
    ACTIONS(1563), 1,
      sym__indent,
  [13714] = 1,
    ACTIONS(1565), 1,
      sym__indent,
  [13718] = 1,
    ACTIONS(1567), 1,
      sym__indent,
  [13722] = 1,
    ACTIONS(1569), 1,
      sym__indent,
  [13726] = 1,
    ACTIONS(1571), 1,
      sym__indent,
  [13730] = 1,
    ACTIONS(1573), 1,
      sym__indent,
  [13734] = 1,
    ACTIONS(1575), 1,
      sym__indent,
  [13738] = 1,
    ACTIONS(1577), 1,
      sym__indent,
  [13742] = 1,
    ACTIONS(1579), 1,
      sym__un_delimited_javascript_line,
  [13746] = 1,
    ACTIONS(1581), 1,
      sym__newline,
  [13750] = 1,
    ACTIONS(1583), 1,
      sym__newline,
  [13754] = 1,
    ACTIONS(1585), 1,
      sym__newline,
  [13758] = 1,
    ACTIONS(1587), 1,
      sym__un_delimited_javascript_line,
  [13762] = 1,
    ACTIONS(1589), 1,
      sym__newline,
  [13766] = 1,
    ACTIONS(1591), 1,
      sym__newline,
  [13770] = 1,
    ACTIONS(1593), 1,
      sym__newline,
  [13774] = 1,
    ACTIONS(1595), 1,
      sym__newline,
  [13778] = 1,
    ACTIONS(1597), 1,
      sym__newline,
  [13782] = 1,
    ACTIONS(1599), 1,
      sym__newline,
  [13786] = 1,
    ACTIONS(1601), 1,
      sym__newline,
  [13790] = 1,
    ACTIONS(1603), 1,
      sym__newline,
  [13794] = 1,
    ACTIONS(1605), 1,
      sym__newline,
  [13798] = 1,
    ACTIONS(1607), 1,
      sym__newline,
  [13802] = 1,
    ACTIONS(1609), 1,
      sym__newline,
  [13806] = 1,
    ACTIONS(1611), 1,
      sym__newline,
  [13810] = 1,
    ACTIONS(1613), 1,
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
  [SMALL_STATE(9)] = 514,
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
  [SMALL_STATE(35)] = 2308,
  [SMALL_STATE(36)] = 2374,
  [SMALL_STATE(37)] = 2440,
  [SMALL_STATE(38)] = 2506,
  [SMALL_STATE(39)] = 2572,
  [SMALL_STATE(40)] = 2638,
  [SMALL_STATE(41)] = 2704,
  [SMALL_STATE(42)] = 2769,
  [SMALL_STATE(43)] = 2834,
  [SMALL_STATE(44)] = 2871,
  [SMALL_STATE(45)] = 2908,
  [SMALL_STATE(46)] = 2940,
  [SMALL_STATE(47)] = 2972,
  [SMALL_STATE(48)] = 3008,
  [SMALL_STATE(49)] = 3040,
  [SMALL_STATE(50)] = 3072,
  [SMALL_STATE(51)] = 3104,
  [SMALL_STATE(52)] = 3136,
  [SMALL_STATE(53)] = 3168,
  [SMALL_STATE(54)] = 3200,
  [SMALL_STATE(55)] = 3232,
  [SMALL_STATE(56)] = 3264,
  [SMALL_STATE(57)] = 3300,
  [SMALL_STATE(58)] = 3332,
  [SMALL_STATE(59)] = 3363,
  [SMALL_STATE(60)] = 3394,
  [SMALL_STATE(61)] = 3427,
  [SMALL_STATE(62)] = 3462,
  [SMALL_STATE(63)] = 3493,
  [SMALL_STATE(64)] = 3522,
  [SMALL_STATE(65)] = 3553,
  [SMALL_STATE(66)] = 3584,
  [SMALL_STATE(67)] = 3611,
  [SMALL_STATE(68)] = 3642,
  [SMALL_STATE(69)] = 3673,
  [SMALL_STATE(70)] = 3704,
  [SMALL_STATE(71)] = 3735,
  [SMALL_STATE(72)] = 3766,
  [SMALL_STATE(73)] = 3797,
  [SMALL_STATE(74)] = 3832,
  [SMALL_STATE(75)] = 3863,
  [SMALL_STATE(76)] = 3894,
  [SMALL_STATE(77)] = 3925,
  [SMALL_STATE(78)] = 3956,
  [SMALL_STATE(79)] = 3987,
  [SMALL_STATE(80)] = 4016,
  [SMALL_STATE(81)] = 4043,
  [SMALL_STATE(82)] = 4074,
  [SMALL_STATE(83)] = 4100,
  [SMALL_STATE(84)] = 4130,
  [SMALL_STATE(85)] = 4160,
  [SMALL_STATE(86)] = 4186,
  [SMALL_STATE(87)] = 4212,
  [SMALL_STATE(88)] = 4238,
  [SMALL_STATE(89)] = 4264,
  [SMALL_STATE(90)] = 4290,
  [SMALL_STATE(91)] = 4316,
  [SMALL_STATE(92)] = 4342,
  [SMALL_STATE(93)] = 4370,
  [SMALL_STATE(94)] = 4396,
  [SMALL_STATE(95)] = 4422,
  [SMALL_STATE(96)] = 4448,
  [SMALL_STATE(97)] = 4474,
  [SMALL_STATE(98)] = 4500,
  [SMALL_STATE(99)] = 4526,
  [SMALL_STATE(100)] = 4552,
  [SMALL_STATE(101)] = 4578,
  [SMALL_STATE(102)] = 4604,
  [SMALL_STATE(103)] = 4634,
  [SMALL_STATE(104)] = 4660,
  [SMALL_STATE(105)] = 4688,
  [SMALL_STATE(106)] = 4714,
  [SMALL_STATE(107)] = 4740,
  [SMALL_STATE(108)] = 4770,
  [SMALL_STATE(109)] = 4796,
  [SMALL_STATE(110)] = 4826,
  [SMALL_STATE(111)] = 4852,
  [SMALL_STATE(112)] = 4882,
  [SMALL_STATE(113)] = 4910,
  [SMALL_STATE(114)] = 4938,
  [SMALL_STATE(115)] = 4964,
  [SMALL_STATE(116)] = 4994,
  [SMALL_STATE(117)] = 5020,
  [SMALL_STATE(118)] = 5050,
  [SMALL_STATE(119)] = 5076,
  [SMALL_STATE(120)] = 5106,
  [SMALL_STATE(121)] = 5136,
  [SMALL_STATE(122)] = 5162,
  [SMALL_STATE(123)] = 5190,
  [SMALL_STATE(124)] = 5216,
  [SMALL_STATE(125)] = 5241,
  [SMALL_STATE(126)] = 5266,
  [SMALL_STATE(127)] = 5291,
  [SMALL_STATE(128)] = 5316,
  [SMALL_STATE(129)] = 5341,
  [SMALL_STATE(130)] = 5366,
  [SMALL_STATE(131)] = 5391,
  [SMALL_STATE(132)] = 5416,
  [SMALL_STATE(133)] = 5441,
  [SMALL_STATE(134)] = 5466,
  [SMALL_STATE(135)] = 5491,
  [SMALL_STATE(136)] = 5516,
  [SMALL_STATE(137)] = 5541,
  [SMALL_STATE(138)] = 5566,
  [SMALL_STATE(139)] = 5595,
  [SMALL_STATE(140)] = 5620,
  [SMALL_STATE(141)] = 5649,
  [SMALL_STATE(142)] = 5678,
  [SMALL_STATE(143)] = 5707,
  [SMALL_STATE(144)] = 5736,
  [SMALL_STATE(145)] = 5765,
  [SMALL_STATE(146)] = 5790,
  [SMALL_STATE(147)] = 5819,
  [SMALL_STATE(148)] = 5846,
  [SMALL_STATE(149)] = 5875,
  [SMALL_STATE(150)] = 5900,
  [SMALL_STATE(151)] = 5925,
  [SMALL_STATE(152)] = 5952,
  [SMALL_STATE(153)] = 5977,
  [SMALL_STATE(154)] = 6002,
  [SMALL_STATE(155)] = 6029,
  [SMALL_STATE(156)] = 6054,
  [SMALL_STATE(157)] = 6079,
  [SMALL_STATE(158)] = 6104,
  [SMALL_STATE(159)] = 6129,
  [SMALL_STATE(160)] = 6154,
  [SMALL_STATE(161)] = 6179,
  [SMALL_STATE(162)] = 6204,
  [SMALL_STATE(163)] = 6229,
  [SMALL_STATE(164)] = 6254,
  [SMALL_STATE(165)] = 6283,
  [SMALL_STATE(166)] = 6308,
  [SMALL_STATE(167)] = 6333,
  [SMALL_STATE(168)] = 6362,
  [SMALL_STATE(169)] = 6391,
  [SMALL_STATE(170)] = 6416,
  [SMALL_STATE(171)] = 6441,
  [SMALL_STATE(172)] = 6470,
  [SMALL_STATE(173)] = 6495,
  [SMALL_STATE(174)] = 6520,
  [SMALL_STATE(175)] = 6545,
  [SMALL_STATE(176)] = 6570,
  [SMALL_STATE(177)] = 6595,
  [SMALL_STATE(178)] = 6620,
  [SMALL_STATE(179)] = 6647,
  [SMALL_STATE(180)] = 6672,
  [SMALL_STATE(181)] = 6697,
  [SMALL_STATE(182)] = 6724,
  [SMALL_STATE(183)] = 6750,
  [SMALL_STATE(184)] = 6778,
  [SMALL_STATE(185)] = 6802,
  [SMALL_STATE(186)] = 6826,
  [SMALL_STATE(187)] = 6850,
  [SMALL_STATE(188)] = 6874,
  [SMALL_STATE(189)] = 6902,
  [SMALL_STATE(190)] = 6926,
  [SMALL_STATE(191)] = 6950,
  [SMALL_STATE(192)] = 6974,
  [SMALL_STATE(193)] = 7000,
  [SMALL_STATE(194)] = 7024,
  [SMALL_STATE(195)] = 7048,
  [SMALL_STATE(196)] = 7074,
  [SMALL_STATE(197)] = 7098,
  [SMALL_STATE(198)] = 7126,
  [SMALL_STATE(199)] = 7150,
  [SMALL_STATE(200)] = 7174,
  [SMALL_STATE(201)] = 7198,
  [SMALL_STATE(202)] = 7226,
  [SMALL_STATE(203)] = 7250,
  [SMALL_STATE(204)] = 7274,
  [SMALL_STATE(205)] = 7302,
  [SMALL_STATE(206)] = 7326,
  [SMALL_STATE(207)] = 7350,
  [SMALL_STATE(208)] = 7378,
  [SMALL_STATE(209)] = 7402,
  [SMALL_STATE(210)] = 7430,
  [SMALL_STATE(211)] = 7454,
  [SMALL_STATE(212)] = 7478,
  [SMALL_STATE(213)] = 7506,
  [SMALL_STATE(214)] = 7532,
  [SMALL_STATE(215)] = 7556,
  [SMALL_STATE(216)] = 7582,
  [SMALL_STATE(217)] = 7610,
  [SMALL_STATE(218)] = 7634,
  [SMALL_STATE(219)] = 7658,
  [SMALL_STATE(220)] = 7682,
  [SMALL_STATE(221)] = 7706,
  [SMALL_STATE(222)] = 7730,
  [SMALL_STATE(223)] = 7755,
  [SMALL_STATE(224)] = 7780,
  [SMALL_STATE(225)] = 7803,
  [SMALL_STATE(226)] = 7826,
  [SMALL_STATE(227)] = 7851,
  [SMALL_STATE(228)] = 7874,
  [SMALL_STATE(229)] = 7897,
  [SMALL_STATE(230)] = 7920,
  [SMALL_STATE(231)] = 7943,
  [SMALL_STATE(232)] = 7968,
  [SMALL_STATE(233)] = 7991,
  [SMALL_STATE(234)] = 8014,
  [SMALL_STATE(235)] = 8037,
  [SMALL_STATE(236)] = 8060,
  [SMALL_STATE(237)] = 8083,
  [SMALL_STATE(238)] = 8106,
  [SMALL_STATE(239)] = 8129,
  [SMALL_STATE(240)] = 8154,
  [SMALL_STATE(241)] = 8177,
  [SMALL_STATE(242)] = 8200,
  [SMALL_STATE(243)] = 8223,
  [SMALL_STATE(244)] = 8246,
  [SMALL_STATE(245)] = 8269,
  [SMALL_STATE(246)] = 8292,
  [SMALL_STATE(247)] = 8315,
  [SMALL_STATE(248)] = 8338,
  [SMALL_STATE(249)] = 8361,
  [SMALL_STATE(250)] = 8384,
  [SMALL_STATE(251)] = 8409,
  [SMALL_STATE(252)] = 8432,
  [SMALL_STATE(253)] = 8454,
  [SMALL_STATE(254)] = 8476,
  [SMALL_STATE(255)] = 8498,
  [SMALL_STATE(256)] = 8520,
  [SMALL_STATE(257)] = 8542,
  [SMALL_STATE(258)] = 8564,
  [SMALL_STATE(259)] = 8586,
  [SMALL_STATE(260)] = 8608,
  [SMALL_STATE(261)] = 8630,
  [SMALL_STATE(262)] = 8652,
  [SMALL_STATE(263)] = 8674,
  [SMALL_STATE(264)] = 8696,
  [SMALL_STATE(265)] = 8718,
  [SMALL_STATE(266)] = 8740,
  [SMALL_STATE(267)] = 8762,
  [SMALL_STATE(268)] = 8784,
  [SMALL_STATE(269)] = 8806,
  [SMALL_STATE(270)] = 8828,
  [SMALL_STATE(271)] = 8850,
  [SMALL_STATE(272)] = 8872,
  [SMALL_STATE(273)] = 8894,
  [SMALL_STATE(274)] = 8916,
  [SMALL_STATE(275)] = 8938,
  [SMALL_STATE(276)] = 8975,
  [SMALL_STATE(277)] = 9012,
  [SMALL_STATE(278)] = 9049,
  [SMALL_STATE(279)] = 9086,
  [SMALL_STATE(280)] = 9123,
  [SMALL_STATE(281)] = 9160,
  [SMALL_STATE(282)] = 9197,
  [SMALL_STATE(283)] = 9234,
  [SMALL_STATE(284)] = 9271,
  [SMALL_STATE(285)] = 9308,
  [SMALL_STATE(286)] = 9345,
  [SMALL_STATE(287)] = 9382,
  [SMALL_STATE(288)] = 9419,
  [SMALL_STATE(289)] = 9456,
  [SMALL_STATE(290)] = 9481,
  [SMALL_STATE(291)] = 9506,
  [SMALL_STATE(292)] = 9525,
  [SMALL_STATE(293)] = 9550,
  [SMALL_STATE(294)] = 9575,
  [SMALL_STATE(295)] = 9600,
  [SMALL_STATE(296)] = 9624,
  [SMALL_STATE(297)] = 9648,
  [SMALL_STATE(298)] = 9672,
  [SMALL_STATE(299)] = 9696,
  [SMALL_STATE(300)] = 9720,
  [SMALL_STATE(301)] = 9744,
  [SMALL_STATE(302)] = 9768,
  [SMALL_STATE(303)] = 9792,
  [SMALL_STATE(304)] = 9816,
  [SMALL_STATE(305)] = 9840,
  [SMALL_STATE(306)] = 9864,
  [SMALL_STATE(307)] = 9888,
  [SMALL_STATE(308)] = 9912,
  [SMALL_STATE(309)] = 9936,
  [SMALL_STATE(310)] = 9959,
  [SMALL_STATE(311)] = 9982,
  [SMALL_STATE(312)] = 10007,
  [SMALL_STATE(313)] = 10030,
  [SMALL_STATE(314)] = 10053,
  [SMALL_STATE(315)] = 10076,
  [SMALL_STATE(316)] = 10099,
  [SMALL_STATE(317)] = 10122,
  [SMALL_STATE(318)] = 10145,
  [SMALL_STATE(319)] = 10168,
  [SMALL_STATE(320)] = 10191,
  [SMALL_STATE(321)] = 10214,
  [SMALL_STATE(322)] = 10237,
  [SMALL_STATE(323)] = 10260,
  [SMALL_STATE(324)] = 10283,
  [SMALL_STATE(325)] = 10306,
  [SMALL_STATE(326)] = 10326,
  [SMALL_STATE(327)] = 10346,
  [SMALL_STATE(328)] = 10366,
  [SMALL_STATE(329)] = 10382,
  [SMALL_STATE(330)] = 10402,
  [SMALL_STATE(331)] = 10422,
  [SMALL_STATE(332)] = 10442,
  [SMALL_STATE(333)] = 10458,
  [SMALL_STATE(334)] = 10478,
  [SMALL_STATE(335)] = 10494,
  [SMALL_STATE(336)] = 10514,
  [SMALL_STATE(337)] = 10534,
  [SMALL_STATE(338)] = 10554,
  [SMALL_STATE(339)] = 10574,
  [SMALL_STATE(340)] = 10594,
  [SMALL_STATE(341)] = 10614,
  [SMALL_STATE(342)] = 10634,
  [SMALL_STATE(343)] = 10650,
  [SMALL_STATE(344)] = 10670,
  [SMALL_STATE(345)] = 10690,
  [SMALL_STATE(346)] = 10710,
  [SMALL_STATE(347)] = 10730,
  [SMALL_STATE(348)] = 10750,
  [SMALL_STATE(349)] = 10770,
  [SMALL_STATE(350)] = 10790,
  [SMALL_STATE(351)] = 10810,
  [SMALL_STATE(352)] = 10826,
  [SMALL_STATE(353)] = 10842,
  [SMALL_STATE(354)] = 10862,
  [SMALL_STATE(355)] = 10882,
  [SMALL_STATE(356)] = 10902,
  [SMALL_STATE(357)] = 10922,
  [SMALL_STATE(358)] = 10942,
  [SMALL_STATE(359)] = 10962,
  [SMALL_STATE(360)] = 10982,
  [SMALL_STATE(361)] = 11002,
  [SMALL_STATE(362)] = 11022,
  [SMALL_STATE(363)] = 11036,
  [SMALL_STATE(364)] = 11056,
  [SMALL_STATE(365)] = 11072,
  [SMALL_STATE(366)] = 11092,
  [SMALL_STATE(367)] = 11112,
  [SMALL_STATE(368)] = 11126,
  [SMALL_STATE(369)] = 11146,
  [SMALL_STATE(370)] = 11166,
  [SMALL_STATE(371)] = 11186,
  [SMALL_STATE(372)] = 11206,
  [SMALL_STATE(373)] = 11220,
  [SMALL_STATE(374)] = 11240,
  [SMALL_STATE(375)] = 11260,
  [SMALL_STATE(376)] = 11274,
  [SMALL_STATE(377)] = 11294,
  [SMALL_STATE(378)] = 11314,
  [SMALL_STATE(379)] = 11328,
  [SMALL_STATE(380)] = 11344,
  [SMALL_STATE(381)] = 11364,
  [SMALL_STATE(382)] = 11384,
  [SMALL_STATE(383)] = 11404,
  [SMALL_STATE(384)] = 11424,
  [SMALL_STATE(385)] = 11444,
  [SMALL_STATE(386)] = 11460,
  [SMALL_STATE(387)] = 11474,
  [SMALL_STATE(388)] = 11491,
  [SMALL_STATE(389)] = 11508,
  [SMALL_STATE(390)] = 11525,
  [SMALL_STATE(391)] = 11538,
  [SMALL_STATE(392)] = 11555,
  [SMALL_STATE(393)] = 11572,
  [SMALL_STATE(394)] = 11589,
  [SMALL_STATE(395)] = 11606,
  [SMALL_STATE(396)] = 11623,
  [SMALL_STATE(397)] = 11640,
  [SMALL_STATE(398)] = 11657,
  [SMALL_STATE(399)] = 11670,
  [SMALL_STATE(400)] = 11687,
  [SMALL_STATE(401)] = 11702,
  [SMALL_STATE(402)] = 11715,
  [SMALL_STATE(403)] = 11732,
  [SMALL_STATE(404)] = 11745,
  [SMALL_STATE(405)] = 11762,
  [SMALL_STATE(406)] = 11775,
  [SMALL_STATE(407)] = 11792,
  [SMALL_STATE(408)] = 11809,
  [SMALL_STATE(409)] = 11824,
  [SMALL_STATE(410)] = 11835,
  [SMALL_STATE(411)] = 11846,
  [SMALL_STATE(412)] = 11863,
  [SMALL_STATE(413)] = 11880,
  [SMALL_STATE(414)] = 11897,
  [SMALL_STATE(415)] = 11910,
  [SMALL_STATE(416)] = 11921,
  [SMALL_STATE(417)] = 11934,
  [SMALL_STATE(418)] = 11951,
  [SMALL_STATE(419)] = 11968,
  [SMALL_STATE(420)] = 11981,
  [SMALL_STATE(421)] = 11992,
  [SMALL_STATE(422)] = 12009,
  [SMALL_STATE(423)] = 12017,
  [SMALL_STATE(424)] = 12025,
  [SMALL_STATE(425)] = 12033,
  [SMALL_STATE(426)] = 12041,
  [SMALL_STATE(427)] = 12055,
  [SMALL_STATE(428)] = 12069,
  [SMALL_STATE(429)] = 12081,
  [SMALL_STATE(430)] = 12089,
  [SMALL_STATE(431)] = 12097,
  [SMALL_STATE(432)] = 12111,
  [SMALL_STATE(433)] = 12119,
  [SMALL_STATE(434)] = 12127,
  [SMALL_STATE(435)] = 12141,
  [SMALL_STATE(436)] = 12149,
  [SMALL_STATE(437)] = 12161,
  [SMALL_STATE(438)] = 12173,
  [SMALL_STATE(439)] = 12181,
  [SMALL_STATE(440)] = 12189,
  [SMALL_STATE(441)] = 12197,
  [SMALL_STATE(442)] = 12211,
  [SMALL_STATE(443)] = 12223,
  [SMALL_STATE(444)] = 12233,
  [SMALL_STATE(445)] = 12241,
  [SMALL_STATE(446)] = 12250,
  [SMALL_STATE(447)] = 12259,
  [SMALL_STATE(448)] = 12268,
  [SMALL_STATE(449)] = 12281,
  [SMALL_STATE(450)] = 12290,
  [SMALL_STATE(451)] = 12303,
  [SMALL_STATE(452)] = 12316,
  [SMALL_STATE(453)] = 12325,
  [SMALL_STATE(454)] = 12334,
  [SMALL_STATE(455)] = 12343,
  [SMALL_STATE(456)] = 12352,
  [SMALL_STATE(457)] = 12361,
  [SMALL_STATE(458)] = 12374,
  [SMALL_STATE(459)] = 12383,
  [SMALL_STATE(460)] = 12394,
  [SMALL_STATE(461)] = 12403,
  [SMALL_STATE(462)] = 12412,
  [SMALL_STATE(463)] = 12421,
  [SMALL_STATE(464)] = 12430,
  [SMALL_STATE(465)] = 12439,
  [SMALL_STATE(466)] = 12448,
  [SMALL_STATE(467)] = 12457,
  [SMALL_STATE(468)] = 12466,
  [SMALL_STATE(469)] = 12479,
  [SMALL_STATE(470)] = 12492,
  [SMALL_STATE(471)] = 12505,
  [SMALL_STATE(472)] = 12514,
  [SMALL_STATE(473)] = 12523,
  [SMALL_STATE(474)] = 12532,
  [SMALL_STATE(475)] = 12545,
  [SMALL_STATE(476)] = 12558,
  [SMALL_STATE(477)] = 12567,
  [SMALL_STATE(478)] = 12576,
  [SMALL_STATE(479)] = 12589,
  [SMALL_STATE(480)] = 12598,
  [SMALL_STATE(481)] = 12607,
  [SMALL_STATE(482)] = 12620,
  [SMALL_STATE(483)] = 12629,
  [SMALL_STATE(484)] = 12637,
  [SMALL_STATE(485)] = 12647,
  [SMALL_STATE(486)] = 12655,
  [SMALL_STATE(487)] = 12661,
  [SMALL_STATE(488)] = 12671,
  [SMALL_STATE(489)] = 12681,
  [SMALL_STATE(490)] = 12689,
  [SMALL_STATE(491)] = 12697,
  [SMALL_STATE(492)] = 12705,
  [SMALL_STATE(493)] = 12713,
  [SMALL_STATE(494)] = 12721,
  [SMALL_STATE(495)] = 12729,
  [SMALL_STATE(496)] = 12739,
  [SMALL_STATE(497)] = 12745,
  [SMALL_STATE(498)] = 12755,
  [SMALL_STATE(499)] = 12765,
  [SMALL_STATE(500)] = 12771,
  [SMALL_STATE(501)] = 12781,
  [SMALL_STATE(502)] = 12791,
  [SMALL_STATE(503)] = 12799,
  [SMALL_STATE(504)] = 12809,
  [SMALL_STATE(505)] = 12817,
  [SMALL_STATE(506)] = 12825,
  [SMALL_STATE(507)] = 12831,
  [SMALL_STATE(508)] = 12839,
  [SMALL_STATE(509)] = 12849,
  [SMALL_STATE(510)] = 12859,
  [SMALL_STATE(511)] = 12869,
  [SMALL_STATE(512)] = 12875,
  [SMALL_STATE(513)] = 12885,
  [SMALL_STATE(514)] = 12895,
  [SMALL_STATE(515)] = 12905,
  [SMALL_STATE(516)] = 12915,
  [SMALL_STATE(517)] = 12925,
  [SMALL_STATE(518)] = 12935,
  [SMALL_STATE(519)] = 12941,
  [SMALL_STATE(520)] = 12951,
  [SMALL_STATE(521)] = 12961,
  [SMALL_STATE(522)] = 12969,
  [SMALL_STATE(523)] = 12979,
  [SMALL_STATE(524)] = 12985,
  [SMALL_STATE(525)] = 12995,
  [SMALL_STATE(526)] = 13005,
  [SMALL_STATE(527)] = 13015,
  [SMALL_STATE(528)] = 13025,
  [SMALL_STATE(529)] = 13035,
  [SMALL_STATE(530)] = 13045,
  [SMALL_STATE(531)] = 13055,
  [SMALL_STATE(532)] = 13065,
  [SMALL_STATE(533)] = 13075,
  [SMALL_STATE(534)] = 13085,
  [SMALL_STATE(535)] = 13093,
  [SMALL_STATE(536)] = 13103,
  [SMALL_STATE(537)] = 13113,
  [SMALL_STATE(538)] = 13123,
  [SMALL_STATE(539)] = 13133,
  [SMALL_STATE(540)] = 13143,
  [SMALL_STATE(541)] = 13150,
  [SMALL_STATE(542)] = 13157,
  [SMALL_STATE(543)] = 13164,
  [SMALL_STATE(544)] = 13171,
  [SMALL_STATE(545)] = 13178,
  [SMALL_STATE(546)] = 13185,
  [SMALL_STATE(547)] = 13192,
  [SMALL_STATE(548)] = 13199,
  [SMALL_STATE(549)] = 13206,
  [SMALL_STATE(550)] = 13213,
  [SMALL_STATE(551)] = 13220,
  [SMALL_STATE(552)] = 13227,
  [SMALL_STATE(553)] = 13234,
  [SMALL_STATE(554)] = 13241,
  [SMALL_STATE(555)] = 13248,
  [SMALL_STATE(556)] = 13255,
  [SMALL_STATE(557)] = 13262,
  [SMALL_STATE(558)] = 13267,
  [SMALL_STATE(559)] = 13274,
  [SMALL_STATE(560)] = 13281,
  [SMALL_STATE(561)] = 13288,
  [SMALL_STATE(562)] = 13295,
  [SMALL_STATE(563)] = 13302,
  [SMALL_STATE(564)] = 13309,
  [SMALL_STATE(565)] = 13316,
  [SMALL_STATE(566)] = 13323,
  [SMALL_STATE(567)] = 13330,
  [SMALL_STATE(568)] = 13337,
  [SMALL_STATE(569)] = 13344,
  [SMALL_STATE(570)] = 13351,
  [SMALL_STATE(571)] = 13358,
  [SMALL_STATE(572)] = 13365,
  [SMALL_STATE(573)] = 13370,
  [SMALL_STATE(574)] = 13377,
  [SMALL_STATE(575)] = 13384,
  [SMALL_STATE(576)] = 13391,
  [SMALL_STATE(577)] = 13398,
  [SMALL_STATE(578)] = 13402,
  [SMALL_STATE(579)] = 13406,
  [SMALL_STATE(580)] = 13410,
  [SMALL_STATE(581)] = 13414,
  [SMALL_STATE(582)] = 13418,
  [SMALL_STATE(583)] = 13422,
  [SMALL_STATE(584)] = 13426,
  [SMALL_STATE(585)] = 13430,
  [SMALL_STATE(586)] = 13434,
  [SMALL_STATE(587)] = 13438,
  [SMALL_STATE(588)] = 13442,
  [SMALL_STATE(589)] = 13446,
  [SMALL_STATE(590)] = 13450,
  [SMALL_STATE(591)] = 13454,
  [SMALL_STATE(592)] = 13458,
  [SMALL_STATE(593)] = 13462,
  [SMALL_STATE(594)] = 13466,
  [SMALL_STATE(595)] = 13470,
  [SMALL_STATE(596)] = 13474,
  [SMALL_STATE(597)] = 13478,
  [SMALL_STATE(598)] = 13482,
  [SMALL_STATE(599)] = 13486,
  [SMALL_STATE(600)] = 13490,
  [SMALL_STATE(601)] = 13494,
  [SMALL_STATE(602)] = 13498,
  [SMALL_STATE(603)] = 13502,
  [SMALL_STATE(604)] = 13506,
  [SMALL_STATE(605)] = 13510,
  [SMALL_STATE(606)] = 13514,
  [SMALL_STATE(607)] = 13518,
  [SMALL_STATE(608)] = 13522,
  [SMALL_STATE(609)] = 13526,
  [SMALL_STATE(610)] = 13530,
  [SMALL_STATE(611)] = 13534,
  [SMALL_STATE(612)] = 13538,
  [SMALL_STATE(613)] = 13542,
  [SMALL_STATE(614)] = 13546,
  [SMALL_STATE(615)] = 13550,
  [SMALL_STATE(616)] = 13554,
  [SMALL_STATE(617)] = 13558,
  [SMALL_STATE(618)] = 13562,
  [SMALL_STATE(619)] = 13566,
  [SMALL_STATE(620)] = 13570,
  [SMALL_STATE(621)] = 13574,
  [SMALL_STATE(622)] = 13578,
  [SMALL_STATE(623)] = 13582,
  [SMALL_STATE(624)] = 13586,
  [SMALL_STATE(625)] = 13590,
  [SMALL_STATE(626)] = 13594,
  [SMALL_STATE(627)] = 13598,
  [SMALL_STATE(628)] = 13602,
  [SMALL_STATE(629)] = 13606,
  [SMALL_STATE(630)] = 13610,
  [SMALL_STATE(631)] = 13614,
  [SMALL_STATE(632)] = 13618,
  [SMALL_STATE(633)] = 13622,
  [SMALL_STATE(634)] = 13626,
  [SMALL_STATE(635)] = 13630,
  [SMALL_STATE(636)] = 13634,
  [SMALL_STATE(637)] = 13638,
  [SMALL_STATE(638)] = 13642,
  [SMALL_STATE(639)] = 13646,
  [SMALL_STATE(640)] = 13650,
  [SMALL_STATE(641)] = 13654,
  [SMALL_STATE(642)] = 13658,
  [SMALL_STATE(643)] = 13662,
  [SMALL_STATE(644)] = 13666,
  [SMALL_STATE(645)] = 13670,
  [SMALL_STATE(646)] = 13674,
  [SMALL_STATE(647)] = 13678,
  [SMALL_STATE(648)] = 13682,
  [SMALL_STATE(649)] = 13686,
  [SMALL_STATE(650)] = 13690,
  [SMALL_STATE(651)] = 13694,
  [SMALL_STATE(652)] = 13698,
  [SMALL_STATE(653)] = 13702,
  [SMALL_STATE(654)] = 13706,
  [SMALL_STATE(655)] = 13710,
  [SMALL_STATE(656)] = 13714,
  [SMALL_STATE(657)] = 13718,
  [SMALL_STATE(658)] = 13722,
  [SMALL_STATE(659)] = 13726,
  [SMALL_STATE(660)] = 13730,
  [SMALL_STATE(661)] = 13734,
  [SMALL_STATE(662)] = 13738,
  [SMALL_STATE(663)] = 13742,
  [SMALL_STATE(664)] = 13746,
  [SMALL_STATE(665)] = 13750,
  [SMALL_STATE(666)] = 13754,
  [SMALL_STATE(667)] = 13758,
  [SMALL_STATE(668)] = 13762,
  [SMALL_STATE(669)] = 13766,
  [SMALL_STATE(670)] = 13770,
  [SMALL_STATE(671)] = 13774,
  [SMALL_STATE(672)] = 13778,
  [SMALL_STATE(673)] = 13782,
  [SMALL_STATE(674)] = 13786,
  [SMALL_STATE(675)] = 13790,
  [SMALL_STATE(676)] = 13794,
  [SMALL_STATE(677)] = 13798,
  [SMALL_STATE(678)] = 13802,
  [SMALL_STATE(679)] = 13806,
  [SMALL_STATE(680)] = 13810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(486),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(343),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(544),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(544),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(588),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(663),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(500),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(501),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(668),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(571),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(571),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(278),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(278),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(589),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(511),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(357),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(542),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(542),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(611),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(667),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(484),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(527),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(674),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(562),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(562),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(276),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(276),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(613),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(518),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(381),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(545),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(545),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(604),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(526),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(539),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(664),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(567),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(567),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(288),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(288),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(603),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(8),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(499),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(335),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(543),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(543),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(598),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(531),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(532),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(671),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(568),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(568),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(281),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(281),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(600),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(25),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(506),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(575),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(575),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(582),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(579),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(537),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(536),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(587),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(541),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(541),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(632),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(595),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(530),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(498),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(80),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 5),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(607),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(108),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(515),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(633),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(629),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(180),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(581),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(199),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(205),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(625),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(291),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(461),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(290),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(408),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(617),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(631),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(284),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(328),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(408),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(617),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(631),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(585),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(408),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(615),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(523),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(605),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1515] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
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
