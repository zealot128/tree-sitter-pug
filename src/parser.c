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
#define STATE_COUNT 692
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
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
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
          lookahead == ' ') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(151)
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '#') ADVANCE(682);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
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
          lookahead == ' ') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
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
      if (lookahead == ':') ADVANCE(184);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
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
          lookahead == ' ') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
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
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(174);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(633);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
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
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
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
          lookahead == ' ') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
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
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
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
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
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
          lookahead == ' ') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '#') ADVANCE(682);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
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
          lookahead == ' ') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(175);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
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
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
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
  [27] = {.lex_state = 152, .external_lex_state = 3},
  [28] = {.lex_state = 152, .external_lex_state = 2},
  [29] = {.lex_state = 152, .external_lex_state = 3},
  [30] = {.lex_state = 152, .external_lex_state = 3},
  [31] = {.lex_state = 152, .external_lex_state = 3},
  [32] = {.lex_state = 152, .external_lex_state = 3},
  [33] = {.lex_state = 152, .external_lex_state = 2},
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
  [46] = {.lex_state = 153, .external_lex_state = 2},
  [47] = {.lex_state = 153, .external_lex_state = 1},
  [48] = {.lex_state = 153, .external_lex_state = 2},
  [49] = {.lex_state = 153, .external_lex_state = 1},
  [50] = {.lex_state = 153, .external_lex_state = 1},
  [51] = {.lex_state = 153, .external_lex_state = 2},
  [52] = {.lex_state = 153, .external_lex_state = 2},
  [53] = {.lex_state = 153, .external_lex_state = 2},
  [54] = {.lex_state = 665, .external_lex_state = 2},
  [55] = {.lex_state = 153, .external_lex_state = 1},
  [56] = {.lex_state = 153, .external_lex_state = 1},
  [57] = {.lex_state = 153, .external_lex_state = 4},
  [58] = {.lex_state = 153, .external_lex_state = 1},
  [59] = {.lex_state = 150, .external_lex_state = 2},
  [60] = {.lex_state = 153, .external_lex_state = 2},
  [61] = {.lex_state = 153, .external_lex_state = 2},
  [62] = {.lex_state = 665, .external_lex_state = 2},
  [63] = {.lex_state = 665, .external_lex_state = 2},
  [64] = {.lex_state = 153, .external_lex_state = 2},
  [65] = {.lex_state = 150, .external_lex_state = 2},
  [66] = {.lex_state = 153, .external_lex_state = 2},
  [67] = {.lex_state = 153, .external_lex_state = 2},
  [68] = {.lex_state = 153, .external_lex_state = 4},
  [69] = {.lex_state = 153, .external_lex_state = 2},
  [70] = {.lex_state = 153, .external_lex_state = 1},
  [71] = {.lex_state = 153, .external_lex_state = 4},
  [72] = {.lex_state = 153, .external_lex_state = 5},
  [73] = {.lex_state = 665, .external_lex_state = 2},
  [74] = {.lex_state = 665, .external_lex_state = 2},
  [75] = {.lex_state = 665, .external_lex_state = 2},
  [76] = {.lex_state = 153, .external_lex_state = 5},
  [77] = {.lex_state = 665, .external_lex_state = 2},
  [78] = {.lex_state = 153},
  [79] = {.lex_state = 153, .external_lex_state = 1},
  [80] = {.lex_state = 153, .external_lex_state = 5},
  [81] = {.lex_state = 153, .external_lex_state = 2},
  [82] = {.lex_state = 153, .external_lex_state = 2},
  [83] = {.lex_state = 153, .external_lex_state = 5},
  [84] = {.lex_state = 153, .external_lex_state = 1},
  [85] = {.lex_state = 665, .external_lex_state = 2},
  [86] = {.lex_state = 153, .external_lex_state = 5},
  [87] = {.lex_state = 150, .external_lex_state = 2},
  [88] = {.lex_state = 150, .external_lex_state = 2},
  [89] = {.lex_state = 153, .external_lex_state = 4},
  [90] = {.lex_state = 153, .external_lex_state = 1},
  [91] = {.lex_state = 150, .external_lex_state = 4},
  [92] = {.lex_state = 153, .external_lex_state = 1},
  [93] = {.lex_state = 153, .external_lex_state = 1},
  [94] = {.lex_state = 153, .external_lex_state = 4},
  [95] = {.lex_state = 153, .external_lex_state = 5},
  [96] = {.lex_state = 153, .external_lex_state = 1},
  [97] = {.lex_state = 150, .external_lex_state = 2},
  [98] = {.lex_state = 153, .external_lex_state = 1},
  [99] = {.lex_state = 153},
  [100] = {.lex_state = 150, .external_lex_state = 4},
  [101] = {.lex_state = 153, .external_lex_state = 1},
  [102] = {.lex_state = 153, .external_lex_state = 2},
  [103] = {.lex_state = 153, .external_lex_state = 2},
  [104] = {.lex_state = 153, .external_lex_state = 2},
  [105] = {.lex_state = 153, .external_lex_state = 2},
  [106] = {.lex_state = 153, .external_lex_state = 2},
  [107] = {.lex_state = 666, .external_lex_state = 2},
  [108] = {.lex_state = 152, .external_lex_state = 1},
  [109] = {.lex_state = 153, .external_lex_state = 2},
  [110] = {.lex_state = 153, .external_lex_state = 2},
  [111] = {.lex_state = 666, .external_lex_state = 2},
  [112] = {.lex_state = 152, .external_lex_state = 1},
  [113] = {.lex_state = 153, .external_lex_state = 1},
  [114] = {.lex_state = 151, .external_lex_state = 2},
  [115] = {.lex_state = 152, .external_lex_state = 1},
  [116] = {.lex_state = 153, .external_lex_state = 2},
  [117] = {.lex_state = 666, .external_lex_state = 2},
  [118] = {.lex_state = 153, .external_lex_state = 2},
  [119] = {.lex_state = 152, .external_lex_state = 1},
  [120] = {.lex_state = 153, .external_lex_state = 2},
  [121] = {.lex_state = 152, .external_lex_state = 1},
  [122] = {.lex_state = 153, .external_lex_state = 2},
  [123] = {.lex_state = 153, .external_lex_state = 2},
  [124] = {.lex_state = 150, .external_lex_state = 4},
  [125] = {.lex_state = 150, .external_lex_state = 2},
  [126] = {.lex_state = 665, .external_lex_state = 2},
  [127] = {.lex_state = 153, .external_lex_state = 2},
  [128] = {.lex_state = 153, .external_lex_state = 2},
  [129] = {.lex_state = 152, .external_lex_state = 1},
  [130] = {.lex_state = 153, .external_lex_state = 1},
  [131] = {.lex_state = 153, .external_lex_state = 2},
  [132] = {.lex_state = 151, .external_lex_state = 2},
  [133] = {.lex_state = 153, .external_lex_state = 2},
  [134] = {.lex_state = 153, .external_lex_state = 2},
  [135] = {.lex_state = 153, .external_lex_state = 2},
  [136] = {.lex_state = 153, .external_lex_state = 2},
  [137] = {.lex_state = 153, .external_lex_state = 2},
  [138] = {.lex_state = 153, .external_lex_state = 2},
  [139] = {.lex_state = 153, .external_lex_state = 2},
  [140] = {.lex_state = 153, .external_lex_state = 2},
  [141] = {.lex_state = 153, .external_lex_state = 5},
  [142] = {.lex_state = 153, .external_lex_state = 2},
  [143] = {.lex_state = 665, .external_lex_state = 2},
  [144] = {.lex_state = 153, .external_lex_state = 2},
  [145] = {.lex_state = 153, .external_lex_state = 2},
  [146] = {.lex_state = 153, .external_lex_state = 2},
  [147] = {.lex_state = 153, .external_lex_state = 1},
  [148] = {.lex_state = 153, .external_lex_state = 5},
  [149] = {.lex_state = 153, .external_lex_state = 2},
  [150] = {.lex_state = 152, .external_lex_state = 1},
  [151] = {.lex_state = 152, .external_lex_state = 1},
  [152] = {.lex_state = 153, .external_lex_state = 2},
  [153] = {.lex_state = 153, .external_lex_state = 2},
  [154] = {.lex_state = 153, .external_lex_state = 4},
  [155] = {.lex_state = 151, .external_lex_state = 4},
  [156] = {.lex_state = 153, .external_lex_state = 4},
  [157] = {.lex_state = 151, .external_lex_state = 2},
  [158] = {.lex_state = 152, .external_lex_state = 1},
  [159] = {.lex_state = 153, .external_lex_state = 4},
  [160] = {.lex_state = 153, .external_lex_state = 4},
  [161] = {.lex_state = 153, .external_lex_state = 4},
  [162] = {.lex_state = 666, .external_lex_state = 2},
  [163] = {.lex_state = 153, .external_lex_state = 4},
  [164] = {.lex_state = 152, .external_lex_state = 1},
  [165] = {.lex_state = 152, .external_lex_state = 1},
  [166] = {.lex_state = 151, .external_lex_state = 4},
  [167] = {.lex_state = 151, .external_lex_state = 2},
  [168] = {.lex_state = 153, .external_lex_state = 2},
  [169] = {.lex_state = 666, .external_lex_state = 2},
  [170] = {.lex_state = 153, .external_lex_state = 4},
  [171] = {.lex_state = 153, .external_lex_state = 2},
  [172] = {.lex_state = 153, .external_lex_state = 4},
  [173] = {.lex_state = 153, .external_lex_state = 4},
  [174] = {.lex_state = 153, .external_lex_state = 4},
  [175] = {.lex_state = 152, .external_lex_state = 1},
  [176] = {.lex_state = 153, .external_lex_state = 4},
  [177] = {.lex_state = 153, .external_lex_state = 4},
  [178] = {.lex_state = 153, .external_lex_state = 2},
  [179] = {.lex_state = 153, .external_lex_state = 2},
  [180] = {.lex_state = 153, .external_lex_state = 4},
  [181] = {.lex_state = 151, .external_lex_state = 2},
  [182] = {.lex_state = 153, .external_lex_state = 2},
  [183] = {.lex_state = 153, .external_lex_state = 2},
  [184] = {.lex_state = 153, .external_lex_state = 2},
  [185] = {.lex_state = 152, .external_lex_state = 1},
  [186] = {.lex_state = 153, .external_lex_state = 4},
  [187] = {.lex_state = 153, .external_lex_state = 2},
  [188] = {.lex_state = 153, .external_lex_state = 4},
  [189] = {.lex_state = 153, .external_lex_state = 2},
  [190] = {.lex_state = 153, .external_lex_state = 2},
  [191] = {.lex_state = 152, .external_lex_state = 1},
  [192] = {.lex_state = 153, .external_lex_state = 2},
  [193] = {.lex_state = 153, .external_lex_state = 2},
  [194] = {.lex_state = 153, .external_lex_state = 2},
  [195] = {.lex_state = 153, .external_lex_state = 2},
  [196] = {.lex_state = 152, .external_lex_state = 1},
  [197] = {.lex_state = 666, .external_lex_state = 2},
  [198] = {.lex_state = 153, .external_lex_state = 2},
  [199] = {.lex_state = 153, .external_lex_state = 4},
  [200] = {.lex_state = 153, .external_lex_state = 4},
  [201] = {.lex_state = 153, .external_lex_state = 4},
  [202] = {.lex_state = 666, .external_lex_state = 2},
  [203] = {.lex_state = 153, .external_lex_state = 2},
  [204] = {.lex_state = 153, .external_lex_state = 2},
  [205] = {.lex_state = 153, .external_lex_state = 2},
  [206] = {.lex_state = 153, .external_lex_state = 4},
  [207] = {.lex_state = 153, .external_lex_state = 2},
  [208] = {.lex_state = 153, .external_lex_state = 2},
  [209] = {.lex_state = 666, .external_lex_state = 2},
  [210] = {.lex_state = 153, .external_lex_state = 2},
  [211] = {.lex_state = 153, .external_lex_state = 2},
  [212] = {.lex_state = 153, .external_lex_state = 2},
  [213] = {.lex_state = 152, .external_lex_state = 2},
  [214] = {.lex_state = 152, .external_lex_state = 6},
  [215] = {.lex_state = 152, .external_lex_state = 2},
  [216] = {.lex_state = 152, .external_lex_state = 2},
  [217] = {.lex_state = 152, .external_lex_state = 6},
  [218] = {.lex_state = 152, .external_lex_state = 2},
  [219] = {.lex_state = 152, .external_lex_state = 2},
  [220] = {.lex_state = 152, .external_lex_state = 2},
  [221] = {.lex_state = 152, .external_lex_state = 6},
  [222] = {.lex_state = 152, .external_lex_state = 6},
  [223] = {.lex_state = 666},
  [224] = {.lex_state = 152, .external_lex_state = 2},
  [225] = {.lex_state = 152, .external_lex_state = 2},
  [226] = {.lex_state = 666},
  [227] = {.lex_state = 152, .external_lex_state = 2},
  [228] = {.lex_state = 152, .external_lex_state = 2},
  [229] = {.lex_state = 666},
  [230] = {.lex_state = 666, .external_lex_state = 3},
  [231] = {.lex_state = 152, .external_lex_state = 2},
  [232] = {.lex_state = 152, .external_lex_state = 2},
  [233] = {.lex_state = 152, .external_lex_state = 2},
  [234] = {.lex_state = 152, .external_lex_state = 2},
  [235] = {.lex_state = 152, .external_lex_state = 5},
  [236] = {.lex_state = 152, .external_lex_state = 2},
  [237] = {.lex_state = 152, .external_lex_state = 2},
  [238] = {.lex_state = 152, .external_lex_state = 5},
  [239] = {.lex_state = 152, .external_lex_state = 2},
  [240] = {.lex_state = 152, .external_lex_state = 2},
  [241] = {.lex_state = 152, .external_lex_state = 1},
  [242] = {.lex_state = 152, .external_lex_state = 2},
  [243] = {.lex_state = 152, .external_lex_state = 2},
  [244] = {.lex_state = 151, .external_lex_state = 4},
  [245] = {.lex_state = 152, .external_lex_state = 2},
  [246] = {.lex_state = 152, .external_lex_state = 1},
  [247] = {.lex_state = 152, .external_lex_state = 2},
  [248] = {.lex_state = 666, .external_lex_state = 2},
  [249] = {.lex_state = 151, .external_lex_state = 2},
  [250] = {.lex_state = 153},
  [251] = {.lex_state = 153},
  [252] = {.lex_state = 152, .external_lex_state = 6},
  [253] = {.lex_state = 152, .external_lex_state = 6},
  [254] = {.lex_state = 666, .external_lex_state = 2},
  [255] = {.lex_state = 152, .external_lex_state = 1},
  [256] = {.lex_state = 152, .external_lex_state = 2},
  [257] = {.lex_state = 666},
  [258] = {.lex_state = 152, .external_lex_state = 2},
  [259] = {.lex_state = 152, .external_lex_state = 2},
  [260] = {.lex_state = 152, .external_lex_state = 2},
  [261] = {.lex_state = 152, .external_lex_state = 2},
  [262] = {.lex_state = 152, .external_lex_state = 2},
  [263] = {.lex_state = 152, .external_lex_state = 2},
  [264] = {.lex_state = 152, .external_lex_state = 4},
  [265] = {.lex_state = 152, .external_lex_state = 2},
  [266] = {.lex_state = 152, .external_lex_state = 2},
  [267] = {.lex_state = 152, .external_lex_state = 2},
  [268] = {.lex_state = 152, .external_lex_state = 2},
  [269] = {.lex_state = 152, .external_lex_state = 4},
  [270] = {.lex_state = 152, .external_lex_state = 2},
  [271] = {.lex_state = 152, .external_lex_state = 2},
  [272] = {.lex_state = 152, .external_lex_state = 6},
  [273] = {.lex_state = 152, .external_lex_state = 4},
  [274] = {.lex_state = 152, .external_lex_state = 2},
  [275] = {.lex_state = 152, .external_lex_state = 2},
  [276] = {.lex_state = 152, .external_lex_state = 2},
  [277] = {.lex_state = 152, .external_lex_state = 2},
  [278] = {.lex_state = 152, .external_lex_state = 2},
  [279] = {.lex_state = 152, .external_lex_state = 2},
  [280] = {.lex_state = 152, .external_lex_state = 2},
  [281] = {.lex_state = 152, .external_lex_state = 2},
  [282] = {.lex_state = 152, .external_lex_state = 2},
  [283] = {.lex_state = 152, .external_lex_state = 4},
  [284] = {.lex_state = 152, .external_lex_state = 6},
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
  [300] = {.lex_state = 152},
  [301] = {.lex_state = 152},
  [302] = {.lex_state = 152},
  [303] = {.lex_state = 152},
  [304] = {.lex_state = 152},
  [305] = {.lex_state = 152},
  [306] = {.lex_state = 54, .external_lex_state = 3},
  [307] = {.lex_state = 54, .external_lex_state = 3},
  [308] = {.lex_state = 54, .external_lex_state = 3},
  [309] = {.lex_state = 54, .external_lex_state = 3},
  [310] = {.lex_state = 54, .external_lex_state = 3},
  [311] = {.lex_state = 54, .external_lex_state = 3},
  [312] = {.lex_state = 54, .external_lex_state = 3},
  [313] = {.lex_state = 54, .external_lex_state = 3},
  [314] = {.lex_state = 54, .external_lex_state = 3},
  [315] = {.lex_state = 54, .external_lex_state = 3},
  [316] = {.lex_state = 54, .external_lex_state = 3},
  [317] = {.lex_state = 54, .external_lex_state = 3},
  [318] = {.lex_state = 54, .external_lex_state = 3},
  [319] = {.lex_state = 54, .external_lex_state = 3},
  [320] = {.lex_state = 55},
  [321] = {.lex_state = 55},
  [322] = {.lex_state = 64},
  [323] = {.lex_state = 64},
  [324] = {.lex_state = 54, .external_lex_state = 3},
  [325] = {.lex_state = 64},
  [326] = {.lex_state = 55, .external_lex_state = 3},
  [327] = {.lex_state = 55, .external_lex_state = 3},
  [328] = {.lex_state = 55, .external_lex_state = 3},
  [329] = {.lex_state = 55, .external_lex_state = 3},
  [330] = {.lex_state = 55, .external_lex_state = 3},
  [331] = {.lex_state = 55, .external_lex_state = 3},
  [332] = {.lex_state = 55, .external_lex_state = 3},
  [333] = {.lex_state = 55, .external_lex_state = 3},
  [334] = {.lex_state = 55, .external_lex_state = 3},
  [335] = {.lex_state = 55, .external_lex_state = 3},
  [336] = {.lex_state = 55, .external_lex_state = 3},
  [337] = {.lex_state = 55, .external_lex_state = 3},
  [338] = {.lex_state = 55, .external_lex_state = 3},
  [339] = {.lex_state = 55, .external_lex_state = 3},
  [340] = {.lex_state = 11, .external_lex_state = 4},
  [341] = {.lex_state = 11, .external_lex_state = 4},
  [342] = {.lex_state = 11, .external_lex_state = 4},
  [343] = {.lex_state = 60},
  [344] = {.lex_state = 11, .external_lex_state = 4},
  [345] = {.lex_state = 11, .external_lex_state = 4},
  [346] = {.lex_state = 11, .external_lex_state = 4},
  [347] = {.lex_state = 11, .external_lex_state = 4},
  [348] = {.lex_state = 11, .external_lex_state = 4},
  [349] = {.lex_state = 11, .external_lex_state = 4},
  [350] = {.lex_state = 11, .external_lex_state = 4},
  [351] = {.lex_state = 11, .external_lex_state = 4},
  [352] = {.lex_state = 11, .external_lex_state = 4},
  [353] = {.lex_state = 11, .external_lex_state = 4},
  [354] = {.lex_state = 11, .external_lex_state = 4},
  [355] = {.lex_state = 11, .external_lex_state = 4},
  [356] = {.lex_state = 63, .external_lex_state = 2},
  [357] = {.lex_state = 63, .external_lex_state = 1},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 63, .external_lex_state = 1},
  [360] = {.lex_state = 11},
  [361] = {.lex_state = 63, .external_lex_state = 1},
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 63, .external_lex_state = 1},
  [364] = {.lex_state = 11, .external_lex_state = 3},
  [365] = {.lex_state = 11, .external_lex_state = 3},
  [366] = {.lex_state = 63, .external_lex_state = 1},
  [367] = {.lex_state = 11, .external_lex_state = 3},
  [368] = {.lex_state = 63, .external_lex_state = 2},
  [369] = {.lex_state = 11, .external_lex_state = 3},
  [370] = {.lex_state = 11, .external_lex_state = 3},
  [371] = {.lex_state = 11, .external_lex_state = 3},
  [372] = {.lex_state = 63, .external_lex_state = 2},
  [373] = {.lex_state = 11, .external_lex_state = 3},
  [374] = {.lex_state = 11, .external_lex_state = 3},
  [375] = {.lex_state = 11},
  [376] = {.lex_state = 63, .external_lex_state = 2},
  [377] = {.lex_state = 11, .external_lex_state = 3},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 11, .external_lex_state = 3},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 63, .external_lex_state = 2},
  [382] = {.lex_state = 11, .external_lex_state = 3},
  [383] = {.lex_state = 11, .external_lex_state = 3},
  [384] = {.lex_state = 11, .external_lex_state = 3},
  [385] = {.lex_state = 11, .external_lex_state = 3},
  [386] = {.lex_state = 11, .external_lex_state = 3},
  [387] = {.lex_state = 11},
  [388] = {.lex_state = 11, .external_lex_state = 3},
  [389] = {.lex_state = 11},
  [390] = {.lex_state = 63, .external_lex_state = 2},
  [391] = {.lex_state = 11, .external_lex_state = 3},
  [392] = {.lex_state = 11, .external_lex_state = 3},
  [393] = {.lex_state = 11, .external_lex_state = 3},
  [394] = {.lex_state = 11},
  [395] = {.lex_state = 11, .external_lex_state = 3},
  [396] = {.lex_state = 11, .external_lex_state = 3},
  [397] = {.lex_state = 63, .external_lex_state = 1},
  [398] = {.lex_state = 11, .external_lex_state = 3},
  [399] = {.lex_state = 63, .external_lex_state = 2},
  [400] = {.lex_state = 11},
  [401] = {.lex_state = 63, .external_lex_state = 2},
  [402] = {.lex_state = 11, .external_lex_state = 3},
  [403] = {.lex_state = 11, .external_lex_state = 3},
  [404] = {.lex_state = 11, .external_lex_state = 3},
  [405] = {.lex_state = 11, .external_lex_state = 3},
  [406] = {.lex_state = 11, .external_lex_state = 3},
  [407] = {.lex_state = 63, .external_lex_state = 2},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 11, .external_lex_state = 3},
  [410] = {.lex_state = 11, .external_lex_state = 3},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 11, .external_lex_state = 3},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 11, .external_lex_state = 3},
  [416] = {.lex_state = 11, .external_lex_state = 3},
  [417] = {.lex_state = 11, .external_lex_state = 3},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 11},
  [420] = {.lex_state = 63, .external_lex_state = 3},
  [421] = {.lex_state = 55, .external_lex_state = 3},
  [422] = {.lex_state = 11},
  [423] = {.lex_state = 11},
  [424] = {.lex_state = 63, .external_lex_state = 1},
  [425] = {.lex_state = 63, .external_lex_state = 3},
  [426] = {.lex_state = 11},
  [427] = {.lex_state = 11},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 11},
  [430] = {.lex_state = 63, .external_lex_state = 3},
  [431] = {.lex_state = 55},
  [432] = {.lex_state = 55, .external_lex_state = 3},
  [433] = {.lex_state = 63, .external_lex_state = 3},
  [434] = {.lex_state = 11},
  [435] = {.lex_state = 11},
  [436] = {.lex_state = 11, .external_lex_state = 3},
  [437] = {.lex_state = 11},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 11},
  [440] = {.lex_state = 63, .external_lex_state = 3},
  [441] = {.lex_state = 11},
  [442] = {.lex_state = 11},
  [443] = {.lex_state = 63, .external_lex_state = 3},
  [444] = {.lex_state = 11},
  [445] = {.lex_state = 55, .external_lex_state = 3},
  [446] = {.lex_state = 63, .external_lex_state = 3},
  [447] = {.lex_state = 11},
  [448] = {.lex_state = 11},
  [449] = {.lex_state = 11},
  [450] = {.lex_state = 63, .external_lex_state = 3},
  [451] = {.lex_state = 11},
  [452] = {.lex_state = 11},
  [453] = {.lex_state = 63, .external_lex_state = 2},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 63, .external_lex_state = 2},
  [456] = {.lex_state = 63, .external_lex_state = 2},
  [457] = {.lex_state = 63, .external_lex_state = 2},
  [458] = {.lex_state = 11, .external_lex_state = 3},
  [459] = {.lex_state = 63, .external_lex_state = 2},
  [460] = {.lex_state = 63, .external_lex_state = 2},
  [461] = {.lex_state = 63, .external_lex_state = 2},
  [462] = {.lex_state = 63, .external_lex_state = 2},
  [463] = {.lex_state = 63, .external_lex_state = 2},
  [464] = {.lex_state = 11, .external_lex_state = 3},
  [465] = {.lex_state = 63, .external_lex_state = 2},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 55},
  [468] = {.lex_state = 11, .external_lex_state = 3},
  [469] = {.lex_state = 63, .external_lex_state = 2},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 63, .external_lex_state = 2},
  [472] = {.lex_state = 64},
  [473] = {.lex_state = 63},
  [474] = {.lex_state = 50, .external_lex_state = 2},
  [475] = {.lex_state = 11, .external_lex_state = 4},
  [476] = {.lex_state = 50, .external_lex_state = 2},
  [477] = {.lex_state = 63},
  [478] = {.lex_state = 63},
  [479] = {.lex_state = 53, .external_lex_state = 3},
  [480] = {.lex_state = 11, .external_lex_state = 3},
  [481] = {.lex_state = 53, .external_lex_state = 3},
  [482] = {.lex_state = 11, .external_lex_state = 3},
  [483] = {.lex_state = 11, .external_lex_state = 3},
  [484] = {.lex_state = 53, .external_lex_state = 3},
  [485] = {.lex_state = 63},
  [486] = {.lex_state = 63},
  [487] = {.lex_state = 63},
  [488] = {.lex_state = 50, .external_lex_state = 2},
  [489] = {.lex_state = 63},
  [490] = {.lex_state = 50, .external_lex_state = 2},
  [491] = {.lex_state = 63},
  [492] = {.lex_state = 63},
  [493] = {.lex_state = 63},
  [494] = {.lex_state = 63},
  [495] = {.lex_state = 53, .external_lex_state = 3},
  [496] = {.lex_state = 50, .external_lex_state = 2},
  [497] = {.lex_state = 63},
  [498] = {.lex_state = 63},
  [499] = {.lex_state = 63},
  [500] = {.lex_state = 63},
  [501] = {.lex_state = 63},
  [502] = {.lex_state = 54},
  [503] = {.lex_state = 53, .external_lex_state = 3},
  [504] = {.lex_state = 63},
  [505] = {.lex_state = 63},
  [506] = {.lex_state = 50, .external_lex_state = 2},
  [507] = {.lex_state = 53, .external_lex_state = 3},
  [508] = {.lex_state = 63},
  [509] = {.lex_state = 63},
  [510] = {.lex_state = 63},
  [511] = {.lex_state = 54},
  [512] = {.lex_state = 50, .external_lex_state = 2},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 54},
  [515] = {.lex_state = 54},
  [516] = {.lex_state = 50, .external_lex_state = 3},
  [517] = {.lex_state = 54},
  [518] = {.lex_state = 53},
  [519] = {.lex_state = 54},
  [520] = {.lex_state = 54},
  [521] = {.lex_state = 54},
  [522] = {.lex_state = 54},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 53},
  [525] = {.lex_state = 53},
  [526] = {.lex_state = 54},
  [527] = {.lex_state = 53},
  [528] = {.lex_state = 54},
  [529] = {.lex_state = 50, .external_lex_state = 3},
  [530] = {.lex_state = 50, .external_lex_state = 3},
  [531] = {.lex_state = 54},
  [532] = {.lex_state = 50, .external_lex_state = 3},
  [533] = {.lex_state = 54},
  [534] = {.lex_state = 53},
  [535] = {.lex_state = 53},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 50, .external_lex_state = 3},
  [538] = {.lex_state = 53},
  [539] = {.lex_state = 53},
  [540] = {.lex_state = 54},
  [541] = {.lex_state = 53},
  [542] = {.lex_state = 53},
  [543] = {.lex_state = 53},
  [544] = {.lex_state = 53},
  [545] = {.lex_state = 54},
  [546] = {.lex_state = 53},
  [547] = {.lex_state = 53},
  [548] = {.lex_state = 53},
  [549] = {.lex_state = 54},
  [550] = {.lex_state = 53},
  [551] = {.lex_state = 53},
  [552] = {.lex_state = 53},
  [553] = {.lex_state = 54},
  [554] = {.lex_state = 54},
  [555] = {.lex_state = 53},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 53},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 50, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 6},
  [562] = {.lex_state = 661},
  [563] = {.lex_state = 53},
  [564] = {.lex_state = 0, .external_lex_state = 6},
  [565] = {.lex_state = 661, .external_lex_state = 3},
  [566] = {.lex_state = 53},
  [567] = {.lex_state = 53},
  [568] = {.lex_state = 53},
  [569] = {.lex_state = 661},
  [570] = {.lex_state = 661},
  [571] = {.lex_state = 0, .external_lex_state = 6},
  [572] = {.lex_state = 61},
  [573] = {.lex_state = 65},
  [574] = {.lex_state = 661},
  [575] = {.lex_state = 661, .external_lex_state = 3},
  [576] = {.lex_state = 661, .external_lex_state = 3},
  [577] = {.lex_state = 661, .external_lex_state = 3},
  [578] = {.lex_state = 0, .external_lex_state = 6},
  [579] = {.lex_state = 661},
  [580] = {.lex_state = 0, .external_lex_state = 6},
  [581] = {.lex_state = 54},
  [582] = {.lex_state = 0, .external_lex_state = 6},
  [583] = {.lex_state = 0, .external_lex_state = 6},
  [584] = {.lex_state = 0, .external_lex_state = 6},
  [585] = {.lex_state = 661},
  [586] = {.lex_state = 0, .external_lex_state = 6},
  [587] = {.lex_state = 661},
  [588] = {.lex_state = 61},
  [589] = {.lex_state = 661},
  [590] = {.lex_state = 0, .external_lex_state = 6},
  [591] = {.lex_state = 661, .external_lex_state = 3},
  [592] = {.lex_state = 661},
  [593] = {.lex_state = 53},
  [594] = {.lex_state = 661},
  [595] = {.lex_state = 65},
  [596] = {.lex_state = 0, .external_lex_state = 3},
  [597] = {.lex_state = 51},
  [598] = {.lex_state = 0, .external_lex_state = 3},
  [599] = {.lex_state = 687},
  [600] = {.lex_state = 0, .external_lex_state = 3},
  [601] = {.lex_state = 0, .external_lex_state = 3},
  [602] = {.lex_state = 0, .external_lex_state = 6},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 52},
  [605] = {.lex_state = 0, .external_lex_state = 6},
  [606] = {.lex_state = 152},
  [607] = {.lex_state = 0, .external_lex_state = 6},
  [608] = {.lex_state = 0, .external_lex_state = 3},
  [609] = {.lex_state = 687},
  [610] = {.lex_state = 0, .external_lex_state = 3},
  [611] = {.lex_state = 0, .external_lex_state = 6},
  [612] = {.lex_state = 0, .external_lex_state = 3},
  [613] = {.lex_state = 0, .external_lex_state = 6},
  [614] = {.lex_state = 0, .external_lex_state = 3},
  [615] = {.lex_state = 0, .external_lex_state = 3},
  [616] = {.lex_state = 687},
  [617] = {.lex_state = 0, .external_lex_state = 3},
  [618] = {.lex_state = 0, .external_lex_state = 3},
  [619] = {.lex_state = 0, .external_lex_state = 6},
  [620] = {.lex_state = 0, .external_lex_state = 3},
  [621] = {.lex_state = 0, .external_lex_state = 6},
  [622] = {.lex_state = 0, .external_lex_state = 3},
  [623] = {.lex_state = 0, .external_lex_state = 3},
  [624] = {.lex_state = 0, .external_lex_state = 3},
  [625] = {.lex_state = 0, .external_lex_state = 3},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 687},
  [628] = {.lex_state = 0, .external_lex_state = 3},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0, .external_lex_state = 6},
  [631] = {.lex_state = 0, .external_lex_state = 3},
  [632] = {.lex_state = 0, .external_lex_state = 6},
  [633] = {.lex_state = 0, .external_lex_state = 3},
  [634] = {.lex_state = 0, .external_lex_state = 3},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 53},
  [637] = {.lex_state = 687},
  [638] = {.lex_state = 52},
  [639] = {.lex_state = 0, .external_lex_state = 3},
  [640] = {.lex_state = 0, .external_lex_state = 6},
  [641] = {.lex_state = 0, .external_lex_state = 6},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0, .external_lex_state = 6},
  [644] = {.lex_state = 0, .external_lex_state = 3},
  [645] = {.lex_state = 0, .external_lex_state = 3},
  [646] = {.lex_state = 0, .external_lex_state = 3},
  [647] = {.lex_state = 51},
  [648] = {.lex_state = 0, .external_lex_state = 3},
  [649] = {.lex_state = 142},
  [650] = {.lex_state = 0, .external_lex_state = 3},
  [651] = {.lex_state = 0, .external_lex_state = 3},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0, .external_lex_state = 3},
  [654] = {.lex_state = 0, .external_lex_state = 6},
  [655] = {.lex_state = 0, .external_lex_state = 6},
  [656] = {.lex_state = 0, .external_lex_state = 6},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0, .external_lex_state = 3},
  [659] = {.lex_state = 0, .external_lex_state = 6},
  [660] = {.lex_state = 0, .external_lex_state = 6},
  [661] = {.lex_state = 0, .external_lex_state = 6},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0, .external_lex_state = 6},
  [664] = {.lex_state = 0, .external_lex_state = 6},
  [665] = {.lex_state = 0, .external_lex_state = 6},
  [666] = {.lex_state = 687},
  [667] = {.lex_state = 0, .external_lex_state = 6},
  [668] = {.lex_state = 0, .external_lex_state = 6},
  [669] = {.lex_state = 0, .external_lex_state = 6},
  [670] = {.lex_state = 0, .external_lex_state = 6},
  [671] = {.lex_state = 0, .external_lex_state = 6},
  [672] = {.lex_state = 0, .external_lex_state = 6},
  [673] = {.lex_state = 0, .external_lex_state = 6},
  [674] = {.lex_state = 53},
  [675] = {.lex_state = 0, .external_lex_state = 3},
  [676] = {.lex_state = 0, .external_lex_state = 3},
  [677] = {.lex_state = 0, .external_lex_state = 3},
  [678] = {.lex_state = 53},
  [679] = {.lex_state = 0, .external_lex_state = 3},
  [680] = {.lex_state = 0, .external_lex_state = 3},
  [681] = {.lex_state = 0, .external_lex_state = 3},
  [682] = {.lex_state = 0, .external_lex_state = 3},
  [683] = {.lex_state = 0, .external_lex_state = 3},
  [684] = {.lex_state = 0, .external_lex_state = 3},
  [685] = {.lex_state = 0, .external_lex_state = 3},
  [686] = {.lex_state = 0, .external_lex_state = 3},
  [687] = {.lex_state = 0, .external_lex_state = 3},
  [688] = {.lex_state = 0, .external_lex_state = 3},
  [689] = {.lex_state = 0, .external_lex_state = 3},
  [690] = {.lex_state = 0, .external_lex_state = 3},
  [691] = {.lex_state = 0, .external_lex_state = 3},
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
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
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
    [sym_source_file] = STATE(662),
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
  [283] = 18,
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
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
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
  [619] = 17,
    ACTIONS(175), 1,
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
  [684] = 17,
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
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
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
  [814] = 17,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
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
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
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
    ACTIONS(175), 1,
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
    STATE(33), 12,
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
    ACTIONS(175), 1,
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
  [1139] = 17,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
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
  [1204] = 17,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
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
  [1269] = 17,
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
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
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
  [1334] = 17,
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
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
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
  [1399] = 17,
    ACTIONS(175), 1,
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
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(28), 12,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
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
  [1529] = 17,
    ACTIONS(175), 1,
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
  [1594] = 17,
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
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
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
  [1659] = 17,
    ACTIONS(175), 1,
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
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(28), 12,
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
    ACTIONS(175), 1,
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
    STATE(33), 12,
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
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
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
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
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
  [1919] = 17,
    ACTIONS(175), 1,
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
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(28), 12,
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
  [2049] = 17,
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
    STATE(33), 12,
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
    ACTIONS(307), 1,
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
  [2176] = 16,
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
  [2238] = 16,
    ACTIONS(175), 1,
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
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(299), 2,
      sym_class,
      sym_id,
    STATE(28), 12,
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
    ACTIONS(315), 1,
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
  [2362] = 16,
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
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(169), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(189), 2,
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
  [2424] = 16,
    ACTIONS(175), 1,
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
    ACTIONS(323), 1,
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
    ACTIONS(426), 1,
      anon_sym_default,
    STATE(51), 1,
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
  [2707] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(435), 1,
      anon_sym_default,
    STATE(51), 1,
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
  [2744] = 7,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    STATE(140), 1,
      sym_unbuffered_code,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(48), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(439), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(437), 9,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
  [2783] = 7,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym_unbuffered_code,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(66), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(443), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(441), 9,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
  [2822] = 4,
    ACTIONS(449), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(447), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2854] = 5,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(67), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(443), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(441), 10,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [2888] = 4,
    ACTIONS(449), 1,
      sym__indent,
    STATE(110), 1,
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
  [2920] = 4,
    ACTIONS(459), 1,
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
  [2952] = 4,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym__when_content,
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
  [2984] = 6,
    ACTIONS(467), 1,
      anon_sym_when,
    ACTIONS(470), 1,
      anon_sym_default,
    STATE(81), 1,
      sym__when_keyword,
    STATE(52), 2,
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
  [3020] = 7,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    STATE(212), 1,
      sym_unbuffered_code,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(69), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(437), 8,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(439), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [3058] = 4,
    ACTIONS(477), 1,
      sym__comment_content,
    STATE(62), 1,
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
  [3090] = 4,
    ACTIONS(483), 1,
      sym__indent,
    STATE(134), 1,
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
  [3122] = 4,
    ACTIONS(449), 1,
      sym__indent,
    STATE(116), 1,
      sym_children,
    ACTIONS(487), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3154] = 7,
    ACTIONS(489), 1,
      sym_tag_name,
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(170), 1,
      sym_unbuffered_code,
    ACTIONS(491), 2,
      sym_class,
      sym_id,
    STATE(71), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(437), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(439), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [3192] = 4,
    ACTIONS(495), 1,
      sym__indent,
    STATE(110), 1,
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
  [3224] = 4,
    ACTIONS(501), 1,
      sym__un_delimited_javascript_line,
    STATE(59), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(497), 3,
      sym__newline,
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
  [3256] = 7,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    STATE(211), 1,
      sym_unbuffered_code,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(103), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(441), 8,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(443), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [3294] = 6,
    ACTIONS(504), 1,
      anon_sym_when,
    ACTIONS(506), 1,
      anon_sym_default,
    STATE(81), 1,
      sym__when_keyword,
    STATE(52), 2,
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
  [3330] = 4,
    ACTIONS(512), 1,
      sym__comment_content,
    STATE(62), 1,
      aux_sym_comment_repeat1,
    ACTIONS(508), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(510), 18,
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
  [3362] = 4,
    ACTIONS(477), 1,
      sym__comment_content,
    STATE(62), 1,
      aux_sym_comment_repeat1,
    ACTIONS(515), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(517), 18,
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
  [3394] = 6,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(523), 1,
      sym__dedent,
    STATE(173), 1,
      sym__when_content,
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
  [3430] = 4,
    ACTIONS(529), 1,
      sym__un_delimited_javascript_line,
    STATE(59), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(525), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(527), 18,
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
  [3462] = 5,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(67), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(533), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(531), 10,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [3496] = 5,
    ACTIONS(539), 1,
      sym_tag_name,
    ACTIONS(542), 2,
      sym_class,
      sym_id,
    STATE(67), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(537), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(535), 10,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [3530] = 7,
    ACTIONS(489), 1,
      sym_tag_name,
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(177), 1,
      sym_unbuffered_code,
    ACTIONS(491), 2,
      sym_class,
      sym_id,
    STATE(89), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(441), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(443), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [3568] = 5,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(102), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(443), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(441), 9,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [3601] = 3,
    ACTIONS(549), 1,
      sym__indent,
    ACTIONS(547), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(545), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3630] = 5,
    ACTIONS(489), 1,
      sym_tag_name,
    ACTIONS(491), 2,
      sym_class,
      sym_id,
    STATE(94), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(443), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(441), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [3663] = 4,
    ACTIONS(551), 1,
      sym__indent,
    STATE(159), 1,
      sym_children,
    ACTIONS(487), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3694] = 2,
    ACTIONS(508), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(510), 19,
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
  [3721] = 4,
    ACTIONS(553), 1,
      sym__comment_content,
    STATE(74), 1,
      aux_sym_comment_repeat1,
    ACTIONS(508), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(510), 18,
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
  [3752] = 4,
    ACTIONS(556), 1,
      sym__comment_content,
    STATE(74), 1,
      aux_sym_comment_repeat1,
    ACTIONS(515), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(517), 18,
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
    ACTIONS(551), 1,
      sym__indent,
    STATE(156), 1,
      sym_children,
    ACTIONS(447), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3814] = 4,
    ACTIONS(556), 1,
      sym__comment_content,
    STATE(74), 1,
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
  [3845] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(558), 1,
      anon_sym_default,
    STATE(64), 1,
      sym__when_keyword,
    STATE(78), 2,
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
  [3880] = 4,
    ACTIONS(561), 1,
      sym__indent,
    STATE(187), 1,
      sym_children,
    ACTIONS(447), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 11,
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
  [3911] = 4,
    ACTIONS(563), 1,
      sym__indent,
    STATE(174), 1,
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
  [3942] = 4,
    ACTIONS(565), 1,
      anon_sym_COLON,
    STATE(189), 1,
      sym__when_content,
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
  [3973] = 2,
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
    ACTIONS(567), 13,
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
  [4000] = 4,
    ACTIONS(551), 1,
      sym__indent,
    STATE(174), 1,
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
  [4031] = 4,
    ACTIONS(561), 1,
      sym__indent,
    STATE(190), 1,
      sym_children,
    ACTIONS(487), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 11,
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
  [4062] = 3,
    ACTIONS(575), 1,
      sym__newline,
    ACTIONS(571), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(573), 19,
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
  [4091] = 4,
    ACTIONS(578), 1,
      sym__indent,
    STATE(180), 1,
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
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4122] = 2,
    ACTIONS(580), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(582), 19,
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
  [4149] = 4,
    ACTIONS(584), 1,
      sym__un_delimited_javascript_line,
    STATE(97), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(525), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(527), 18,
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
  [4180] = 5,
    ACTIONS(489), 1,
      sym_tag_name,
    ACTIONS(491), 2,
      sym_class,
      sym_id,
    STATE(94), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(533), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(531), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [4213] = 4,
    ACTIONS(586), 1,
      sym__indent,
    STATE(194), 1,
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
  [4244] = 4,
    ACTIONS(588), 1,
      sym__un_delimited_javascript_line,
    STATE(100), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(525), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(527), 18,
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
  [4275] = 4,
    ACTIONS(561), 1,
      sym__indent,
    STATE(194), 1,
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
  [4306] = 4,
    ACTIONS(590), 1,
      sym__indent,
    STATE(198), 1,
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
  [4337] = 5,
    ACTIONS(592), 1,
      sym_tag_name,
    ACTIONS(595), 2,
      sym_class,
      sym_id,
    STATE(94), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(537), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(535), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [4370] = 4,
    ACTIONS(598), 1,
      sym__indent,
    STATE(186), 1,
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
  [4401] = 3,
    ACTIONS(604), 1,
      sym__indent,
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
  [4430] = 4,
    ACTIONS(606), 1,
      sym__un_delimited_javascript_line,
    STATE(97), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(497), 2,
      sym__newline,
      sym__dedent,
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
  [4461] = 4,
    ACTIONS(609), 1,
      sym__indent,
    STATE(204), 1,
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
  [4492] = 6,
    ACTIONS(433), 1,
      anon_sym_when,
    ACTIONS(611), 1,
      anon_sym_default,
    STATE(64), 1,
      sym__when_keyword,
    STATE(78), 2,
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
  [4527] = 4,
    ACTIONS(613), 1,
      sym__un_delimited_javascript_line,
    STATE(100), 1,
      aux_sym__un_delimited_javascript_multiline,
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
  [4558] = 3,
    ACTIONS(620), 1,
      sym__indent,
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
  [4587] = 5,
    ACTIONS(622), 1,
      sym_tag_name,
    ACTIONS(625), 2,
      sym_class,
      sym_id,
    STATE(102), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(537), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(535), 9,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [4620] = 5,
    ACTIONS(187), 1,
      sym_tag_name,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(102), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(533), 8,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(531), 9,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [4653] = 2,
    ACTIONS(630), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(628), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4679] = 2,
    ACTIONS(634), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4705] = 2,
    ACTIONS(638), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(636), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4731] = 4,
    ACTIONS(640), 1,
      sym__comment_content,
    STATE(107), 1,
      aux_sym_comment_repeat1,
    ACTIONS(508), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(510), 16,
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
  [4761] = 4,
    ACTIONS(643), 1,
      sym__indent,
    STATE(216), 1,
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
  [4791] = 2,
    ACTIONS(647), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(645), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4817] = 2,
    ACTIONS(487), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4843] = 4,
    ACTIONS(649), 1,
      sym__comment_content,
    STATE(107), 1,
      aux_sym_comment_repeat1,
    ACTIONS(515), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(517), 16,
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
  [4873] = 4,
    ACTIONS(651), 1,
      sym__indent,
    STATE(225), 1,
      sym_children,
    ACTIONS(487), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4903] = 3,
    ACTIONS(653), 1,
      sym__indent,
    ACTIONS(547), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(545), 11,
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
  [4931] = 4,
    ACTIONS(655), 1,
      sym__un_delimited_javascript_line,
    STATE(132), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(525), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(527), 16,
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
  [4961] = 4,
    ACTIONS(651), 1,
      sym__indent,
    STATE(216), 1,
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
  [4991] = 2,
    ACTIONS(447), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5017] = 4,
    ACTIONS(649), 1,
      sym__comment_content,
    STATE(107), 1,
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
  [5047] = 2,
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
  [5073] = 4,
    ACTIONS(661), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(457), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [5103] = 2,
    ACTIONS(665), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(663), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5129] = 4,
    ACTIONS(667), 1,
      sym__indent,
    STATE(234), 1,
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
  [5159] = 2,
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
  [5185] = 2,
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
  [5211] = 2,
    ACTIONS(580), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(582), 19,
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
  [5237] = 2,
    ACTIONS(580), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(582), 19,
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
  [5263] = 2,
    ACTIONS(508), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(510), 19,
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
  [5289] = 2,
    ACTIONS(675), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(673), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5315] = 2,
    ACTIONS(679), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(677), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5341] = 4,
    ACTIONS(651), 1,
      sym__indent,
    STATE(232), 1,
      sym_children,
    ACTIONS(447), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5371] = 3,
    ACTIONS(681), 1,
      sym__indent,
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
  [5399] = 2,
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
  [5425] = 4,
    ACTIONS(683), 1,
      sym__un_delimited_javascript_line,
    STATE(132), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(497), 3,
      sym__newline,
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
  [5455] = 2,
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
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5481] = 2,
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
  [5507] = 2,
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
  [5533] = 3,
    ACTIONS(694), 1,
      sym__dedent,
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
    ACTIONS(690), 11,
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
  [5561] = 2,
    ACTIONS(698), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(696), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5587] = 2,
    ACTIONS(702), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5613] = 2,
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
    ACTIONS(704), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5639] = 2,
    ACTIONS(443), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(441), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5665] = 4,
    ACTIONS(708), 1,
      sym__indent,
    ACTIONS(710), 1,
      sym__dedent,
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
  [5695] = 2,
    ACTIONS(533), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(531), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5721] = 3,
    ACTIONS(571), 1,
      sym__dedent,
    ACTIONS(712), 1,
      sym__newline,
    ACTIONS(573), 19,
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
  [5749] = 2,
    ACTIONS(717), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(715), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5775] = 2,
    ACTIONS(721), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(719), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5801] = 3,
    ACTIONS(727), 1,
      sym__dedent,
    ACTIONS(725), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(723), 11,
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
  [5829] = 3,
    ACTIONS(729), 1,
      sym__indent,
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
  [5857] = 3,
    ACTIONS(731), 1,
      sym__indent,
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
      sym__dedent,
      ts_builtin_sym_end,
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
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5911] = 4,
    ACTIONS(737), 1,
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
  [5940] = 3,
    ACTIONS(739), 1,
      sym__indent,
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
  [5967] = 2,
    ACTIONS(634), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 11,
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
  [5992] = 2,
    ACTIONS(647), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(645), 11,
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
  [6017] = 2,
    ACTIONS(675), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(673), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6042] = 4,
    ACTIONS(741), 1,
      sym__un_delimited_javascript_line,
    STATE(166), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(525), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(527), 16,
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
  [6071] = 2,
    ACTIONS(638), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(636), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6096] = 4,
    ACTIONS(743), 1,
      sym__un_delimited_javascript_line,
    STATE(157), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(497), 2,
      sym__newline,
      sym__dedent,
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
  [6125] = 4,
    ACTIONS(746), 1,
      sym__indent,
    STATE(263), 1,
      sym_children,
    ACTIONS(447), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 11,
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
    ACTIONS(447), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 11,
      sym__dedent,
      ts_builtin_sym_end,
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
    ACTIONS(665), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(663), 11,
      sym__dedent,
      ts_builtin_sym_end,
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
    ACTIONS(702), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6229] = 4,
    ACTIONS(748), 1,
      sym__comment_content,
    STATE(162), 1,
      aux_sym_comment_repeat1,
    ACTIONS(508), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(510), 16,
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
  [6258] = 2,
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
    ACTIONS(733), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6283] = 4,
    ACTIONS(751), 1,
      sym__indent,
    STATE(280), 1,
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
  [6312] = 4,
    ACTIONS(746), 1,
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
  [6341] = 4,
    ACTIONS(753), 1,
      sym__un_delimited_javascript_line,
    STATE(166), 1,
      aux_sym__un_delimited_javascript_multiline,
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
  [6370] = 4,
    ACTIONS(756), 1,
      sym__un_delimited_javascript_line,
    STATE(157), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(525), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(527), 16,
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
  [6399] = 2,
    ACTIONS(702), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 11,
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
  [6424] = 4,
    ACTIONS(758), 1,
      sym__comment_content,
    STATE(162), 1,
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
  [6453] = 2,
    ACTIONS(443), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(441), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6478] = 3,
    ACTIONS(760), 1,
      sym__dedent,
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
    ACTIONS(690), 10,
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
  [6505] = 3,
    ACTIONS(762), 1,
      sym__dedent,
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
    ACTIONS(690), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6532] = 3,
    ACTIONS(710), 1,
      sym__dedent,
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
  [6559] = 2,
    ACTIONS(487), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6584] = 4,
    ACTIONS(746), 1,
      sym__indent,
    STATE(270), 1,
      sym_children,
    ACTIONS(487), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 11,
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
  [6613] = 2,
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
    ACTIONS(704), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6638] = 2,
    ACTIONS(533), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(531), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6663] = 2,
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
    ACTIONS(733), 11,
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
  [6688] = 3,
    ACTIONS(764), 1,
      sym__dedent,
    ACTIONS(725), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(723), 10,
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
  [6715] = 2,
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
  [6740] = 2,
    ACTIONS(580), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(582), 17,
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
  [6765] = 2,
    ACTIONS(721), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(719), 11,
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
  [6790] = 2,
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
    ACTIONS(686), 11,
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
  [6815] = 2,
    ACTIONS(675), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(673), 11,
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
  [6840] = 3,
    ACTIONS(766), 1,
      sym__indent,
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
  [6867] = 2,
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
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6892] = 2,
    ACTIONS(638), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(636), 11,
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
  [6917] = 3,
    ACTIONS(768), 1,
      sym__dedent,
    ACTIONS(725), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(723), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6944] = 2,
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
  [6969] = 2,
    ACTIONS(447), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 11,
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
  [6994] = 3,
    ACTIONS(770), 1,
      sym__indent,
    ACTIONS(547), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(545), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7021] = 2,
    ACTIONS(665), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(663), 11,
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
  [7046] = 2,
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
  [7071] = 2,
    ACTIONS(487), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 11,
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
  [7096] = 2,
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
    ACTIONS(704), 11,
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
  [7121] = 4,
    ACTIONS(772), 1,
      sym__indent,
    STATE(268), 1,
      sym_children,
    ACTIONS(457), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [7150] = 3,
    ACTIONS(774), 1,
      sym__newline,
    ACTIONS(571), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(573), 17,
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
  [7177] = 2,
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
  [7202] = 2,
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
  [7227] = 2,
    ACTIONS(717), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(715), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7252] = 2,
    ACTIONS(698), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(696), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7277] = 4,
    ACTIONS(758), 1,
      sym__comment_content,
    STATE(162), 1,
      aux_sym_comment_repeat1,
    ACTIONS(515), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(517), 16,
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
  [7306] = 2,
    ACTIONS(717), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(715), 11,
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
  [7331] = 2,
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
  [7356] = 2,
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
  [7381] = 2,
    ACTIONS(679), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(677), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7406] = 2,
    ACTIONS(630), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(628), 11,
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
    ACTIONS(679), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(677), 11,
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
  [7456] = 2,
    ACTIONS(508), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(510), 17,
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
  [7481] = 2,
    ACTIONS(698), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(696), 11,
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
  [7506] = 2,
    ACTIONS(533), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(531), 11,
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
  [7531] = 2,
    ACTIONS(443), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(441), 11,
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
  [7556] = 2,
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
  [7580] = 4,
    ACTIONS(777), 1,
      sym__indent,
    STATE(303), 1,
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
  [7608] = 2,
    ACTIONS(721), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(719), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7632] = 2,
    ACTIONS(487), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7656] = 4,
    ACTIONS(779), 1,
      sym__indent,
    STATE(291), 1,
      sym_children,
    ACTIONS(487), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7684] = 3,
    ACTIONS(781), 1,
      sym__dedent,
    ACTIONS(725), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(723), 11,
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
  [7710] = 2,
    ACTIONS(706), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(704), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7734] = 2,
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
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7758] = 4,
    ACTIONS(783), 1,
      sym__indent,
    STATE(288), 1,
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
  [7786] = 4,
    ACTIONS(779), 1,
      sym__indent,
    STATE(303), 1,
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
  [7814] = 4,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(785), 1,
      sym__comment_content,
    STATE(223), 1,
      aux_sym_comment_repeat1,
    ACTIONS(510), 16,
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
  [7842] = 2,
    ACTIONS(665), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(663), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7866] = 2,
    ACTIONS(447), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7890] = 4,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(788), 1,
      sym__comment_content,
    STATE(223), 1,
      aux_sym_comment_repeat1,
    ACTIONS(517), 16,
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
  [7918] = 2,
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
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7942] = 2,
    ACTIONS(717), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(715), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7966] = 4,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(788), 1,
      sym__comment_content,
    STATE(223), 1,
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
  [7994] = 3,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(790), 1,
      sym__newline,
    ACTIONS(573), 17,
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
  [8020] = 3,
    ACTIONS(792), 1,
      sym__dedent,
    ACTIONS(692), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 11,
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
  [8046] = 2,
    ACTIONS(638), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(636), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8070] = 2,
    ACTIONS(702), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8094] = 2,
    ACTIONS(457), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [8118] = 3,
    ACTIONS(794), 1,
      sym__indent,
    ACTIONS(602), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(600), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8144] = 2,
    ACTIONS(675), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(673), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8168] = 2,
    ACTIONS(630), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(628), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8192] = 4,
    ACTIONS(796), 1,
      sym__indent,
    ACTIONS(798), 1,
      sym__dedent,
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
  [8220] = 2,
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
  [8244] = 2,
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
  [8268] = 3,
    ACTIONS(800), 1,
      sym__indent,
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
  [8294] = 2,
    ACTIONS(698), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(696), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8318] = 2,
    ACTIONS(679), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(677), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8342] = 2,
    ACTIONS(580), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(582), 17,
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
  [8366] = 2,
    ACTIONS(634), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8390] = 3,
    ACTIONS(802), 1,
      sym__indent,
    ACTIONS(547), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(545), 11,
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
  [8416] = 2,
    ACTIONS(647), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(645), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8440] = 3,
    ACTIONS(571), 1,
      sym__dedent,
    ACTIONS(804), 1,
      sym__newline,
    ACTIONS(573), 17,
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
  [8466] = 2,
    ACTIONS(580), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(582), 17,
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
  [8490] = 2,
    ACTIONS(809), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(807), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8514] = 2,
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
  [8538] = 4,
    ACTIONS(811), 1,
      sym__indent,
    STATE(292), 1,
      sym_children,
    ACTIONS(457), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [8566] = 4,
    ACTIONS(779), 1,
      sym__indent,
    STATE(298), 1,
      sym_children,
    ACTIONS(447), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8594] = 2,
    ACTIONS(508), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(510), 17,
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
  [8618] = 3,
    ACTIONS(813), 1,
      sym__indent,
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
  [8644] = 2,
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
  [8667] = 2,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 17,
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
  [8690] = 2,
    ACTIONS(688), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 11,
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
  [8713] = 2,
    ACTIONS(698), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(696), 11,
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
  [8736] = 2,
    ACTIONS(706), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(704), 11,
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
  [8759] = 2,
    ACTIONS(679), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(677), 11,
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
  [8782] = 2,
    ACTIONS(675), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(673), 11,
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
  [8805] = 2,
    ACTIONS(638), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(636), 11,
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
  [8828] = 3,
    ACTIONS(815), 1,
      sym__dedent,
    ACTIONS(725), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(723), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8853] = 2,
    ACTIONS(721), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(719), 11,
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
  [8876] = 2,
    ACTIONS(717), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(715), 11,
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
  [8899] = 2,
    ACTIONS(630), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(628), 11,
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
  [8922] = 2,
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
  [8945] = 3,
    ACTIONS(817), 1,
      sym__dedent,
    ACTIONS(702), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8970] = 2,
    ACTIONS(447), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 11,
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
  [8993] = 2,
    ACTIONS(665), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(663), 11,
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
  [9016] = 3,
    ACTIONS(819), 1,
      sym__indent,
    ACTIONS(547), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(545), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9041] = 3,
    ACTIONS(821), 1,
      sym__dedent,
    ACTIONS(692), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9066] = 2,
    ACTIONS(634), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 11,
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
  [9089] = 3,
    ACTIONS(823), 1,
      sym__dedent,
    ACTIONS(725), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(723), 10,
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
  [9114] = 2,
    ACTIONS(647), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(645), 11,
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
  [9137] = 2,
    ACTIONS(735), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 11,
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
  [9160] = 2,
    ACTIONS(702), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 11,
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
  [9183] = 2,
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
  [9206] = 2,
    ACTIONS(457), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [9229] = 3,
    ACTIONS(825), 1,
      sym__dedent,
    ACTIONS(692), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 10,
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
  [9254] = 2,
    ACTIONS(487), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 11,
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
  [9277] = 2,
    ACTIONS(702), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(700), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9300] = 3,
    ACTIONS(827), 1,
      sym__indent,
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
  [9325] = 2,
    ACTIONS(721), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(719), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9347] = 2,
    ACTIONS(831), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(829), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9369] = 2,
    ACTIONS(665), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(663), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9391] = 2,
    ACTIONS(457), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [9413] = 2,
    ACTIONS(630), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(628), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9435] = 2,
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
  [9457] = 2,
    ACTIONS(447), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(445), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9479] = 2,
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
  [9501] = 2,
    ACTIONS(717), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(715), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9523] = 2,
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
  [9545] = 2,
    ACTIONS(735), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9567] = 2,
    ACTIONS(835), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(833), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9589] = 2,
    ACTIONS(706), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
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
  [9611] = 2,
    ACTIONS(638), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(636), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9633] = 2,
    ACTIONS(647), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(645), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9655] = 2,
    ACTIONS(675), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(673), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9677] = 2,
    ACTIONS(688), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9699] = 2,
    ACTIONS(698), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(696), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9721] = 2,
    ACTIONS(487), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(485), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9743] = 2,
    ACTIONS(679), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(677), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9765] = 2,
    ACTIONS(634), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9787] = 11,
    ACTIONS(837), 1,
      anon_sym_COLON,
    ACTIONS(839), 1,
      anon_sym_BANG_EQ,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(843), 1,
      anon_sym_,
    ACTIONS(845), 1,
      anon_sym_DOT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      sym__newline,
    STATE(319), 1,
      aux_sym_tag_repeat1,
    STATE(326), 1,
      sym_attributes,
    ACTIONS(849), 2,
      sym_class,
      sym_id,
    STATE(135), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9824] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_BANG_EQ,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(859), 1,
      anon_sym_,
    ACTIONS(861), 1,
      anon_sym_DOT,
    ACTIONS(865), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(333), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(204), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9861] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(869), 1,
      anon_sym_BANG_EQ,
    ACTIONS(871), 1,
      anon_sym_EQ,
    ACTIONS(873), 1,
      anon_sym_,
    ACTIONS(875), 1,
      anon_sym_DOT,
    ACTIONS(877), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(336), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(234), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9898] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_BANG_EQ,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(885), 1,
      anon_sym_,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(335), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(280), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9935] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_COLON,
    ACTIONS(893), 1,
      anon_sym_BANG_EQ,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(897), 1,
      anon_sym_,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(903), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_tag_repeat1,
    STATE(329), 1,
      sym_attributes,
    ACTIONS(901), 2,
      sym_class,
      sym_id,
    STATE(459), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9972] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(881), 1,
      anon_sym_BANG_EQ,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON,
    ACTIONS(907), 1,
      anon_sym_,
    ACTIONS(911), 1,
      sym__newline,
    STATE(309), 1,
      aux_sym_tag_repeat1,
    STATE(338), 1,
      sym_attributes,
    ACTIONS(909), 2,
      sym_class,
      sym_id,
    STATE(279), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10009] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(915), 1,
      anon_sym_BANG_EQ,
    ACTIONS(917), 1,
      anon_sym_EQ,
    ACTIONS(919), 1,
      anon_sym_,
    ACTIONS(921), 1,
      anon_sym_DOT,
    ACTIONS(925), 1,
      sym__newline,
    STATE(317), 1,
      aux_sym_tag_repeat1,
    STATE(331), 1,
      sym_attributes,
    ACTIONS(923), 2,
      sym_class,
      sym_id,
    STATE(199), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10046] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      anon_sym_BANG_EQ,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(933), 1,
      anon_sym_,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(937), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(328), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(288), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10083] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(869), 1,
      anon_sym_BANG_EQ,
    ACTIONS(871), 1,
      anon_sym_EQ,
    ACTIONS(875), 1,
      anon_sym_DOT,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(941), 1,
      anon_sym_,
    ACTIONS(945), 1,
      sym__newline,
    STATE(308), 1,
      aux_sym_tag_repeat1,
    STATE(339), 1,
      sym_attributes,
    ACTIONS(943), 2,
      sym_class,
      sym_id,
    STATE(240), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10120] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      anon_sym_BANG_EQ,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(861), 1,
      anon_sym_DOT,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(949), 1,
      anon_sym_,
    ACTIONS(953), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym_tag_repeat1,
    STATE(330), 1,
      sym_attributes,
    ACTIONS(951), 2,
      sym_class,
      sym_id,
    STATE(205), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10157] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      anon_sym_BANG_EQ,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(957), 1,
      anon_sym_,
    ACTIONS(959), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(334), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(456), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10194] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      anon_sym_BANG_EQ,
    ACTIONS(917), 1,
      anon_sym_EQ,
    ACTIONS(921), 1,
      anon_sym_DOT,
    ACTIONS(961), 1,
      anon_sym_COLON,
    ACTIONS(963), 1,
      anon_sym_,
    ACTIONS(965), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(332), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(186), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10231] = 11,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(929), 1,
      anon_sym_BANG_EQ,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(967), 1,
      anon_sym_COLON,
    ACTIONS(969), 1,
      anon_sym_,
    ACTIONS(973), 1,
      sym__newline,
    STATE(313), 1,
      aux_sym_tag_repeat1,
    STATE(337), 1,
      sym_attributes,
    ACTIONS(971), 2,
      sym_class,
      sym_id,
    STATE(290), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10268] = 11,
    ACTIONS(839), 1,
      anon_sym_BANG_EQ,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(845), 1,
      anon_sym_DOT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(977), 1,
      anon_sym_,
    ACTIONS(979), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    STATE(327), 1,
      sym_attributes,
    ACTIONS(863), 2,
      sym_class,
      sym_id,
    STATE(134), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10305] = 6,
    ACTIONS(981), 1,
      anon_sym_EQ,
    ACTIONS(983), 1,
      anon_sym_,
    ACTIONS(985), 1,
      anon_sym_DOT,
    STATE(431), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(987), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(540), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [10330] = 6,
    ACTIONS(981), 1,
      anon_sym_EQ,
    ACTIONS(985), 1,
      anon_sym_DOT,
    ACTIONS(989), 1,
      anon_sym_,
    STATE(320), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(522), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [10355] = 7,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(997), 1,
      sym_attribute_name,
    STATE(325), 1,
      aux_sym_attributes_repeat1,
    STATE(502), 1,
      sym_angular_attribute_name,
    STATE(514), 1,
      sym_attribute,
    STATE(526), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(995), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [10380] = 7,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    ACTIONS(1004), 1,
      sym_attribute_name,
    STATE(323), 1,
      aux_sym_attributes_repeat1,
    STATE(502), 1,
      sym_angular_attribute_name,
    STATE(581), 1,
      sym_attribute,
    STATE(526), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1001), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [10405] = 4,
    STATE(324), 1,
      aux_sym_tag_repeat1,
    ACTIONS(1009), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1011), 2,
      sym_class,
      sym_id,
    ACTIONS(1007), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [10424] = 7,
    ACTIONS(997), 1,
      sym_attribute_name,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_attributes_repeat1,
    STATE(502), 1,
      sym_angular_attribute_name,
    STATE(545), 1,
      sym_attribute,
    STATE(526), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(995), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [10449] = 7,
    ACTIONS(839), 1,
      anon_sym_BANG_EQ,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(845), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(977), 1,
      anon_sym_,
    ACTIONS(979), 1,
      sym__newline,
    STATE(134), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10473] = 7,
    ACTIONS(839), 1,
      anon_sym_BANG_EQ,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(845), 1,
      anon_sym_DOT,
    ACTIONS(1016), 1,
      anon_sym_COLON,
    ACTIONS(1018), 1,
      anon_sym_,
    ACTIONS(1020), 1,
      sym__newline,
    STATE(131), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10497] = 7,
    ACTIONS(929), 1,
      anon_sym_BANG_EQ,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(1022), 1,
      anon_sym_COLON,
    ACTIONS(1024), 1,
      anon_sym_,
    ACTIONS(1026), 1,
      sym__newline,
    STATE(292), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10521] = 7,
    ACTIONS(893), 1,
      anon_sym_BANG_EQ,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(957), 1,
      anon_sym_,
    ACTIONS(959), 1,
      sym__newline,
    STATE(456), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10545] = 7,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_BANG_EQ,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(859), 1,
      anon_sym_,
    ACTIONS(861), 1,
      anon_sym_DOT,
    ACTIONS(865), 1,
      sym__newline,
    STATE(204), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10569] = 7,
    ACTIONS(915), 1,
      anon_sym_BANG_EQ,
    ACTIONS(917), 1,
      anon_sym_EQ,
    ACTIONS(921), 1,
      anon_sym_DOT,
    ACTIONS(961), 1,
      anon_sym_COLON,
    ACTIONS(963), 1,
      anon_sym_,
    ACTIONS(965), 1,
      sym__newline,
    STATE(186), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10593] = 7,
    ACTIONS(915), 1,
      anon_sym_BANG_EQ,
    ACTIONS(917), 1,
      anon_sym_EQ,
    ACTIONS(921), 1,
      anon_sym_DOT,
    ACTIONS(1028), 1,
      anon_sym_COLON,
    ACTIONS(1030), 1,
      anon_sym_,
    ACTIONS(1032), 1,
      sym__newline,
    STATE(180), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10617] = 7,
    ACTIONS(855), 1,
      anon_sym_BANG_EQ,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(861), 1,
      anon_sym_DOT,
    ACTIONS(1034), 1,
      anon_sym_COLON,
    ACTIONS(1036), 1,
      anon_sym_,
    ACTIONS(1038), 1,
      sym__newline,
    STATE(198), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10641] = 7,
    ACTIONS(893), 1,
      anon_sym_BANG_EQ,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(1040), 1,
      anon_sym_COLON,
    ACTIONS(1042), 1,
      anon_sym_,
    ACTIONS(1044), 1,
      sym__newline,
    STATE(455), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10665] = 7,
    ACTIONS(881), 1,
      anon_sym_BANG_EQ,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(1046), 1,
      anon_sym_COLON,
    ACTIONS(1048), 1,
      anon_sym_,
    ACTIONS(1050), 1,
      sym__newline,
    STATE(268), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10689] = 7,
    ACTIONS(869), 1,
      anon_sym_BANG_EQ,
    ACTIONS(871), 1,
      anon_sym_EQ,
    ACTIONS(875), 1,
      anon_sym_DOT,
    ACTIONS(1052), 1,
      anon_sym_COLON,
    ACTIONS(1054), 1,
      anon_sym_,
    ACTIONS(1056), 1,
      sym__newline,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10713] = 7,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      anon_sym_BANG_EQ,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(933), 1,
      anon_sym_,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(937), 1,
      sym__newline,
    STATE(288), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10737] = 7,
    ACTIONS(879), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_BANG_EQ,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(885), 1,
      anon_sym_,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      sym__newline,
    STATE(280), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10761] = 7,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(869), 1,
      anon_sym_BANG_EQ,
    ACTIONS(871), 1,
      anon_sym_EQ,
    ACTIONS(873), 1,
      anon_sym_,
    ACTIONS(875), 1,
      anon_sym_DOT,
    ACTIONS(877), 1,
      sym__newline,
    STATE(234), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [10785] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1064), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10808] = 7,
    ACTIONS(1066), 1,
      aux_sym_content_token1,
    ACTIONS(1069), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1072), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1075), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10831] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1077), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10854] = 8,
    ACTIONS(1079), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(1081), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(1083), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(1085), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(1087), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(1089), 1,
      anon_sym_SQUOTE,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    STATE(528), 1,
      sym_quoted_attribute_value,
  [10879] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1093), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10902] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1095), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10925] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1097), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10948] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1099), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10971] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1101), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10994] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1103), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11017] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1105), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11040] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1107), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11063] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1109), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11086] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1111), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11109] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1113), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11132] = 7,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1115), 1,
      sym__dedent,
    STATE(341), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11155] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1121), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11171] = 3,
    ACTIONS(1123), 1,
      sym__indent,
    STATE(463), 1,
      sym_children,
    ACTIONS(485), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11185] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(345), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11205] = 3,
    ACTIONS(1125), 1,
      sym__indent,
    STATE(457), 1,
      sym_children,
    ACTIONS(451), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11219] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(342), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11239] = 3,
    ACTIONS(1123), 1,
      sym__indent,
    STATE(457), 1,
      sym_children,
    ACTIONS(451), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11253] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(344), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11273] = 3,
    ACTIONS(1127), 1,
      sym__indent,
    STATE(455), 1,
      sym_children,
    ACTIONS(455), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11287] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1129), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11307] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1131), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(416), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11327] = 3,
    ACTIONS(1133), 1,
      sym__indent,
    STATE(456), 1,
      sym_children,
    ACTIONS(479), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11341] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1135), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11361] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1137), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11377] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1139), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11397] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1141), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11417] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1143), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11437] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1145), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11453] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1147), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11473] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1149), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11493] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(340), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11513] = 4,
    ACTIONS(1154), 1,
      sym__newline,
    ACTIONS(1157), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1151), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11529] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11549] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(352), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11569] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1161), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11589] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(348), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11609] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1163), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11625] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1165), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11645] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1167), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11665] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1169), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11685] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1171), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11705] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1173), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(385), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11725] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(346), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11745] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11765] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(349), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11785] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1177), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11801] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1179), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11821] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1181), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11841] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11861] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(350), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11881] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1185), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11901] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1187), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(393), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11921] = 3,
    ACTIONS(1123), 1,
      sym__indent,
    STATE(465), 1,
      sym_children,
    ACTIONS(445), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11935] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1189), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11955] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1191), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11971] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(351), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11991] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1193), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12007] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1195), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12027] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1197), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12047] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1199), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12067] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1201), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12087] = 6,
    ACTIONS(1203), 1,
      aux_sym_content_token1,
    ACTIONS(1206), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1209), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1212), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12107] = 4,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(1214), 1,
      sym__dedent,
    STATE(376), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12123] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(353), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12143] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1216), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12163] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1218), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(417), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12183] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(355), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12203] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(347), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12223] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1220), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12243] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(395), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12263] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1222), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12283] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12303] = 6,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1226), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(406), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12323] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(413), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12340] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(415), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12357] = 3,
    ACTIONS(1228), 1,
      sym__newline,
    STATE(356), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12370] = 2,
    ACTIONS(1232), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1230), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [12381] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(377), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12398] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(367), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12415] = 2,
    ACTIONS(1234), 1,
      sym__indent,
    ACTIONS(600), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12426] = 3,
    ACTIONS(1236), 1,
      sym__newline,
    STATE(368), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12439] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(369), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12456] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(370), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12473] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(409), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12490] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(371), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12507] = 3,
    ACTIONS(1238), 1,
      sym__newline,
    STATE(399), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12520] = 4,
    ACTIONS(1242), 1,
      anon_sym_,
    ACTIONS(1244), 1,
      anon_sym_DOT,
    STATE(431), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1240), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12535] = 2,
    ACTIONS(1249), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1247), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [12546] = 3,
    ACTIONS(1251), 1,
      sym__newline,
    STATE(372), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12559] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(373), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12576] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12593] = 4,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACE,
    ACTIONS(1253), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1259), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12608] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(379), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12625] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(405), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12642] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(404), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12659] = 3,
    ACTIONS(1261), 1,
      sym__newline,
    STATE(381), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12672] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(382), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12689] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(383), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12706] = 3,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(407), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12719] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(388), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12736] = 2,
    ACTIONS(1267), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1265), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [12747] = 3,
    ACTIONS(1269), 1,
      sym__newline,
    STATE(390), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12760] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(391), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12777] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(392), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12794] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(398), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12811] = 3,
    ACTIONS(1271), 1,
      sym__newline,
    STATE(401), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12824] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(402), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12841] = 5,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1060), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym_content_repeat1,
    STATE(403), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12858] = 1,
    ACTIONS(704), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12866] = 4,
    ACTIONS(1273), 1,
      anon_sym_when,
    ACTIONS(1275), 1,
      anon_sym_default,
    STATE(51), 1,
      sym__when_keyword,
    STATE(44), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12880] = 1,
    ACTIONS(451), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12888] = 1,
    ACTIONS(455), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12896] = 1,
    ACTIONS(485), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12904] = 3,
    ACTIONS(1279), 1,
      anon_sym_LBRACE,
    ACTIONS(1277), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1281), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12916] = 1,
    ACTIONS(479), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12924] = 1,
    ACTIONS(663), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12932] = 1,
    ACTIONS(696), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12940] = 1,
    ACTIONS(677), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12948] = 1,
    ACTIONS(445), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12956] = 4,
    ACTIONS(1277), 1,
      sym__newline,
    ACTIONS(1283), 1,
      aux_sym_content_token1,
    STATE(464), 1,
      aux_sym_content_repeat1,
    ACTIONS(1281), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12970] = 1,
    ACTIONS(636), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12978] = 4,
    ACTIONS(1273), 1,
      anon_sym_when,
    ACTIONS(1286), 1,
      anon_sym_default,
    STATE(64), 1,
      sym__when_keyword,
    STATE(99), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12992] = 2,
    ACTIONS(1242), 1,
      anon_sym_,
    ACTIONS(1240), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13002] = 4,
    ACTIONS(1058), 1,
      aux_sym_content_token1,
    ACTIONS(1290), 1,
      sym__newline,
    STATE(464), 1,
      aux_sym_content_repeat1,
    ACTIONS(1288), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13016] = 1,
    ACTIONS(673), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13024] = 4,
    ACTIONS(1292), 1,
      anon_sym_when,
    ACTIONS(1294), 1,
      anon_sym_default,
    STATE(81), 1,
      sym__when_keyword,
    STATE(61), 2,
      sym_when,
      aux_sym_case_repeat1,
  [13038] = 1,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [13046] = 1,
    ACTIONS(999), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [13054] = 2,
    STATE(457), 1,
      sym_tag,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13063] = 4,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    ACTIONS(1300), 1,
      sym__dedent,
    STATE(496), 1,
      aux_sym_script_block_repeat1,
  [13076] = 2,
    ACTIONS(1075), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1302), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13085] = 4,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    ACTIONS(1304), 1,
      sym__dedent,
    STATE(496), 1,
      aux_sym_script_block_repeat1,
  [13098] = 2,
    STATE(110), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13107] = 2,
    STATE(456), 1,
      sym_tag,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13116] = 4,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1308), 1,
      sym__newline,
    STATE(171), 1,
      sym__single_line_buf_code,
    STATE(620), 1,
      sym__un_delimited_javascript,
  [13129] = 2,
    ACTIONS(1277), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1281), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13138] = 4,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1310), 1,
      sym__newline,
    STATE(172), 1,
      sym__single_line_buf_code,
    STATE(603), 1,
      sym__un_delimited_javascript,
  [13151] = 2,
    ACTIONS(1312), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1314), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13160] = 2,
    ACTIONS(1316), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1318), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [13169] = 4,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1320), 1,
      sym__newline,
    STATE(273), 1,
      sym__single_line_buf_code,
    STATE(633), 1,
      sym__un_delimited_javascript,
  [13182] = 2,
    STATE(134), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13191] = 2,
    STATE(455), 1,
      sym_tag,
    ACTIONS(1117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13200] = 2,
    STATE(282), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13209] = 4,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(496), 1,
      aux_sym_script_block_repeat1,
  [13222] = 2,
    STATE(303), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13231] = 4,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(496), 1,
      aux_sym_script_block_repeat1,
  [13244] = 2,
    STATE(268), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13253] = 2,
    STATE(204), 1,
      sym_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13262] = 2,
    STATE(198), 1,
      sym_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13271] = 2,
    STATE(131), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13280] = 4,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1326), 1,
      sym__newline,
    STATE(136), 1,
      sym__single_line_buf_code,
    STATE(644), 1,
      sym__un_delimited_javascript,
  [13293] = 4,
    ACTIONS(1328), 1,
      aux_sym_script_block_token1,
    ACTIONS(1331), 1,
      sym__newline,
    ACTIONS(1334), 1,
      sym__dedent,
    STATE(496), 1,
      aux_sym_script_block_repeat1,
  [13306] = 2,
    STATE(194), 1,
      sym_tag,
    ACTIONS(189), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13315] = 2,
    STATE(280), 1,
      sym_tag,
    ACTIONS(299), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13324] = 2,
    STATE(216), 1,
      sym_tag,
    ACTIONS(261), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13333] = 2,
    STATE(234), 1,
      sym_tag,
    ACTIONS(261), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13342] = 2,
    STATE(292), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13351] = 3,
    ACTIONS(1336), 1,
      anon_sym_EQ,
    ACTIONS(1338), 1,
      anon_sym_,
    ACTIONS(1340), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13362] = 4,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1342), 1,
      sym__newline,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(651), 1,
      sym__un_delimited_javascript,
  [13375] = 2,
    STATE(186), 1,
      sym_tag,
    ACTIONS(491), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13384] = 2,
    STATE(288), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13393] = 4,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(496), 1,
      aux_sym_script_block_repeat1,
  [13406] = 4,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1346), 1,
      sym__newline,
    STATE(281), 1,
      sym__single_line_buf_code,
    STATE(650), 1,
      sym__un_delimited_javascript,
  [13419] = 2,
    STATE(180), 1,
      sym_tag,
    ACTIONS(491), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13428] = 2,
    STATE(174), 1,
      sym_tag,
    ACTIONS(491), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13437] = 2,
    STATE(213), 1,
      sym_tag,
    ACTIONS(261), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [13446] = 2,
    ACTIONS(1350), 1,
      anon_sym_,
    ACTIONS(1348), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13455] = 1,
    ACTIONS(1334), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [13461] = 3,
    ACTIONS(1352), 1,
      anon_sym_SQUOTE,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    STATE(549), 1,
      sym_quoted_javascript,
  [13471] = 3,
    ACTIONS(1356), 1,
      anon_sym_,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
  [13481] = 2,
    ACTIONS(1362), 1,
      anon_sym_,
    ACTIONS(1364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13489] = 3,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(488), 1,
      aux_sym_script_block_repeat1,
  [13499] = 2,
    ACTIONS(1366), 1,
      anon_sym_,
    ACTIONS(1368), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13507] = 3,
    ACTIONS(1370), 1,
      sym__un_delimited_javascript_line,
    STATE(167), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(275), 1,
      sym__multi_line_buf_code,
  [13517] = 2,
    ACTIONS(1372), 1,
      anon_sym_,
    ACTIONS(1374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13525] = 2,
    ACTIONS(1376), 1,
      anon_sym_,
    ACTIONS(1378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13533] = 2,
    ACTIONS(1380), 1,
      anon_sym_,
    ACTIONS(1382), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13541] = 2,
    ACTIONS(983), 1,
      anon_sym_,
    ACTIONS(987), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13549] = 1,
    ACTIONS(1384), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [13555] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(261), 1,
      sym__single_line_buf_code,
    STATE(650), 1,
      sym__un_delimited_javascript,
  [13565] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(259), 1,
      sym__single_line_buf_code,
    STATE(650), 1,
      sym__un_delimited_javascript,
  [13575] = 2,
    ACTIONS(1386), 1,
      anon_sym_,
    ACTIONS(1388), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13583] = 3,
    ACTIONS(1390), 1,
      sym__un_delimited_javascript_line,
    STATE(114), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(218), 1,
      sym__multi_line_buf_code,
  [13593] = 2,
    ACTIONS(1392), 1,
      anon_sym_,
    ACTIONS(1394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13601] = 3,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_script_block_repeat1,
  [13611] = 3,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(476), 1,
      aux_sym_script_block_repeat1,
  [13621] = 2,
    ACTIONS(1396), 1,
      anon_sym_,
    ACTIONS(1398), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13629] = 3,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(490), 1,
      aux_sym_script_block_repeat1,
  [13639] = 2,
    ACTIONS(1400), 1,
      anon_sym_,
    ACTIONS(1402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13647] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(201), 1,
      sym__single_line_buf_code,
    STATE(603), 1,
      sym__un_delimited_javascript,
  [13657] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(206), 1,
      sym__single_line_buf_code,
    STATE(603), 1,
      sym__un_delimited_javascript,
  [13667] = 1,
    ACTIONS(1404), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [13673] = 3,
    ACTIONS(1296), 1,
      aux_sym_script_block_token1,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(474), 1,
      aux_sym_script_block_repeat1,
  [13683] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(304), 1,
      sym__single_line_buf_code,
    STATE(614), 1,
      sym__un_delimited_javascript,
  [13693] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(242), 1,
      sym__single_line_buf_code,
    STATE(651), 1,
      sym__un_delimited_javascript,
  [13703] = 2,
    ACTIONS(1406), 1,
      anon_sym_,
    ACTIONS(1408), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13711] = 3,
    ACTIONS(1410), 1,
      sym__un_delimited_javascript_line,
    STATE(155), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(264), 1,
      sym__multi_line_buf_code,
  [13721] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(302), 1,
      sym__single_line_buf_code,
    STATE(614), 1,
      sym__un_delimited_javascript,
  [13731] = 3,
    ACTIONS(1412), 1,
      sym__un_delimited_javascript_line,
    STATE(91), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(188), 1,
      sym__multi_line_buf_code,
  [13741] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(461), 1,
      sym__single_line_buf_code,
    STATE(625), 1,
      sym__un_delimited_javascript,
  [13751] = 3,
    ACTIONS(1356), 1,
      anon_sym_,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
  [13761] = 3,
    ACTIONS(1416), 1,
      sym__un_delimited_javascript_line,
    STATE(65), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(146), 1,
      sym__multi_line_buf_code,
  [13771] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(210), 1,
      sym__single_line_buf_code,
    STATE(620), 1,
      sym__un_delimited_javascript,
  [13781] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(208), 1,
      sym__single_line_buf_code,
    STATE(620), 1,
      sym__un_delimited_javascript,
  [13791] = 2,
    ACTIONS(1418), 1,
      anon_sym_,
    ACTIONS(1420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13799] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(462), 1,
      sym__single_line_buf_code,
    STATE(625), 1,
      sym__un_delimited_javascript,
  [13809] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(128), 1,
      sym__single_line_buf_code,
    STATE(644), 1,
      sym__un_delimited_javascript,
  [13819] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(137), 1,
      sym__single_line_buf_code,
    STATE(644), 1,
      sym__un_delimited_javascript,
  [13829] = 2,
    ACTIONS(1422), 1,
      anon_sym_,
    ACTIONS(1424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13837] = 2,
    ACTIONS(1426), 1,
      anon_sym_,
    ACTIONS(1428), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13845] = 3,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(243), 1,
      sym__single_line_buf_code,
    STATE(651), 1,
      sym__un_delimited_javascript,
  [13855] = 1,
    ACTIONS(1430), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [13861] = 3,
    ACTIONS(1432), 1,
      sym__un_delimited_javascript_line,
    STATE(88), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(179), 1,
      sym__multi_line_buf_code,
  [13871] = 1,
    ACTIONS(1434), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [13877] = 1,
    ACTIONS(1436), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [13883] = 1,
    ACTIONS(1438), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [13889] = 2,
    ACTIONS(779), 1,
      sym__indent,
    STATE(289), 1,
      sym_children,
  [13896] = 2,
    ACTIONS(1440), 1,
      sym__comment_content,
    STATE(229), 1,
      aux_sym_comment_repeat1,
  [13903] = 2,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(628), 1,
      sym__un_delimited_javascript,
  [13910] = 2,
    ACTIONS(746), 1,
      sym__indent,
    STATE(267), 1,
      sym_children,
  [13917] = 2,
    ACTIONS(1442), 1,
      sym__comment_content,
    ACTIONS(1444), 1,
      sym__newline,
  [13924] = 2,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(617), 1,
      sym__un_delimited_javascript,
  [13931] = 2,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(610), 1,
      sym__un_delimited_javascript,
  [13938] = 2,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(600), 1,
      sym__un_delimited_javascript,
  [13945] = 2,
    ACTIONS(1446), 1,
      sym__comment_content,
    STATE(63), 1,
      aux_sym_comment_repeat1,
  [13952] = 2,
    ACTIONS(1440), 1,
      sym__comment_content,
    STATE(226), 1,
      aux_sym_comment_repeat1,
  [13959] = 2,
    ACTIONS(746), 1,
      sym__indent,
    STATE(258), 1,
      sym_children,
  [13966] = 2,
    ACTIONS(1448), 1,
      anon_sym_DQUOTE,
    ACTIONS(1450), 1,
      aux_sym_quoted_javascript_token2,
  [13973] = 2,
    ACTIONS(1448), 1,
      anon_sym_SQUOTE,
    ACTIONS(1452), 1,
      aux_sym_quoted_javascript_token1,
  [13980] = 2,
    ACTIONS(1454), 1,
      sym__comment_content,
    STATE(169), 1,
      aux_sym_comment_repeat1,
  [13987] = 2,
    ACTIONS(1456), 1,
      sym__comment_content,
    ACTIONS(1458), 1,
      sym__newline,
  [13994] = 2,
    ACTIONS(1460), 1,
      sym__comment_content,
    ACTIONS(1462), 1,
      sym__newline,
  [14001] = 2,
    ACTIONS(1464), 1,
      sym__comment_content,
    ACTIONS(1466), 1,
      sym__newline,
  [14008] = 2,
    ACTIONS(651), 1,
      sym__indent,
    STATE(237), 1,
      sym_children,
  [14015] = 2,
    ACTIONS(1468), 1,
      sym__comment_content,
    STATE(77), 1,
      aux_sym_comment_repeat1,
  [14022] = 2,
    ACTIONS(449), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
  [14029] = 2,
    ACTIONS(1356), 1,
      anon_sym_,
    ACTIONS(1358), 1,
      anon_sym_COMMA,
  [14036] = 2,
    ACTIONS(561), 1,
      sym__indent,
    STATE(183), 1,
      sym_children,
  [14043] = 2,
    ACTIONS(651), 1,
      sym__indent,
    STATE(227), 1,
      sym_children,
  [14050] = 2,
    ACTIONS(449), 1,
      sym__indent,
    STATE(133), 1,
      sym_children,
  [14057] = 2,
    ACTIONS(1470), 1,
      sym__comment_content,
    STATE(111), 1,
      aux_sym_comment_repeat1,
  [14064] = 2,
    ACTIONS(779), 1,
      sym__indent,
    STATE(301), 1,
      sym_children,
  [14071] = 2,
    ACTIONS(1470), 1,
      sym__comment_content,
    STATE(117), 1,
      aux_sym_comment_repeat1,
  [14078] = 2,
    ACTIONS(1472), 1,
      anon_sym_DQUOTE,
    ACTIONS(1474), 1,
      aux_sym_quoted_javascript_token2,
  [14085] = 2,
    ACTIONS(1446), 1,
      sym__comment_content,
    STATE(54), 1,
      aux_sym_comment_repeat1,
  [14092] = 2,
    ACTIONS(561), 1,
      sym__indent,
    STATE(207), 1,
      sym_children,
  [14099] = 2,
    ACTIONS(1476), 1,
      sym__comment_content,
    ACTIONS(1478), 1,
      sym__newline,
  [14106] = 2,
    ACTIONS(1468), 1,
      sym__comment_content,
    STATE(75), 1,
      aux_sym_comment_repeat1,
  [14113] = 2,
    ACTIONS(1306), 1,
      sym__un_delimited_javascript_line,
    STATE(622), 1,
      sym__un_delimited_javascript,
  [14120] = 2,
    ACTIONS(1454), 1,
      sym__comment_content,
    STATE(202), 1,
      aux_sym_comment_repeat1,
  [14127] = 2,
    ACTIONS(1472), 1,
      anon_sym_SQUOTE,
    ACTIONS(1480), 1,
      aux_sym_quoted_javascript_token1,
  [14134] = 1,
    ACTIONS(1482), 1,
      sym__newline,
  [14138] = 1,
    ACTIONS(1484), 1,
      sym__delimited_javascript,
  [14142] = 1,
    ACTIONS(1486), 1,
      sym__newline,
  [14146] = 1,
    ACTIONS(1488), 1,
      aux_sym_unbuffered_code_token1,
  [14150] = 1,
    ACTIONS(1490), 1,
      sym__newline,
  [14154] = 1,
    ACTIONS(1492), 1,
      sym__newline,
  [14158] = 1,
    ACTIONS(1494), 1,
      sym__indent,
  [14162] = 1,
    ACTIONS(1496), 1,
      sym__newline,
  [14166] = 1,
    ACTIONS(1498), 1,
      aux_sym__when_keyword_token1,
  [14170] = 1,
    ACTIONS(1500), 1,
      sym__indent,
  [14174] = 1,
    ACTIONS(1502), 1,
      anon_sym_RBRACE_RBRACE,
  [14178] = 1,
    ACTIONS(1504), 1,
      sym__indent,
  [14182] = 1,
    ACTIONS(1506), 1,
      sym__newline,
  [14186] = 1,
    ACTIONS(1508), 1,
      aux_sym_unbuffered_code_token1,
  [14190] = 1,
    ACTIONS(1510), 1,
      sym__newline,
  [14194] = 1,
    ACTIONS(1512), 1,
      sym__indent,
  [14198] = 1,
    ACTIONS(1514), 1,
      sym__newline,
  [14202] = 1,
    ACTIONS(1516), 1,
      sym__indent,
  [14206] = 1,
    ACTIONS(1518), 1,
      sym__newline,
  [14210] = 1,
    ACTIONS(1520), 1,
      sym__newline,
  [14214] = 1,
    ACTIONS(1522), 1,
      aux_sym_unbuffered_code_token1,
  [14218] = 1,
    ACTIONS(1524), 1,
      sym__newline,
  [14222] = 1,
    ACTIONS(1526), 1,
      sym__newline,
  [14226] = 1,
    ACTIONS(1528), 1,
      sym__indent,
  [14230] = 1,
    ACTIONS(1530), 1,
      sym__newline,
  [14234] = 1,
    ACTIONS(1532), 1,
      sym__indent,
  [14238] = 1,
    ACTIONS(1534), 1,
      sym__newline,
  [14242] = 1,
    ACTIONS(1536), 1,
      sym__newline,
  [14246] = 1,
    ACTIONS(1538), 1,
      sym__newline,
  [14250] = 1,
    ACTIONS(1540), 1,
      sym__newline,
  [14254] = 1,
    ACTIONS(1542), 1,
      sym__newline,
  [14258] = 1,
    ACTIONS(1544), 1,
      aux_sym_unbuffered_code_token1,
  [14262] = 1,
    ACTIONS(1546), 1,
      sym__newline,
  [14266] = 1,
    ACTIONS(1548), 1,
      anon_sym_DQUOTE,
  [14270] = 1,
    ACTIONS(1550), 1,
      sym__indent,
  [14274] = 1,
    ACTIONS(1552), 1,
      sym__newline,
  [14278] = 1,
    ACTIONS(1554), 1,
      sym__indent,
  [14282] = 1,
    ACTIONS(1556), 1,
      sym__newline,
  [14286] = 1,
    ACTIONS(1558), 1,
      sym__newline,
  [14290] = 1,
    ACTIONS(1548), 1,
      anon_sym_SQUOTE,
  [14294] = 1,
    ACTIONS(1560), 1,
      sym__un_delimited_javascript_line,
  [14298] = 1,
    ACTIONS(1562), 1,
      aux_sym_unbuffered_code_token1,
  [14302] = 1,
    ACTIONS(1564), 1,
      aux_sym__when_keyword_token1,
  [14306] = 1,
    ACTIONS(1566), 1,
      sym__newline,
  [14310] = 1,
    ACTIONS(1568), 1,
      sym__indent,
  [14314] = 1,
    ACTIONS(1570), 1,
      sym__indent,
  [14318] = 1,
    ACTIONS(1502), 1,
      anon_sym_RBRACE,
  [14322] = 1,
    ACTIONS(1572), 1,
      sym__indent,
  [14326] = 1,
    ACTIONS(1574), 1,
      sym__newline,
  [14330] = 1,
    ACTIONS(1576), 1,
      sym__newline,
  [14334] = 1,
    ACTIONS(1578), 1,
      sym__newline,
  [14338] = 1,
    ACTIONS(1580), 1,
      sym__delimited_javascript,
  [14342] = 1,
    ACTIONS(1582), 1,
      sym__newline,
  [14346] = 1,
    ACTIONS(1584), 1,
      aux_sym__attribute_token1,
  [14350] = 1,
    ACTIONS(1586), 1,
      sym__newline,
  [14354] = 1,
    ACTIONS(1588), 1,
      sym__newline,
  [14358] = 1,
    ACTIONS(1590), 1,
      anon_sym_DQUOTE,
  [14362] = 1,
    ACTIONS(1592), 1,
      sym__newline,
  [14366] = 1,
    ACTIONS(1594), 1,
      sym__indent,
  [14370] = 1,
    ACTIONS(1596), 1,
      sym__indent,
  [14374] = 1,
    ACTIONS(1598), 1,
      sym__indent,
  [14378] = 1,
    ACTIONS(1590), 1,
      anon_sym_SQUOTE,
  [14382] = 1,
    ACTIONS(1600), 1,
      sym__newline,
  [14386] = 1,
    ACTIONS(1602), 1,
      sym__indent,
  [14390] = 1,
    ACTIONS(1604), 1,
      sym__indent,
  [14394] = 1,
    ACTIONS(1606), 1,
      sym__indent,
  [14398] = 1,
    ACTIONS(1608), 1,
      ts_builtin_sym_end,
  [14402] = 1,
    ACTIONS(1610), 1,
      sym__indent,
  [14406] = 1,
    ACTIONS(1612), 1,
      sym__indent,
  [14410] = 1,
    ACTIONS(1614), 1,
      sym__indent,
  [14414] = 1,
    ACTIONS(1616), 1,
      aux_sym_unbuffered_code_token1,
  [14418] = 1,
    ACTIONS(1618), 1,
      sym__indent,
  [14422] = 1,
    ACTIONS(1620), 1,
      sym__indent,
  [14426] = 1,
    ACTIONS(1622), 1,
      sym__indent,
  [14430] = 1,
    ACTIONS(1624), 1,
      sym__indent,
  [14434] = 1,
    ACTIONS(1626), 1,
      sym__indent,
  [14438] = 1,
    ACTIONS(1628), 1,
      sym__indent,
  [14442] = 1,
    ACTIONS(1630), 1,
      sym__indent,
  [14446] = 1,
    ACTIONS(1632), 1,
      sym__un_delimited_javascript_line,
  [14450] = 1,
    ACTIONS(1634), 1,
      sym__newline,
  [14454] = 1,
    ACTIONS(1636), 1,
      sym__newline,
  [14458] = 1,
    ACTIONS(1638), 1,
      sym__newline,
  [14462] = 1,
    ACTIONS(1640), 1,
      sym__un_delimited_javascript_line,
  [14466] = 1,
    ACTIONS(1642), 1,
      sym__newline,
  [14470] = 1,
    ACTIONS(1644), 1,
      sym__newline,
  [14474] = 1,
    ACTIONS(1646), 1,
      sym__newline,
  [14478] = 1,
    ACTIONS(1648), 1,
      sym__newline,
  [14482] = 1,
    ACTIONS(1650), 1,
      sym__newline,
  [14486] = 1,
    ACTIONS(1652), 1,
      sym__newline,
  [14490] = 1,
    ACTIONS(1654), 1,
      sym__newline,
  [14494] = 1,
    ACTIONS(1656), 1,
      sym__newline,
  [14498] = 1,
    ACTIONS(1658), 1,
      sym__newline,
  [14502] = 1,
    ACTIONS(1660), 1,
      sym__newline,
  [14506] = 1,
    ACTIONS(1662), 1,
      sym__newline,
  [14510] = 1,
    ACTIONS(1664), 1,
      sym__newline,
  [14514] = 1,
    ACTIONS(1666), 1,
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
  [SMALL_STATE(46)] = 2783,
  [SMALL_STATE(47)] = 2822,
  [SMALL_STATE(48)] = 2854,
  [SMALL_STATE(49)] = 2888,
  [SMALL_STATE(50)] = 2920,
  [SMALL_STATE(51)] = 2952,
  [SMALL_STATE(52)] = 2984,
  [SMALL_STATE(53)] = 3020,
  [SMALL_STATE(54)] = 3058,
  [SMALL_STATE(55)] = 3090,
  [SMALL_STATE(56)] = 3122,
  [SMALL_STATE(57)] = 3154,
  [SMALL_STATE(58)] = 3192,
  [SMALL_STATE(59)] = 3224,
  [SMALL_STATE(60)] = 3256,
  [SMALL_STATE(61)] = 3294,
  [SMALL_STATE(62)] = 3330,
  [SMALL_STATE(63)] = 3362,
  [SMALL_STATE(64)] = 3394,
  [SMALL_STATE(65)] = 3430,
  [SMALL_STATE(66)] = 3462,
  [SMALL_STATE(67)] = 3496,
  [SMALL_STATE(68)] = 3530,
  [SMALL_STATE(69)] = 3568,
  [SMALL_STATE(70)] = 3601,
  [SMALL_STATE(71)] = 3630,
  [SMALL_STATE(72)] = 3663,
  [SMALL_STATE(73)] = 3694,
  [SMALL_STATE(74)] = 3721,
  [SMALL_STATE(75)] = 3752,
  [SMALL_STATE(76)] = 3783,
  [SMALL_STATE(77)] = 3814,
  [SMALL_STATE(78)] = 3845,
  [SMALL_STATE(79)] = 3880,
  [SMALL_STATE(80)] = 3911,
  [SMALL_STATE(81)] = 3942,
  [SMALL_STATE(82)] = 3973,
  [SMALL_STATE(83)] = 4000,
  [SMALL_STATE(84)] = 4031,
  [SMALL_STATE(85)] = 4062,
  [SMALL_STATE(86)] = 4091,
  [SMALL_STATE(87)] = 4122,
  [SMALL_STATE(88)] = 4149,
  [SMALL_STATE(89)] = 4180,
  [SMALL_STATE(90)] = 4213,
  [SMALL_STATE(91)] = 4244,
  [SMALL_STATE(92)] = 4275,
  [SMALL_STATE(93)] = 4306,
  [SMALL_STATE(94)] = 4337,
  [SMALL_STATE(95)] = 4370,
  [SMALL_STATE(96)] = 4401,
  [SMALL_STATE(97)] = 4430,
  [SMALL_STATE(98)] = 4461,
  [SMALL_STATE(99)] = 4492,
  [SMALL_STATE(100)] = 4527,
  [SMALL_STATE(101)] = 4558,
  [SMALL_STATE(102)] = 4587,
  [SMALL_STATE(103)] = 4620,
  [SMALL_STATE(104)] = 4653,
  [SMALL_STATE(105)] = 4679,
  [SMALL_STATE(106)] = 4705,
  [SMALL_STATE(107)] = 4731,
  [SMALL_STATE(108)] = 4761,
  [SMALL_STATE(109)] = 4791,
  [SMALL_STATE(110)] = 4817,
  [SMALL_STATE(111)] = 4843,
  [SMALL_STATE(112)] = 4873,
  [SMALL_STATE(113)] = 4903,
  [SMALL_STATE(114)] = 4931,
  [SMALL_STATE(115)] = 4961,
  [SMALL_STATE(116)] = 4991,
  [SMALL_STATE(117)] = 5017,
  [SMALL_STATE(118)] = 5047,
  [SMALL_STATE(119)] = 5073,
  [SMALL_STATE(120)] = 5103,
  [SMALL_STATE(121)] = 5129,
  [SMALL_STATE(122)] = 5159,
  [SMALL_STATE(123)] = 5185,
  [SMALL_STATE(124)] = 5211,
  [SMALL_STATE(125)] = 5237,
  [SMALL_STATE(126)] = 5263,
  [SMALL_STATE(127)] = 5289,
  [SMALL_STATE(128)] = 5315,
  [SMALL_STATE(129)] = 5341,
  [SMALL_STATE(130)] = 5371,
  [SMALL_STATE(131)] = 5399,
  [SMALL_STATE(132)] = 5425,
  [SMALL_STATE(133)] = 5455,
  [SMALL_STATE(134)] = 5481,
  [SMALL_STATE(135)] = 5507,
  [SMALL_STATE(136)] = 5533,
  [SMALL_STATE(137)] = 5561,
  [SMALL_STATE(138)] = 5587,
  [SMALL_STATE(139)] = 5613,
  [SMALL_STATE(140)] = 5639,
  [SMALL_STATE(141)] = 5665,
  [SMALL_STATE(142)] = 5695,
  [SMALL_STATE(143)] = 5721,
  [SMALL_STATE(144)] = 5749,
  [SMALL_STATE(145)] = 5775,
  [SMALL_STATE(146)] = 5801,
  [SMALL_STATE(147)] = 5829,
  [SMALL_STATE(148)] = 5857,
  [SMALL_STATE(149)] = 5885,
  [SMALL_STATE(150)] = 5911,
  [SMALL_STATE(151)] = 5940,
  [SMALL_STATE(152)] = 5967,
  [SMALL_STATE(153)] = 5992,
  [SMALL_STATE(154)] = 6017,
  [SMALL_STATE(155)] = 6042,
  [SMALL_STATE(156)] = 6071,
  [SMALL_STATE(157)] = 6096,
  [SMALL_STATE(158)] = 6125,
  [SMALL_STATE(159)] = 6154,
  [SMALL_STATE(160)] = 6179,
  [SMALL_STATE(161)] = 6204,
  [SMALL_STATE(162)] = 6229,
  [SMALL_STATE(163)] = 6258,
  [SMALL_STATE(164)] = 6283,
  [SMALL_STATE(165)] = 6312,
  [SMALL_STATE(166)] = 6341,
  [SMALL_STATE(167)] = 6370,
  [SMALL_STATE(168)] = 6399,
  [SMALL_STATE(169)] = 6424,
  [SMALL_STATE(170)] = 6453,
  [SMALL_STATE(171)] = 6478,
  [SMALL_STATE(172)] = 6505,
  [SMALL_STATE(173)] = 6532,
  [SMALL_STATE(174)] = 6559,
  [SMALL_STATE(175)] = 6584,
  [SMALL_STATE(176)] = 6613,
  [SMALL_STATE(177)] = 6638,
  [SMALL_STATE(178)] = 6663,
  [SMALL_STATE(179)] = 6688,
  [SMALL_STATE(180)] = 6715,
  [SMALL_STATE(181)] = 6740,
  [SMALL_STATE(182)] = 6765,
  [SMALL_STATE(183)] = 6790,
  [SMALL_STATE(184)] = 6815,
  [SMALL_STATE(185)] = 6840,
  [SMALL_STATE(186)] = 6867,
  [SMALL_STATE(187)] = 6892,
  [SMALL_STATE(188)] = 6917,
  [SMALL_STATE(189)] = 6944,
  [SMALL_STATE(190)] = 6969,
  [SMALL_STATE(191)] = 6994,
  [SMALL_STATE(192)] = 7021,
  [SMALL_STATE(193)] = 7046,
  [SMALL_STATE(194)] = 7071,
  [SMALL_STATE(195)] = 7096,
  [SMALL_STATE(196)] = 7121,
  [SMALL_STATE(197)] = 7150,
  [SMALL_STATE(198)] = 7177,
  [SMALL_STATE(199)] = 7202,
  [SMALL_STATE(200)] = 7227,
  [SMALL_STATE(201)] = 7252,
  [SMALL_STATE(202)] = 7277,
  [SMALL_STATE(203)] = 7306,
  [SMALL_STATE(204)] = 7331,
  [SMALL_STATE(205)] = 7356,
  [SMALL_STATE(206)] = 7381,
  [SMALL_STATE(207)] = 7406,
  [SMALL_STATE(208)] = 7431,
  [SMALL_STATE(209)] = 7456,
  [SMALL_STATE(210)] = 7481,
  [SMALL_STATE(211)] = 7506,
  [SMALL_STATE(212)] = 7531,
  [SMALL_STATE(213)] = 7556,
  [SMALL_STATE(214)] = 7580,
  [SMALL_STATE(215)] = 7608,
  [SMALL_STATE(216)] = 7632,
  [SMALL_STATE(217)] = 7656,
  [SMALL_STATE(218)] = 7684,
  [SMALL_STATE(219)] = 7710,
  [SMALL_STATE(220)] = 7734,
  [SMALL_STATE(221)] = 7758,
  [SMALL_STATE(222)] = 7786,
  [SMALL_STATE(223)] = 7814,
  [SMALL_STATE(224)] = 7842,
  [SMALL_STATE(225)] = 7866,
  [SMALL_STATE(226)] = 7890,
  [SMALL_STATE(227)] = 7918,
  [SMALL_STATE(228)] = 7942,
  [SMALL_STATE(229)] = 7966,
  [SMALL_STATE(230)] = 7994,
  [SMALL_STATE(231)] = 8020,
  [SMALL_STATE(232)] = 8046,
  [SMALL_STATE(233)] = 8070,
  [SMALL_STATE(234)] = 8094,
  [SMALL_STATE(235)] = 8118,
  [SMALL_STATE(236)] = 8144,
  [SMALL_STATE(237)] = 8168,
  [SMALL_STATE(238)] = 8192,
  [SMALL_STATE(239)] = 8220,
  [SMALL_STATE(240)] = 8244,
  [SMALL_STATE(241)] = 8268,
  [SMALL_STATE(242)] = 8294,
  [SMALL_STATE(243)] = 8318,
  [SMALL_STATE(244)] = 8342,
  [SMALL_STATE(245)] = 8366,
  [SMALL_STATE(246)] = 8390,
  [SMALL_STATE(247)] = 8416,
  [SMALL_STATE(248)] = 8440,
  [SMALL_STATE(249)] = 8466,
  [SMALL_STATE(250)] = 8490,
  [SMALL_STATE(251)] = 8514,
  [SMALL_STATE(252)] = 8538,
  [SMALL_STATE(253)] = 8566,
  [SMALL_STATE(254)] = 8594,
  [SMALL_STATE(255)] = 8618,
  [SMALL_STATE(256)] = 8644,
  [SMALL_STATE(257)] = 8667,
  [SMALL_STATE(258)] = 8690,
  [SMALL_STATE(259)] = 8713,
  [SMALL_STATE(260)] = 8736,
  [SMALL_STATE(261)] = 8759,
  [SMALL_STATE(262)] = 8782,
  [SMALL_STATE(263)] = 8805,
  [SMALL_STATE(264)] = 8828,
  [SMALL_STATE(265)] = 8853,
  [SMALL_STATE(266)] = 8876,
  [SMALL_STATE(267)] = 8899,
  [SMALL_STATE(268)] = 8922,
  [SMALL_STATE(269)] = 8945,
  [SMALL_STATE(270)] = 8970,
  [SMALL_STATE(271)] = 8993,
  [SMALL_STATE(272)] = 9016,
  [SMALL_STATE(273)] = 9041,
  [SMALL_STATE(274)] = 9066,
  [SMALL_STATE(275)] = 9089,
  [SMALL_STATE(276)] = 9114,
  [SMALL_STATE(277)] = 9137,
  [SMALL_STATE(278)] = 9160,
  [SMALL_STATE(279)] = 9183,
  [SMALL_STATE(280)] = 9206,
  [SMALL_STATE(281)] = 9229,
  [SMALL_STATE(282)] = 9254,
  [SMALL_STATE(283)] = 9277,
  [SMALL_STATE(284)] = 9300,
  [SMALL_STATE(285)] = 9325,
  [SMALL_STATE(286)] = 9347,
  [SMALL_STATE(287)] = 9369,
  [SMALL_STATE(288)] = 9391,
  [SMALL_STATE(289)] = 9413,
  [SMALL_STATE(290)] = 9435,
  [SMALL_STATE(291)] = 9457,
  [SMALL_STATE(292)] = 9479,
  [SMALL_STATE(293)] = 9501,
  [SMALL_STATE(294)] = 9523,
  [SMALL_STATE(295)] = 9545,
  [SMALL_STATE(296)] = 9567,
  [SMALL_STATE(297)] = 9589,
  [SMALL_STATE(298)] = 9611,
  [SMALL_STATE(299)] = 9633,
  [SMALL_STATE(300)] = 9655,
  [SMALL_STATE(301)] = 9677,
  [SMALL_STATE(302)] = 9699,
  [SMALL_STATE(303)] = 9721,
  [SMALL_STATE(304)] = 9743,
  [SMALL_STATE(305)] = 9765,
  [SMALL_STATE(306)] = 9787,
  [SMALL_STATE(307)] = 9824,
  [SMALL_STATE(308)] = 9861,
  [SMALL_STATE(309)] = 9898,
  [SMALL_STATE(310)] = 9935,
  [SMALL_STATE(311)] = 9972,
  [SMALL_STATE(312)] = 10009,
  [SMALL_STATE(313)] = 10046,
  [SMALL_STATE(314)] = 10083,
  [SMALL_STATE(315)] = 10120,
  [SMALL_STATE(316)] = 10157,
  [SMALL_STATE(317)] = 10194,
  [SMALL_STATE(318)] = 10231,
  [SMALL_STATE(319)] = 10268,
  [SMALL_STATE(320)] = 10305,
  [SMALL_STATE(321)] = 10330,
  [SMALL_STATE(322)] = 10355,
  [SMALL_STATE(323)] = 10380,
  [SMALL_STATE(324)] = 10405,
  [SMALL_STATE(325)] = 10424,
  [SMALL_STATE(326)] = 10449,
  [SMALL_STATE(327)] = 10473,
  [SMALL_STATE(328)] = 10497,
  [SMALL_STATE(329)] = 10521,
  [SMALL_STATE(330)] = 10545,
  [SMALL_STATE(331)] = 10569,
  [SMALL_STATE(332)] = 10593,
  [SMALL_STATE(333)] = 10617,
  [SMALL_STATE(334)] = 10641,
  [SMALL_STATE(335)] = 10665,
  [SMALL_STATE(336)] = 10689,
  [SMALL_STATE(337)] = 10713,
  [SMALL_STATE(338)] = 10737,
  [SMALL_STATE(339)] = 10761,
  [SMALL_STATE(340)] = 10785,
  [SMALL_STATE(341)] = 10808,
  [SMALL_STATE(342)] = 10831,
  [SMALL_STATE(343)] = 10854,
  [SMALL_STATE(344)] = 10879,
  [SMALL_STATE(345)] = 10902,
  [SMALL_STATE(346)] = 10925,
  [SMALL_STATE(347)] = 10948,
  [SMALL_STATE(348)] = 10971,
  [SMALL_STATE(349)] = 10994,
  [SMALL_STATE(350)] = 11017,
  [SMALL_STATE(351)] = 11040,
  [SMALL_STATE(352)] = 11063,
  [SMALL_STATE(353)] = 11086,
  [SMALL_STATE(354)] = 11109,
  [SMALL_STATE(355)] = 11132,
  [SMALL_STATE(356)] = 11155,
  [SMALL_STATE(357)] = 11171,
  [SMALL_STATE(358)] = 11185,
  [SMALL_STATE(359)] = 11205,
  [SMALL_STATE(360)] = 11219,
  [SMALL_STATE(361)] = 11239,
  [SMALL_STATE(362)] = 11253,
  [SMALL_STATE(363)] = 11273,
  [SMALL_STATE(364)] = 11287,
  [SMALL_STATE(365)] = 11307,
  [SMALL_STATE(366)] = 11327,
  [SMALL_STATE(367)] = 11341,
  [SMALL_STATE(368)] = 11361,
  [SMALL_STATE(369)] = 11377,
  [SMALL_STATE(370)] = 11397,
  [SMALL_STATE(371)] = 11417,
  [SMALL_STATE(372)] = 11437,
  [SMALL_STATE(373)] = 11453,
  [SMALL_STATE(374)] = 11473,
  [SMALL_STATE(375)] = 11493,
  [SMALL_STATE(376)] = 11513,
  [SMALL_STATE(377)] = 11529,
  [SMALL_STATE(378)] = 11549,
  [SMALL_STATE(379)] = 11569,
  [SMALL_STATE(380)] = 11589,
  [SMALL_STATE(381)] = 11609,
  [SMALL_STATE(382)] = 11625,
  [SMALL_STATE(383)] = 11645,
  [SMALL_STATE(384)] = 11665,
  [SMALL_STATE(385)] = 11685,
  [SMALL_STATE(386)] = 11705,
  [SMALL_STATE(387)] = 11725,
  [SMALL_STATE(388)] = 11745,
  [SMALL_STATE(389)] = 11765,
  [SMALL_STATE(390)] = 11785,
  [SMALL_STATE(391)] = 11801,
  [SMALL_STATE(392)] = 11821,
  [SMALL_STATE(393)] = 11841,
  [SMALL_STATE(394)] = 11861,
  [SMALL_STATE(395)] = 11881,
  [SMALL_STATE(396)] = 11901,
  [SMALL_STATE(397)] = 11921,
  [SMALL_STATE(398)] = 11935,
  [SMALL_STATE(399)] = 11955,
  [SMALL_STATE(400)] = 11971,
  [SMALL_STATE(401)] = 11991,
  [SMALL_STATE(402)] = 12007,
  [SMALL_STATE(403)] = 12027,
  [SMALL_STATE(404)] = 12047,
  [SMALL_STATE(405)] = 12067,
  [SMALL_STATE(406)] = 12087,
  [SMALL_STATE(407)] = 12107,
  [SMALL_STATE(408)] = 12123,
  [SMALL_STATE(409)] = 12143,
  [SMALL_STATE(410)] = 12163,
  [SMALL_STATE(411)] = 12183,
  [SMALL_STATE(412)] = 12203,
  [SMALL_STATE(413)] = 12223,
  [SMALL_STATE(414)] = 12243,
  [SMALL_STATE(415)] = 12263,
  [SMALL_STATE(416)] = 12283,
  [SMALL_STATE(417)] = 12303,
  [SMALL_STATE(418)] = 12323,
  [SMALL_STATE(419)] = 12340,
  [SMALL_STATE(420)] = 12357,
  [SMALL_STATE(421)] = 12370,
  [SMALL_STATE(422)] = 12381,
  [SMALL_STATE(423)] = 12398,
  [SMALL_STATE(424)] = 12415,
  [SMALL_STATE(425)] = 12426,
  [SMALL_STATE(426)] = 12439,
  [SMALL_STATE(427)] = 12456,
  [SMALL_STATE(428)] = 12473,
  [SMALL_STATE(429)] = 12490,
  [SMALL_STATE(430)] = 12507,
  [SMALL_STATE(431)] = 12520,
  [SMALL_STATE(432)] = 12535,
  [SMALL_STATE(433)] = 12546,
  [SMALL_STATE(434)] = 12559,
  [SMALL_STATE(435)] = 12576,
  [SMALL_STATE(436)] = 12593,
  [SMALL_STATE(437)] = 12608,
  [SMALL_STATE(438)] = 12625,
  [SMALL_STATE(439)] = 12642,
  [SMALL_STATE(440)] = 12659,
  [SMALL_STATE(441)] = 12672,
  [SMALL_STATE(442)] = 12689,
  [SMALL_STATE(443)] = 12706,
  [SMALL_STATE(444)] = 12719,
  [SMALL_STATE(445)] = 12736,
  [SMALL_STATE(446)] = 12747,
  [SMALL_STATE(447)] = 12760,
  [SMALL_STATE(448)] = 12777,
  [SMALL_STATE(449)] = 12794,
  [SMALL_STATE(450)] = 12811,
  [SMALL_STATE(451)] = 12824,
  [SMALL_STATE(452)] = 12841,
  [SMALL_STATE(453)] = 12858,
  [SMALL_STATE(454)] = 12866,
  [SMALL_STATE(455)] = 12880,
  [SMALL_STATE(456)] = 12888,
  [SMALL_STATE(457)] = 12896,
  [SMALL_STATE(458)] = 12904,
  [SMALL_STATE(459)] = 12916,
  [SMALL_STATE(460)] = 12924,
  [SMALL_STATE(461)] = 12932,
  [SMALL_STATE(462)] = 12940,
  [SMALL_STATE(463)] = 12948,
  [SMALL_STATE(464)] = 12956,
  [SMALL_STATE(465)] = 12970,
  [SMALL_STATE(466)] = 12978,
  [SMALL_STATE(467)] = 12992,
  [SMALL_STATE(468)] = 13002,
  [SMALL_STATE(469)] = 13016,
  [SMALL_STATE(470)] = 13024,
  [SMALL_STATE(471)] = 13038,
  [SMALL_STATE(472)] = 13046,
  [SMALL_STATE(473)] = 13054,
  [SMALL_STATE(474)] = 13063,
  [SMALL_STATE(475)] = 13076,
  [SMALL_STATE(476)] = 13085,
  [SMALL_STATE(477)] = 13098,
  [SMALL_STATE(478)] = 13107,
  [SMALL_STATE(479)] = 13116,
  [SMALL_STATE(480)] = 13129,
  [SMALL_STATE(481)] = 13138,
  [SMALL_STATE(482)] = 13151,
  [SMALL_STATE(483)] = 13160,
  [SMALL_STATE(484)] = 13169,
  [SMALL_STATE(485)] = 13182,
  [SMALL_STATE(486)] = 13191,
  [SMALL_STATE(487)] = 13200,
  [SMALL_STATE(488)] = 13209,
  [SMALL_STATE(489)] = 13222,
  [SMALL_STATE(490)] = 13231,
  [SMALL_STATE(491)] = 13244,
  [SMALL_STATE(492)] = 13253,
  [SMALL_STATE(493)] = 13262,
  [SMALL_STATE(494)] = 13271,
  [SMALL_STATE(495)] = 13280,
  [SMALL_STATE(496)] = 13293,
  [SMALL_STATE(497)] = 13306,
  [SMALL_STATE(498)] = 13315,
  [SMALL_STATE(499)] = 13324,
  [SMALL_STATE(500)] = 13333,
  [SMALL_STATE(501)] = 13342,
  [SMALL_STATE(502)] = 13351,
  [SMALL_STATE(503)] = 13362,
  [SMALL_STATE(504)] = 13375,
  [SMALL_STATE(505)] = 13384,
  [SMALL_STATE(506)] = 13393,
  [SMALL_STATE(507)] = 13406,
  [SMALL_STATE(508)] = 13419,
  [SMALL_STATE(509)] = 13428,
  [SMALL_STATE(510)] = 13437,
  [SMALL_STATE(511)] = 13446,
  [SMALL_STATE(512)] = 13455,
  [SMALL_STATE(513)] = 13461,
  [SMALL_STATE(514)] = 13471,
  [SMALL_STATE(515)] = 13481,
  [SMALL_STATE(516)] = 13489,
  [SMALL_STATE(517)] = 13499,
  [SMALL_STATE(518)] = 13507,
  [SMALL_STATE(519)] = 13517,
  [SMALL_STATE(520)] = 13525,
  [SMALL_STATE(521)] = 13533,
  [SMALL_STATE(522)] = 13541,
  [SMALL_STATE(523)] = 13549,
  [SMALL_STATE(524)] = 13555,
  [SMALL_STATE(525)] = 13565,
  [SMALL_STATE(526)] = 13575,
  [SMALL_STATE(527)] = 13583,
  [SMALL_STATE(528)] = 13593,
  [SMALL_STATE(529)] = 13601,
  [SMALL_STATE(530)] = 13611,
  [SMALL_STATE(531)] = 13621,
  [SMALL_STATE(532)] = 13629,
  [SMALL_STATE(533)] = 13639,
  [SMALL_STATE(534)] = 13647,
  [SMALL_STATE(535)] = 13657,
  [SMALL_STATE(536)] = 13667,
  [SMALL_STATE(537)] = 13673,
  [SMALL_STATE(538)] = 13683,
  [SMALL_STATE(539)] = 13693,
  [SMALL_STATE(540)] = 13703,
  [SMALL_STATE(541)] = 13711,
  [SMALL_STATE(542)] = 13721,
  [SMALL_STATE(543)] = 13731,
  [SMALL_STATE(544)] = 13741,
  [SMALL_STATE(545)] = 13751,
  [SMALL_STATE(546)] = 13761,
  [SMALL_STATE(547)] = 13771,
  [SMALL_STATE(548)] = 13781,
  [SMALL_STATE(549)] = 13791,
  [SMALL_STATE(550)] = 13799,
  [SMALL_STATE(551)] = 13809,
  [SMALL_STATE(552)] = 13819,
  [SMALL_STATE(553)] = 13829,
  [SMALL_STATE(554)] = 13837,
  [SMALL_STATE(555)] = 13845,
  [SMALL_STATE(556)] = 13855,
  [SMALL_STATE(557)] = 13861,
  [SMALL_STATE(558)] = 13871,
  [SMALL_STATE(559)] = 13877,
  [SMALL_STATE(560)] = 13883,
  [SMALL_STATE(561)] = 13889,
  [SMALL_STATE(562)] = 13896,
  [SMALL_STATE(563)] = 13903,
  [SMALL_STATE(564)] = 13910,
  [SMALL_STATE(565)] = 13917,
  [SMALL_STATE(566)] = 13924,
  [SMALL_STATE(567)] = 13931,
  [SMALL_STATE(568)] = 13938,
  [SMALL_STATE(569)] = 13945,
  [SMALL_STATE(570)] = 13952,
  [SMALL_STATE(571)] = 13959,
  [SMALL_STATE(572)] = 13966,
  [SMALL_STATE(573)] = 13973,
  [SMALL_STATE(574)] = 13980,
  [SMALL_STATE(575)] = 13987,
  [SMALL_STATE(576)] = 13994,
  [SMALL_STATE(577)] = 14001,
  [SMALL_STATE(578)] = 14008,
  [SMALL_STATE(579)] = 14015,
  [SMALL_STATE(580)] = 14022,
  [SMALL_STATE(581)] = 14029,
  [SMALL_STATE(582)] = 14036,
  [SMALL_STATE(583)] = 14043,
  [SMALL_STATE(584)] = 14050,
  [SMALL_STATE(585)] = 14057,
  [SMALL_STATE(586)] = 14064,
  [SMALL_STATE(587)] = 14071,
  [SMALL_STATE(588)] = 14078,
  [SMALL_STATE(589)] = 14085,
  [SMALL_STATE(590)] = 14092,
  [SMALL_STATE(591)] = 14099,
  [SMALL_STATE(592)] = 14106,
  [SMALL_STATE(593)] = 14113,
  [SMALL_STATE(594)] = 14120,
  [SMALL_STATE(595)] = 14127,
  [SMALL_STATE(596)] = 14134,
  [SMALL_STATE(597)] = 14138,
  [SMALL_STATE(598)] = 14142,
  [SMALL_STATE(599)] = 14146,
  [SMALL_STATE(600)] = 14150,
  [SMALL_STATE(601)] = 14154,
  [SMALL_STATE(602)] = 14158,
  [SMALL_STATE(603)] = 14162,
  [SMALL_STATE(604)] = 14166,
  [SMALL_STATE(605)] = 14170,
  [SMALL_STATE(606)] = 14174,
  [SMALL_STATE(607)] = 14178,
  [SMALL_STATE(608)] = 14182,
  [SMALL_STATE(609)] = 14186,
  [SMALL_STATE(610)] = 14190,
  [SMALL_STATE(611)] = 14194,
  [SMALL_STATE(612)] = 14198,
  [SMALL_STATE(613)] = 14202,
  [SMALL_STATE(614)] = 14206,
  [SMALL_STATE(615)] = 14210,
  [SMALL_STATE(616)] = 14214,
  [SMALL_STATE(617)] = 14218,
  [SMALL_STATE(618)] = 14222,
  [SMALL_STATE(619)] = 14226,
  [SMALL_STATE(620)] = 14230,
  [SMALL_STATE(621)] = 14234,
  [SMALL_STATE(622)] = 14238,
  [SMALL_STATE(623)] = 14242,
  [SMALL_STATE(624)] = 14246,
  [SMALL_STATE(625)] = 14250,
  [SMALL_STATE(626)] = 14254,
  [SMALL_STATE(627)] = 14258,
  [SMALL_STATE(628)] = 14262,
  [SMALL_STATE(629)] = 14266,
  [SMALL_STATE(630)] = 14270,
  [SMALL_STATE(631)] = 14274,
  [SMALL_STATE(632)] = 14278,
  [SMALL_STATE(633)] = 14282,
  [SMALL_STATE(634)] = 14286,
  [SMALL_STATE(635)] = 14290,
  [SMALL_STATE(636)] = 14294,
  [SMALL_STATE(637)] = 14298,
  [SMALL_STATE(638)] = 14302,
  [SMALL_STATE(639)] = 14306,
  [SMALL_STATE(640)] = 14310,
  [SMALL_STATE(641)] = 14314,
  [SMALL_STATE(642)] = 14318,
  [SMALL_STATE(643)] = 14322,
  [SMALL_STATE(644)] = 14326,
  [SMALL_STATE(645)] = 14330,
  [SMALL_STATE(646)] = 14334,
  [SMALL_STATE(647)] = 14338,
  [SMALL_STATE(648)] = 14342,
  [SMALL_STATE(649)] = 14346,
  [SMALL_STATE(650)] = 14350,
  [SMALL_STATE(651)] = 14354,
  [SMALL_STATE(652)] = 14358,
  [SMALL_STATE(653)] = 14362,
  [SMALL_STATE(654)] = 14366,
  [SMALL_STATE(655)] = 14370,
  [SMALL_STATE(656)] = 14374,
  [SMALL_STATE(657)] = 14378,
  [SMALL_STATE(658)] = 14382,
  [SMALL_STATE(659)] = 14386,
  [SMALL_STATE(660)] = 14390,
  [SMALL_STATE(661)] = 14394,
  [SMALL_STATE(662)] = 14398,
  [SMALL_STATE(663)] = 14402,
  [SMALL_STATE(664)] = 14406,
  [SMALL_STATE(665)] = 14410,
  [SMALL_STATE(666)] = 14414,
  [SMALL_STATE(667)] = 14418,
  [SMALL_STATE(668)] = 14422,
  [SMALL_STATE(669)] = 14426,
  [SMALL_STATE(670)] = 14430,
  [SMALL_STATE(671)] = 14434,
  [SMALL_STATE(672)] = 14438,
  [SMALL_STATE(673)] = 14442,
  [SMALL_STATE(674)] = 14446,
  [SMALL_STATE(675)] = 14450,
  [SMALL_STATE(676)] = 14454,
  [SMALL_STATE(677)] = 14458,
  [SMALL_STATE(678)] = 14462,
  [SMALL_STATE(679)] = 14466,
  [SMALL_STATE(680)] = 14470,
  [SMALL_STATE(681)] = 14474,
  [SMALL_STATE(682)] = 14478,
  [SMALL_STATE(683)] = 14482,
  [SMALL_STATE(684)] = 14486,
  [SMALL_STATE(685)] = 14490,
  [SMALL_STATE(686)] = 14494,
  [SMALL_STATE(687)] = 14498,
  [SMALL_STATE(688)] = 14502,
  [SMALL_STATE(689)] = 14506,
  [SMALL_STATE(690)] = 14510,
  [SMALL_STATE(691)] = 14514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(536),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(396),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(566),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(566),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(615),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(674),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(551),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(552),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(682),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(575),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(575),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(306),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(306),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(627),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(523),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(386),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(563),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(563),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(596),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(678),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(548),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(547),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(685),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(591),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(591),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(315),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(315),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(637),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(558),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(410),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(568),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(568),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(598),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(555),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(539),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(675),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(577),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(577),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(314),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(314),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(599),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(556),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(365),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(567),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(567),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(608),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(524),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(525),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(679),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(576),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(576),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(311),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(311),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(616),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(33),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(559),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(364),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(593),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(593),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(634),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(636),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(538),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(542),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(618),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(565),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(565),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(666),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(638),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(51),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(604),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(81),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(87),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(85),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(306),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(306),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(143),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(64),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(73),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(312),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(312),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(125),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(124),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(315),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(315),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(197),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(181),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(126),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(249),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(248),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(244),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(209),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(230),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(254),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(511),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(321),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(324),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(436),
  [1069] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(647),
  [1072] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(597),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(310),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(376),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(436),
  [1206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(647),
  [1209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(597),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(649),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(436),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(645),
  [1331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(560),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1608] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
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
