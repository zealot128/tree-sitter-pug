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
#define STATE_COUNT 925
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 2
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_doctype = 1,
  anon_sym_html = 2,
  anon_sym_strict = 3,
  anon_sym_xml = 4,
  anon_sym_PIPE = 5,
  anon_sym_block = 6,
  anon_sym_append = 7,
  anon_sym_prepend = 8,
  anon_sym_extends = 9,
  aux_sym_extends_token1 = 10,
  anon_sym_COLON = 11,
  sym_filter_name = 12,
  aux_sym_filter_content_token1 = 13,
  aux_sym_filter_content_token2 = 14,
  anon_sym_unless = 15,
  anon_sym_if = 16,
  anon_sym_elseif = 17,
  anon_sym_else = 18,
  anon_sym_case = 19,
  anon_sym_when = 20,
  aux_sym__when_keyword_token1 = 21,
  anon_sym_default = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_EQ = 24,
  anon_sym_script_DOT = 25,
  aux_sym_script_block_token1 = 26,
  anon_sym_SLASH = 27,
  anon_sym_ = 28,
  anon_sym_DOT = 29,
  anon_sym_LPAREN = 30,
  anon_sym_COMMA = 31,
  anon_sym_RPAREN = 32,
  aux_sym__ternary_attribute_value_token1 = 33,
  aux_sym__variable_attribute_value_token1 = 34,
  aux_sym__object_attribute_value_token1 = 35,
  aux_sym__template_attribute_value_token1 = 36,
  aux_sym__array_attribute_value_token1 = 37,
  aux_sym__attribute_token1 = 38,
  anon_sym_SLASH_SLASH = 39,
  anon_sym_SLASH_SLASH_DASH = 40,
  sym_tag_name = 41,
  sym_class = 42,
  sym_id = 43,
  aux_sym_angular_attribute_name_token1 = 44,
  aux_sym_angular_attribute_name_token2 = 45,
  aux_sym_angular_attribute_name_token3 = 46,
  sym_attribute_name = 47,
  anon_sym_SQUOTE = 48,
  aux_sym_quoted_javascript_token1 = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_quoted_javascript_token2 = 51,
  aux_sym_content_token1 = 52,
  anon_sym_POUND = 53,
  anon_sym_LBRACE = 54,
  anon_sym_POUND_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_LBRACE_LBRACE = 57,
  anon_sym_RBRACE_RBRACE = 58,
  sym__delimited_javascript = 59,
  sym__un_delimited_javascript_line = 60,
  anon_sym_DASH = 61,
  aux_sym_unbuffered_code_token1 = 62,
  sym__newline = 63,
  sym__indent = 64,
  sym__dedent = 65,
  sym_source_file = 66,
  sym_doctype = 67,
  sym_pipe = 68,
  sym__block_content = 69,
  sym_block_definition = 70,
  sym_block_append = 71,
  sym_block_prepend = 72,
  sym_extends = 73,
  sym_filter = 74,
  sym_filter_content = 75,
  sym_conditional = 76,
  sym_case = 77,
  sym__when_content = 78,
  sym__dummy_tag = 79,
  sym__when_keyword = 80,
  sym_when = 81,
  sym_unescaped_buffered_code = 82,
  sym_buffered_code = 83,
  sym_script_block = 84,
  sym_tag = 85,
  sym__content_after_dot = 86,
  sym_attributes = 87,
  sym_attribute = 88,
  sym__ternary_attribute_value = 89,
  sym__string_attribute_value = 90,
  sym__variable_attribute_value = 91,
  sym__object_attribute_value = 92,
  sym__template_attribute_value = 93,
  sym__array_attribute_value = 94,
  sym__attribute = 95,
  sym__angular_attribute = 96,
  sym_children = 97,
  sym__children_choice = 98,
  sym_comment = 99,
  sym__comment = 100,
  sym__comment_not_first_line = 101,
  sym_angular_attribute_name = 102,
  sym_quoted_javascript = 103,
  sym_quoted_attribute_value = 104,
  sym_content = 105,
  sym__comment_content = 106,
  aux_sym__content_or_javascript = 107,
  sym__un_delimited_javascript = 108,
  aux_sym__un_delimited_javascript_multiline = 109,
  sym__single_line_buf_code = 110,
  sym__multi_line_buf_code = 111,
  sym_unbuffered_code = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_filter_content_repeat1 = 114,
  aux_sym_case_repeat1 = 115,
  aux_sym_script_block_repeat1 = 116,
  aux_sym_tag_repeat1 = 117,
  aux_sym__content_after_dot_repeat1 = 118,
  aux_sym_attributes_repeat1 = 119,
  aux_sym__attribute_repeat1 = 120,
  aux_sym_children_repeat1 = 121,
  aux_sym__comment_repeat1 = 122,
  aux_sym_content_repeat1 = 123,
  aux_sym__single_line_buf_code_repeat1 = 124,
  alias_sym_attribute_value = 125,
  alias_sym_block_name = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_block] = "block",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_extends] = "extends",
  [aux_sym_extends_token1] = "filename",
  [anon_sym_COLON] = ":",
  [sym_filter_name] = "filter_name",
  [aux_sym_filter_content_token1] = "filter_content_token1",
  [aux_sym_filter_content_token2] = "filter_content_token2",
  [anon_sym_unless] = "unless",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
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
  [sym__block_content] = "_block_content",
  [sym_block_definition] = "block_definition",
  [sym_block_append] = "block_append",
  [sym_block_prepend] = "block_prepend",
  [sym_extends] = "extends",
  [sym_filter] = "filter",
  [sym_filter_content] = "content",
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
  [sym__comment_content] = "_comment_content",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym__un_delimited_javascript] = "javascript",
  [aux_sym__un_delimited_javascript_multiline] = "_un_delimited_javascript_multiline",
  [sym__single_line_buf_code] = "_single_line_buf_code",
  [sym__multi_line_buf_code] = "_multi_line_buf_code",
  [sym_unbuffered_code] = "unbuffered_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_filter_content_repeat1] = "filter_content_repeat1",
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
  [alias_sym_block_name] = "block_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_extends] = anon_sym_extends,
  [aux_sym_extends_token1] = aux_sym_extends_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_filter_name] = sym_filter_name,
  [aux_sym_filter_content_token1] = aux_sym_filter_content_token1,
  [aux_sym_filter_content_token2] = aux_sym_filter_content_token2,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
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
  [sym__block_content] = sym__block_content,
  [sym_block_definition] = sym_block_definition,
  [sym_block_append] = sym_block_append,
  [sym_block_prepend] = sym_block_prepend,
  [sym_extends] = sym_extends,
  [sym_filter] = sym_filter,
  [sym_filter_content] = sym_content,
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
  [sym__comment_content] = sym__comment_content,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym__un_delimited_javascript] = aux_sym__when_keyword_token1,
  [aux_sym__un_delimited_javascript_multiline] = aux_sym__un_delimited_javascript_multiline,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
  [sym__multi_line_buf_code] = sym__multi_line_buf_code,
  [sym_unbuffered_code] = sym_unbuffered_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_filter_content_repeat1] = aux_sym_filter_content_repeat1,
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
  [alias_sym_block_name] = alias_sym_block_name,
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
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_extends_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_filter_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filter_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_content_token2] = {
    .visible = false,
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
  [sym__block_content] = {
    .visible = false,
    .named = true,
  },
  [sym_block_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block_append] = {
    .visible = true,
    .named = true,
  },
  [sym_block_prepend] = {
    .visible = true,
    .named = true,
  },
  [sym_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_content] = {
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
  [sym__comment_content] = {
    .visible = false,
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
  [aux_sym_filter_content_repeat1] = {
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
  [alias_sym_block_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_block_name,
  },
  [2] = {
    [1] = aux_sym__when_keyword_token1,
  },
  [3] = {
    [3] = aux_sym__when_keyword_token1,
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
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(770);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '}') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '`') ADVANCE(619);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '`') ADVANCE(620);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(328);
      if (lookahead == '`') ADVANCE(624);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == ']') ADVANCE(626);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == ']') ADVANCE(627);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(332);
      if (lookahead == ']') ADVANCE(630);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(158);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(333);
      if (lookahead == ']') ADVANCE(631);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(159);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == ']') ADVANCE(632);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(160);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(335);
      if (lookahead == ']') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(162);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '{') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0) ADVANCE(768);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(607);
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
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '}') ADVANCE(608);
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
          lookahead == '\'') ADVANCE(339);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(158);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(340);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(159);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(160);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(342);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(162);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(607);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '}') ADVANCE(608);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(339);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(158);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(340);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(159);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(160);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(342);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(162);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(346);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(347);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(348);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(349);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '`') ADVANCE(616);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(351);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '`') ADVANCE(618);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '`') ADVANCE(355);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(356);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(358);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(359);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(158);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(159);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(370);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(372);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(162);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(776);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(302);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(784);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(613);
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
      if (lookahead == '}') ADVANCE(614);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(764);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead == '?') ADVANCE(590);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '`') ADVANCE(596);
      if (lookahead == '{') ADVANCE(582);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(588);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(764);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead == '?') ADVANCE(594);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '`') ADVANCE(596);
      if (lookahead == '{') ADVANCE(582);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(588);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '\'') ADVANCE(759);
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
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0) ADVANCE(766);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(759);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0) ADVANCE(762);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(600);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(543);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(600);
      if (lookahead == '`') ADVANCE(622);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '?') ADVANCE(585);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(621);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(614);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(548);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(548);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(548);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(313);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(635);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == ']') ADVANCE(539);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(546);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(593);
      if (lookahead == '`') ADVANCE(595);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(596);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(597);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(584);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(623);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(172);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == ']') ADVANCE(628);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(625);
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
      if (lookahead == ']') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(615);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(539);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(190);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 157:
      if (lookahead == '}') ADVANCE(774);
      END_STATE();
    case 158:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 162:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 166:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(751);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 167:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 168:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 169:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 171:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(539);
      END_STATE();
    case 173:
      if (eof) ADVANCE(179);
      if (lookahead == '\n') SKIP(173)
      if (lookahead == '!') ADVANCE(780);
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == '.') ADVANCE(785);
      if (lookahead == '/') ADVANCE(779);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(668);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 'u') ADVANCE(703);
      if (lookahead == 'w') ADVANCE(683);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 174:
      if (eof) ADVANCE(179);
      if (lookahead == '\n') SKIP(174)
      if (lookahead == '!') ADVANCE(780);
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == '.') ADVANCE(785);
      if (lookahead == '/') ADVANCE(779);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 'u') ADVANCE(703);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 175:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(707);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(700);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '}') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 176:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(700);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 177:
      if (eof) ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(707);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(700);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(177)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 178:
      if (eof) ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(700);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(178)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_extends_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_filter_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_filter_content_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(216);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '-') ADVANCE(789);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == 'w') ADVANCE(238);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(216);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '-') ADVANCE(789);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '/') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'k') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'y') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(216);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '-') ADVANCE(789);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == 'w') ADVANCE(238);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(216);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '-') ADVANCE(789);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(782);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(635);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(751);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '`') ADVANCE(619);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '`') ADVANCE(620);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(328);
      if (lookahead == '`') ADVANCE(624);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == ']') ADVANCE(626);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == ']') ADVANCE(627);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(332);
      if (lookahead == ']') ADVANCE(630);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(158);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(333);
      if (lookahead == ']') ADVANCE(631);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(159);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == ']') ADVANCE(632);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(160);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(335);
      if (lookahead == ']') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(162);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(607);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '}') ADVANCE(608);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(339);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(158);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(340);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(159);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(160);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(342);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(162);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(346);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(347);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(348);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(349);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '`') ADVANCE(616);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(351);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '`') ADVANCE(618);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '`') ADVANCE(355);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(356);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(358);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(359);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '`') ADVANCE(370);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(435);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(435);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '?') ADVANCE(436);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '?') ADVANCE(436);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == '`') ADVANCE(370);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(370);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(372);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(376);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(380);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(382);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead == '?') ADVANCE(445);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(384);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead == '?') ADVANCE(445);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(386);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(374);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '(') ADVANCE(374);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(448);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(448);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(449);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(449);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '?') ADVANCE(450);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '?') ADVANCE(450);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(396);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(398);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(540);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(400);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(550);
      if (lookahead == ' ') ADVANCE(498);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(508);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(550);
      if (lookahead == ' ') ADVANCE(499);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(550);
      if (lookahead == ' ') ADVANCE(500);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(510);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == ']') ADVANCE(360);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(360);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead == ']') ADVANCE(362);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(362);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(465);
      if (lookahead == ']') ADVANCE(364);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(364);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == ']') ADVANCE(366);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(366);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(368);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == ']') ADVANCE(370);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(370);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(546);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == ']') ADVANCE(372);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(372);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == '(') ADVANCE(374);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == '[') ADVANCE(388);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == '[') ADVANCE(390);
      if (lookahead == ']') ADVANCE(390);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '[') ADVANCE(392);
      if (lookahead == ']') ADVANCE(392);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '[') ADVANCE(394);
      if (lookahead == ']') ADVANCE(394);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '[') ADVANCE(396);
      if (lookahead == ']') ADVANCE(396);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '`') ADVANCE(418);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(422);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead == '}') ADVANCE(419);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(360);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(420);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead == '}') ADVANCE(420);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(362);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '\'') ADVANCE(424);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(421);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '`') ADVANCE(421);
      if (lookahead == '}') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(364);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(422);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(366);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(423);
      if (lookahead == '?') ADVANCE(481);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead == '}') ADVANCE(423);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(368);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(424);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(424);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(370);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(548);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '?') ADVANCE(483);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead == '}') ADVANCE(425);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(372);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '(') ADVANCE(374);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '?') ADVANCE(484);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '}') ADVANCE(426);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(388);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(427);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '?') ADVANCE(485);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(390);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '?') ADVANCE(486);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead == '}') ADVANCE(428);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(392);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '?') ADVANCE(487);
      if (lookahead == '`') ADVANCE(432);
      if (lookahead == '}') ADVANCE(429);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(394);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '?') ADVANCE(488);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '}') ADVANCE(430);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(396);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '?') ADVANCE(489);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(398);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == '`') ADVANCE(432);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(400);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"') ADVANCE(433);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(159);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(160);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(162);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '`') ADVANCE(442);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(443);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(444);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(445);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(538);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '"') ADVANCE(447);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == '`') ADVANCE(449);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead == '(') ADVANCE(443);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead == '(') ADVANCE(444);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(159);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(160);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(558);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(453);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(162);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '`') ADVANCE(433);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(456);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(459);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '(') ADVANCE(457);
      if (lookahead == '`') ADVANCE(447);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(462);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '`') ADVANCE(450);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(433);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(434);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ']') ADVANCE(435);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(435);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(466);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ']') ADVANCE(436);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(436);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(467);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ']') ADVANCE(437);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(437);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(468);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ']') ADVANCE(438);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(438);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(469);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == ']') ADVANCE(439);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(439);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == ']') ADVANCE(447);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '[') ADVANCE(448);
      if (lookahead == ']') ADVANCE(448);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == ']') ADVANCE(449);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(443);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == ']') ADVANCE(450);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(474);
      if (lookahead == '(') ADVANCE(444);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(451);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(475);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '[') ADVANCE(452);
      if (lookahead == ']') ADVANCE(452);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(476);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(453);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(477);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(477);
      if (lookahead == '}') ADVANCE(477);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(433);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(478);
      if (lookahead == '}') ADVANCE(478);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(434);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(479);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(435);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(480);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(480);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(436);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(481);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(481);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(437);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(482);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(438);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(483);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == ',') ADVANCE(483);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(484);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(484);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(447);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(485);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(448);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(486);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(449);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(487);
      if (lookahead == '(') ADVANCE(443);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(487);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(450);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(488);
      if (lookahead == '(') ADVANCE(444);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(488);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(451);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(489);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(489);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(452);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(490);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(453);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(492);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(494);
      if (lookahead == '(') ADVANCE(443);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(495);
      if (lookahead == '(') ADVANCE(444);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(496);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(497);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(551);
      if (lookahead == ' ') ADVANCE(498);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '\'') ADVANCE(500);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(454);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(551);
      if (lookahead == ' ') ADVANCE(499);
      if (lookahead == '"') ADVANCE(500);
      if (lookahead == '\'') ADVANCE(499);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(455);
      if (lookahead == '`') ADVANCE(370);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(551);
      if (lookahead == ' ') ADVANCE(500);
      if (lookahead == '"') ADVANCE(500);
      if (lookahead == '\'') ADVANCE(500);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(456);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(518);
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(525);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(389);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(526);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(391);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(528);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(395);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '(') ADVANCE(529);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(397);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(523);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(399);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(553);
      if (lookahead == ' ') ADVANCE(524);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(401);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == ' ') ADVANCE(508);
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '\'') ADVANCE(510);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == ' ') ADVANCE(509);
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(510);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '?') ADVANCE(459);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '\'') ADVANCE(514);
      if (lookahead == '(') ADVANCE(374);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '`') ADVANCE(515);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(376);
      if (lookahead == '"') ADVANCE(514);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '?') ADVANCE(492);
      if (lookahead == '`') ADVANCE(516);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '"') ADVANCE(515);
      if (lookahead == '\'') ADVANCE(516);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '?') ADVANCE(493);
      if (lookahead == '`') ADVANCE(513);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '"') ADVANCE(514);
      if (lookahead == '\'') ADVANCE(514);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead == '?') ADVANCE(494);
      if (lookahead == '`') ADVANCE(517);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(515);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead == '?') ADVANCE(495);
      if (lookahead == '`') ADVANCE(515);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(516);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == '`') ADVANCE(516);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(544);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == '`') ADVANCE(517);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(518);
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(522);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '"') ADVANCE(521);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(523);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '\'') ADVANCE(523);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(520);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '"') ADVANCE(521);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(524);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(522);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(523);
      if (lookahead == '"') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(523);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(523);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == ' ') ADVANCE(524);
      if (lookahead == '"') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(524);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(525);
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(528);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(529);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(526);
      if (lookahead == '"') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(526);
      if (lookahead == ')') ADVANCE(572);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(530);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(527);
      if (lookahead == '"') ADVANCE(529);
      if (lookahead == '\'') ADVANCE(530);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead != 0) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(528);
      if (lookahead == '"') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(528);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead == '`') ADVANCE(531);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(529);
      if (lookahead == '"') ADVANCE(529);
      if (lookahead == '\'') ADVANCE(531);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '?') ADVANCE(383);
      if (lookahead == '`') ADVANCE(529);
      if (lookahead != 0) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(530);
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '\'') ADVANCE(530);
      if (lookahead == ')') ADVANCE(576);
      if (lookahead == '?') ADVANCE(385);
      if (lookahead == '`') ADVANCE(530);
      if (lookahead != 0) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == ' ') ADVANCE(531);
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '\'') ADVANCE(531);
      if (lookahead == ')') ADVANCE(577);
      if (lookahead == '?') ADVANCE(387);
      if (lookahead == '`') ADVANCE(531);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(538);
      if (lookahead == '[') ADVANCE(558);
      if (lookahead == ']') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(566);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(538);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '}') ADVANCE(534);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(535);
      if (lookahead == '}') ADVANCE(535);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(600);
      if (lookahead == '`') ADVANCE(538);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(538);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(539);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(539);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(539);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(540);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(539);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(539);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(543);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(538);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(543);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(537);
      if (lookahead == '`') ADVANCE(513);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(543);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(538);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == '?') ADVANCE(533);
      if (lookahead == ']') ADVANCE(539);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == '?') ADVANCE(532);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(420);
      if (lookahead == ',') ADVANCE(548);
      if (lookahead == '?') ADVANCE(535);
      if (lookahead == '`') ADVANCE(421);
      if (lookahead == '}') ADVANCE(548);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == '\'') ADVANCE(427);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == ',') ADVANCE(549);
      if (lookahead == '?') ADVANCE(534);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(559);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '\'') ADVANCE(499);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(560);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == ')') ADVANCE(600);
      if (lookahead == '?') ADVANCE(536);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(555);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(541);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(542);
      if (lookahead == '`') ADVANCE(520);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(526);
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '?') ADVANCE(545);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == '`') ADVANCE(558);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '`') ADVANCE(619);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '`') ADVANCE(620);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(328);
      if (lookahead == '`') ADVANCE(624);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(346);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(347);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(348);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(349);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(597);
      if (lookahead == ']') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(579);
      if (lookahead == '}') ADVANCE(579);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '?') ADVANCE(585);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(586);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == ']') ADVANCE(595);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(582);
      if (lookahead == '?') ADVANCE(587);
      if (lookahead == '}') ADVANCE(582);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(595);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(539);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == '?') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(540);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(543);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(583);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == '?') ADVANCE(578);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(547);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(543);
      if (lookahead == ',') ADVANCE(549);
      if (lookahead == '?') ADVANCE(579);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(764);
      if (lookahead == '\'') ADVANCE(760);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '?') ADVANCE(590);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '`') ADVANCE(596);
      if (lookahead == '{') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(588);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(593);
      if (lookahead == '`') ADVANCE(540);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(555);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(597);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(597);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(597);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(584);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(589);
      if (lookahead == '`') ADVANCE(595);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(623);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(172);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(615);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(607);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '}') ADVANCE(608);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(339);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(158);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(340);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(159);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(160);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(342);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(162);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(614);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == ')') ADVANCE(591);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(356);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(172);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(172);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(646);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(732);
      if (lookahead == 'x') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(734);
      if (lookahead == 'x') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(642);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(751);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(751);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(584);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(584);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(768);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(768);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(773);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(776);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(776);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(780);
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == '.') ADVANCE(785);
      if (lookahead == '/') ADVANCE(779);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(668);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 'u') ADVANCE(703);
      if (lookahead == 'w') ADVANCE(683);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(780);
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == '.') ADVANCE(785);
      if (lookahead == '/') ADVANCE(779);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 'u') ADVANCE(703);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 175},
  [2] = {.lex_state = 176, .external_lex_state = 2},
  [3] = {.lex_state = 176, .external_lex_state = 2},
  [4] = {.lex_state = 176, .external_lex_state = 2},
  [5] = {.lex_state = 176, .external_lex_state = 2},
  [6] = {.lex_state = 176, .external_lex_state = 2},
  [7] = {.lex_state = 175, .external_lex_state = 2},
  [8] = {.lex_state = 175, .external_lex_state = 2},
  [9] = {.lex_state = 175, .external_lex_state = 2},
  [10] = {.lex_state = 175, .external_lex_state = 2},
  [11] = {.lex_state = 175, .external_lex_state = 3},
  [12] = {.lex_state = 175, .external_lex_state = 3},
  [13] = {.lex_state = 175, .external_lex_state = 3},
  [14] = {.lex_state = 175, .external_lex_state = 3},
  [15] = {.lex_state = 175, .external_lex_state = 3},
  [16] = {.lex_state = 175, .external_lex_state = 3},
  [17] = {.lex_state = 175, .external_lex_state = 3},
  [18] = {.lex_state = 175, .external_lex_state = 3},
  [19] = {.lex_state = 175, .external_lex_state = 3},
  [20] = {.lex_state = 175, .external_lex_state = 3},
  [21] = {.lex_state = 175, .external_lex_state = 3},
  [22] = {.lex_state = 175, .external_lex_state = 3},
  [23] = {.lex_state = 175, .external_lex_state = 2},
  [24] = {.lex_state = 175, .external_lex_state = 3},
  [25] = {.lex_state = 175, .external_lex_state = 3},
  [26] = {.lex_state = 175, .external_lex_state = 3},
  [27] = {.lex_state = 175, .external_lex_state = 3},
  [28] = {.lex_state = 175, .external_lex_state = 3},
  [29] = {.lex_state = 175, .external_lex_state = 3},
  [30] = {.lex_state = 175, .external_lex_state = 3},
  [31] = {.lex_state = 175, .external_lex_state = 3},
  [32] = {.lex_state = 175, .external_lex_state = 2},
  [33] = {.lex_state = 175, .external_lex_state = 3},
  [34] = {.lex_state = 175, .external_lex_state = 3},
  [35] = {.lex_state = 175, .external_lex_state = 3},
  [36] = {.lex_state = 175, .external_lex_state = 3},
  [37] = {.lex_state = 175, .external_lex_state = 3},
  [38] = {.lex_state = 175, .external_lex_state = 3},
  [39] = {.lex_state = 175, .external_lex_state = 3},
  [40] = {.lex_state = 175, .external_lex_state = 3},
  [41] = {.lex_state = 175, .external_lex_state = 3},
  [42] = {.lex_state = 175, .external_lex_state = 3},
  [43] = {.lex_state = 175, .external_lex_state = 3},
  [44] = {.lex_state = 175, .external_lex_state = 3},
  [45] = {.lex_state = 175, .external_lex_state = 3},
  [46] = {.lex_state = 175, .external_lex_state = 3},
  [47] = {.lex_state = 175, .external_lex_state = 3},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 175},
  [50] = {.lex_state = 178, .external_lex_state = 2},
  [51] = {.lex_state = 178, .external_lex_state = 2},
  [52] = {.lex_state = 276, .external_lex_state = 2},
  [53] = {.lex_state = 176, .external_lex_state = 2},
  [54] = {.lex_state = 176, .external_lex_state = 2},
  [55] = {.lex_state = 177, .external_lex_state = 2},
  [56] = {.lex_state = 178, .external_lex_state = 2},
  [57] = {.lex_state = 276, .external_lex_state = 2},
  [58] = {.lex_state = 177, .external_lex_state = 3},
  [59] = {.lex_state = 176, .external_lex_state = 1},
  [60] = {.lex_state = 276, .external_lex_state = 2},
  [61] = {.lex_state = 176, .external_lex_state = 1},
  [62] = {.lex_state = 176, .external_lex_state = 2},
  [63] = {.lex_state = 176, .external_lex_state = 1},
  [64] = {.lex_state = 178, .external_lex_state = 2},
  [65] = {.lex_state = 176, .external_lex_state = 1},
  [66] = {.lex_state = 176, .external_lex_state = 1},
  [67] = {.lex_state = 173, .external_lex_state = 2},
  [68] = {.lex_state = 276, .external_lex_state = 2},
  [69] = {.lex_state = 176, .external_lex_state = 1},
  [70] = {.lex_state = 176, .external_lex_state = 2},
  [71] = {.lex_state = 176, .external_lex_state = 1},
  [72] = {.lex_state = 176, .external_lex_state = 1},
  [73] = {.lex_state = 176, .external_lex_state = 1},
  [74] = {.lex_state = 173, .external_lex_state = 2},
  [75] = {.lex_state = 177, .external_lex_state = 2},
  [76] = {.lex_state = 176, .external_lex_state = 4},
  [77] = {.lex_state = 276, .external_lex_state = 2},
  [78] = {.lex_state = 173, .external_lex_state = 2},
  [79] = {.lex_state = 176, .external_lex_state = 4},
  [80] = {.lex_state = 176, .external_lex_state = 4},
  [81] = {.lex_state = 176, .external_lex_state = 1},
  [82] = {.lex_state = 178, .external_lex_state = 2},
  [83] = {.lex_state = 176, .external_lex_state = 1},
  [84] = {.lex_state = 173, .external_lex_state = 2},
  [85] = {.lex_state = 178, .external_lex_state = 2},
  [86] = {.lex_state = 176, .external_lex_state = 1},
  [87] = {.lex_state = 176, .external_lex_state = 4},
  [88] = {.lex_state = 176, .external_lex_state = 1},
  [89] = {.lex_state = 176, .external_lex_state = 1},
  [90] = {.lex_state = 176, .external_lex_state = 1},
  [91] = {.lex_state = 176, .external_lex_state = 1},
  [92] = {.lex_state = 177, .external_lex_state = 2},
  [93] = {.lex_state = 176},
  [94] = {.lex_state = 176, .external_lex_state = 4},
  [95] = {.lex_state = 176, .external_lex_state = 1},
  [96] = {.lex_state = 176, .external_lex_state = 1},
  [97] = {.lex_state = 173, .external_lex_state = 2},
  [98] = {.lex_state = 178, .external_lex_state = 2},
  [99] = {.lex_state = 176, .external_lex_state = 4},
  [100] = {.lex_state = 176, .external_lex_state = 1},
  [101] = {.lex_state = 277, .external_lex_state = 2},
  [102] = {.lex_state = 176},
  [103] = {.lex_state = 176, .external_lex_state = 4},
  [104] = {.lex_state = 277, .external_lex_state = 2},
  [105] = {.lex_state = 176, .external_lex_state = 4},
  [106] = {.lex_state = 176, .external_lex_state = 1},
  [107] = {.lex_state = 176, .external_lex_state = 4},
  [108] = {.lex_state = 178, .external_lex_state = 2},
  [109] = {.lex_state = 176, .external_lex_state = 2},
  [110] = {.lex_state = 176, .external_lex_state = 1},
  [111] = {.lex_state = 175, .external_lex_state = 1},
  [112] = {.lex_state = 175, .external_lex_state = 1},
  [113] = {.lex_state = 175, .external_lex_state = 1},
  [114] = {.lex_state = 176, .external_lex_state = 2},
  [115] = {.lex_state = 176, .external_lex_state = 1},
  [116] = {.lex_state = 175, .external_lex_state = 1},
  [117] = {.lex_state = 174, .external_lex_state = 2},
  [118] = {.lex_state = 176, .external_lex_state = 2},
  [119] = {.lex_state = 175, .external_lex_state = 1},
  [120] = {.lex_state = 175, .external_lex_state = 1},
  [121] = {.lex_state = 174, .external_lex_state = 2},
  [122] = {.lex_state = 176, .external_lex_state = 2},
  [123] = {.lex_state = 176, .external_lex_state = 2},
  [124] = {.lex_state = 176, .external_lex_state = 2},
  [125] = {.lex_state = 175, .external_lex_state = 1},
  [126] = {.lex_state = 176, .external_lex_state = 2},
  [127] = {.lex_state = 176, .external_lex_state = 2},
  [128] = {.lex_state = 176, .external_lex_state = 2},
  [129] = {.lex_state = 176, .external_lex_state = 2},
  [130] = {.lex_state = 176, .external_lex_state = 2},
  [131] = {.lex_state = 176, .external_lex_state = 2},
  [132] = {.lex_state = 176, .external_lex_state = 2},
  [133] = {.lex_state = 176, .external_lex_state = 2},
  [134] = {.lex_state = 176, .external_lex_state = 2},
  [135] = {.lex_state = 176, .external_lex_state = 2},
  [136] = {.lex_state = 176, .external_lex_state = 2},
  [137] = {.lex_state = 176, .external_lex_state = 2},
  [138] = {.lex_state = 176, .external_lex_state = 2},
  [139] = {.lex_state = 176, .external_lex_state = 2},
  [140] = {.lex_state = 176, .external_lex_state = 2},
  [141] = {.lex_state = 176, .external_lex_state = 2},
  [142] = {.lex_state = 176, .external_lex_state = 2},
  [143] = {.lex_state = 176, .external_lex_state = 2},
  [144] = {.lex_state = 176, .external_lex_state = 2},
  [145] = {.lex_state = 277, .external_lex_state = 2},
  [146] = {.lex_state = 176, .external_lex_state = 2},
  [147] = {.lex_state = 176, .external_lex_state = 2},
  [148] = {.lex_state = 178, .external_lex_state = 2},
  [149] = {.lex_state = 277, .external_lex_state = 2},
  [150] = {.lex_state = 176, .external_lex_state = 2},
  [151] = {.lex_state = 173, .external_lex_state = 2},
  [152] = {.lex_state = 176, .external_lex_state = 2},
  [153] = {.lex_state = 176, .external_lex_state = 2},
  [154] = {.lex_state = 276, .external_lex_state = 2},
  [155] = {.lex_state = 175, .external_lex_state = 1},
  [156] = {.lex_state = 176, .external_lex_state = 2},
  [157] = {.lex_state = 176, .external_lex_state = 2},
  [158] = {.lex_state = 177, .external_lex_state = 2},
  [159] = {.lex_state = 176, .external_lex_state = 2},
  [160] = {.lex_state = 176, .external_lex_state = 2},
  [161] = {.lex_state = 176, .external_lex_state = 2},
  [162] = {.lex_state = 176, .external_lex_state = 2},
  [163] = {.lex_state = 176, .external_lex_state = 2},
  [164] = {.lex_state = 176, .external_lex_state = 2},
  [165] = {.lex_state = 176, .external_lex_state = 2},
  [166] = {.lex_state = 176, .external_lex_state = 2},
  [167] = {.lex_state = 178, .external_lex_state = 2},
  [168] = {.lex_state = 176, .external_lex_state = 2},
  [169] = {.lex_state = 177, .external_lex_state = 3},
  [170] = {.lex_state = 176, .external_lex_state = 4},
  [171] = {.lex_state = 176, .external_lex_state = 2},
  [172] = {.lex_state = 176, .external_lex_state = 2},
  [173] = {.lex_state = 176, .external_lex_state = 5},
  [174] = {.lex_state = 176, .external_lex_state = 2},
  [175] = {.lex_state = 176, .external_lex_state = 2},
  [176] = {.lex_state = 176, .external_lex_state = 2},
  [177] = {.lex_state = 175, .external_lex_state = 1},
  [178] = {.lex_state = 175, .external_lex_state = 1},
  [179] = {.lex_state = 177, .external_lex_state = 2},
  [180] = {.lex_state = 174, .external_lex_state = 5},
  [181] = {.lex_state = 175, .external_lex_state = 1},
  [182] = {.lex_state = 176, .external_lex_state = 2},
  [183] = {.lex_state = 277, .external_lex_state = 2},
  [184] = {.lex_state = 176, .external_lex_state = 5},
  [185] = {.lex_state = 176, .external_lex_state = 5},
  [186] = {.lex_state = 175, .external_lex_state = 1},
  [187] = {.lex_state = 176, .external_lex_state = 2},
  [188] = {.lex_state = 176, .external_lex_state = 5},
  [189] = {.lex_state = 175, .external_lex_state = 1},
  [190] = {.lex_state = 176, .external_lex_state = 5},
  [191] = {.lex_state = 176, .external_lex_state = 2},
  [192] = {.lex_state = 176, .external_lex_state = 5},
  [193] = {.lex_state = 177, .external_lex_state = 2},
  [194] = {.lex_state = 277},
  [195] = {.lex_state = 175, .external_lex_state = 1},
  [196] = {.lex_state = 176, .external_lex_state = 2},
  [197] = {.lex_state = 176, .external_lex_state = 2},
  [198] = {.lex_state = 176, .external_lex_state = 2},
  [199] = {.lex_state = 176, .external_lex_state = 2},
  [200] = {.lex_state = 176, .external_lex_state = 5},
  [201] = {.lex_state = 177, .external_lex_state = 2},
  [202] = {.lex_state = 176, .external_lex_state = 5},
  [203] = {.lex_state = 175, .external_lex_state = 1},
  [204] = {.lex_state = 175, .external_lex_state = 1},
  [205] = {.lex_state = 176, .external_lex_state = 2},
  [206] = {.lex_state = 174, .external_lex_state = 5},
  [207] = {.lex_state = 175, .external_lex_state = 1},
  [208] = {.lex_state = 174, .external_lex_state = 2},
  [209] = {.lex_state = 176, .external_lex_state = 5},
  [210] = {.lex_state = 176, .external_lex_state = 5},
  [211] = {.lex_state = 176, .external_lex_state = 2},
  [212] = {.lex_state = 176, .external_lex_state = 5},
  [213] = {.lex_state = 174, .external_lex_state = 2},
  [214] = {.lex_state = 176, .external_lex_state = 5},
  [215] = {.lex_state = 176, .external_lex_state = 2},
  [216] = {.lex_state = 176, .external_lex_state = 5},
  [217] = {.lex_state = 176, .external_lex_state = 5},
  [218] = {.lex_state = 176, .external_lex_state = 2},
  [219] = {.lex_state = 176, .external_lex_state = 2},
  [220] = {.lex_state = 176, .external_lex_state = 2},
  [221] = {.lex_state = 176, .external_lex_state = 2},
  [222] = {.lex_state = 176, .external_lex_state = 2},
  [223] = {.lex_state = 176, .external_lex_state = 2},
  [224] = {.lex_state = 176, .external_lex_state = 2},
  [225] = {.lex_state = 176, .external_lex_state = 2},
  [226] = {.lex_state = 176, .external_lex_state = 5},
  [227] = {.lex_state = 176, .external_lex_state = 2},
  [228] = {.lex_state = 176, .external_lex_state = 5},
  [229] = {.lex_state = 176, .external_lex_state = 2},
  [230] = {.lex_state = 176, .external_lex_state = 2},
  [231] = {.lex_state = 176, .external_lex_state = 2},
  [232] = {.lex_state = 176, .external_lex_state = 2},
  [233] = {.lex_state = 176, .external_lex_state = 2},
  [234] = {.lex_state = 176, .external_lex_state = 2},
  [235] = {.lex_state = 176, .external_lex_state = 2},
  [236] = {.lex_state = 176, .external_lex_state = 2},
  [237] = {.lex_state = 176, .external_lex_state = 2},
  [238] = {.lex_state = 174, .external_lex_state = 2},
  [239] = {.lex_state = 176, .external_lex_state = 2},
  [240] = {.lex_state = 175, .external_lex_state = 1},
  [241] = {.lex_state = 176, .external_lex_state = 2},
  [242] = {.lex_state = 176, .external_lex_state = 2},
  [243] = {.lex_state = 176, .external_lex_state = 2},
  [244] = {.lex_state = 176, .external_lex_state = 2},
  [245] = {.lex_state = 277},
  [246] = {.lex_state = 176, .external_lex_state = 2},
  [247] = {.lex_state = 176, .external_lex_state = 2},
  [248] = {.lex_state = 176, .external_lex_state = 2},
  [249] = {.lex_state = 176, .external_lex_state = 2},
  [250] = {.lex_state = 176, .external_lex_state = 2},
  [251] = {.lex_state = 175, .external_lex_state = 2},
  [252] = {.lex_state = 175, .external_lex_state = 2},
  [253] = {.lex_state = 175, .external_lex_state = 2},
  [254] = {.lex_state = 177, .external_lex_state = 3},
  [255] = {.lex_state = 175, .external_lex_state = 2},
  [256] = {.lex_state = 175, .external_lex_state = 2},
  [257] = {.lex_state = 175, .external_lex_state = 2},
  [258] = {.lex_state = 176},
  [259] = {.lex_state = 175, .external_lex_state = 2},
  [260] = {.lex_state = 175, .external_lex_state = 2},
  [261] = {.lex_state = 175, .external_lex_state = 1},
  [262] = {.lex_state = 175, .external_lex_state = 2},
  [263] = {.lex_state = 175, .external_lex_state = 2},
  [264] = {.lex_state = 175, .external_lex_state = 2},
  [265] = {.lex_state = 175, .external_lex_state = 2},
  [266] = {.lex_state = 175, .external_lex_state = 2},
  [267] = {.lex_state = 177, .external_lex_state = 3},
  [268] = {.lex_state = 177, .external_lex_state = 3},
  [269] = {.lex_state = 175, .external_lex_state = 2},
  [270] = {.lex_state = 175, .external_lex_state = 4},
  [271] = {.lex_state = 175, .external_lex_state = 2},
  [272] = {.lex_state = 175, .external_lex_state = 2},
  [273] = {.lex_state = 175, .external_lex_state = 2},
  [274] = {.lex_state = 175, .external_lex_state = 2},
  [275] = {.lex_state = 175, .external_lex_state = 2},
  [276] = {.lex_state = 175, .external_lex_state = 2},
  [277] = {.lex_state = 175, .external_lex_state = 2},
  [278] = {.lex_state = 175, .external_lex_state = 2},
  [279] = {.lex_state = 175, .external_lex_state = 2},
  [280] = {.lex_state = 175, .external_lex_state = 2},
  [281] = {.lex_state = 175, .external_lex_state = 2},
  [282] = {.lex_state = 177, .external_lex_state = 2},
  [283] = {.lex_state = 175, .external_lex_state = 2},
  [284] = {.lex_state = 175, .external_lex_state = 2},
  [285] = {.lex_state = 175, .external_lex_state = 2},
  [286] = {.lex_state = 175, .external_lex_state = 2},
  [287] = {.lex_state = 175, .external_lex_state = 2},
  [288] = {.lex_state = 175, .external_lex_state = 2},
  [289] = {.lex_state = 175, .external_lex_state = 2},
  [290] = {.lex_state = 175, .external_lex_state = 2},
  [291] = {.lex_state = 175, .external_lex_state = 2},
  [292] = {.lex_state = 175, .external_lex_state = 2},
  [293] = {.lex_state = 175, .external_lex_state = 2},
  [294] = {.lex_state = 175, .external_lex_state = 2},
  [295] = {.lex_state = 175, .external_lex_state = 2},
  [296] = {.lex_state = 175, .external_lex_state = 6},
  [297] = {.lex_state = 175, .external_lex_state = 1},
  [298] = {.lex_state = 175, .external_lex_state = 6},
  [299] = {.lex_state = 175, .external_lex_state = 6},
  [300] = {.lex_state = 174, .external_lex_state = 5},
  [301] = {.lex_state = 175, .external_lex_state = 6},
  [302] = {.lex_state = 175, .external_lex_state = 2},
  [303] = {.lex_state = 174, .external_lex_state = 2},
  [304] = {.lex_state = 175, .external_lex_state = 6},
  [305] = {.lex_state = 175, .external_lex_state = 6},
  [306] = {.lex_state = 177, .external_lex_state = 2},
  [307] = {.lex_state = 177, .external_lex_state = 2},
  [308] = {.lex_state = 277, .external_lex_state = 2},
  [309] = {.lex_state = 175, .external_lex_state = 6},
  [310] = {.lex_state = 175, .external_lex_state = 4},
  [311] = {.lex_state = 175, .external_lex_state = 6},
  [312] = {.lex_state = 175, .external_lex_state = 2},
  [313] = {.lex_state = 175, .external_lex_state = 6},
  [314] = {.lex_state = 175, .external_lex_state = 2},
  [315] = {.lex_state = 175, .external_lex_state = 2},
  [316] = {.lex_state = 277},
  [317] = {.lex_state = 175, .external_lex_state = 2},
  [318] = {.lex_state = 175, .external_lex_state = 5},
  [319] = {.lex_state = 175, .external_lex_state = 2},
  [320] = {.lex_state = 175, .external_lex_state = 2},
  [321] = {.lex_state = 175, .external_lex_state = 2},
  [322] = {.lex_state = 175, .external_lex_state = 2},
  [323] = {.lex_state = 175, .external_lex_state = 2},
  [324] = {.lex_state = 175, .external_lex_state = 2},
  [325] = {.lex_state = 175, .external_lex_state = 2},
  [326] = {.lex_state = 175, .external_lex_state = 2},
  [327] = {.lex_state = 175, .external_lex_state = 3},
  [328] = {.lex_state = 175, .external_lex_state = 2},
  [329] = {.lex_state = 175, .external_lex_state = 5},
  [330] = {.lex_state = 175, .external_lex_state = 2},
  [331] = {.lex_state = 175, .external_lex_state = 2},
  [332] = {.lex_state = 175, .external_lex_state = 2},
  [333] = {.lex_state = 175, .external_lex_state = 2},
  [334] = {.lex_state = 175, .external_lex_state = 2},
  [335] = {.lex_state = 175, .external_lex_state = 5},
  [336] = {.lex_state = 175, .external_lex_state = 2},
  [337] = {.lex_state = 175, .external_lex_state = 2},
  [338] = {.lex_state = 175, .external_lex_state = 2},
  [339] = {.lex_state = 175, .external_lex_state = 2},
  [340] = {.lex_state = 175, .external_lex_state = 2},
  [341] = {.lex_state = 175, .external_lex_state = 2},
  [342] = {.lex_state = 175, .external_lex_state = 2},
  [343] = {.lex_state = 175, .external_lex_state = 2},
  [344] = {.lex_state = 175, .external_lex_state = 2},
  [345] = {.lex_state = 175, .external_lex_state = 2},
  [346] = {.lex_state = 175, .external_lex_state = 2},
  [347] = {.lex_state = 175, .external_lex_state = 2},
  [348] = {.lex_state = 175, .external_lex_state = 2},
  [349] = {.lex_state = 175, .external_lex_state = 2},
  [350] = {.lex_state = 175, .external_lex_state = 2},
  [351] = {.lex_state = 175, .external_lex_state = 2},
  [352] = {.lex_state = 175, .external_lex_state = 2},
  [353] = {.lex_state = 175, .external_lex_state = 2},
  [354] = {.lex_state = 175, .external_lex_state = 2},
  [355] = {.lex_state = 175, .external_lex_state = 2},
  [356] = {.lex_state = 175, .external_lex_state = 2},
  [357] = {.lex_state = 175, .external_lex_state = 5},
  [358] = {.lex_state = 175},
  [359] = {.lex_state = 175},
  [360] = {.lex_state = 175},
  [361] = {.lex_state = 175},
  [362] = {.lex_state = 175},
  [363] = {.lex_state = 175},
  [364] = {.lex_state = 175},
  [365] = {.lex_state = 175},
  [366] = {.lex_state = 175},
  [367] = {.lex_state = 175},
  [368] = {.lex_state = 175},
  [369] = {.lex_state = 175},
  [370] = {.lex_state = 175},
  [371] = {.lex_state = 175},
  [372] = {.lex_state = 175},
  [373] = {.lex_state = 175},
  [374] = {.lex_state = 175},
  [375] = {.lex_state = 175},
  [376] = {.lex_state = 175},
  [377] = {.lex_state = 175},
  [378] = {.lex_state = 175},
  [379] = {.lex_state = 175},
  [380] = {.lex_state = 175},
  [381] = {.lex_state = 175},
  [382] = {.lex_state = 175},
  [383] = {.lex_state = 175},
  [384] = {.lex_state = 175},
  [385] = {.lex_state = 175},
  [386] = {.lex_state = 175},
  [387] = {.lex_state = 175},
  [388] = {.lex_state = 175},
  [389] = {.lex_state = 175},
  [390] = {.lex_state = 175},
  [391] = {.lex_state = 175},
  [392] = {.lex_state = 175},
  [393] = {.lex_state = 175},
  [394] = {.lex_state = 175},
  [395] = {.lex_state = 54, .external_lex_state = 3},
  [396] = {.lex_state = 54, .external_lex_state = 3},
  [397] = {.lex_state = 54, .external_lex_state = 3},
  [398] = {.lex_state = 54, .external_lex_state = 3},
  [399] = {.lex_state = 54, .external_lex_state = 3},
  [400] = {.lex_state = 54, .external_lex_state = 3},
  [401] = {.lex_state = 54, .external_lex_state = 3},
  [402] = {.lex_state = 54, .external_lex_state = 3},
  [403] = {.lex_state = 54, .external_lex_state = 3},
  [404] = {.lex_state = 54, .external_lex_state = 3},
  [405] = {.lex_state = 54, .external_lex_state = 3},
  [406] = {.lex_state = 54, .external_lex_state = 3},
  [407] = {.lex_state = 54, .external_lex_state = 3},
  [408] = {.lex_state = 54, .external_lex_state = 3},
  [409] = {.lex_state = 55},
  [410] = {.lex_state = 55},
  [411] = {.lex_state = 54, .external_lex_state = 3},
  [412] = {.lex_state = 64},
  [413] = {.lex_state = 64},
  [414] = {.lex_state = 64},
  [415] = {.lex_state = 55, .external_lex_state = 3},
  [416] = {.lex_state = 64},
  [417] = {.lex_state = 55, .external_lex_state = 3},
  [418] = {.lex_state = 64},
  [419] = {.lex_state = 64},
  [420] = {.lex_state = 64},
  [421] = {.lex_state = 55, .external_lex_state = 3},
  [422] = {.lex_state = 55, .external_lex_state = 3},
  [423] = {.lex_state = 55, .external_lex_state = 3},
  [424] = {.lex_state = 55, .external_lex_state = 3},
  [425] = {.lex_state = 64},
  [426] = {.lex_state = 55, .external_lex_state = 3},
  [427] = {.lex_state = 64},
  [428] = {.lex_state = 55, .external_lex_state = 3},
  [429] = {.lex_state = 55, .external_lex_state = 3},
  [430] = {.lex_state = 55, .external_lex_state = 3},
  [431] = {.lex_state = 55, .external_lex_state = 3},
  [432] = {.lex_state = 64},
  [433] = {.lex_state = 55, .external_lex_state = 3},
  [434] = {.lex_state = 55, .external_lex_state = 3},
  [435] = {.lex_state = 64},
  [436] = {.lex_state = 64},
  [437] = {.lex_state = 64},
  [438] = {.lex_state = 55, .external_lex_state = 3},
  [439] = {.lex_state = 55, .external_lex_state = 3},
  [440] = {.lex_state = 55, .external_lex_state = 3},
  [441] = {.lex_state = 55, .external_lex_state = 3},
  [442] = {.lex_state = 55, .external_lex_state = 3},
  [443] = {.lex_state = 55, .external_lex_state = 3},
  [444] = {.lex_state = 55, .external_lex_state = 3},
  [445] = {.lex_state = 55, .external_lex_state = 3},
  [446] = {.lex_state = 55, .external_lex_state = 3},
  [447] = {.lex_state = 55, .external_lex_state = 3},
  [448] = {.lex_state = 55, .external_lex_state = 3},
  [449] = {.lex_state = 55, .external_lex_state = 3},
  [450] = {.lex_state = 55, .external_lex_state = 3},
  [451] = {.lex_state = 55, .external_lex_state = 3},
  [452] = {.lex_state = 55, .external_lex_state = 3},
  [453] = {.lex_state = 55, .external_lex_state = 3},
  [454] = {.lex_state = 55, .external_lex_state = 3},
  [455] = {.lex_state = 55, .external_lex_state = 3},
  [456] = {.lex_state = 55, .external_lex_state = 3},
  [457] = {.lex_state = 55, .external_lex_state = 3},
  [458] = {.lex_state = 55, .external_lex_state = 3},
  [459] = {.lex_state = 55, .external_lex_state = 3},
  [460] = {.lex_state = 11, .external_lex_state = 5},
  [461] = {.lex_state = 11, .external_lex_state = 5},
  [462] = {.lex_state = 11, .external_lex_state = 5},
  [463] = {.lex_state = 11, .external_lex_state = 5},
  [464] = {.lex_state = 11, .external_lex_state = 5},
  [465] = {.lex_state = 11, .external_lex_state = 5},
  [466] = {.lex_state = 11, .external_lex_state = 5},
  [467] = {.lex_state = 11, .external_lex_state = 5},
  [468] = {.lex_state = 11, .external_lex_state = 5},
  [469] = {.lex_state = 11, .external_lex_state = 5},
  [470] = {.lex_state = 11, .external_lex_state = 5},
  [471] = {.lex_state = 60},
  [472] = {.lex_state = 11, .external_lex_state = 5},
  [473] = {.lex_state = 11, .external_lex_state = 5},
  [474] = {.lex_state = 11, .external_lex_state = 5},
  [475] = {.lex_state = 11, .external_lex_state = 5},
  [476] = {.lex_state = 11, .external_lex_state = 3},
  [477] = {.lex_state = 11, .external_lex_state = 3},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 11},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 11, .external_lex_state = 3},
  [484] = {.lex_state = 11, .external_lex_state = 3},
  [485] = {.lex_state = 63, .external_lex_state = 2},
  [486] = {.lex_state = 63, .external_lex_state = 1},
  [487] = {.lex_state = 11, .external_lex_state = 3},
  [488] = {.lex_state = 11, .external_lex_state = 3},
  [489] = {.lex_state = 11, .external_lex_state = 3},
  [490] = {.lex_state = 11, .external_lex_state = 3},
  [491] = {.lex_state = 11, .external_lex_state = 3},
  [492] = {.lex_state = 11, .external_lex_state = 3},
  [493] = {.lex_state = 11, .external_lex_state = 3},
  [494] = {.lex_state = 63, .external_lex_state = 1},
  [495] = {.lex_state = 11, .external_lex_state = 3},
  [496] = {.lex_state = 11, .external_lex_state = 3},
  [497] = {.lex_state = 63, .external_lex_state = 2},
  [498] = {.lex_state = 11, .external_lex_state = 3},
  [499] = {.lex_state = 11},
  [500] = {.lex_state = 11, .external_lex_state = 3},
  [501] = {.lex_state = 11, .external_lex_state = 3},
  [502] = {.lex_state = 11, .external_lex_state = 3},
  [503] = {.lex_state = 63, .external_lex_state = 2},
  [504] = {.lex_state = 11},
  [505] = {.lex_state = 55, .external_lex_state = 3},
  [506] = {.lex_state = 11, .external_lex_state = 3},
  [507] = {.lex_state = 11, .external_lex_state = 3},
  [508] = {.lex_state = 11, .external_lex_state = 3},
  [509] = {.lex_state = 55, .external_lex_state = 3},
  [510] = {.lex_state = 11},
  [511] = {.lex_state = 11, .external_lex_state = 3},
  [512] = {.lex_state = 63, .external_lex_state = 1},
  [513] = {.lex_state = 11, .external_lex_state = 3},
  [514] = {.lex_state = 11, .external_lex_state = 3},
  [515] = {.lex_state = 63, .external_lex_state = 1},
  [516] = {.lex_state = 11},
  [517] = {.lex_state = 11, .external_lex_state = 3},
  [518] = {.lex_state = 11},
  [519] = {.lex_state = 63, .external_lex_state = 2},
  [520] = {.lex_state = 11, .external_lex_state = 3},
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 11, .external_lex_state = 3},
  [523] = {.lex_state = 63, .external_lex_state = 2},
  [524] = {.lex_state = 11, .external_lex_state = 3},
  [525] = {.lex_state = 63, .external_lex_state = 2},
  [526] = {.lex_state = 11, .external_lex_state = 3},
  [527] = {.lex_state = 11},
  [528] = {.lex_state = 11, .external_lex_state = 3},
  [529] = {.lex_state = 11},
  [530] = {.lex_state = 55, .external_lex_state = 3},
  [531] = {.lex_state = 11},
  [532] = {.lex_state = 63, .external_lex_state = 1},
  [533] = {.lex_state = 63, .external_lex_state = 1},
  [534] = {.lex_state = 11, .external_lex_state = 3},
  [535] = {.lex_state = 11, .external_lex_state = 3},
  [536] = {.lex_state = 63, .external_lex_state = 2},
  [537] = {.lex_state = 11, .external_lex_state = 3},
  [538] = {.lex_state = 11, .external_lex_state = 3},
  [539] = {.lex_state = 11, .external_lex_state = 3},
  [540] = {.lex_state = 63, .external_lex_state = 1},
  [541] = {.lex_state = 63, .external_lex_state = 2},
  [542] = {.lex_state = 63, .external_lex_state = 2},
  [543] = {.lex_state = 11, .external_lex_state = 3},
  [544] = {.lex_state = 11, .external_lex_state = 3},
  [545] = {.lex_state = 11, .external_lex_state = 3},
  [546] = {.lex_state = 11, .external_lex_state = 3},
  [547] = {.lex_state = 11, .external_lex_state = 3},
  [548] = {.lex_state = 11, .external_lex_state = 3},
  [549] = {.lex_state = 63, .external_lex_state = 1},
  [550] = {.lex_state = 11},
  [551] = {.lex_state = 11},
  [552] = {.lex_state = 11},
  [553] = {.lex_state = 11},
  [554] = {.lex_state = 63, .external_lex_state = 3},
  [555] = {.lex_state = 11},
  [556] = {.lex_state = 11},
  [557] = {.lex_state = 11},
  [558] = {.lex_state = 11},
  [559] = {.lex_state = 11},
  [560] = {.lex_state = 63, .external_lex_state = 1},
  [561] = {.lex_state = 11},
  [562] = {.lex_state = 63, .external_lex_state = 3},
  [563] = {.lex_state = 11},
  [564] = {.lex_state = 11},
  [565] = {.lex_state = 63, .external_lex_state = 3},
  [566] = {.lex_state = 11},
  [567] = {.lex_state = 11},
  [568] = {.lex_state = 11},
  [569] = {.lex_state = 11},
  [570] = {.lex_state = 11},
  [571] = {.lex_state = 11},
  [572] = {.lex_state = 11},
  [573] = {.lex_state = 11},
  [574] = {.lex_state = 63, .external_lex_state = 3},
  [575] = {.lex_state = 11},
  [576] = {.lex_state = 11},
  [577] = {.lex_state = 63, .external_lex_state = 3},
  [578] = {.lex_state = 11},
  [579] = {.lex_state = 63, .external_lex_state = 3},
  [580] = {.lex_state = 63, .external_lex_state = 3},
  [581] = {.lex_state = 11},
  [582] = {.lex_state = 55},
  [583] = {.lex_state = 11},
  [584] = {.lex_state = 63, .external_lex_state = 3},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 11},
  [587] = {.lex_state = 11, .external_lex_state = 3},
  [588] = {.lex_state = 11},
  [589] = {.lex_state = 63, .external_lex_state = 2},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 64},
  [592] = {.lex_state = 63, .external_lex_state = 2},
  [593] = {.lex_state = 11, .external_lex_state = 3},
  [594] = {.lex_state = 63},
  [595] = {.lex_state = 11, .external_lex_state = 3},
  [596] = {.lex_state = 63, .external_lex_state = 2},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 63, .external_lex_state = 2},
  [599] = {.lex_state = 63, .external_lex_state = 2},
  [600] = {.lex_state = 63, .external_lex_state = 2},
  [601] = {.lex_state = 63, .external_lex_state = 2},
  [602] = {.lex_state = 55},
  [603] = {.lex_state = 63},
  [604] = {.lex_state = 63},
  [605] = {.lex_state = 63, .external_lex_state = 2},
  [606] = {.lex_state = 63, .external_lex_state = 2},
  [607] = {.lex_state = 63, .external_lex_state = 2},
  [608] = {.lex_state = 63, .external_lex_state = 2},
  [609] = {.lex_state = 63, .external_lex_state = 2},
  [610] = {.lex_state = 11, .external_lex_state = 3},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 63, .external_lex_state = 2},
  [613] = {.lex_state = 96},
  [614] = {.lex_state = 63},
  [615] = {.lex_state = 11, .external_lex_state = 3},
  [616] = {.lex_state = 11, .external_lex_state = 3},
  [617] = {.lex_state = 272, .external_lex_state = 5},
  [618] = {.lex_state = 50, .external_lex_state = 2},
  [619] = {.lex_state = 53, .external_lex_state = 3},
  [620] = {.lex_state = 54},
  [621] = {.lex_state = 11, .external_lex_state = 3},
  [622] = {.lex_state = 53, .external_lex_state = 3},
  [623] = {.lex_state = 54},
  [624] = {.lex_state = 63},
  [625] = {.lex_state = 63},
  [626] = {.lex_state = 63},
  [627] = {.lex_state = 63},
  [628] = {.lex_state = 96},
  [629] = {.lex_state = 96},
  [630] = {.lex_state = 63},
  [631] = {.lex_state = 63},
  [632] = {.lex_state = 50, .external_lex_state = 2},
  [633] = {.lex_state = 63},
  [634] = {.lex_state = 272, .external_lex_state = 5},
  [635] = {.lex_state = 63},
  [636] = {.lex_state = 63},
  [637] = {.lex_state = 63},
  [638] = {.lex_state = 63},
  [639] = {.lex_state = 53, .external_lex_state = 3},
  [640] = {.lex_state = 63},
  [641] = {.lex_state = 63},
  [642] = {.lex_state = 11, .external_lex_state = 5},
  [643] = {.lex_state = 63},
  [644] = {.lex_state = 63},
  [645] = {.lex_state = 63},
  [646] = {.lex_state = 63},
  [647] = {.lex_state = 272, .external_lex_state = 5},
  [648] = {.lex_state = 53, .external_lex_state = 3},
  [649] = {.lex_state = 63},
  [650] = {.lex_state = 63},
  [651] = {.lex_state = 63},
  [652] = {.lex_state = 96},
  [653] = {.lex_state = 63},
  [654] = {.lex_state = 63},
  [655] = {.lex_state = 50, .external_lex_state = 2},
  [656] = {.lex_state = 63},
  [657] = {.lex_state = 63},
  [658] = {.lex_state = 50, .external_lex_state = 2},
  [659] = {.lex_state = 272, .external_lex_state = 5},
  [660] = {.lex_state = 96},
  [661] = {.lex_state = 63},
  [662] = {.lex_state = 50, .external_lex_state = 2},
  [663] = {.lex_state = 53, .external_lex_state = 3},
  [664] = {.lex_state = 272, .external_lex_state = 5},
  [665] = {.lex_state = 50, .external_lex_state = 2},
  [666] = {.lex_state = 63},
  [667] = {.lex_state = 63},
  [668] = {.lex_state = 272, .external_lex_state = 5},
  [669] = {.lex_state = 272, .external_lex_state = 5},
  [670] = {.lex_state = 54},
  [671] = {.lex_state = 272, .external_lex_state = 5},
  [672] = {.lex_state = 54},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 54},
  [675] = {.lex_state = 272},
  [676] = {.lex_state = 54},
  [677] = {.lex_state = 50, .external_lex_state = 2},
  [678] = {.lex_state = 272, .external_lex_state = 3},
  [679] = {.lex_state = 53},
  [680] = {.lex_state = 53},
  [681] = {.lex_state = 54},
  [682] = {.lex_state = 272},
  [683] = {.lex_state = 50, .external_lex_state = 3},
  [684] = {.lex_state = 54},
  [685] = {.lex_state = 272, .external_lex_state = 3},
  [686] = {.lex_state = 53},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 54},
  [689] = {.lex_state = 54},
  [690] = {.lex_state = 54},
  [691] = {.lex_state = 272},
  [692] = {.lex_state = 50, .external_lex_state = 3},
  [693] = {.lex_state = 53},
  [694] = {.lex_state = 53},
  [695] = {.lex_state = 54},
  [696] = {.lex_state = 54},
  [697] = {.lex_state = 272, .external_lex_state = 3},
  [698] = {.lex_state = 272},
  [699] = {.lex_state = 272, .external_lex_state = 5},
  [700] = {.lex_state = 272},
  [701] = {.lex_state = 272},
  [702] = {.lex_state = 50, .external_lex_state = 3},
  [703] = {.lex_state = 54},
  [704] = {.lex_state = 272, .external_lex_state = 3},
  [705] = {.lex_state = 53},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 54},
  [708] = {.lex_state = 54},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0, .external_lex_state = 3},
  [711] = {.lex_state = 50, .external_lex_state = 3},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 272},
  [714] = {.lex_state = 50, .external_lex_state = 3},
  [715] = {.lex_state = 272, .external_lex_state = 5},
  [716] = {.lex_state = 53},
  [717] = {.lex_state = 53},
  [718] = {.lex_state = 272, .external_lex_state = 3},
  [719] = {.lex_state = 272, .external_lex_state = 5},
  [720] = {.lex_state = 53},
  [721] = {.lex_state = 53},
  [722] = {.lex_state = 54},
  [723] = {.lex_state = 54},
  [724] = {.lex_state = 272},
  [725] = {.lex_state = 53},
  [726] = {.lex_state = 50, .external_lex_state = 2},
  [727] = {.lex_state = 54},
  [728] = {.lex_state = 53},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 53},
  [731] = {.lex_state = 54},
  [732] = {.lex_state = 54},
  [733] = {.lex_state = 272},
  [734] = {.lex_state = 53},
  [735] = {.lex_state = 272, .external_lex_state = 5},
  [736] = {.lex_state = 54},
  [737] = {.lex_state = 272},
  [738] = {.lex_state = 53},
  [739] = {.lex_state = 54},
  [740] = {.lex_state = 272, .external_lex_state = 5},
  [741] = {.lex_state = 53},
  [742] = {.lex_state = 272, .external_lex_state = 5},
  [743] = {.lex_state = 272, .external_lex_state = 5},
  [744] = {.lex_state = 54},
  [745] = {.lex_state = 53},
  [746] = {.lex_state = 272, .external_lex_state = 5},
  [747] = {.lex_state = 0, .external_lex_state = 3},
  [748] = {.lex_state = 53},
  [749] = {.lex_state = 53},
  [750] = {.lex_state = 54},
  [751] = {.lex_state = 54},
  [752] = {.lex_state = 54},
  [753] = {.lex_state = 272, .external_lex_state = 5},
  [754] = {.lex_state = 54},
  [755] = {.lex_state = 0, .external_lex_state = 3},
  [756] = {.lex_state = 54},
  [757] = {.lex_state = 53},
  [758] = {.lex_state = 53},
  [759] = {.lex_state = 63},
  [760] = {.lex_state = 53},
  [761] = {.lex_state = 53},
  [762] = {.lex_state = 0, .external_lex_state = 6},
  [763] = {.lex_state = 53},
  [764] = {.lex_state = 0, .external_lex_state = 6},
  [765] = {.lex_state = 63},
  [766] = {.lex_state = 63},
  [767] = {.lex_state = 63},
  [768] = {.lex_state = 0, .external_lex_state = 3},
  [769] = {.lex_state = 63},
  [770] = {.lex_state = 63},
  [771] = {.lex_state = 0, .external_lex_state = 6},
  [772] = {.lex_state = 0, .external_lex_state = 6},
  [773] = {.lex_state = 63},
  [774] = {.lex_state = 272, .external_lex_state = 5},
  [775] = {.lex_state = 63},
  [776] = {.lex_state = 63},
  [777] = {.lex_state = 0, .external_lex_state = 6},
  [778] = {.lex_state = 0, .external_lex_state = 6},
  [779] = {.lex_state = 65},
  [780] = {.lex_state = 65},
  [781] = {.lex_state = 0, .external_lex_state = 6},
  [782] = {.lex_state = 0, .external_lex_state = 6},
  [783] = {.lex_state = 63},
  [784] = {.lex_state = 61},
  [785] = {.lex_state = 0, .external_lex_state = 6},
  [786] = {.lex_state = 63},
  [787] = {.lex_state = 0, .external_lex_state = 6},
  [788] = {.lex_state = 63},
  [789] = {.lex_state = 63},
  [790] = {.lex_state = 63},
  [791] = {.lex_state = 63},
  [792] = {.lex_state = 63},
  [793] = {.lex_state = 63},
  [794] = {.lex_state = 61},
  [795] = {.lex_state = 0, .external_lex_state = 6},
  [796] = {.lex_state = 63},
  [797] = {.lex_state = 63},
  [798] = {.lex_state = 63},
  [799] = {.lex_state = 272, .external_lex_state = 5},
  [800] = {.lex_state = 791},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0, .external_lex_state = 3},
  [803] = {.lex_state = 163},
  [804] = {.lex_state = 0, .external_lex_state = 3},
  [805] = {.lex_state = 164},
  [806] = {.lex_state = 0, .external_lex_state = 3},
  [807] = {.lex_state = 0, .external_lex_state = 3},
  [808] = {.lex_state = 791},
  [809] = {.lex_state = 0, .external_lex_state = 3},
  [810] = {.lex_state = 163},
  [811] = {.lex_state = 0, .external_lex_state = 6},
  [812] = {.lex_state = 164},
  [813] = {.lex_state = 0, .external_lex_state = 6},
  [814] = {.lex_state = 164},
  [815] = {.lex_state = 0, .external_lex_state = 6},
  [816] = {.lex_state = 0, .external_lex_state = 3},
  [817] = {.lex_state = 51},
  [818] = {.lex_state = 0, .external_lex_state = 3},
  [819] = {.lex_state = 0, .external_lex_state = 3},
  [820] = {.lex_state = 0, .external_lex_state = 3},
  [821] = {.lex_state = 0, .external_lex_state = 3},
  [822] = {.lex_state = 791},
  [823] = {.lex_state = 0, .external_lex_state = 3},
  [824] = {.lex_state = 0, .external_lex_state = 3},
  [825] = {.lex_state = 0, .external_lex_state = 6},
  [826] = {.lex_state = 0, .external_lex_state = 6},
  [827] = {.lex_state = 51},
  [828] = {.lex_state = 0, .external_lex_state = 3},
  [829] = {.lex_state = 0, .external_lex_state = 3},
  [830] = {.lex_state = 0, .external_lex_state = 6},
  [831] = {.lex_state = 163},
  [832] = {.lex_state = 0, .external_lex_state = 6},
  [833] = {.lex_state = 0, .external_lex_state = 6},
  [834] = {.lex_state = 0, .external_lex_state = 6},
  [835] = {.lex_state = 0, .external_lex_state = 3},
  [836] = {.lex_state = 0, .external_lex_state = 3},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 791},
  [839] = {.lex_state = 0, .external_lex_state = 3},
  [840] = {.lex_state = 0, .external_lex_state = 3},
  [841] = {.lex_state = 0, .external_lex_state = 6},
  [842] = {.lex_state = 0, .external_lex_state = 3},
  [843] = {.lex_state = 272},
  [844] = {.lex_state = 0, .external_lex_state = 3},
  [845] = {.lex_state = 0, .external_lex_state = 6},
  [846] = {.lex_state = 272},
  [847] = {.lex_state = 0, .external_lex_state = 3},
  [848] = {.lex_state = 0, .external_lex_state = 6},
  [849] = {.lex_state = 0, .external_lex_state = 3},
  [850] = {.lex_state = 0, .external_lex_state = 3},
  [851] = {.lex_state = 0, .external_lex_state = 3},
  [852] = {.lex_state = 0, .external_lex_state = 3},
  [853] = {.lex_state = 791},
  [854] = {.lex_state = 0, .external_lex_state = 3},
  [855] = {.lex_state = 0, .external_lex_state = 3},
  [856] = {.lex_state = 0, .external_lex_state = 6},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0, .external_lex_state = 3},
  [859] = {.lex_state = 163},
  [860] = {.lex_state = 0, .external_lex_state = 6},
  [861] = {.lex_state = 163},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0, .external_lex_state = 3},
  [864] = {.lex_state = 175},
  [865] = {.lex_state = 164},
  [866] = {.lex_state = 0, .external_lex_state = 3},
  [867] = {.lex_state = 272},
  [868] = {.lex_state = 0, .external_lex_state = 3},
  [869] = {.lex_state = 0, .external_lex_state = 3},
  [870] = {.lex_state = 0, .external_lex_state = 6},
  [871] = {.lex_state = 0, .external_lex_state = 6},
  [872] = {.lex_state = 272},
  [873] = {.lex_state = 0, .external_lex_state = 3},
  [874] = {.lex_state = 0, .external_lex_state = 3},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 53},
  [877] = {.lex_state = 272},
  [878] = {.lex_state = 0, .external_lex_state = 3},
  [879] = {.lex_state = 164},
  [880] = {.lex_state = 0, .external_lex_state = 6},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0, .external_lex_state = 3},
  [883] = {.lex_state = 0, .external_lex_state = 6},
  [884] = {.lex_state = 0, .external_lex_state = 6},
  [885] = {.lex_state = 0, .external_lex_state = 6},
  [886] = {.lex_state = 0, .external_lex_state = 6},
  [887] = {.lex_state = 52},
  [888] = {.lex_state = 0, .external_lex_state = 3},
  [889] = {.lex_state = 0, .external_lex_state = 6},
  [890] = {.lex_state = 0, .external_lex_state = 6},
  [891] = {.lex_state = 0, .external_lex_state = 6},
  [892] = {.lex_state = 0, .external_lex_state = 6},
  [893] = {.lex_state = 0, .external_lex_state = 3},
  [894] = {.lex_state = 0, .external_lex_state = 6},
  [895] = {.lex_state = 0, .external_lex_state = 6},
  [896] = {.lex_state = 0, .external_lex_state = 6},
  [897] = {.lex_state = 0, .external_lex_state = 6},
  [898] = {.lex_state = 165},
  [899] = {.lex_state = 0, .external_lex_state = 6},
  [900] = {.lex_state = 0, .external_lex_state = 6},
  [901] = {.lex_state = 0, .external_lex_state = 6},
  [902] = {.lex_state = 0, .external_lex_state = 6},
  [903] = {.lex_state = 0, .external_lex_state = 6},
  [904] = {.lex_state = 0, .external_lex_state = 6},
  [905] = {.lex_state = 0, .external_lex_state = 6},
  [906] = {.lex_state = 0, .external_lex_state = 6},
  [907] = {.lex_state = 53},
  [908] = {.lex_state = 0, .external_lex_state = 3},
  [909] = {.lex_state = 0, .external_lex_state = 3},
  [910] = {.lex_state = 0, .external_lex_state = 3},
  [911] = {.lex_state = 53},
  [912] = {.lex_state = 0, .external_lex_state = 3},
  [913] = {.lex_state = 0, .external_lex_state = 3},
  [914] = {.lex_state = 0, .external_lex_state = 3},
  [915] = {.lex_state = 0, .external_lex_state = 3},
  [916] = {.lex_state = 0, .external_lex_state = 3},
  [917] = {.lex_state = 0, .external_lex_state = 3},
  [918] = {.lex_state = 0, .external_lex_state = 3},
  [919] = {.lex_state = 0, .external_lex_state = 3},
  [920] = {.lex_state = 0, .external_lex_state = 3},
  [921] = {.lex_state = 0, .external_lex_state = 3},
  [922] = {.lex_state = 0, .external_lex_state = 3},
  [923] = {.lex_state = 0, .external_lex_state = 3},
  [924] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
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
    [sym_source_file] = STATE(837),
    [sym_doctype] = STATE(48),
    [sym_pipe] = STATE(48),
    [sym_block_definition] = STATE(48),
    [sym_block_append] = STATE(48),
    [sym_block_prepend] = STATE(48),
    [sym_extends] = STATE(48),
    [sym_filter] = STATE(48),
    [sym_conditional] = STATE(48),
    [sym_case] = STATE(48),
    [sym_unescaped_buffered_code] = STATE(48),
    [sym_buffered_code] = STATE(48),
    [sym_script_block] = STATE(48),
    [sym_tag] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__comment] = STATE(383),
    [sym__comment_not_first_line] = STATE(383),
    [sym_unbuffered_code] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(9),
    [anon_sym_append] = ACTIONS(11),
    [anon_sym_prepend] = ACTIONS(13),
    [anon_sym_extends] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_unless] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_elseif] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_script_DOT] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(35),
    [sym_tag_name] = ACTIONS(37),
    [sym_class] = ACTIONS(39),
    [sym_id] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(45), 1,
      anon_sym_doctype,
    ACTIONS(48), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      anon_sym_block,
    ACTIONS(54), 1,
      anon_sym_append,
    ACTIONS(57), 1,
      anon_sym_prepend,
    ACTIONS(60), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_elseif,
    ACTIONS(72), 1,
      anon_sym_else,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(80), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(86), 1,
      anon_sym_script_DOT,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(104), 1,
      sym__newline,
    ACTIONS(43), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(66), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(78), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(98), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [94] = 25,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(151), 1,
      sym__dedent,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(131), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [190] = 25,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(153), 1,
      sym__dedent,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(131), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [286] = 24,
    ACTIONS(43), 1,
      sym__dedent,
    ACTIONS(155), 1,
      anon_sym_doctype,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_block,
    ACTIONS(164), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(170), 1,
      anon_sym_extends,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(179), 1,
      anon_sym_elseif,
    ACTIONS(182), 1,
      anon_sym_else,
    ACTIONS(185), 1,
      anon_sym_case,
    ACTIONS(188), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(194), 1,
      anon_sym_script_DOT,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(203), 1,
      sym_tag_name,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(78), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(176), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(206), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [379] = 24,
    ACTIONS(215), 1,
      anon_sym_doctype,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_block,
    ACTIONS(221), 1,
      anon_sym_append,
    ACTIONS(223), 1,
      anon_sym_prepend,
    ACTIONS(225), 1,
      anon_sym_extends,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(237), 1,
      anon_sym_BANG_EQ,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_script_DOT,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(247), 1,
      sym_tag_name,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(253), 1,
      sym__newline,
    ACTIONS(255), 1,
      sym__dedent,
    ACTIONS(131), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(229), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [472] = 24,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(295), 1,
      sym__dedent,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [564] = 23,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(297), 1,
      anon_sym_doctype,
    ACTIONS(300), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      anon_sym_block,
    ACTIONS(306), 1,
      anon_sym_append,
    ACTIONS(309), 1,
      anon_sym_prepend,
    ACTIONS(312), 1,
      anon_sym_extends,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_elseif,
    ACTIONS(324), 1,
      anon_sym_else,
    ACTIONS(327), 1,
      anon_sym_BANG_EQ,
    ACTIONS(330), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_script_DOT,
    ACTIONS(336), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(339), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(342), 1,
      sym_tag_name,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(351), 1,
      sym__newline,
    ACTIONS(43), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(318), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(345), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [654] = 24,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(354), 1,
      sym__dedent,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [746] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(394), 1,
      sym__dedent,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(32), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [835] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [924] = 23,
    ACTIONS(215), 1,
      anon_sym_doctype,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_block,
    ACTIONS(221), 1,
      anon_sym_append,
    ACTIONS(223), 1,
      anon_sym_prepend,
    ACTIONS(225), 1,
      anon_sym_extends,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(237), 1,
      anon_sym_BANG_EQ,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_script_DOT,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(247), 1,
      sym_tag_name,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1013] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1102] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1191] = 23,
    ACTIONS(215), 1,
      anon_sym_doctype,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_block,
    ACTIONS(221), 1,
      anon_sym_append,
    ACTIONS(223), 1,
      anon_sym_prepend,
    ACTIONS(225), 1,
      anon_sym_extends,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(237), 1,
      anon_sym_BANG_EQ,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_script_DOT,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(247), 1,
      sym_tag_name,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1280] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1369] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1458] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1547] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1636] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1725] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1814] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1903] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(420), 1,
      sym__dedent,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(32), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [1992] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2081] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2170] = 23,
    ACTIONS(215), 1,
      anon_sym_doctype,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_block,
    ACTIONS(221), 1,
      anon_sym_append,
    ACTIONS(223), 1,
      anon_sym_prepend,
    ACTIONS(225), 1,
      anon_sym_extends,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(237), 1,
      anon_sym_BANG_EQ,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_script_DOT,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(247), 1,
      sym_tag_name,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2259] = 23,
    ACTIONS(215), 1,
      anon_sym_doctype,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_block,
    ACTIONS(221), 1,
      anon_sym_append,
    ACTIONS(223), 1,
      anon_sym_prepend,
    ACTIONS(225), 1,
      anon_sym_extends,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(237), 1,
      anon_sym_BANG_EQ,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_script_DOT,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(247), 1,
      sym_tag_name,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2348] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2437] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2526] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2615] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2704] = 23,
    ACTIONS(43), 1,
      sym__dedent,
    ACTIONS(185), 1,
      anon_sym_case,
    ACTIONS(426), 1,
      anon_sym_doctype,
    ACTIONS(429), 1,
      anon_sym_PIPE,
    ACTIONS(432), 1,
      anon_sym_block,
    ACTIONS(435), 1,
      anon_sym_append,
    ACTIONS(438), 1,
      anon_sym_prepend,
    ACTIONS(441), 1,
      anon_sym_extends,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(450), 1,
      anon_sym_elseif,
    ACTIONS(453), 1,
      anon_sym_else,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(459), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_script_DOT,
    ACTIONS(465), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(468), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(471), 1,
      sym_tag_name,
    ACTIONS(477), 1,
      anon_sym_DASH,
    ACTIONS(480), 1,
      sym__newline,
    ACTIONS(447), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(474), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(32), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2793] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2882] = 23,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [2971] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3060] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3149] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3238] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3327] = 23,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3416] = 23,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3505] = 22,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3591] = 22,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(257), 1,
      anon_sym_doctype,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_block,
    ACTIONS(263), 1,
      anon_sym_append,
    ACTIONS(265), 1,
      anon_sym_prepend,
    ACTIONS(267), 1,
      anon_sym_extends,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_elseif,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_script_DOT,
    ACTIONS(283), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(271), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
    STATE(295), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3677] = 22,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(406), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3763] = 22,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3849] = 22,
    ACTIONS(109), 1,
      anon_sym_doctype,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_append,
    ACTIONS(117), 1,
      anon_sym_prepend,
    ACTIONS(119), 1,
      anon_sym_extends,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(133), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_script_DOT,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(126), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [3935] = 22,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_doctype,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_block,
    ACTIONS(362), 1,
      anon_sym_append,
    ACTIONS(364), 1,
      anon_sym_prepend,
    ACTIONS(366), 1,
      anon_sym_extends,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_elseif,
    ACTIONS(374), 1,
      anon_sym_else,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_script_DOT,
    ACTIONS(382), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(410), 1,
      sym__newline,
    ACTIONS(370), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(388), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [4021] = 22,
    ACTIONS(215), 1,
      anon_sym_doctype,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_block,
    ACTIONS(221), 1,
      anon_sym_append,
    ACTIONS(223), 1,
      anon_sym_prepend,
    ACTIONS(225), 1,
      anon_sym_extends,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 1,
      anon_sym_case,
    ACTIONS(237), 1,
      anon_sym_BANG_EQ,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_script_DOT,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(247), 1,
      sym_tag_name,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 17,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
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
  [4107] = 22,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      anon_sym_block,
    ACTIONS(11), 1,
      anon_sym_append,
    ACTIONS(13), 1,
      anon_sym_prepend,
    ACTIONS(15), 1,
      anon_sym_extends,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(21), 1,
      anon_sym_elseif,
    ACTIONS(23), 1,
      anon_sym_else,
    ACTIONS(25), 1,
      anon_sym_case,
    ACTIONS(27), 1,
      anon_sym_BANG_EQ,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(31), 1,
      anon_sym_script_DOT,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(37), 1,
      sym_tag_name,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(39), 2,
      sym_class,
      sym_id,
    STATE(383), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(49), 16,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [4192] = 22,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(490), 1,
      anon_sym_PIPE,
    ACTIONS(493), 1,
      anon_sym_block,
    ACTIONS(496), 1,
      anon_sym_append,
    ACTIONS(499), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(505), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(514), 1,
      anon_sym_else,
    ACTIONS(517), 1,
      anon_sym_case,
    ACTIONS(520), 1,
      anon_sym_BANG_EQ,
    ACTIONS(523), 1,
      anon_sym_EQ,
    ACTIONS(526), 1,
      anon_sym_script_DOT,
    ACTIONS(529), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(532), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(535), 1,
      sym_tag_name,
    ACTIONS(541), 1,
      anon_sym_DASH,
    ACTIONS(508), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(538), 2,
      sym_class,
      sym_id,
    STATE(383), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(49), 16,
      sym_doctype,
      sym_pipe,
      sym_block_definition,
      sym_block_append,
      sym_block_prepend,
      sym_extends,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [4277] = 9,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      aux_sym_filter_content_token1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      sym__newline,
    STATE(56), 1,
      sym_attributes,
    STATE(137), 1,
      sym_filter,
    STATE(138), 1,
      sym_filter_content,
    ACTIONS(544), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(546), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [4327] = 9,
    ACTIONS(544), 1,
      sym__dedent,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(558), 1,
      aux_sym_filter_content_token1,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      sym__newline,
    STATE(64), 1,
      sym_attributes,
    STATE(236), 1,
      sym_filter,
    STATE(239), 1,
      sym_filter_content,
    ACTIONS(546), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [4376] = 5,
    ACTIONS(568), 1,
      aux_sym_filter_content_token2,
    STATE(52), 1,
      aux_sym__comment_repeat1,
    STATE(828), 1,
      sym__comment_content,
    ACTIONS(564), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(566), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [4416] = 6,
    ACTIONS(575), 1,
      anon_sym_when,
    ACTIONS(578), 1,
      anon_sym_default,
    STATE(710), 1,
      sym__when_keyword,
    STATE(53), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(573), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4458] = 6,
    ACTIONS(585), 1,
      anon_sym_when,
    ACTIONS(587), 1,
      anon_sym_default,
    STATE(710), 1,
      sym__when_keyword,
    STATE(53), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(583), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4500] = 9,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      aux_sym_filter_content_token1,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      sym__newline,
    STATE(92), 1,
      sym_attributes,
    STATE(274), 1,
      sym_filter_content,
    STATE(275), 1,
      sym_filter,
    ACTIONS(544), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(546), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [4548] = 7,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      aux_sym_filter_content_token1,
    ACTIONS(554), 1,
      sym__newline,
    STATE(137), 1,
      sym_filter,
    STATE(144), 1,
      sym_filter_content,
    ACTIONS(597), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(599), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [4592] = 5,
    ACTIONS(605), 1,
      aux_sym_filter_content_token2,
    STATE(52), 1,
      aux_sym__comment_repeat1,
    STATE(828), 1,
      sym__comment_content,
    ACTIONS(601), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(603), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [4632] = 9,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(607), 1,
      anon_sym_COLON,
    ACTIONS(609), 1,
      aux_sym_filter_content_token1,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      sym__newline,
    STATE(169), 1,
      sym_attributes,
    STATE(373), 1,
      sym_filter,
    STATE(374), 1,
      sym_filter_content,
    ACTIONS(546), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [4679] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
    ACTIONS(615), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(617), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [4716] = 5,
    ACTIONS(621), 1,
      aux_sym_filter_content_token2,
    STATE(60), 1,
      aux_sym__comment_repeat1,
    STATE(878), 1,
      sym__comment_content,
    ACTIONS(564), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(566), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [4755] = 4,
    ACTIONS(628), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
    ACTIONS(624), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [4792] = 6,
    ACTIONS(585), 1,
      anon_sym_when,
    ACTIONS(630), 1,
      anon_sym_default,
    STATE(755), 1,
      sym__when_keyword,
    STATE(70), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(583), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(581), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4833] = 4,
    ACTIONS(636), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(632), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [4870] = 7,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(558), 1,
      aux_sym_filter_content_token1,
    ACTIONS(562), 1,
      sym__newline,
    ACTIONS(597), 1,
      sym__dedent,
    STATE(182), 1,
      sym_filter_content,
    STATE(236), 1,
      sym_filter,
    ACTIONS(599), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [4913] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(150), 1,
      sym_children,
    ACTIONS(638), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [4950] = 4,
    ACTIONS(642), 1,
      sym__indent,
    STATE(150), 1,
      sym_children,
    ACTIONS(638), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [4987] = 4,
    ACTIONS(648), 1,
      sym__un_delimited_javascript_line,
    STATE(74), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(644), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(646), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5024] = 5,
    ACTIONS(650), 1,
      aux_sym_filter_content_token2,
    STATE(60), 1,
      aux_sym__comment_repeat1,
    STATE(878), 1,
      sym__comment_content,
    ACTIONS(601), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(603), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5063] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(160), 1,
      sym_children,
    ACTIONS(652), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5100] = 6,
    ACTIONS(575), 1,
      anon_sym_when,
    ACTIONS(656), 1,
      anon_sym_default,
    STATE(755), 1,
      sym__when_keyword,
    STATE(70), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(573), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(571), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5141] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(160), 1,
      sym_children,
    ACTIONS(652), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5178] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(165), 1,
      sym_children,
    ACTIONS(661), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5215] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(168), 1,
      sym_children,
    ACTIONS(665), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5252] = 4,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(74), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(669), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(671), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5289] = 9,
    ACTIONS(544), 1,
      sym__dedent,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      aux_sym_filter_content_token1,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      sym__newline,
    STATE(158), 1,
      sym_attributes,
    STATE(355), 1,
      sym_filter,
    STATE(356), 1,
      sym_filter_content,
    ACTIONS(546), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [5336] = 4,
    ACTIONS(684), 1,
      sym__indent,
    STATE(200), 1,
      sym_children,
    ACTIONS(638), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5372] = 2,
    ACTIONS(564), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(566), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [5404] = 4,
    ACTIONS(686), 1,
      sym__un_delimited_javascript_line,
    STATE(78), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(669), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(671), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5440] = 4,
    ACTIONS(689), 1,
      sym__indent,
    STATE(185), 1,
      sym_children,
    ACTIONS(632), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5476] = 4,
    ACTIONS(691), 1,
      sym__indent,
    STATE(192), 1,
      sym_children,
    ACTIONS(624), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5512] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(241), 1,
      sym_children,
    ACTIONS(652), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5548] = 2,
    ACTIONS(695), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(697), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5580] = 3,
    ACTIONS(703), 1,
      sym__indent,
    ACTIONS(699), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(701), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5614] = 4,
    ACTIONS(705), 1,
      sym__un_delimited_javascript_line,
    STATE(78), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(644), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(646), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5650] = 2,
    ACTIONS(707), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(709), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [5682] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(174), 1,
      sym_children,
    ACTIONS(615), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(617), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5718] = 4,
    ACTIONS(711), 1,
      sym__indent,
    STATE(200), 1,
      sym_children,
    ACTIONS(638), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5754] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(237), 1,
      sym_children,
    ACTIONS(638), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5790] = 4,
    ACTIONS(713), 1,
      sym__indent,
    STATE(233), 1,
      sym_children,
    ACTIONS(624), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5826] = 4,
    ACTIONS(715), 1,
      sym__indent,
    STATE(241), 1,
      sym_children,
    ACTIONS(652), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5862] = 4,
    ACTIONS(717), 1,
      sym__indent,
    STATE(237), 1,
      sym_children,
    ACTIONS(638), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5898] = 7,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      aux_sym_filter_content_token1,
    ACTIONS(595), 1,
      sym__newline,
    STATE(259), 1,
      sym_filter_content,
    STATE(275), 1,
      sym_filter,
    ACTIONS(597), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(599), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [5940] = 6,
    ACTIONS(585), 1,
      anon_sym_when,
    ACTIONS(719), 1,
      anon_sym_default,
    STATE(747), 1,
      sym__when_keyword,
    STATE(102), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(581), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(583), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5980] = 4,
    ACTIONS(684), 1,
      sym__indent,
    STATE(173), 1,
      sym_children,
    ACTIONS(652), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6016] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(246), 1,
      sym_children,
    ACTIONS(665), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6052] = 4,
    ACTIONS(721), 1,
      sym__indent,
    STATE(231), 1,
      sym_children,
    ACTIONS(632), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6088] = 2,
    ACTIONS(723), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(725), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6120] = 2,
    ACTIONS(727), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(729), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6152] = 4,
    ACTIONS(731), 1,
      sym__indent,
    STATE(173), 1,
      sym_children,
    ACTIONS(652), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6188] = 3,
    ACTIONS(737), 1,
      sym__indent,
    ACTIONS(733), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(735), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6222] = 5,
    ACTIONS(739), 1,
      aux_sym_filter_content_token2,
    STATE(104), 1,
      aux_sym__comment_repeat1,
    STATE(802), 1,
      sym__comment_content,
    ACTIONS(601), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(603), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6260] = 6,
    ACTIONS(575), 1,
      anon_sym_when,
    ACTIONS(741), 1,
      anon_sym_default,
    STATE(747), 1,
      sym__when_keyword,
    STATE(102), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(571), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(573), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6300] = 4,
    ACTIONS(684), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(661), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6336] = 5,
    ACTIONS(744), 1,
      aux_sym_filter_content_token2,
    STATE(104), 1,
      aux_sym__comment_repeat1,
    STATE(802), 1,
      sym__comment_content,
    ACTIONS(564), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(566), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6374] = 4,
    ACTIONS(684), 1,
      sym__indent,
    STATE(214), 1,
      sym_children,
    ACTIONS(665), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6410] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(249), 1,
      sym_children,
    ACTIONS(661), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6446] = 5,
    ACTIONS(684), 1,
      sym__indent,
    ACTIONS(747), 1,
      sym__dedent,
    STATE(209), 1,
      sym_children,
    ACTIONS(615), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(617), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6484] = 2,
    ACTIONS(707), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(709), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6515] = 2,
    ACTIONS(749), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(751), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6546] = 3,
    ACTIONS(753), 1,
      sym__indent,
    ACTIONS(699), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(701), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6579] = 4,
    ACTIONS(755), 1,
      sym__indent,
    STATE(266), 1,
      sym_children,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(638), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6614] = 4,
    ACTIONS(755), 1,
      sym__indent,
    STATE(278), 1,
      sym_children,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(652), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6649] = 4,
    ACTIONS(757), 1,
      sym__indent,
    STATE(253), 1,
      sym_children,
    ACTIONS(626), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(624), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6684] = 2,
    ACTIONS(624), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6715] = 3,
    ACTIONS(759), 1,
      sym__indent,
    ACTIONS(733), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(735), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6748] = 4,
    ACTIONS(761), 1,
      sym__indent,
    STATE(278), 1,
      sym_children,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(652), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6783] = 4,
    ACTIONS(763), 1,
      sym__un_delimited_javascript_line,
    STATE(121), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(644), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(646), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6818] = 2,
    ACTIONS(615), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(617), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6849] = 4,
    ACTIONS(755), 1,
      sym__indent,
    STATE(286), 1,
      sym_children,
    ACTIONS(667), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6884] = 4,
    ACTIONS(765), 1,
      sym__indent,
    STATE(269), 1,
      sym_children,
    ACTIONS(634), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6919] = 4,
    ACTIONS(767), 1,
      sym__un_delimited_javascript_line,
    STATE(121), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(669), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(671), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [6954] = 2,
    ACTIONS(632), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6985] = 2,
    ACTIONS(770), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(772), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7016] = 2,
    ACTIONS(774), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(776), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7047] = 4,
    ACTIONS(755), 1,
      sym__indent,
    STATE(289), 1,
      sym_children,
    ACTIONS(663), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7082] = 2,
    ACTIONS(778), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(780), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7113] = 2,
    ACTIONS(782), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(784), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7144] = 2,
    ACTIONS(786), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7175] = 2,
    ACTIONS(790), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(792), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7206] = 2,
    ACTIONS(794), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(796), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7237] = 2,
    ACTIONS(798), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(800), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7268] = 2,
    ACTIONS(802), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(804), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7299] = 2,
    ACTIONS(806), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(808), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7330] = 2,
    ACTIONS(810), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(812), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7361] = 2,
    ACTIONS(814), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(816), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7392] = 2,
    ACTIONS(818), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(820), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7423] = 2,
    ACTIONS(822), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(824), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7454] = 2,
    ACTIONS(597), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(599), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7485] = 2,
    ACTIONS(826), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(828), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7516] = 3,
    ACTIONS(834), 1,
      sym__dedent,
    ACTIONS(830), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(832), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7549] = 2,
    ACTIONS(638), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7580] = 2,
    ACTIONS(836), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(838), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7611] = 2,
    ACTIONS(840), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(842), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7642] = 2,
    ACTIONS(844), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(846), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7673] = 5,
    ACTIONS(848), 1,
      aux_sym_filter_content_token2,
    STATE(149), 1,
      aux_sym__comment_repeat1,
    STATE(873), 1,
      sym__comment_content,
    ACTIONS(601), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(603), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [7710] = 2,
    ACTIONS(850), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(852), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7741] = 2,
    ACTIONS(854), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(856), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7772] = 2,
    ACTIONS(727), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(729), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [7803] = 5,
    ACTIONS(858), 1,
      aux_sym_filter_content_token2,
    STATE(149), 1,
      aux_sym__comment_repeat1,
    STATE(873), 1,
      sym__comment_content,
    ACTIONS(564), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(566), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [7840] = 2,
    ACTIONS(652), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7871] = 2,
    ACTIONS(723), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(725), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [7902] = 2,
    ACTIONS(861), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(863), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7933] = 2,
    ACTIONS(865), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(867), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7964] = 2,
    ACTIONS(564), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(566), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [7995] = 4,
    ACTIONS(869), 1,
      sym__indent,
    STATE(266), 1,
      sym_children,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(638), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8030] = 2,
    ACTIONS(871), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8061] = 2,
    ACTIONS(875), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(877), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8092] = 7,
    ACTIONS(597), 1,
      sym__dedent,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      aux_sym_filter_content_token1,
    ACTIONS(682), 1,
      sym__newline,
    STATE(337), 1,
      sym_filter_content,
    STATE(355), 1,
      sym_filter,
    ACTIONS(599), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [8133] = 2,
    ACTIONS(879), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(881), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8164] = 2,
    ACTIONS(665), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8195] = 2,
    ACTIONS(883), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(885), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8226] = 2,
    ACTIONS(887), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(889), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8257] = 2,
    ACTIONS(891), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(893), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8288] = 3,
    ACTIONS(899), 1,
      sym__dedent,
    ACTIONS(895), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(897), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8321] = 2,
    ACTIONS(901), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(903), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8352] = 2,
    ACTIONS(905), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(907), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8383] = 2,
    ACTIONS(695), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(697), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [8414] = 2,
    ACTIONS(661), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8445] = 7,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(607), 1,
      anon_sym_COLON,
    ACTIONS(609), 1,
      aux_sym_filter_content_token1,
    ACTIONS(613), 1,
      sym__newline,
    STATE(373), 1,
      sym_filter,
    STATE(388), 1,
      sym_filter_content,
    ACTIONS(599), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
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
  [8486] = 3,
    ACTIONS(909), 1,
      sym__indent,
    ACTIONS(699), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(701), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8519] = 2,
    ACTIONS(911), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(913), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8550] = 2,
    ACTIONS(861), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(863), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8580] = 2,
    ACTIONS(665), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8610] = 2,
    ACTIONS(770), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(772), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8640] = 2,
    ACTIONS(905), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(907), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8670] = 2,
    ACTIONS(615), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(617), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8700] = 4,
    ACTIONS(915), 1,
      sym__indent,
    STATE(319), 1,
      sym_children,
    ACTIONS(634), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8734] = 4,
    ACTIONS(917), 1,
      sym__indent,
    STATE(320), 1,
      sym_children,
    ACTIONS(626), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(624), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8768] = 2,
    ACTIONS(727), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(729), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [8798] = 4,
    ACTIONS(919), 1,
      sym__un_delimited_javascript_line,
    STATE(206), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(644), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(646), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [8832] = 4,
    ACTIONS(921), 1,
      sym__indent,
    STATE(312), 1,
      sym_children,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(638), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8866] = 2,
    ACTIONS(844), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(846), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8896] = 2,
    ACTIONS(564), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(566), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [8926] = 2,
    ACTIONS(632), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8956] = 2,
    ACTIONS(624), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8986] = 4,
    ACTIONS(923), 1,
      sym__indent,
    STATE(312), 1,
      sym_children,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(638), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9020] = 2,
    ACTIONS(749), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(751), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9050] = 3,
    ACTIONS(747), 1,
      sym__dedent,
    ACTIONS(615), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(617), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9082] = 4,
    ACTIONS(921), 1,
      sym__indent,
    STATE(331), 1,
      sym_children,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(652), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9116] = 2,
    ACTIONS(850), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(852), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9146] = 3,
    ACTIONS(925), 1,
      sym__dedent,
    ACTIONS(895), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(897), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9178] = 2,
    ACTIONS(638), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9208] = 2,
    ACTIONS(707), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(709), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [9238] = 5,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
    ACTIONS(927), 1,
      aux_sym_filter_content_token2,
    STATE(245), 1,
      aux_sym__comment_repeat1,
    STATE(874), 1,
      sym__comment_content,
    ACTIONS(603), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [9274] = 4,
    ACTIONS(929), 1,
      sym__indent,
    STATE(331), 1,
      sym_children,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(652), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9308] = 2,
    ACTIONS(879), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(881), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9338] = 2,
    ACTIONS(875), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(877), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9368] = 2,
    ACTIONS(865), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(867), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9398] = 2,
    ACTIONS(854), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(856), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9428] = 2,
    ACTIONS(652), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9458] = 2,
    ACTIONS(695), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(697), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [9488] = 2,
    ACTIONS(871), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9518] = 3,
    ACTIONS(931), 1,
      sym__indent,
    ACTIONS(701), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(699), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9550] = 4,
    ACTIONS(921), 1,
      sym__indent,
    STATE(338), 1,
      sym_children,
    ACTIONS(667), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9584] = 2,
    ACTIONS(871), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9614] = 4,
    ACTIONS(933), 1,
      sym__un_delimited_javascript_line,
    STATE(206), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(669), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(671), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [9648] = 4,
    ACTIONS(921), 1,
      sym__indent,
    STATE(348), 1,
      sym_children,
    ACTIONS(663), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9682] = 4,
    ACTIONS(936), 1,
      sym__un_delimited_javascript_line,
    STATE(213), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(644), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(646), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [9716] = 2,
    ACTIONS(770), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(772), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9746] = 2,
    ACTIONS(774), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(776), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9776] = 2,
    ACTIONS(774), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(776), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9806] = 2,
    ACTIONS(891), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(893), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9836] = 4,
    ACTIONS(938), 1,
      sym__un_delimited_javascript_line,
    STATE(213), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(669), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(671), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [9870] = 2,
    ACTIONS(661), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9900] = 2,
    ACTIONS(887), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(889), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9930] = 2,
    ACTIONS(911), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(913), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9960] = 2,
    ACTIONS(901), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(903), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9990] = 2,
    ACTIONS(778), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(780), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10020] = 2,
    ACTIONS(782), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(784), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10050] = 2,
    ACTIONS(786), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10080] = 2,
    ACTIONS(790), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(792), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10110] = 2,
    ACTIONS(794), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(796), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10140] = 2,
    ACTIONS(798), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(800), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10170] = 2,
    ACTIONS(802), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(804), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10200] = 2,
    ACTIONS(806), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(808), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10230] = 2,
    ACTIONS(887), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(889), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10260] = 2,
    ACTIONS(883), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(885), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10290] = 2,
    ACTIONS(883), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(885), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10320] = 2,
    ACTIONS(632), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10350] = 2,
    ACTIONS(810), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(812), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10380] = 2,
    ACTIONS(624), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10410] = 2,
    ACTIONS(814), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(816), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10440] = 2,
    ACTIONS(638), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10470] = 2,
    ACTIONS(818), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(820), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10500] = 2,
    ACTIONS(850), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(852), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10530] = 2,
    ACTIONS(822), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(824), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10560] = 2,
    ACTIONS(652), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10590] = 2,
    ACTIONS(723), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(725), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [10620] = 2,
    ACTIONS(597), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(599), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10650] = 3,
    ACTIONS(941), 1,
      sym__indent,
    ACTIONS(735), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10682] = 2,
    ACTIONS(665), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10712] = 2,
    ACTIONS(826), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(828), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10742] = 3,
    ACTIONS(943), 1,
      sym__dedent,
    ACTIONS(830), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(832), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10774] = 2,
    ACTIONS(891), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(893), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10804] = 5,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(945), 1,
      aux_sym_filter_content_token2,
    STATE(245), 1,
      aux_sym__comment_repeat1,
    STATE(874), 1,
      sym__comment_content,
    ACTIONS(566), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [10840] = 2,
    ACTIONS(661), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10870] = 2,
    ACTIONS(911), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(913), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10900] = 2,
    ACTIONS(836), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(838), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10930] = 2,
    ACTIONS(901), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(903), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10960] = 2,
    ACTIONS(840), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(842), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10990] = 2,
    ACTIONS(634), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11019] = 2,
    ACTIONS(885), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(883), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11048] = 2,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(638), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11077] = 2,
    ACTIONS(707), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(709), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [11106] = 2,
    ACTIONS(863), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(861), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11135] = 2,
    ACTIONS(867), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(865), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11164] = 2,
    ACTIONS(852), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(850), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11193] = 2,
    ACTIONS(948), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(950), 13,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11222] = 2,
    ACTIONS(846), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(844), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11251] = 2,
    ACTIONS(877), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(875), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11280] = 3,
    ACTIONS(952), 1,
      sym__indent,
    ACTIONS(735), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11311] = 2,
    ACTIONS(881), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(879), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11340] = 2,
    ACTIONS(842), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(840), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11369] = 2,
    ACTIONS(838), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(836), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11398] = 3,
    ACTIONS(954), 1,
      sym__dedent,
    ACTIONS(832), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(830), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11429] = 2,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(652), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11458] = 2,
    ACTIONS(727), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(729), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [11487] = 2,
    ACTIONS(695), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(697), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [11516] = 2,
    ACTIONS(626), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(624), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11545] = 3,
    ACTIONS(956), 1,
      sym__indent,
    ACTIONS(701), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(699), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11576] = 2,
    ACTIONS(828), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(826), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11605] = 3,
    ACTIONS(958), 1,
      sym__dedent,
    ACTIONS(897), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(895), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11636] = 2,
    ACTIONS(751), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11665] = 2,
    ACTIONS(599), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(597), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11694] = 2,
    ACTIONS(824), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(822), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11723] = 2,
    ACTIONS(820), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(818), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11752] = 2,
    ACTIONS(873), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(871), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11781] = 2,
    ACTIONS(667), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11810] = 2,
    ACTIONS(893), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(891), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11839] = 2,
    ACTIONS(816), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(814), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11868] = 2,
    ACTIONS(812), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(810), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11897] = 2,
    ACTIONS(727), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(729), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [11926] = 2,
    ACTIONS(907), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(905), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11955] = 2,
    ACTIONS(889), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(887), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11984] = 2,
    ACTIONS(808), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(806), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12013] = 2,
    ACTIONS(663), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12042] = 2,
    ACTIONS(804), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(802), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12071] = 2,
    ACTIONS(913), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(911), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12100] = 2,
    ACTIONS(903), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(901), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12129] = 2,
    ACTIONS(800), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(798), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12158] = 2,
    ACTIONS(796), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(794), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12187] = 2,
    ACTIONS(792), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(790), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12216] = 2,
    ACTIONS(788), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(786), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12245] = 2,
    ACTIONS(784), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(782), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12274] = 2,
    ACTIONS(780), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(778), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12303] = 4,
    ACTIONS(960), 1,
      sym__indent,
    STATE(378), 1,
      sym_children,
    ACTIONS(632), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12336] = 3,
    ACTIONS(962), 1,
      sym__indent,
    ACTIONS(701), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(699), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12367] = 4,
    ACTIONS(964), 1,
      sym__indent,
    STATE(386), 1,
      sym_children,
    ACTIONS(661), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12400] = 4,
    ACTIONS(966), 1,
      sym__indent,
    STATE(363), 1,
      sym_children,
    ACTIONS(652), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12433] = 2,
    ACTIONS(723), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(725), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [12462] = 4,
    ACTIONS(964), 1,
      sym__indent,
    STATE(363), 1,
      sym_children,
    ACTIONS(652), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12495] = 2,
    ACTIONS(856), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(854), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12524] = 2,
    ACTIONS(723), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(725), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [12553] = 4,
    ACTIONS(968), 1,
      sym__indent,
    STATE(391), 1,
      sym_children,
    ACTIONS(638), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12586] = 4,
    ACTIONS(964), 1,
      sym__indent,
    STATE(391), 1,
      sym_children,
    ACTIONS(638), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12619] = 2,
    ACTIONS(695), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(697), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [12648] = 2,
    ACTIONS(707), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(709), 21,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
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
  [12677] = 2,
    ACTIONS(564), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(566), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [12706] = 4,
    ACTIONS(964), 1,
      sym__indent,
    STATE(364), 1,
      sym_children,
    ACTIONS(665), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12739] = 4,
    ACTIONS(970), 1,
      sym__indent,
    ACTIONS(972), 1,
      sym__dedent,
    ACTIONS(699), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(701), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12772] = 4,
    ACTIONS(974), 1,
      sym__indent,
    STATE(394), 1,
      sym_children,
    ACTIONS(624), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12805] = 2,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(652), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12833] = 3,
    ACTIONS(976), 1,
      sym__indent,
    ACTIONS(733), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(735), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12863] = 2,
    ACTIONS(885), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(883), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12891] = 2,
    ACTIONS(889), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(887), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12919] = 2,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(566), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [12947] = 2,
    ACTIONS(634), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(632), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [12975] = 3,
    ACTIONS(978), 1,
      sym__dedent,
    ACTIONS(830), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(832), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13005] = 2,
    ACTIONS(626), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(624), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13033] = 2,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(638), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13061] = 2,
    ACTIONS(873), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(871), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13089] = 2,
    ACTIONS(852), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(850), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13117] = 2,
    ACTIONS(907), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(905), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13145] = 2,
    ACTIONS(751), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13173] = 3,
    ACTIONS(980), 1,
      sym__dedent,
    ACTIONS(895), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(897), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13203] = 2,
    ACTIONS(828), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(826), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13231] = 3,
    ACTIONS(982), 1,
      sym__newline,
    ACTIONS(790), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(792), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13261] = 2,
    ACTIONS(881), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(879), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13289] = 3,
    ACTIONS(984), 1,
      sym__dedent,
    ACTIONS(871), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13319] = 2,
    ACTIONS(877), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(875), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13347] = 2,
    ACTIONS(667), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13375] = 2,
    ACTIONS(867), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(865), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13403] = 2,
    ACTIONS(863), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(861), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13431] = 2,
    ACTIONS(893), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(891), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13459] = 3,
    ACTIONS(986), 1,
      sym__dedent,
    ACTIONS(895), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(897), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13489] = 2,
    ACTIONS(856), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(854), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13517] = 2,
    ACTIONS(846), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(844), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13545] = 2,
    ACTIONS(663), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13573] = 2,
    ACTIONS(842), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(840), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13601] = 2,
    ACTIONS(838), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(836), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13629] = 3,
    ACTIONS(988), 1,
      sym__dedent,
    ACTIONS(830), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(832), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13659] = 2,
    ACTIONS(913), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(911), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13687] = 2,
    ACTIONS(812), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(810), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13715] = 2,
    ACTIONS(816), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(814), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13743] = 2,
    ACTIONS(780), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(778), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13771] = 2,
    ACTIONS(784), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(782), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13799] = 2,
    ACTIONS(788), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(786), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13827] = 2,
    ACTIONS(903), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(901), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13855] = 2,
    ACTIONS(792), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(790), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13883] = 2,
    ACTIONS(796), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(794), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13911] = 2,
    ACTIONS(800), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(798), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13939] = 2,
    ACTIONS(804), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(802), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13967] = 2,
    ACTIONS(808), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(806), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13995] = 2,
    ACTIONS(820), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(818), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [14023] = 2,
    ACTIONS(824), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(822), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [14051] = 2,
    ACTIONS(599), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(597), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [14079] = 2,
    ACTIONS(873), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(871), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [14107] = 2,
    ACTIONS(905), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(907), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14134] = 2,
    ACTIONS(782), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(784), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14161] = 2,
    ACTIONS(883), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(885), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14188] = 2,
    ACTIONS(911), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(913), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14215] = 2,
    ACTIONS(632), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(634), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14242] = 2,
    ACTIONS(665), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(667), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14269] = 2,
    ACTIONS(661), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14296] = 2,
    ACTIONS(850), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(852), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14323] = 2,
    ACTIONS(865), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(867), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14350] = 2,
    ACTIONS(810), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(812), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14377] = 2,
    ACTIONS(814), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(816), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14404] = 2,
    ACTIONS(818), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(820), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14431] = 2,
    ACTIONS(794), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(796), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14458] = 2,
    ACTIONS(990), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(992), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14485] = 2,
    ACTIONS(887), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(889), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14512] = 2,
    ACTIONS(822), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(824), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14539] = 2,
    ACTIONS(597), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(599), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14566] = 2,
    ACTIONS(826), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(828), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14593] = 2,
    ACTIONS(875), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(877), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14620] = 2,
    ACTIONS(798), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(800), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14647] = 2,
    ACTIONS(624), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(626), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14674] = 2,
    ACTIONS(802), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(804), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14701] = 2,
    ACTIONS(806), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(808), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14728] = 2,
    ACTIONS(749), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(751), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14755] = 2,
    ACTIONS(891), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(893), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14782] = 2,
    ACTIONS(778), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(780), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14809] = 2,
    ACTIONS(836), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(838), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14836] = 2,
    ACTIONS(861), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(863), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14863] = 2,
    ACTIONS(901), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(903), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14890] = 2,
    ACTIONS(840), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(842), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14917] = 2,
    ACTIONS(844), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(846), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14944] = 2,
    ACTIONS(854), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(856), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14971] = 2,
    ACTIONS(879), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(881), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14998] = 2,
    ACTIONS(652), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(654), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15025] = 2,
    ACTIONS(994), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(996), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15052] = 2,
    ACTIONS(786), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15079] = 2,
    ACTIONS(638), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(640), 11,
      anon_sym_doctype,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15106] = 12,
    ACTIONS(998), 1,
      anon_sym_COLON,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_SLASH,
    ACTIONS(1006), 1,
      anon_sym_,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1014), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(429), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15146] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1016), 1,
      anon_sym_COLON,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1022), 1,
      anon_sym_SLASH,
    ACTIONS(1024), 1,
      anon_sym_,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1030), 1,
      sym__newline,
    STATE(408), 1,
      aux_sym_tag_repeat1,
    STATE(431), 1,
      sym_attributes,
    ACTIONS(1028), 2,
      sym_class,
      sym_id,
    STATE(362), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15186] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1032), 1,
      anon_sym_COLON,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1038), 1,
      anon_sym_SLASH,
    ACTIONS(1040), 1,
      anon_sym_,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1046), 1,
      sym__newline,
    STATE(399), 1,
      aux_sym_tag_repeat1,
    STATE(426), 1,
      sym_attributes,
    ACTIONS(1044), 2,
      sym_class,
      sym_id,
    STATE(608), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15226] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1054), 1,
      anon_sym_SLASH,
    ACTIONS(1056), 1,
      anon_sym_,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1060), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(433), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(319), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15266] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    ACTIONS(1066), 1,
      anon_sym_,
    ACTIONS(1068), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(421), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(599), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15306] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      anon_sym_COLON,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1076), 1,
      anon_sym_SLASH,
    ACTIONS(1078), 1,
      anon_sym_,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1084), 1,
      sym__newline,
    STATE(405), 1,
      aux_sym_tag_repeat1,
    STATE(424), 1,
      sym_attributes,
    ACTIONS(1082), 2,
      sym_class,
      sym_id,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15346] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1086), 1,
      anon_sym_COLON,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1092), 1,
      anon_sym_SLASH,
    ACTIONS(1094), 1,
      anon_sym_,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1100), 1,
      sym__newline,
    STATE(404), 1,
      aux_sym_tag_repeat1,
    STATE(417), 1,
      sym_attributes,
    ACTIONS(1098), 2,
      sym_class,
      sym_id,
    STATE(184), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15386] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1102), 1,
      anon_sym_COLON,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1108), 1,
      anon_sym_SLASH,
    ACTIONS(1110), 1,
      anon_sym_,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1116), 1,
      sym__newline,
    STATE(407), 1,
      aux_sym_tag_repeat1,
    STATE(415), 1,
      sym_attributes,
    ACTIONS(1114), 2,
      sym_class,
      sym_id,
    STATE(251), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15426] = 12,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1118), 1,
      anon_sym_COLON,
    ACTIONS(1120), 1,
      anon_sym_SLASH,
    ACTIONS(1122), 1,
      anon_sym_,
    ACTIONS(1126), 1,
      sym__newline,
    STATE(395), 1,
      aux_sym_tag_repeat1,
    STATE(434), 1,
      sym_attributes,
    ACTIONS(1124), 2,
      sym_class,
      sym_id,
    STATE(122), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15466] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    ACTIONS(1130), 1,
      anon_sym_SLASH,
    ACTIONS(1132), 1,
      anon_sym_,
    ACTIONS(1134), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(428), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(185), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15506] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(1138), 1,
      anon_sym_SLASH,
    ACTIONS(1140), 1,
      anon_sym_,
    ACTIONS(1142), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(430), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(231), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15546] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1144), 1,
      anon_sym_COLON,
    ACTIONS(1146), 1,
      anon_sym_SLASH,
    ACTIONS(1148), 1,
      anon_sym_,
    ACTIONS(1152), 1,
      sym__newline,
    STATE(398), 1,
      aux_sym_tag_repeat1,
    STATE(422), 1,
      sym_attributes,
    ACTIONS(1150), 2,
      sym_class,
      sym_id,
    STATE(317), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15586] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1154), 1,
      anon_sym_COLON,
    ACTIONS(1156), 1,
      anon_sym_SLASH,
    ACTIONS(1158), 1,
      anon_sym_,
    ACTIONS(1160), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(423), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(269), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15626] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    ACTIONS(1164), 1,
      anon_sym_SLASH,
    ACTIONS(1166), 1,
      anon_sym_,
    ACTIONS(1168), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(438), 1,
      sym_attributes,
    ACTIONS(1012), 2,
      sym_class,
      sym_id,
    STATE(378), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15666] = 6,
    ACTIONS(1170), 1,
      anon_sym_EQ,
    ACTIONS(1172), 1,
      anon_sym_,
    ACTIONS(1174), 1,
      anon_sym_DOT,
    STATE(582), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(688), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [15691] = 6,
    ACTIONS(1170), 1,
      anon_sym_EQ,
    ACTIONS(1174), 1,
      anon_sym_DOT,
    ACTIONS(1178), 1,
      anon_sym_,
    STATE(409), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(695), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [15716] = 4,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    ACTIONS(1184), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1186), 2,
      sym_class,
      sym_id,
    ACTIONS(1182), 6,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [15736] = 7,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    ACTIONS(1193), 1,
      sym_attribute_name,
    STATE(437), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(751), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15761] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(690), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15786] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(703), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15811] = 8,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1154), 1,
      anon_sym_COLON,
    ACTIONS(1156), 1,
      anon_sym_SLASH,
    ACTIONS(1158), 1,
      anon_sym_,
    ACTIONS(1160), 1,
      sym__newline,
    STATE(269), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15838] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(754), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15863] = 8,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    ACTIONS(1130), 1,
      anon_sym_SLASH,
    ACTIONS(1132), 1,
      anon_sym_,
    ACTIONS(1134), 1,
      sym__newline,
    STATE(185), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15890] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(696), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15915] = 7,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    ACTIONS(1208), 1,
      sym_attribute_name,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(756), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1205), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15940] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(731), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [15965] = 8,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1213), 1,
      anon_sym_COLON,
    ACTIONS(1215), 1,
      anon_sym_SLASH,
    ACTIONS(1217), 1,
      anon_sym_,
    ACTIONS(1219), 1,
      sym__newline,
    STATE(605), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15992] = 8,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1054), 1,
      anon_sym_SLASH,
    ACTIONS(1056), 1,
      anon_sym_,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1060), 1,
      sym__newline,
    STATE(319), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16019] = 8,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1221), 1,
      anon_sym_COLON,
    ACTIONS(1223), 1,
      anon_sym_SLASH,
    ACTIONS(1225), 1,
      anon_sym_,
    ACTIONS(1227), 1,
      sym__newline,
    STATE(253), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16046] = 8,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(1138), 1,
      anon_sym_SLASH,
    ACTIONS(1140), 1,
      anon_sym_,
    ACTIONS(1142), 1,
      sym__newline,
    STATE(231), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16073] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(727), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16098] = 8,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    ACTIONS(1066), 1,
      anon_sym_,
    ACTIONS(1068), 1,
      sym__newline,
    STATE(599), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16125] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(684), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16150] = 8,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1233), 1,
      anon_sym_COLON,
    ACTIONS(1235), 1,
      anon_sym_SLASH,
    ACTIONS(1237), 1,
      anon_sym_,
    ACTIONS(1239), 1,
      sym__newline,
    STATE(192), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16177] = 8,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    ACTIONS(1243), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      anon_sym_,
    ACTIONS(1247), 1,
      sym__newline,
    STATE(141), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16204] = 8,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1249), 1,
      anon_sym_COLON,
    ACTIONS(1251), 1,
      anon_sym_SLASH,
    ACTIONS(1253), 1,
      anon_sym_,
    ACTIONS(1255), 1,
      sym__newline,
    STATE(233), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16231] = 8,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    ACTIONS(1164), 1,
      anon_sym_SLASH,
    ACTIONS(1166), 1,
      anon_sym_,
    ACTIONS(1168), 1,
      sym__newline,
    STATE(378), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16258] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(739), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16283] = 8,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1259), 1,
      anon_sym_COLON,
    ACTIONS(1261), 1,
      anon_sym_SLASH,
    ACTIONS(1263), 1,
      anon_sym_,
    ACTIONS(1265), 1,
      sym__newline,
    STATE(320), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16310] = 8,
    ACTIONS(998), 1,
      anon_sym_COLON,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_SLASH,
    ACTIONS(1006), 1,
      anon_sym_,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1014), 1,
      sym__newline,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16337] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(732), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16362] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(708), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16387] = 7,
    ACTIONS(1193), 1,
      sym_attribute_name,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_attributes_repeat1,
    STATE(620), 1,
      sym_angular_attribute_name,
    STATE(744), 1,
      sym_attribute,
    STATE(670), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1191), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16412] = 8,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      anon_sym_COLON,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    ACTIONS(1277), 1,
      anon_sym_,
    ACTIONS(1279), 1,
      sym__newline,
    STATE(394), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16439] = 7,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1213), 1,
      anon_sym_COLON,
    ACTIONS(1217), 1,
      anon_sym_,
    ACTIONS(1219), 1,
      sym__newline,
    STATE(605), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16463] = 7,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1259), 1,
      anon_sym_COLON,
    ACTIONS(1263), 1,
      anon_sym_,
    ACTIONS(1265), 1,
      sym__newline,
    STATE(320), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16487] = 7,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      anon_sym_COLON,
    ACTIONS(1277), 1,
      anon_sym_,
    ACTIONS(1279), 1,
      sym__newline,
    STATE(394), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16511] = 7,
    ACTIONS(998), 1,
      anon_sym_COLON,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1006), 1,
      anon_sym_,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1014), 1,
      sym__newline,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16535] = 7,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      anon_sym_COLON,
    ACTIONS(1283), 1,
      anon_sym_,
    ACTIONS(1285), 1,
      sym__newline,
    STATE(237), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16559] = 7,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(1066), 1,
      anon_sym_,
    ACTIONS(1068), 1,
      sym__newline,
    STATE(599), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16583] = 7,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    ACTIONS(1289), 1,
      anon_sym_,
    ACTIONS(1291), 1,
      sym__newline,
    STATE(312), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16607] = 7,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    ACTIONS(1245), 1,
      anon_sym_,
    ACTIONS(1247), 1,
      sym__newline,
    STATE(141), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16631] = 7,
    ACTIONS(1000), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(1295), 1,
      anon_sym_,
    ACTIONS(1297), 1,
      sym__newline,
    STATE(150), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16655] = 7,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    ACTIONS(1301), 1,
      anon_sym_,
    ACTIONS(1303), 1,
      sym__newline,
    STATE(266), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16679] = 7,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1233), 1,
      anon_sym_COLON,
    ACTIONS(1237), 1,
      anon_sym_,
    ACTIONS(1239), 1,
      sym__newline,
    STATE(192), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16703] = 7,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(1140), 1,
      anon_sym_,
    ACTIONS(1142), 1,
      sym__newline,
    STATE(231), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16727] = 7,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    ACTIONS(1166), 1,
      anon_sym_,
    ACTIONS(1168), 1,
      sym__newline,
    STATE(378), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16751] = 7,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1221), 1,
      anon_sym_COLON,
    ACTIONS(1225), 1,
      anon_sym_,
    ACTIONS(1227), 1,
      sym__newline,
    STATE(253), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16775] = 7,
    ACTIONS(1034), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_DOT,
    ACTIONS(1305), 1,
      anon_sym_COLON,
    ACTIONS(1307), 1,
      anon_sym_,
    ACTIONS(1309), 1,
      sym__newline,
    STATE(592), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16799] = 7,
    ACTIONS(1018), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    ACTIONS(1311), 1,
      anon_sym_COLON,
    ACTIONS(1313), 1,
      anon_sym_,
    ACTIONS(1315), 1,
      sym__newline,
    STATE(391), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16823] = 7,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    ACTIONS(1132), 1,
      anon_sym_,
    ACTIONS(1134), 1,
      sym__newline,
    STATE(185), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16847] = 7,
    ACTIONS(1088), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1090), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_DOT,
    ACTIONS(1317), 1,
      anon_sym_COLON,
    ACTIONS(1319), 1,
      anon_sym_,
    ACTIONS(1321), 1,
      sym__newline,
    STATE(200), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16871] = 7,
    ACTIONS(1104), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1154), 1,
      anon_sym_COLON,
    ACTIONS(1158), 1,
      anon_sym_,
    ACTIONS(1160), 1,
      sym__newline,
    STATE(269), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16895] = 7,
    ACTIONS(1072), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1074), 1,
      anon_sym_EQ,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(1249), 1,
      anon_sym_COLON,
    ACTIONS(1253), 1,
      anon_sym_,
    ACTIONS(1255), 1,
      sym__newline,
    STATE(233), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16919] = 7,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(1050), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1052), 1,
      anon_sym_EQ,
    ACTIONS(1056), 1,
      anon_sym_,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1060), 1,
      sym__newline,
    STATE(319), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16943] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1329), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16966] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1331), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16989] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1333), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17012] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1335), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17035] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1337), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17058] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1339), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17081] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1341), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17104] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1343), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17127] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1345), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17150] = 7,
    ACTIONS(1347), 1,
      aux_sym_content_token1,
    ACTIONS(1350), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1353), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1356), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17173] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1358), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17196] = 8,
    ACTIONS(1360), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(1362), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(1364), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(1366), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(1368), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(1370), 1,
      anon_sym_SQUOTE,
    ACTIONS(1372), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym_quoted_attribute_value,
  [17221] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1374), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17244] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17267] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1378), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17290] = 7,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17313] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1382), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17333] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1384), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17353] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(472), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17373] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(468), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17393] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(461), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17413] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(464), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17433] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(473), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17453] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1386), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17473] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17493] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [17509] = 3,
    ACTIONS(1396), 1,
      sym__indent,
    STATE(612), 1,
      sym_children,
    ACTIONS(661), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [17523] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1398), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17543] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1400), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17563] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1402), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(491), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17583] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1404), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(484), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17603] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1406), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17623] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1408), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17643] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1410), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17663] = 3,
    ACTIONS(1396), 1,
      sym__indent,
    STATE(606), 1,
      sym_children,
    ACTIONS(665), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [17677] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1412), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17697] = 6,
    ACTIONS(1414), 1,
      aux_sym_content_token1,
    ACTIONS(1417), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1420), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1423), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17717] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1425), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [17733] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1427), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17753] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(474), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17773] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1429), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17793] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1431), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17813] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17833] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1435), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [17849] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(466), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17869] = 2,
    ACTIONS(727), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(729), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [17881] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(507), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17901] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1439), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17921] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1441), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17941] = 2,
    ACTIONS(695), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(697), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [17953] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(475), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17973] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17993] = 3,
    ACTIONS(1445), 1,
      sym__indent,
    STATE(600), 1,
      sym_children,
    ACTIONS(652), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18007] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1447), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18027] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1449), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18047] = 3,
    ACTIONS(1396), 1,
      sym__indent,
    STATE(600), 1,
      sym_children,
    ACTIONS(652), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18061] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(467), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18081] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1451), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18101] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(463), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18121] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1453), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18137] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1455), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18157] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(462), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18177] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1457), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18197] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1459), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18213] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1461), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18233] = 4,
    ACTIONS(1466), 1,
      sym__newline,
    ACTIONS(1469), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18249] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1471), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18269] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(470), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18289] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1473), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18309] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(465), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18329] = 2,
    ACTIONS(707), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(709), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [18341] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(460), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18361] = 3,
    ACTIONS(1475), 1,
      sym__indent,
    STATE(592), 1,
      sym_children,
    ACTIONS(638), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18375] = 3,
    ACTIONS(1396), 1,
      sym__indent,
    STATE(592), 1,
      sym_children,
    ACTIONS(638), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18389] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1477), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18409] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1479), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(544), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18429] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1481), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18445] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1483), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18465] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1485), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18485] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1487), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18505] = 3,
    ACTIONS(1489), 1,
      sym__indent,
    STATE(599), 1,
      sym_children,
    ACTIONS(632), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18519] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1491), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18535] = 4,
    ACTIONS(1392), 1,
      sym__newline,
    ACTIONS(1493), 1,
      sym__dedent,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18551] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1495), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18571] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1497), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18591] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1499), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18611] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1501), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18631] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1503), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18651] = 6,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1505), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18671] = 3,
    ACTIONS(1507), 1,
      sym__indent,
    STATE(605), 1,
      sym_children,
    ACTIONS(624), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18685] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(502), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18702] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(495), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18719] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(528), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18736] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(513), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18753] = 3,
    ACTIONS(1509), 1,
      sym__newline,
    STATE(503), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18766] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(500), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18783] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(508), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18800] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(476), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18817] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(545), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18834] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(538), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18851] = 2,
    ACTIONS(1511), 1,
      sym__indent,
    ACTIONS(699), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18862] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(539), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18879] = 3,
    ACTIONS(1513), 1,
      sym__newline,
    STATE(541), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18892] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(477), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18909] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(483), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18926] = 3,
    ACTIONS(1515), 1,
      sym__newline,
    STATE(485), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18939] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(487), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18956] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(488), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18973] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(546), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18990] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(492), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19007] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(511), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19024] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19041] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(543), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19058] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(514), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19075] = 3,
    ACTIONS(1517), 1,
      sym__newline,
    STATE(497), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19088] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19105] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(522), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19122] = 3,
    ACTIONS(1519), 1,
      sym__newline,
    STATE(542), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19135] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(498), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19152] = 3,
    ACTIONS(1521), 1,
      sym__newline,
    STATE(523), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19165] = 3,
    ACTIONS(1523), 1,
      sym__newline,
    STATE(536), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19178] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(537), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19195] = 4,
    ACTIONS(1527), 1,
      anon_sym_,
    ACTIONS(1529), 1,
      anon_sym_DOT,
    STATE(582), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1525), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19210] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(517), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19227] = 3,
    ACTIONS(1532), 1,
      sym__newline,
    STATE(519), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19240] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(520), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19257] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(534), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19274] = 4,
    ACTIONS(1536), 1,
      anon_sym_POUND,
    ACTIONS(1538), 1,
      anon_sym_LBRACE,
    ACTIONS(1534), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1540), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19289] = 5,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(595), 1,
      aux_sym_content_repeat1,
    STATE(524), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19306] = 1,
    ACTIONS(850), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19314] = 4,
    ACTIONS(1542), 1,
      anon_sym_when,
    ACTIONS(1544), 1,
      anon_sym_default,
    STATE(747), 1,
      sym__when_keyword,
    STATE(93), 2,
      sym_when,
      aux_sym_case_repeat1,
  [19328] = 1,
    ACTIONS(1203), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [19336] = 1,
    ACTIONS(652), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19344] = 4,
    ACTIONS(1546), 1,
      aux_sym_content_token1,
    ACTIONS(1551), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_content_repeat1,
    ACTIONS(1549), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19358] = 3,
    STATE(123), 1,
      sym__dummy_tag,
    STATE(124), 1,
      sym_tag,
    ACTIONS(145), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19370] = 4,
    ACTIONS(1323), 1,
      aux_sym_content_token1,
    ACTIONS(1555), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_content_repeat1,
    ACTIONS(1553), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19384] = 1,
    ACTIONS(887), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19392] = 4,
    ACTIONS(1542), 1,
      anon_sym_when,
    ACTIONS(1557), 1,
      anon_sym_default,
    STATE(710), 1,
      sym__when_keyword,
    STATE(54), 2,
      sym_when,
      aux_sym_case_repeat1,
  [19406] = 1,
    ACTIONS(891), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19414] = 1,
    ACTIONS(624), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19422] = 1,
    ACTIONS(665), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19430] = 1,
    ACTIONS(883), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19438] = 2,
    ACTIONS(1527), 1,
      anon_sym_,
    ACTIONS(1525), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19448] = 3,
    STATE(174), 1,
      sym__dummy_tag,
    STATE(211), 1,
      sym_tag,
    ACTIONS(249), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19460] = 3,
    STATE(209), 1,
      sym__dummy_tag,
    STATE(210), 1,
      sym_tag,
    ACTIONS(1559), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19472] = 1,
    ACTIONS(638), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19480] = 1,
    ACTIONS(661), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19488] = 1,
    ACTIONS(871), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19496] = 1,
    ACTIONS(632), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19504] = 1,
    ACTIONS(911), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19512] = 3,
    ACTIONS(1561), 1,
      anon_sym_LBRACE,
    ACTIONS(1549), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1551), 2,
      sym__newline,
      aux_sym_content_token1,
  [19524] = 4,
    ACTIONS(1542), 1,
      anon_sym_when,
    ACTIONS(1563), 1,
      anon_sym_default,
    STATE(755), 1,
      sym__when_keyword,
    STATE(62), 2,
      sym_when,
      aux_sym_case_repeat1,
  [19538] = 1,
    ACTIONS(901), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19546] = 4,
    ACTIONS(1565), 1,
      anon_sym_append,
    ACTIONS(1567), 1,
      anon_sym_prepend,
    ACTIONS(1569), 1,
      sym_tag_name,
    STATE(222), 1,
      sym__block_content,
  [19559] = 2,
    STATE(200), 1,
      sym_tag,
    ACTIONS(1559), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19568] = 2,
    ACTIONS(1571), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1573), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19577] = 2,
    ACTIONS(1575), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1577), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19586] = 4,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1581), 1,
      sym__dedent,
    STATE(659), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [19599] = 4,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    ACTIONS(1587), 1,
      sym__dedent,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [19612] = 4,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1591), 1,
      sym__newline,
    STATE(140), 1,
      sym__single_line_buf_code,
    STATE(863), 1,
      sym__un_delimited_javascript,
  [19625] = 3,
    ACTIONS(1593), 1,
      anon_sym_EQ,
    ACTIONS(1595), 1,
      anon_sym_,
    ACTIONS(1597), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19636] = 2,
    ACTIONS(1549), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1551), 2,
      sym__newline,
      aux_sym_content_token1,
  [19645] = 4,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1599), 1,
      sym__newline,
    STATE(318), 1,
      sym__single_line_buf_code,
    STATE(842), 1,
      sym__un_delimited_javascript,
  [19658] = 2,
    ACTIONS(1603), 1,
      anon_sym_,
    ACTIONS(1601), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19667] = 2,
    STATE(605), 1,
      sym_tag,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19676] = 2,
    STATE(394), 1,
      sym_tag,
    ACTIONS(39), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19685] = 2,
    STATE(378), 1,
      sym_tag,
    ACTIONS(39), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19694] = 2,
    STATE(391), 1,
      sym_tag,
    ACTIONS(39), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19703] = 4,
    ACTIONS(1605), 1,
      anon_sym_append,
    ACTIONS(1607), 1,
      anon_sym_prepend,
    ACTIONS(1609), 1,
      sym_tag_name,
    STATE(370), 1,
      sym__block_content,
  [19716] = 4,
    ACTIONS(1611), 1,
      anon_sym_append,
    ACTIONS(1613), 1,
      anon_sym_prepend,
    ACTIONS(1615), 1,
      sym_tag_name,
    STATE(291), 1,
      sym__block_content,
  [19729] = 2,
    STATE(241), 1,
      sym_tag,
    ACTIONS(249), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19738] = 2,
    STATE(237), 1,
      sym_tag,
    ACTIONS(249), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19747] = 4,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    ACTIONS(1617), 1,
      sym__dedent,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [19760] = 2,
    STATE(233), 1,
      sym_tag,
    ACTIONS(249), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19769] = 4,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1619), 1,
      sym__dedent,
    STATE(659), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [19782] = 2,
    STATE(269), 1,
      sym_tag,
    ACTIONS(289), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19791] = 2,
    STATE(231), 1,
      sym_tag,
    ACTIONS(249), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19800] = 2,
    STATE(331), 1,
      sym_tag,
    ACTIONS(388), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19809] = 2,
    STATE(592), 1,
      sym_tag,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19818] = 4,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1621), 1,
      sym__newline,
    STATE(265), 1,
      sym__single_line_buf_code,
    STATE(804), 1,
      sym__un_delimited_javascript,
  [19831] = 2,
    STATE(312), 1,
      sym_tag,
    ACTIONS(388), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19840] = 2,
    STATE(320), 1,
      sym_tag,
    ACTIONS(388), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19849] = 2,
    ACTIONS(1356), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1623), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19858] = 2,
    STATE(253), 1,
      sym_tag,
    ACTIONS(289), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19867] = 2,
    STATE(319), 1,
      sym_tag,
    ACTIONS(388), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19876] = 2,
    STATE(160), 1,
      sym_tag,
    ACTIONS(145), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19885] = 2,
    STATE(600), 1,
      sym_tag,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19894] = 4,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1625), 1,
      sym__dedent,
    STATE(659), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [19907] = 4,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1627), 1,
      sym__newline,
    STATE(341), 1,
      sym__single_line_buf_code,
    STATE(855), 1,
      sym__un_delimited_javascript,
  [19920] = 2,
    STATE(114), 1,
      sym_tag,
    ACTIONS(145), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19929] = 2,
    STATE(599), 1,
      sym_tag,
    ACTIONS(1390), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19938] = 2,
    STATE(141), 1,
      sym_tag,
    ACTIONS(145), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19947] = 4,
    ACTIONS(1629), 1,
      anon_sym_append,
    ACTIONS(1631), 1,
      anon_sym_prepend,
    ACTIONS(1633), 1,
      sym_tag_name,
    STATE(350), 1,
      sym__block_content,
  [19960] = 2,
    STATE(363), 1,
      sym_tag,
    ACTIONS(39), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19969] = 2,
    STATE(192), 1,
      sym_tag,
    ACTIONS(1559), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19978] = 4,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    ACTIONS(1635), 1,
      sym__dedent,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [19991] = 2,
    STATE(173), 1,
      sym_tag,
    ACTIONS(1559), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20000] = 2,
    STATE(278), 1,
      sym_tag,
    ACTIONS(289), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20009] = 4,
    ACTIONS(1637), 1,
      aux_sym_script_block_token1,
    ACTIONS(1640), 1,
      sym__newline,
    ACTIONS(1643), 1,
      sym__dedent,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [20022] = 4,
    ACTIONS(564), 1,
      sym__dedent,
    ACTIONS(1645), 1,
      aux_sym_filter_content_token2,
    STATE(659), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20035] = 4,
    ACTIONS(1648), 1,
      anon_sym_append,
    ACTIONS(1650), 1,
      anon_sym_prepend,
    ACTIONS(1652), 1,
      sym_tag_name,
    STATE(130), 1,
      sym__block_content,
  [20048] = 2,
    STATE(266), 1,
      sym_tag,
    ACTIONS(289), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20057] = 4,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    ACTIONS(1654), 1,
      sym__dedent,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [20070] = 4,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1656), 1,
      sym__newline,
    STATE(243), 1,
      sym__single_line_buf_code,
    STATE(806), 1,
      sym__un_delimited_javascript,
  [20083] = 4,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1658), 1,
      sym__dedent,
    STATE(659), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20096] = 4,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    ACTIONS(1660), 1,
      sym__dedent,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [20109] = 2,
    STATE(185), 1,
      sym_tag,
    ACTIONS(1559), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20118] = 2,
    STATE(150), 1,
      sym_tag,
    ACTIONS(145), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20127] = 4,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1662), 1,
      sym__dedent,
    STATE(659), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20140] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1666), 1,
      sym__dedent,
    STATE(740), 1,
      aux_sym_filter_content_repeat1,
  [20150] = 2,
    ACTIONS(1668), 1,
      anon_sym_,
    ACTIONS(1670), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20158] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1672), 1,
      sym__dedent,
    STATE(753), 1,
      aux_sym_filter_content_repeat1,
  [20168] = 2,
    ACTIONS(1674), 1,
      anon_sym_,
    ACTIONS(1676), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20176] = 1,
    ACTIONS(1678), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [20182] = 2,
    ACTIONS(1680), 1,
      anon_sym_,
    ACTIONS(1682), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20190] = 3,
    ACTIONS(1684), 1,
      aux_sym_filter_content_token2,
    STATE(194), 1,
      aux_sym__comment_repeat1,
    STATE(874), 1,
      sym__comment_content,
  [20200] = 2,
    ACTIONS(1686), 1,
      anon_sym_,
    ACTIONS(1688), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20208] = 1,
    ACTIONS(1690), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [20214] = 3,
    ACTIONS(1692), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1694), 1,
      sym__newline,
    STATE(835), 1,
      sym__comment_content,
  [20224] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(162), 1,
      sym__single_line_buf_code,
    STATE(863), 1,
      sym__un_delimited_javascript,
  [20234] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(161), 1,
      sym__single_line_buf_code,
    STATE(863), 1,
      sym__un_delimited_javascript,
  [20244] = 2,
    ACTIONS(1696), 1,
      anon_sym_,
    ACTIONS(1698), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20252] = 3,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    STATE(647), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20262] = 3,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [20272] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
  [20282] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1708), 1,
      sym__newline,
    STATE(840), 1,
      sym__comment_content,
  [20292] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(601), 1,
      sym__single_line_buf_code,
    STATE(852), 1,
      sym__un_delimited_javascript,
  [20302] = 1,
    ACTIONS(1710), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [20308] = 2,
    ACTIONS(1712), 1,
      anon_sym_,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20316] = 2,
    ACTIONS(1716), 1,
      anon_sym_,
    ACTIONS(1718), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20324] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1720), 1,
      anon_sym_RPAREN,
  [20334] = 3,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20344] = 3,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    STATE(662), 1,
      aux_sym_script_block_repeat1,
  [20354] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(360), 1,
      sym__single_line_buf_code,
    STATE(829), 1,
      sym__un_delimited_javascript,
  [20364] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(372), 1,
      sym__single_line_buf_code,
    STATE(829), 1,
      sym__un_delimited_javascript,
  [20374] = 2,
    ACTIONS(1172), 1,
      anon_sym_,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20382] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1722), 1,
      anon_sym_RPAREN,
  [20392] = 3,
    ACTIONS(1724), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1726), 1,
      sym__newline,
    STATE(849), 1,
      sym__comment_content,
  [20402] = 3,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    STATE(617), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20412] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1728), 1,
      sym__dedent,
    STATE(669), 1,
      aux_sym_filter_content_repeat1,
  [20422] = 3,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    STATE(634), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20432] = 3,
    ACTIONS(1730), 1,
      aux_sym_filter_content_token2,
    STATE(145), 1,
      aux_sym__comment_repeat1,
    STATE(873), 1,
      sym__comment_content,
  [20442] = 3,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    STATE(632), 1,
      aux_sym_script_block_repeat1,
  [20452] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1732), 1,
      anon_sym_RPAREN,
  [20462] = 3,
    ACTIONS(1734), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1736), 1,
      sym__newline,
    STATE(820), 1,
      sym__comment_content,
  [20472] = 3,
    ACTIONS(1738), 1,
      sym__un_delimited_javascript_line,
    STATE(208), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(325), 1,
      sym__multi_line_buf_code,
  [20482] = 3,
    ACTIONS(1740), 1,
      anon_sym_SQUOTE,
    ACTIONS(1742), 1,
      anon_sym_DQUOTE,
    STATE(707), 1,
      sym_quoted_javascript,
  [20492] = 2,
    ACTIONS(1744), 1,
      anon_sym_,
    ACTIONS(1746), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20500] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1748), 1,
      anon_sym_RPAREN,
  [20510] = 1,
    ACTIONS(1750), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [20516] = 3,
    ACTIONS(1752), 1,
      anon_sym_COLON,
    ACTIONS(1754), 1,
      sym__newline,
    STATE(118), 1,
      sym__when_content,
  [20526] = 3,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    STATE(618), 1,
      aux_sym_script_block_repeat1,
  [20536] = 1,
    ACTIONS(1756), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [20542] = 3,
    ACTIONS(1579), 1,
      aux_sym_filter_content_token2,
    STATE(668), 1,
      aux_sym__comment_repeat1,
    STATE(868), 1,
      sym__comment_content,
  [20552] = 3,
    ACTIONS(1583), 1,
      aux_sym_script_block_token1,
    ACTIONS(1585), 1,
      sym__newline,
    STATE(655), 1,
      aux_sym_script_block_repeat1,
  [20562] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1758), 1,
      sym__dedent,
    STATE(743), 1,
      aux_sym_filter_content_repeat1,
  [20572] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(226), 1,
      sym__single_line_buf_code,
    STATE(893), 1,
      sym__un_delimited_javascript,
  [20582] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(228), 1,
      sym__single_line_buf_code,
    STATE(893), 1,
      sym__un_delimited_javascript,
  [20592] = 3,
    ACTIONS(1760), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1762), 1,
      sym__newline,
    STATE(844), 1,
      sym__comment_content,
  [20602] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1764), 1,
      sym__dedent,
    STATE(740), 1,
      aux_sym_filter_content_repeat1,
  [20612] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(284), 1,
      sym__single_line_buf_code,
    STATE(804), 1,
      sym__un_delimited_javascript,
  [20622] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(252), 1,
      sym__single_line_buf_code,
    STATE(804), 1,
      sym__un_delimited_javascript,
  [20632] = 2,
    ACTIONS(1766), 1,
      anon_sym_,
    ACTIONS(1768), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20640] = 2,
    ACTIONS(1770), 1,
      anon_sym_,
    ACTIONS(1772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20648] = 3,
    ACTIONS(1774), 1,
      aux_sym_filter_content_token2,
    STATE(57), 1,
      aux_sym__comment_repeat1,
    STATE(828), 1,
      sym__comment_content,
  [20658] = 3,
    ACTIONS(1776), 1,
      sym__un_delimited_javascript_line,
    STATE(117), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(272), 1,
      sym__multi_line_buf_code,
  [20668] = 1,
    ACTIONS(1643), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [20674] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [20684] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(227), 1,
      sym__single_line_buf_code,
    STATE(806), 1,
      sym__un_delimited_javascript,
  [20694] = 1,
    ACTIONS(1780), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [20700] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(215), 1,
      sym__single_line_buf_code,
    STATE(806), 1,
      sym__un_delimited_javascript,
  [20710] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1782), 1,
      anon_sym_RPAREN,
  [20720] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
  [20730] = 3,
    ACTIONS(1786), 1,
      aux_sym_filter_content_token2,
    STATE(101), 1,
      aux_sym__comment_repeat1,
    STATE(802), 1,
      sym__comment_content,
  [20740] = 3,
    ACTIONS(1788), 1,
      sym__un_delimited_javascript_line,
    STATE(180), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(335), 1,
      sym__multi_line_buf_code,
  [20750] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1790), 1,
      sym__dedent,
    STATE(742), 1,
      aux_sym_filter_content_repeat1,
  [20760] = 2,
    ACTIONS(1792), 1,
      anon_sym_,
    ACTIONS(1794), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20768] = 3,
    ACTIONS(1796), 1,
      aux_sym_filter_content_token2,
    STATE(68), 1,
      aux_sym__comment_repeat1,
    STATE(878), 1,
      sym__comment_content,
  [20778] = 3,
    ACTIONS(1798), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(164), 1,
      sym__multi_line_buf_code,
  [20788] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1800), 1,
      anon_sym_RPAREN,
  [20798] = 3,
    ACTIONS(1802), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1805), 1,
      sym__dedent,
    STATE(740), 1,
      aux_sym_filter_content_repeat1,
  [20808] = 3,
    ACTIONS(1807), 1,
      sym__un_delimited_javascript_line,
    STATE(84), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(191), 1,
      sym__multi_line_buf_code,
  [20818] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1809), 1,
      sym__dedent,
    STATE(740), 1,
      aux_sym_filter_content_repeat1,
  [20828] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1811), 1,
      sym__dedent,
    STATE(740), 1,
      aux_sym_filter_content_repeat1,
  [20838] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1813), 1,
      anon_sym_RPAREN,
  [20848] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(596), 1,
      sym__single_line_buf_code,
    STATE(852), 1,
      sym__un_delimited_javascript,
  [20858] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1815), 1,
      sym__dedent,
    STATE(719), 1,
      aux_sym_filter_content_repeat1,
  [20868] = 3,
    ACTIONS(1817), 1,
      anon_sym_COLON,
    ACTIONS(1819), 1,
      sym__newline,
    STATE(188), 1,
      sym__when_content,
  [20878] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(315), 1,
      sym__single_line_buf_code,
    STATE(855), 1,
      sym__un_delimited_javascript,
  [20888] = 3,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(314), 1,
      sym__single_line_buf_code,
    STATE(855), 1,
      sym__un_delimited_javascript,
  [20898] = 2,
    ACTIONS(1821), 1,
      anon_sym_,
    ACTIONS(1823), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20906] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1825), 1,
      anon_sym_RPAREN,
  [20916] = 2,
    ACTIONS(1827), 1,
      anon_sym_,
    ACTIONS(1829), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20924] = 3,
    ACTIONS(1664), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1831), 1,
      sym__dedent,
    STATE(740), 1,
      aux_sym_filter_content_repeat1,
  [20934] = 3,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_RPAREN,
  [20944] = 3,
    ACTIONS(1835), 1,
      anon_sym_COLON,
    ACTIONS(1837), 1,
      sym__newline,
    STATE(176), 1,
      sym__when_content,
  [20954] = 2,
    ACTIONS(1700), 1,
      anon_sym_,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
  [20961] = 2,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(819), 1,
      sym__un_delimited_javascript,
  [20968] = 2,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(854), 1,
      sym__un_delimited_javascript,
  [20975] = 2,
    ACTIONS(1839), 1,
      sym_tag_name,
    STATE(135), 1,
      sym__block_content,
  [20982] = 2,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(839), 1,
      sym__un_delimited_javascript,
  [20989] = 2,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(823), 1,
      sym__un_delimited_javascript,
  [20996] = 2,
    ACTIONS(755), 1,
      sym__indent,
    STATE(302), 1,
      sym_children,
  [21003] = 2,
    ACTIONS(1589), 1,
      sym__un_delimited_javascript_line,
    STATE(809), 1,
      sym__un_delimited_javascript,
  [21010] = 2,
    ACTIONS(964), 1,
      sym__indent,
    STATE(389), 1,
      sym_children,
  [21017] = 2,
    ACTIONS(1841), 1,
      sym_tag_name,
    STATE(368), 1,
      sym__block_content,
  [21024] = 2,
    ACTIONS(1839), 1,
      sym_tag_name,
    STATE(132), 1,
      sym__block_content,
  [21031] = 2,
    ACTIONS(1839), 1,
      sym_tag_name,
    STATE(131), 1,
      sym__block_content,
  [21038] = 1,
    ACTIONS(1843), 2,
      sym__newline,
      anon_sym_COLON,
  [21043] = 2,
    ACTIONS(1845), 1,
      sym_tag_name,
    STATE(351), 1,
      sym__block_content,
  [21050] = 2,
    ACTIONS(1845), 1,
      sym_tag_name,
    STATE(352), 1,
      sym__block_content,
  [21057] = 2,
    ACTIONS(964), 1,
      sym__indent,
    STATE(384), 1,
      sym_children,
  [21064] = 2,
    ACTIONS(619), 1,
      sym__indent,
    STATE(147), 1,
      sym_children,
  [21071] = 2,
    ACTIONS(1839), 1,
      sym_tag_name,
    STATE(136), 1,
      sym__block_content,
  [21078] = 1,
    ACTIONS(1805), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [21083] = 2,
    ACTIONS(1845), 1,
      sym_tag_name,
    STATE(344), 1,
      sym__block_content,
  [21090] = 2,
    ACTIONS(1845), 1,
      sym_tag_name,
    STATE(354), 1,
      sym__block_content,
  [21097] = 2,
    ACTIONS(693), 1,
      sym__indent,
    STATE(199), 1,
      sym_children,
  [21104] = 2,
    ACTIONS(921), 1,
      sym__indent,
    STATE(326), 1,
      sym_children,
  [21111] = 2,
    ACTIONS(1847), 1,
      anon_sym_SQUOTE,
    ACTIONS(1849), 1,
      aux_sym_quoted_javascript_token1,
  [21118] = 2,
    ACTIONS(1851), 1,
      anon_sym_SQUOTE,
    ACTIONS(1853), 1,
      aux_sym_quoted_javascript_token1,
  [21125] = 2,
    ACTIONS(619), 1,
      sym__indent,
    STATE(139), 1,
      sym_children,
  [21132] = 2,
    ACTIONS(921), 1,
      sym__indent,
    STATE(336), 1,
      sym_children,
  [21139] = 2,
    ACTIONS(1841), 1,
      sym_tag_name,
    STATE(369), 1,
      sym__block_content,
  [21146] = 2,
    ACTIONS(1851), 1,
      anon_sym_DQUOTE,
    ACTIONS(1855), 1,
      aux_sym_quoted_javascript_token2,
  [21153] = 2,
    ACTIONS(755), 1,
      sym__indent,
    STATE(271), 1,
      sym_children,
  [21160] = 2,
    ACTIONS(1857), 1,
      sym_tag_name,
    STATE(224), 1,
      sym__block_content,
  [21167] = 2,
    ACTIONS(693), 1,
      sym__indent,
    STATE(242), 1,
      sym_children,
  [21174] = 2,
    ACTIONS(1859), 1,
      sym_tag_name,
    STATE(276), 1,
      sym__block_content,
  [21181] = 2,
    ACTIONS(1841), 1,
      sym_tag_name,
    STATE(379), 1,
      sym__block_content,
  [21188] = 2,
    ACTIONS(1859), 1,
      sym_tag_name,
    STATE(280), 1,
      sym__block_content,
  [21195] = 2,
    ACTIONS(1857), 1,
      sym_tag_name,
    STATE(234), 1,
      sym__block_content,
  [21202] = 2,
    ACTIONS(1857), 1,
      sym_tag_name,
    STATE(232), 1,
      sym__block_content,
  [21209] = 2,
    ACTIONS(1857), 1,
      sym_tag_name,
    STATE(223), 1,
      sym__block_content,
  [21216] = 2,
    ACTIONS(1847), 1,
      anon_sym_DQUOTE,
    ACTIONS(1861), 1,
      aux_sym_quoted_javascript_token2,
  [21223] = 2,
    ACTIONS(964), 1,
      sym__indent,
    STATE(375), 1,
      sym_children,
  [21230] = 2,
    ACTIONS(1859), 1,
      sym_tag_name,
    STATE(287), 1,
      sym__block_content,
  [21237] = 2,
    ACTIONS(1841), 1,
      sym_tag_name,
    STATE(377), 1,
      sym__block_content,
  [21244] = 2,
    ACTIONS(1859), 1,
      sym_tag_name,
    STATE(290), 1,
      sym__block_content,
  [21251] = 1,
    ACTIONS(564), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [21256] = 1,
    ACTIONS(1863), 1,
      aux_sym_unbuffered_code_token1,
  [21260] = 1,
    ACTIONS(1865), 1,
      anon_sym_SQUOTE,
  [21264] = 1,
    ACTIONS(1867), 1,
      sym__newline,
  [21268] = 1,
    ACTIONS(1869), 1,
      sym_filter_name,
  [21272] = 1,
    ACTIONS(1871), 1,
      sym__newline,
  [21276] = 1,
    ACTIONS(1873), 1,
      aux_sym_extends_token1,
  [21280] = 1,
    ACTIONS(1875), 1,
      sym__newline,
  [21284] = 1,
    ACTIONS(1877), 1,
      sym__newline,
  [21288] = 1,
    ACTIONS(1879), 1,
      aux_sym_unbuffered_code_token1,
  [21292] = 1,
    ACTIONS(1881), 1,
      sym__newline,
  [21296] = 1,
    ACTIONS(1883), 1,
      sym_filter_name,
  [21300] = 1,
    ACTIONS(1885), 1,
      sym__indent,
  [21304] = 1,
    ACTIONS(1887), 1,
      aux_sym_extends_token1,
  [21308] = 1,
    ACTIONS(1889), 1,
      sym__indent,
  [21312] = 1,
    ACTIONS(1891), 1,
      aux_sym_extends_token1,
  [21316] = 1,
    ACTIONS(1893), 1,
      sym__indent,
  [21320] = 1,
    ACTIONS(1895), 1,
      sym__newline,
  [21324] = 1,
    ACTIONS(1897), 1,
      sym__delimited_javascript,
  [21328] = 1,
    ACTIONS(1899), 1,
      sym__newline,
  [21332] = 1,
    ACTIONS(1901), 1,
      sym__newline,
  [21336] = 1,
    ACTIONS(1903), 1,
      sym__newline,
  [21340] = 1,
    ACTIONS(1905), 1,
      sym__newline,
  [21344] = 1,
    ACTIONS(1907), 1,
      aux_sym_unbuffered_code_token1,
  [21348] = 1,
    ACTIONS(1909), 1,
      sym__newline,
  [21352] = 1,
    ACTIONS(1911), 1,
      sym__newline,
  [21356] = 1,
    ACTIONS(1913), 1,
      sym__indent,
  [21360] = 1,
    ACTIONS(1915), 1,
      sym__indent,
  [21364] = 1,
    ACTIONS(1917), 1,
      sym__delimited_javascript,
  [21368] = 1,
    ACTIONS(1919), 1,
      sym__newline,
  [21372] = 1,
    ACTIONS(1921), 1,
      sym__newline,
  [21376] = 1,
    ACTIONS(1923), 1,
      sym__indent,
  [21380] = 1,
    ACTIONS(1925), 1,
      sym_filter_name,
  [21384] = 1,
    ACTIONS(1927), 1,
      sym__indent,
  [21388] = 1,
    ACTIONS(1929), 1,
      sym__indent,
  [21392] = 1,
    ACTIONS(1931), 1,
      sym__indent,
  [21396] = 1,
    ACTIONS(1933), 1,
      sym__newline,
  [21400] = 1,
    ACTIONS(1935), 1,
      sym__newline,
  [21404] = 1,
    ACTIONS(1937), 1,
      ts_builtin_sym_end,
  [21408] = 1,
    ACTIONS(1939), 1,
      aux_sym_unbuffered_code_token1,
  [21412] = 1,
    ACTIONS(1941), 1,
      sym__newline,
  [21416] = 1,
    ACTIONS(1943), 1,
      sym__newline,
  [21420] = 1,
    ACTIONS(1945), 1,
      sym__indent,
  [21424] = 1,
    ACTIONS(1947), 1,
      sym__newline,
  [21428] = 1,
    ACTIONS(1949), 1,
      aux_sym_filter_content_token2,
  [21432] = 1,
    ACTIONS(1951), 1,
      sym__newline,
  [21436] = 1,
    ACTIONS(1953), 1,
      sym__indent,
  [21440] = 1,
    ACTIONS(1955), 1,
      aux_sym_filter_content_token2,
  [21444] = 1,
    ACTIONS(1957), 1,
      sym__newline,
  [21448] = 1,
    ACTIONS(1959), 1,
      sym__indent,
  [21452] = 1,
    ACTIONS(1961), 1,
      sym__newline,
  [21456] = 1,
    ACTIONS(1963), 1,
      sym__newline,
  [21460] = 1,
    ACTIONS(1965), 1,
      sym__newline,
  [21464] = 1,
    ACTIONS(1967), 1,
      sym__newline,
  [21468] = 1,
    ACTIONS(1969), 1,
      aux_sym_unbuffered_code_token1,
  [21472] = 1,
    ACTIONS(1971), 1,
      sym__newline,
  [21476] = 1,
    ACTIONS(1973), 1,
      sym__newline,
  [21480] = 1,
    ACTIONS(1975), 1,
      sym__indent,
  [21484] = 1,
    ACTIONS(1865), 1,
      anon_sym_DQUOTE,
  [21488] = 1,
    ACTIONS(1977), 1,
      sym__newline,
  [21492] = 1,
    ACTIONS(1979), 1,
      sym_filter_name,
  [21496] = 1,
    ACTIONS(1981), 1,
      sym__indent,
  [21500] = 1,
    ACTIONS(1983), 1,
      sym_filter_name,
  [21504] = 1,
    ACTIONS(1985), 1,
      anon_sym_RBRACE,
  [21508] = 1,
    ACTIONS(1987), 1,
      sym__newline,
  [21512] = 1,
    ACTIONS(1985), 1,
      anon_sym_RBRACE_RBRACE,
  [21516] = 1,
    ACTIONS(1989), 1,
      aux_sym_extends_token1,
  [21520] = 1,
    ACTIONS(1991), 1,
      sym__newline,
  [21524] = 1,
    ACTIONS(1993), 1,
      aux_sym_filter_content_token2,
  [21528] = 1,
    ACTIONS(1995), 1,
      sym__newline,
  [21532] = 1,
    ACTIONS(1997), 1,
      sym__newline,
  [21536] = 1,
    ACTIONS(1999), 1,
      sym__indent,
  [21540] = 1,
    ACTIONS(2001), 1,
      sym__indent,
  [21544] = 1,
    ACTIONS(2003), 1,
      aux_sym_filter_content_token2,
  [21548] = 1,
    ACTIONS(2005), 1,
      sym__newline,
  [21552] = 1,
    ACTIONS(2007), 1,
      sym__newline,
  [21556] = 1,
    ACTIONS(2009), 1,
      anon_sym_DQUOTE,
  [21560] = 1,
    ACTIONS(2011), 1,
      sym__un_delimited_javascript_line,
  [21564] = 1,
    ACTIONS(2013), 1,
      aux_sym_filter_content_token2,
  [21568] = 1,
    ACTIONS(2015), 1,
      sym__newline,
  [21572] = 1,
    ACTIONS(2017), 1,
      aux_sym_extends_token1,
  [21576] = 1,
    ACTIONS(2019), 1,
      sym__indent,
  [21580] = 1,
    ACTIONS(2009), 1,
      anon_sym_SQUOTE,
  [21584] = 1,
    ACTIONS(2021), 1,
      sym__newline,
  [21588] = 1,
    ACTIONS(2023), 1,
      sym__indent,
  [21592] = 1,
    ACTIONS(2025), 1,
      sym__indent,
  [21596] = 1,
    ACTIONS(2027), 1,
      sym__indent,
  [21600] = 1,
    ACTIONS(2029), 1,
      sym__indent,
  [21604] = 1,
    ACTIONS(2031), 1,
      aux_sym__when_keyword_token1,
  [21608] = 1,
    ACTIONS(2033), 1,
      sym__newline,
  [21612] = 1,
    ACTIONS(2035), 1,
      sym__indent,
  [21616] = 1,
    ACTIONS(2037), 1,
      sym__indent,
  [21620] = 1,
    ACTIONS(2039), 1,
      sym__indent,
  [21624] = 1,
    ACTIONS(2041), 1,
      sym__indent,
  [21628] = 1,
    ACTIONS(2043), 1,
      sym__newline,
  [21632] = 1,
    ACTIONS(2045), 1,
      sym__indent,
  [21636] = 1,
    ACTIONS(2047), 1,
      sym__indent,
  [21640] = 1,
    ACTIONS(2049), 1,
      sym__indent,
  [21644] = 1,
    ACTIONS(2051), 1,
      sym__indent,
  [21648] = 1,
    ACTIONS(2053), 1,
      aux_sym__attribute_token1,
  [21652] = 1,
    ACTIONS(2055), 1,
      sym__indent,
  [21656] = 1,
    ACTIONS(2057), 1,
      sym__indent,
  [21660] = 1,
    ACTIONS(2059), 1,
      sym__indent,
  [21664] = 1,
    ACTIONS(2061), 1,
      sym__indent,
  [21668] = 1,
    ACTIONS(2063), 1,
      sym__indent,
  [21672] = 1,
    ACTIONS(2065), 1,
      sym__indent,
  [21676] = 1,
    ACTIONS(2067), 1,
      sym__indent,
  [21680] = 1,
    ACTIONS(2069), 1,
      sym__indent,
  [21684] = 1,
    ACTIONS(2071), 1,
      sym__un_delimited_javascript_line,
  [21688] = 1,
    ACTIONS(2073), 1,
      sym__newline,
  [21692] = 1,
    ACTIONS(2075), 1,
      sym__newline,
  [21696] = 1,
    ACTIONS(2077), 1,
      sym__newline,
  [21700] = 1,
    ACTIONS(2079), 1,
      sym__un_delimited_javascript_line,
  [21704] = 1,
    ACTIONS(2081), 1,
      sym__newline,
  [21708] = 1,
    ACTIONS(2083), 1,
      sym__newline,
  [21712] = 1,
    ACTIONS(2085), 1,
      sym__newline,
  [21716] = 1,
    ACTIONS(2087), 1,
      sym__newline,
  [21720] = 1,
    ACTIONS(2089), 1,
      sym__newline,
  [21724] = 1,
    ACTIONS(2091), 1,
      sym__newline,
  [21728] = 1,
    ACTIONS(2093), 1,
      sym__newline,
  [21732] = 1,
    ACTIONS(2095), 1,
      sym__newline,
  [21736] = 1,
    ACTIONS(2097), 1,
      sym__newline,
  [21740] = 1,
    ACTIONS(2099), 1,
      sym__newline,
  [21744] = 1,
    ACTIONS(2101), 1,
      sym__newline,
  [21748] = 1,
    ACTIONS(2103), 1,
      sym__newline,
  [21752] = 1,
    ACTIONS(2105), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 286,
  [SMALL_STATE(6)] = 379,
  [SMALL_STATE(7)] = 472,
  [SMALL_STATE(8)] = 564,
  [SMALL_STATE(9)] = 654,
  [SMALL_STATE(10)] = 746,
  [SMALL_STATE(11)] = 835,
  [SMALL_STATE(12)] = 924,
  [SMALL_STATE(13)] = 1013,
  [SMALL_STATE(14)] = 1102,
  [SMALL_STATE(15)] = 1191,
  [SMALL_STATE(16)] = 1280,
  [SMALL_STATE(17)] = 1369,
  [SMALL_STATE(18)] = 1458,
  [SMALL_STATE(19)] = 1547,
  [SMALL_STATE(20)] = 1636,
  [SMALL_STATE(21)] = 1725,
  [SMALL_STATE(22)] = 1814,
  [SMALL_STATE(23)] = 1903,
  [SMALL_STATE(24)] = 1992,
  [SMALL_STATE(25)] = 2081,
  [SMALL_STATE(26)] = 2170,
  [SMALL_STATE(27)] = 2259,
  [SMALL_STATE(28)] = 2348,
  [SMALL_STATE(29)] = 2437,
  [SMALL_STATE(30)] = 2526,
  [SMALL_STATE(31)] = 2615,
  [SMALL_STATE(32)] = 2704,
  [SMALL_STATE(33)] = 2793,
  [SMALL_STATE(34)] = 2882,
  [SMALL_STATE(35)] = 2971,
  [SMALL_STATE(36)] = 3060,
  [SMALL_STATE(37)] = 3149,
  [SMALL_STATE(38)] = 3238,
  [SMALL_STATE(39)] = 3327,
  [SMALL_STATE(40)] = 3416,
  [SMALL_STATE(41)] = 3505,
  [SMALL_STATE(42)] = 3591,
  [SMALL_STATE(43)] = 3677,
  [SMALL_STATE(44)] = 3763,
  [SMALL_STATE(45)] = 3849,
  [SMALL_STATE(46)] = 3935,
  [SMALL_STATE(47)] = 4021,
  [SMALL_STATE(48)] = 4107,
  [SMALL_STATE(49)] = 4192,
  [SMALL_STATE(50)] = 4277,
  [SMALL_STATE(51)] = 4327,
  [SMALL_STATE(52)] = 4376,
  [SMALL_STATE(53)] = 4416,
  [SMALL_STATE(54)] = 4458,
  [SMALL_STATE(55)] = 4500,
  [SMALL_STATE(56)] = 4548,
  [SMALL_STATE(57)] = 4592,
  [SMALL_STATE(58)] = 4632,
  [SMALL_STATE(59)] = 4679,
  [SMALL_STATE(60)] = 4716,
  [SMALL_STATE(61)] = 4755,
  [SMALL_STATE(62)] = 4792,
  [SMALL_STATE(63)] = 4833,
  [SMALL_STATE(64)] = 4870,
  [SMALL_STATE(65)] = 4913,
  [SMALL_STATE(66)] = 4950,
  [SMALL_STATE(67)] = 4987,
  [SMALL_STATE(68)] = 5024,
  [SMALL_STATE(69)] = 5063,
  [SMALL_STATE(70)] = 5100,
  [SMALL_STATE(71)] = 5141,
  [SMALL_STATE(72)] = 5178,
  [SMALL_STATE(73)] = 5215,
  [SMALL_STATE(74)] = 5252,
  [SMALL_STATE(75)] = 5289,
  [SMALL_STATE(76)] = 5336,
  [SMALL_STATE(77)] = 5372,
  [SMALL_STATE(78)] = 5404,
  [SMALL_STATE(79)] = 5440,
  [SMALL_STATE(80)] = 5476,
  [SMALL_STATE(81)] = 5512,
  [SMALL_STATE(82)] = 5548,
  [SMALL_STATE(83)] = 5580,
  [SMALL_STATE(84)] = 5614,
  [SMALL_STATE(85)] = 5650,
  [SMALL_STATE(86)] = 5682,
  [SMALL_STATE(87)] = 5718,
  [SMALL_STATE(88)] = 5754,
  [SMALL_STATE(89)] = 5790,
  [SMALL_STATE(90)] = 5826,
  [SMALL_STATE(91)] = 5862,
  [SMALL_STATE(92)] = 5898,
  [SMALL_STATE(93)] = 5940,
  [SMALL_STATE(94)] = 5980,
  [SMALL_STATE(95)] = 6016,
  [SMALL_STATE(96)] = 6052,
  [SMALL_STATE(97)] = 6088,
  [SMALL_STATE(98)] = 6120,
  [SMALL_STATE(99)] = 6152,
  [SMALL_STATE(100)] = 6188,
  [SMALL_STATE(101)] = 6222,
  [SMALL_STATE(102)] = 6260,
  [SMALL_STATE(103)] = 6300,
  [SMALL_STATE(104)] = 6336,
  [SMALL_STATE(105)] = 6374,
  [SMALL_STATE(106)] = 6410,
  [SMALL_STATE(107)] = 6446,
  [SMALL_STATE(108)] = 6484,
  [SMALL_STATE(109)] = 6515,
  [SMALL_STATE(110)] = 6546,
  [SMALL_STATE(111)] = 6579,
  [SMALL_STATE(112)] = 6614,
  [SMALL_STATE(113)] = 6649,
  [SMALL_STATE(114)] = 6684,
  [SMALL_STATE(115)] = 6715,
  [SMALL_STATE(116)] = 6748,
  [SMALL_STATE(117)] = 6783,
  [SMALL_STATE(118)] = 6818,
  [SMALL_STATE(119)] = 6849,
  [SMALL_STATE(120)] = 6884,
  [SMALL_STATE(121)] = 6919,
  [SMALL_STATE(122)] = 6954,
  [SMALL_STATE(123)] = 6985,
  [SMALL_STATE(124)] = 7016,
  [SMALL_STATE(125)] = 7047,
  [SMALL_STATE(126)] = 7082,
  [SMALL_STATE(127)] = 7113,
  [SMALL_STATE(128)] = 7144,
  [SMALL_STATE(129)] = 7175,
  [SMALL_STATE(130)] = 7206,
  [SMALL_STATE(131)] = 7237,
  [SMALL_STATE(132)] = 7268,
  [SMALL_STATE(133)] = 7299,
  [SMALL_STATE(134)] = 7330,
  [SMALL_STATE(135)] = 7361,
  [SMALL_STATE(136)] = 7392,
  [SMALL_STATE(137)] = 7423,
  [SMALL_STATE(138)] = 7454,
  [SMALL_STATE(139)] = 7485,
  [SMALL_STATE(140)] = 7516,
  [SMALL_STATE(141)] = 7549,
  [SMALL_STATE(142)] = 7580,
  [SMALL_STATE(143)] = 7611,
  [SMALL_STATE(144)] = 7642,
  [SMALL_STATE(145)] = 7673,
  [SMALL_STATE(146)] = 7710,
  [SMALL_STATE(147)] = 7741,
  [SMALL_STATE(148)] = 7772,
  [SMALL_STATE(149)] = 7803,
  [SMALL_STATE(150)] = 7840,
  [SMALL_STATE(151)] = 7871,
  [SMALL_STATE(152)] = 7902,
  [SMALL_STATE(153)] = 7933,
  [SMALL_STATE(154)] = 7964,
  [SMALL_STATE(155)] = 7995,
  [SMALL_STATE(156)] = 8030,
  [SMALL_STATE(157)] = 8061,
  [SMALL_STATE(158)] = 8092,
  [SMALL_STATE(159)] = 8133,
  [SMALL_STATE(160)] = 8164,
  [SMALL_STATE(161)] = 8195,
  [SMALL_STATE(162)] = 8226,
  [SMALL_STATE(163)] = 8257,
  [SMALL_STATE(164)] = 8288,
  [SMALL_STATE(165)] = 8321,
  [SMALL_STATE(166)] = 8352,
  [SMALL_STATE(167)] = 8383,
  [SMALL_STATE(168)] = 8414,
  [SMALL_STATE(169)] = 8445,
  [SMALL_STATE(170)] = 8486,
  [SMALL_STATE(171)] = 8519,
  [SMALL_STATE(172)] = 8550,
  [SMALL_STATE(173)] = 8580,
  [SMALL_STATE(174)] = 8610,
  [SMALL_STATE(175)] = 8640,
  [SMALL_STATE(176)] = 8670,
  [SMALL_STATE(177)] = 8700,
  [SMALL_STATE(178)] = 8734,
  [SMALL_STATE(179)] = 8768,
  [SMALL_STATE(180)] = 8798,
  [SMALL_STATE(181)] = 8832,
  [SMALL_STATE(182)] = 8866,
  [SMALL_STATE(183)] = 8896,
  [SMALL_STATE(184)] = 8926,
  [SMALL_STATE(185)] = 8956,
  [SMALL_STATE(186)] = 8986,
  [SMALL_STATE(187)] = 9020,
  [SMALL_STATE(188)] = 9050,
  [SMALL_STATE(189)] = 9082,
  [SMALL_STATE(190)] = 9116,
  [SMALL_STATE(191)] = 9146,
  [SMALL_STATE(192)] = 9178,
  [SMALL_STATE(193)] = 9208,
  [SMALL_STATE(194)] = 9238,
  [SMALL_STATE(195)] = 9274,
  [SMALL_STATE(196)] = 9308,
  [SMALL_STATE(197)] = 9338,
  [SMALL_STATE(198)] = 9368,
  [SMALL_STATE(199)] = 9398,
  [SMALL_STATE(200)] = 9428,
  [SMALL_STATE(201)] = 9458,
  [SMALL_STATE(202)] = 9488,
  [SMALL_STATE(203)] = 9518,
  [SMALL_STATE(204)] = 9550,
  [SMALL_STATE(205)] = 9584,
  [SMALL_STATE(206)] = 9614,
  [SMALL_STATE(207)] = 9648,
  [SMALL_STATE(208)] = 9682,
  [SMALL_STATE(209)] = 9716,
  [SMALL_STATE(210)] = 9746,
  [SMALL_STATE(211)] = 9776,
  [SMALL_STATE(212)] = 9806,
  [SMALL_STATE(213)] = 9836,
  [SMALL_STATE(214)] = 9870,
  [SMALL_STATE(215)] = 9900,
  [SMALL_STATE(216)] = 9930,
  [SMALL_STATE(217)] = 9960,
  [SMALL_STATE(218)] = 9990,
  [SMALL_STATE(219)] = 10020,
  [SMALL_STATE(220)] = 10050,
  [SMALL_STATE(221)] = 10080,
  [SMALL_STATE(222)] = 10110,
  [SMALL_STATE(223)] = 10140,
  [SMALL_STATE(224)] = 10170,
  [SMALL_STATE(225)] = 10200,
  [SMALL_STATE(226)] = 10230,
  [SMALL_STATE(227)] = 10260,
  [SMALL_STATE(228)] = 10290,
  [SMALL_STATE(229)] = 10320,
  [SMALL_STATE(230)] = 10350,
  [SMALL_STATE(231)] = 10380,
  [SMALL_STATE(232)] = 10410,
  [SMALL_STATE(233)] = 10440,
  [SMALL_STATE(234)] = 10470,
  [SMALL_STATE(235)] = 10500,
  [SMALL_STATE(236)] = 10530,
  [SMALL_STATE(237)] = 10560,
  [SMALL_STATE(238)] = 10590,
  [SMALL_STATE(239)] = 10620,
  [SMALL_STATE(240)] = 10650,
  [SMALL_STATE(241)] = 10682,
  [SMALL_STATE(242)] = 10712,
  [SMALL_STATE(243)] = 10742,
  [SMALL_STATE(244)] = 10774,
  [SMALL_STATE(245)] = 10804,
  [SMALL_STATE(246)] = 10840,
  [SMALL_STATE(247)] = 10870,
  [SMALL_STATE(248)] = 10900,
  [SMALL_STATE(249)] = 10930,
  [SMALL_STATE(250)] = 10960,
  [SMALL_STATE(251)] = 10990,
  [SMALL_STATE(252)] = 11019,
  [SMALL_STATE(253)] = 11048,
  [SMALL_STATE(254)] = 11077,
  [SMALL_STATE(255)] = 11106,
  [SMALL_STATE(256)] = 11135,
  [SMALL_STATE(257)] = 11164,
  [SMALL_STATE(258)] = 11193,
  [SMALL_STATE(259)] = 11222,
  [SMALL_STATE(260)] = 11251,
  [SMALL_STATE(261)] = 11280,
  [SMALL_STATE(262)] = 11311,
  [SMALL_STATE(263)] = 11340,
  [SMALL_STATE(264)] = 11369,
  [SMALL_STATE(265)] = 11398,
  [SMALL_STATE(266)] = 11429,
  [SMALL_STATE(267)] = 11458,
  [SMALL_STATE(268)] = 11487,
  [SMALL_STATE(269)] = 11516,
  [SMALL_STATE(270)] = 11545,
  [SMALL_STATE(271)] = 11576,
  [SMALL_STATE(272)] = 11605,
  [SMALL_STATE(273)] = 11636,
  [SMALL_STATE(274)] = 11665,
  [SMALL_STATE(275)] = 11694,
  [SMALL_STATE(276)] = 11723,
  [SMALL_STATE(277)] = 11752,
  [SMALL_STATE(278)] = 11781,
  [SMALL_STATE(279)] = 11810,
  [SMALL_STATE(280)] = 11839,
  [SMALL_STATE(281)] = 11868,
  [SMALL_STATE(282)] = 11897,
  [SMALL_STATE(283)] = 11926,
  [SMALL_STATE(284)] = 11955,
  [SMALL_STATE(285)] = 11984,
  [SMALL_STATE(286)] = 12013,
  [SMALL_STATE(287)] = 12042,
  [SMALL_STATE(288)] = 12071,
  [SMALL_STATE(289)] = 12100,
  [SMALL_STATE(290)] = 12129,
  [SMALL_STATE(291)] = 12158,
  [SMALL_STATE(292)] = 12187,
  [SMALL_STATE(293)] = 12216,
  [SMALL_STATE(294)] = 12245,
  [SMALL_STATE(295)] = 12274,
  [SMALL_STATE(296)] = 12303,
  [SMALL_STATE(297)] = 12336,
  [SMALL_STATE(298)] = 12367,
  [SMALL_STATE(299)] = 12400,
  [SMALL_STATE(300)] = 12433,
  [SMALL_STATE(301)] = 12462,
  [SMALL_STATE(302)] = 12495,
  [SMALL_STATE(303)] = 12524,
  [SMALL_STATE(304)] = 12553,
  [SMALL_STATE(305)] = 12586,
  [SMALL_STATE(306)] = 12619,
  [SMALL_STATE(307)] = 12648,
  [SMALL_STATE(308)] = 12677,
  [SMALL_STATE(309)] = 12706,
  [SMALL_STATE(310)] = 12739,
  [SMALL_STATE(311)] = 12772,
  [SMALL_STATE(312)] = 12805,
  [SMALL_STATE(313)] = 12833,
  [SMALL_STATE(314)] = 12863,
  [SMALL_STATE(315)] = 12891,
  [SMALL_STATE(316)] = 12919,
  [SMALL_STATE(317)] = 12947,
  [SMALL_STATE(318)] = 12975,
  [SMALL_STATE(319)] = 13005,
  [SMALL_STATE(320)] = 13033,
  [SMALL_STATE(321)] = 13061,
  [SMALL_STATE(322)] = 13089,
  [SMALL_STATE(323)] = 13117,
  [SMALL_STATE(324)] = 13145,
  [SMALL_STATE(325)] = 13173,
  [SMALL_STATE(326)] = 13203,
  [SMALL_STATE(327)] = 13231,
  [SMALL_STATE(328)] = 13261,
  [SMALL_STATE(329)] = 13289,
  [SMALL_STATE(330)] = 13319,
  [SMALL_STATE(331)] = 13347,
  [SMALL_STATE(332)] = 13375,
  [SMALL_STATE(333)] = 13403,
  [SMALL_STATE(334)] = 13431,
  [SMALL_STATE(335)] = 13459,
  [SMALL_STATE(336)] = 13489,
  [SMALL_STATE(337)] = 13517,
  [SMALL_STATE(338)] = 13545,
  [SMALL_STATE(339)] = 13573,
  [SMALL_STATE(340)] = 13601,
  [SMALL_STATE(341)] = 13629,
  [SMALL_STATE(342)] = 13659,
  [SMALL_STATE(343)] = 13687,
  [SMALL_STATE(344)] = 13715,
  [SMALL_STATE(345)] = 13743,
  [SMALL_STATE(346)] = 13771,
  [SMALL_STATE(347)] = 13799,
  [SMALL_STATE(348)] = 13827,
  [SMALL_STATE(349)] = 13855,
  [SMALL_STATE(350)] = 13883,
  [SMALL_STATE(351)] = 13911,
  [SMALL_STATE(352)] = 13939,
  [SMALL_STATE(353)] = 13967,
  [SMALL_STATE(354)] = 13995,
  [SMALL_STATE(355)] = 14023,
  [SMALL_STATE(356)] = 14051,
  [SMALL_STATE(357)] = 14079,
  [SMALL_STATE(358)] = 14107,
  [SMALL_STATE(359)] = 14134,
  [SMALL_STATE(360)] = 14161,
  [SMALL_STATE(361)] = 14188,
  [SMALL_STATE(362)] = 14215,
  [SMALL_STATE(363)] = 14242,
  [SMALL_STATE(364)] = 14269,
  [SMALL_STATE(365)] = 14296,
  [SMALL_STATE(366)] = 14323,
  [SMALL_STATE(367)] = 14350,
  [SMALL_STATE(368)] = 14377,
  [SMALL_STATE(369)] = 14404,
  [SMALL_STATE(370)] = 14431,
  [SMALL_STATE(371)] = 14458,
  [SMALL_STATE(372)] = 14485,
  [SMALL_STATE(373)] = 14512,
  [SMALL_STATE(374)] = 14539,
  [SMALL_STATE(375)] = 14566,
  [SMALL_STATE(376)] = 14593,
  [SMALL_STATE(377)] = 14620,
  [SMALL_STATE(378)] = 14647,
  [SMALL_STATE(379)] = 14674,
  [SMALL_STATE(380)] = 14701,
  [SMALL_STATE(381)] = 14728,
  [SMALL_STATE(382)] = 14755,
  [SMALL_STATE(383)] = 14782,
  [SMALL_STATE(384)] = 14809,
  [SMALL_STATE(385)] = 14836,
  [SMALL_STATE(386)] = 14863,
  [SMALL_STATE(387)] = 14890,
  [SMALL_STATE(388)] = 14917,
  [SMALL_STATE(389)] = 14944,
  [SMALL_STATE(390)] = 14971,
  [SMALL_STATE(391)] = 14998,
  [SMALL_STATE(392)] = 15025,
  [SMALL_STATE(393)] = 15052,
  [SMALL_STATE(394)] = 15079,
  [SMALL_STATE(395)] = 15106,
  [SMALL_STATE(396)] = 15146,
  [SMALL_STATE(397)] = 15186,
  [SMALL_STATE(398)] = 15226,
  [SMALL_STATE(399)] = 15266,
  [SMALL_STATE(400)] = 15306,
  [SMALL_STATE(401)] = 15346,
  [SMALL_STATE(402)] = 15386,
  [SMALL_STATE(403)] = 15426,
  [SMALL_STATE(404)] = 15466,
  [SMALL_STATE(405)] = 15506,
  [SMALL_STATE(406)] = 15546,
  [SMALL_STATE(407)] = 15586,
  [SMALL_STATE(408)] = 15626,
  [SMALL_STATE(409)] = 15666,
  [SMALL_STATE(410)] = 15691,
  [SMALL_STATE(411)] = 15716,
  [SMALL_STATE(412)] = 15736,
  [SMALL_STATE(413)] = 15761,
  [SMALL_STATE(414)] = 15786,
  [SMALL_STATE(415)] = 15811,
  [SMALL_STATE(416)] = 15838,
  [SMALL_STATE(417)] = 15863,
  [SMALL_STATE(418)] = 15890,
  [SMALL_STATE(419)] = 15915,
  [SMALL_STATE(420)] = 15940,
  [SMALL_STATE(421)] = 15965,
  [SMALL_STATE(422)] = 15992,
  [SMALL_STATE(423)] = 16019,
  [SMALL_STATE(424)] = 16046,
  [SMALL_STATE(425)] = 16073,
  [SMALL_STATE(426)] = 16098,
  [SMALL_STATE(427)] = 16125,
  [SMALL_STATE(428)] = 16150,
  [SMALL_STATE(429)] = 16177,
  [SMALL_STATE(430)] = 16204,
  [SMALL_STATE(431)] = 16231,
  [SMALL_STATE(432)] = 16258,
  [SMALL_STATE(433)] = 16283,
  [SMALL_STATE(434)] = 16310,
  [SMALL_STATE(435)] = 16337,
  [SMALL_STATE(436)] = 16362,
  [SMALL_STATE(437)] = 16387,
  [SMALL_STATE(438)] = 16412,
  [SMALL_STATE(439)] = 16439,
  [SMALL_STATE(440)] = 16463,
  [SMALL_STATE(441)] = 16487,
  [SMALL_STATE(442)] = 16511,
  [SMALL_STATE(443)] = 16535,
  [SMALL_STATE(444)] = 16559,
  [SMALL_STATE(445)] = 16583,
  [SMALL_STATE(446)] = 16607,
  [SMALL_STATE(447)] = 16631,
  [SMALL_STATE(448)] = 16655,
  [SMALL_STATE(449)] = 16679,
  [SMALL_STATE(450)] = 16703,
  [SMALL_STATE(451)] = 16727,
  [SMALL_STATE(452)] = 16751,
  [SMALL_STATE(453)] = 16775,
  [SMALL_STATE(454)] = 16799,
  [SMALL_STATE(455)] = 16823,
  [SMALL_STATE(456)] = 16847,
  [SMALL_STATE(457)] = 16871,
  [SMALL_STATE(458)] = 16895,
  [SMALL_STATE(459)] = 16919,
  [SMALL_STATE(460)] = 16943,
  [SMALL_STATE(461)] = 16966,
  [SMALL_STATE(462)] = 16989,
  [SMALL_STATE(463)] = 17012,
  [SMALL_STATE(464)] = 17035,
  [SMALL_STATE(465)] = 17058,
  [SMALL_STATE(466)] = 17081,
  [SMALL_STATE(467)] = 17104,
  [SMALL_STATE(468)] = 17127,
  [SMALL_STATE(469)] = 17150,
  [SMALL_STATE(470)] = 17173,
  [SMALL_STATE(471)] = 17196,
  [SMALL_STATE(472)] = 17221,
  [SMALL_STATE(473)] = 17244,
  [SMALL_STATE(474)] = 17267,
  [SMALL_STATE(475)] = 17290,
  [SMALL_STATE(476)] = 17313,
  [SMALL_STATE(477)] = 17333,
  [SMALL_STATE(478)] = 17353,
  [SMALL_STATE(479)] = 17373,
  [SMALL_STATE(480)] = 17393,
  [SMALL_STATE(481)] = 17413,
  [SMALL_STATE(482)] = 17433,
  [SMALL_STATE(483)] = 17453,
  [SMALL_STATE(484)] = 17473,
  [SMALL_STATE(485)] = 17493,
  [SMALL_STATE(486)] = 17509,
  [SMALL_STATE(487)] = 17523,
  [SMALL_STATE(488)] = 17543,
  [SMALL_STATE(489)] = 17563,
  [SMALL_STATE(490)] = 17583,
  [SMALL_STATE(491)] = 17603,
  [SMALL_STATE(492)] = 17623,
  [SMALL_STATE(493)] = 17643,
  [SMALL_STATE(494)] = 17663,
  [SMALL_STATE(495)] = 17677,
  [SMALL_STATE(496)] = 17697,
  [SMALL_STATE(497)] = 17717,
  [SMALL_STATE(498)] = 17733,
  [SMALL_STATE(499)] = 17753,
  [SMALL_STATE(500)] = 17773,
  [SMALL_STATE(501)] = 17793,
  [SMALL_STATE(502)] = 17813,
  [SMALL_STATE(503)] = 17833,
  [SMALL_STATE(504)] = 17849,
  [SMALL_STATE(505)] = 17869,
  [SMALL_STATE(506)] = 17881,
  [SMALL_STATE(507)] = 17901,
  [SMALL_STATE(508)] = 17921,
  [SMALL_STATE(509)] = 17941,
  [SMALL_STATE(510)] = 17953,
  [SMALL_STATE(511)] = 17973,
  [SMALL_STATE(512)] = 17993,
  [SMALL_STATE(513)] = 18007,
  [SMALL_STATE(514)] = 18027,
  [SMALL_STATE(515)] = 18047,
  [SMALL_STATE(516)] = 18061,
  [SMALL_STATE(517)] = 18081,
  [SMALL_STATE(518)] = 18101,
  [SMALL_STATE(519)] = 18121,
  [SMALL_STATE(520)] = 18137,
  [SMALL_STATE(521)] = 18157,
  [SMALL_STATE(522)] = 18177,
  [SMALL_STATE(523)] = 18197,
  [SMALL_STATE(524)] = 18213,
  [SMALL_STATE(525)] = 18233,
  [SMALL_STATE(526)] = 18249,
  [SMALL_STATE(527)] = 18269,
  [SMALL_STATE(528)] = 18289,
  [SMALL_STATE(529)] = 18309,
  [SMALL_STATE(530)] = 18329,
  [SMALL_STATE(531)] = 18341,
  [SMALL_STATE(532)] = 18361,
  [SMALL_STATE(533)] = 18375,
  [SMALL_STATE(534)] = 18389,
  [SMALL_STATE(535)] = 18409,
  [SMALL_STATE(536)] = 18429,
  [SMALL_STATE(537)] = 18445,
  [SMALL_STATE(538)] = 18465,
  [SMALL_STATE(539)] = 18485,
  [SMALL_STATE(540)] = 18505,
  [SMALL_STATE(541)] = 18519,
  [SMALL_STATE(542)] = 18535,
  [SMALL_STATE(543)] = 18551,
  [SMALL_STATE(544)] = 18571,
  [SMALL_STATE(545)] = 18591,
  [SMALL_STATE(546)] = 18611,
  [SMALL_STATE(547)] = 18631,
  [SMALL_STATE(548)] = 18651,
  [SMALL_STATE(549)] = 18671,
  [SMALL_STATE(550)] = 18685,
  [SMALL_STATE(551)] = 18702,
  [SMALL_STATE(552)] = 18719,
  [SMALL_STATE(553)] = 18736,
  [SMALL_STATE(554)] = 18753,
  [SMALL_STATE(555)] = 18766,
  [SMALL_STATE(556)] = 18783,
  [SMALL_STATE(557)] = 18800,
  [SMALL_STATE(558)] = 18817,
  [SMALL_STATE(559)] = 18834,
  [SMALL_STATE(560)] = 18851,
  [SMALL_STATE(561)] = 18862,
  [SMALL_STATE(562)] = 18879,
  [SMALL_STATE(563)] = 18892,
  [SMALL_STATE(564)] = 18909,
  [SMALL_STATE(565)] = 18926,
  [SMALL_STATE(566)] = 18939,
  [SMALL_STATE(567)] = 18956,
  [SMALL_STATE(568)] = 18973,
  [SMALL_STATE(569)] = 18990,
  [SMALL_STATE(570)] = 19007,
  [SMALL_STATE(571)] = 19024,
  [SMALL_STATE(572)] = 19041,
  [SMALL_STATE(573)] = 19058,
  [SMALL_STATE(574)] = 19075,
  [SMALL_STATE(575)] = 19088,
  [SMALL_STATE(576)] = 19105,
  [SMALL_STATE(577)] = 19122,
  [SMALL_STATE(578)] = 19135,
  [SMALL_STATE(579)] = 19152,
  [SMALL_STATE(580)] = 19165,
  [SMALL_STATE(581)] = 19178,
  [SMALL_STATE(582)] = 19195,
  [SMALL_STATE(583)] = 19210,
  [SMALL_STATE(584)] = 19227,
  [SMALL_STATE(585)] = 19240,
  [SMALL_STATE(586)] = 19257,
  [SMALL_STATE(587)] = 19274,
  [SMALL_STATE(588)] = 19289,
  [SMALL_STATE(589)] = 19306,
  [SMALL_STATE(590)] = 19314,
  [SMALL_STATE(591)] = 19328,
  [SMALL_STATE(592)] = 19336,
  [SMALL_STATE(593)] = 19344,
  [SMALL_STATE(594)] = 19358,
  [SMALL_STATE(595)] = 19370,
  [SMALL_STATE(596)] = 19384,
  [SMALL_STATE(597)] = 19392,
  [SMALL_STATE(598)] = 19406,
  [SMALL_STATE(599)] = 19414,
  [SMALL_STATE(600)] = 19422,
  [SMALL_STATE(601)] = 19430,
  [SMALL_STATE(602)] = 19438,
  [SMALL_STATE(603)] = 19448,
  [SMALL_STATE(604)] = 19460,
  [SMALL_STATE(605)] = 19472,
  [SMALL_STATE(606)] = 19480,
  [SMALL_STATE(607)] = 19488,
  [SMALL_STATE(608)] = 19496,
  [SMALL_STATE(609)] = 19504,
  [SMALL_STATE(610)] = 19512,
  [SMALL_STATE(611)] = 19524,
  [SMALL_STATE(612)] = 19538,
  [SMALL_STATE(613)] = 19546,
  [SMALL_STATE(614)] = 19559,
  [SMALL_STATE(615)] = 19568,
  [SMALL_STATE(616)] = 19577,
  [SMALL_STATE(617)] = 19586,
  [SMALL_STATE(618)] = 19599,
  [SMALL_STATE(619)] = 19612,
  [SMALL_STATE(620)] = 19625,
  [SMALL_STATE(621)] = 19636,
  [SMALL_STATE(622)] = 19645,
  [SMALL_STATE(623)] = 19658,
  [SMALL_STATE(624)] = 19667,
  [SMALL_STATE(625)] = 19676,
  [SMALL_STATE(626)] = 19685,
  [SMALL_STATE(627)] = 19694,
  [SMALL_STATE(628)] = 19703,
  [SMALL_STATE(629)] = 19716,
  [SMALL_STATE(630)] = 19729,
  [SMALL_STATE(631)] = 19738,
  [SMALL_STATE(632)] = 19747,
  [SMALL_STATE(633)] = 19760,
  [SMALL_STATE(634)] = 19769,
  [SMALL_STATE(635)] = 19782,
  [SMALL_STATE(636)] = 19791,
  [SMALL_STATE(637)] = 19800,
  [SMALL_STATE(638)] = 19809,
  [SMALL_STATE(639)] = 19818,
  [SMALL_STATE(640)] = 19831,
  [SMALL_STATE(641)] = 19840,
  [SMALL_STATE(642)] = 19849,
  [SMALL_STATE(643)] = 19858,
  [SMALL_STATE(644)] = 19867,
  [SMALL_STATE(645)] = 19876,
  [SMALL_STATE(646)] = 19885,
  [SMALL_STATE(647)] = 19894,
  [SMALL_STATE(648)] = 19907,
  [SMALL_STATE(649)] = 19920,
  [SMALL_STATE(650)] = 19929,
  [SMALL_STATE(651)] = 19938,
  [SMALL_STATE(652)] = 19947,
  [SMALL_STATE(653)] = 19960,
  [SMALL_STATE(654)] = 19969,
  [SMALL_STATE(655)] = 19978,
  [SMALL_STATE(656)] = 19991,
  [SMALL_STATE(657)] = 20000,
  [SMALL_STATE(658)] = 20009,
  [SMALL_STATE(659)] = 20022,
  [SMALL_STATE(660)] = 20035,
  [SMALL_STATE(661)] = 20048,
  [SMALL_STATE(662)] = 20057,
  [SMALL_STATE(663)] = 20070,
  [SMALL_STATE(664)] = 20083,
  [SMALL_STATE(665)] = 20096,
  [SMALL_STATE(666)] = 20109,
  [SMALL_STATE(667)] = 20118,
  [SMALL_STATE(668)] = 20127,
  [SMALL_STATE(669)] = 20140,
  [SMALL_STATE(670)] = 20150,
  [SMALL_STATE(671)] = 20158,
  [SMALL_STATE(672)] = 20168,
  [SMALL_STATE(673)] = 20176,
  [SMALL_STATE(674)] = 20182,
  [SMALL_STATE(675)] = 20190,
  [SMALL_STATE(676)] = 20200,
  [SMALL_STATE(677)] = 20208,
  [SMALL_STATE(678)] = 20214,
  [SMALL_STATE(679)] = 20224,
  [SMALL_STATE(680)] = 20234,
  [SMALL_STATE(681)] = 20244,
  [SMALL_STATE(682)] = 20252,
  [SMALL_STATE(683)] = 20262,
  [SMALL_STATE(684)] = 20272,
  [SMALL_STATE(685)] = 20282,
  [SMALL_STATE(686)] = 20292,
  [SMALL_STATE(687)] = 20302,
  [SMALL_STATE(688)] = 20308,
  [SMALL_STATE(689)] = 20316,
  [SMALL_STATE(690)] = 20324,
  [SMALL_STATE(691)] = 20334,
  [SMALL_STATE(692)] = 20344,
  [SMALL_STATE(693)] = 20354,
  [SMALL_STATE(694)] = 20364,
  [SMALL_STATE(695)] = 20374,
  [SMALL_STATE(696)] = 20382,
  [SMALL_STATE(697)] = 20392,
  [SMALL_STATE(698)] = 20402,
  [SMALL_STATE(699)] = 20412,
  [SMALL_STATE(700)] = 20422,
  [SMALL_STATE(701)] = 20432,
  [SMALL_STATE(702)] = 20442,
  [SMALL_STATE(703)] = 20452,
  [SMALL_STATE(704)] = 20462,
  [SMALL_STATE(705)] = 20472,
  [SMALL_STATE(706)] = 20482,
  [SMALL_STATE(707)] = 20492,
  [SMALL_STATE(708)] = 20500,
  [SMALL_STATE(709)] = 20510,
  [SMALL_STATE(710)] = 20516,
  [SMALL_STATE(711)] = 20526,
  [SMALL_STATE(712)] = 20536,
  [SMALL_STATE(713)] = 20542,
  [SMALL_STATE(714)] = 20552,
  [SMALL_STATE(715)] = 20562,
  [SMALL_STATE(716)] = 20572,
  [SMALL_STATE(717)] = 20582,
  [SMALL_STATE(718)] = 20592,
  [SMALL_STATE(719)] = 20602,
  [SMALL_STATE(720)] = 20612,
  [SMALL_STATE(721)] = 20622,
  [SMALL_STATE(722)] = 20632,
  [SMALL_STATE(723)] = 20640,
  [SMALL_STATE(724)] = 20648,
  [SMALL_STATE(725)] = 20658,
  [SMALL_STATE(726)] = 20668,
  [SMALL_STATE(727)] = 20674,
  [SMALL_STATE(728)] = 20684,
  [SMALL_STATE(729)] = 20694,
  [SMALL_STATE(730)] = 20700,
  [SMALL_STATE(731)] = 20710,
  [SMALL_STATE(732)] = 20720,
  [SMALL_STATE(733)] = 20730,
  [SMALL_STATE(734)] = 20740,
  [SMALL_STATE(735)] = 20750,
  [SMALL_STATE(736)] = 20760,
  [SMALL_STATE(737)] = 20768,
  [SMALL_STATE(738)] = 20778,
  [SMALL_STATE(739)] = 20788,
  [SMALL_STATE(740)] = 20798,
  [SMALL_STATE(741)] = 20808,
  [SMALL_STATE(742)] = 20818,
  [SMALL_STATE(743)] = 20828,
  [SMALL_STATE(744)] = 20838,
  [SMALL_STATE(745)] = 20848,
  [SMALL_STATE(746)] = 20858,
  [SMALL_STATE(747)] = 20868,
  [SMALL_STATE(748)] = 20878,
  [SMALL_STATE(749)] = 20888,
  [SMALL_STATE(750)] = 20898,
  [SMALL_STATE(751)] = 20906,
  [SMALL_STATE(752)] = 20916,
  [SMALL_STATE(753)] = 20924,
  [SMALL_STATE(754)] = 20934,
  [SMALL_STATE(755)] = 20944,
  [SMALL_STATE(756)] = 20954,
  [SMALL_STATE(757)] = 20961,
  [SMALL_STATE(758)] = 20968,
  [SMALL_STATE(759)] = 20975,
  [SMALL_STATE(760)] = 20982,
  [SMALL_STATE(761)] = 20989,
  [SMALL_STATE(762)] = 20996,
  [SMALL_STATE(763)] = 21003,
  [SMALL_STATE(764)] = 21010,
  [SMALL_STATE(765)] = 21017,
  [SMALL_STATE(766)] = 21024,
  [SMALL_STATE(767)] = 21031,
  [SMALL_STATE(768)] = 21038,
  [SMALL_STATE(769)] = 21043,
  [SMALL_STATE(770)] = 21050,
  [SMALL_STATE(771)] = 21057,
  [SMALL_STATE(772)] = 21064,
  [SMALL_STATE(773)] = 21071,
  [SMALL_STATE(774)] = 21078,
  [SMALL_STATE(775)] = 21083,
  [SMALL_STATE(776)] = 21090,
  [SMALL_STATE(777)] = 21097,
  [SMALL_STATE(778)] = 21104,
  [SMALL_STATE(779)] = 21111,
  [SMALL_STATE(780)] = 21118,
  [SMALL_STATE(781)] = 21125,
  [SMALL_STATE(782)] = 21132,
  [SMALL_STATE(783)] = 21139,
  [SMALL_STATE(784)] = 21146,
  [SMALL_STATE(785)] = 21153,
  [SMALL_STATE(786)] = 21160,
  [SMALL_STATE(787)] = 21167,
  [SMALL_STATE(788)] = 21174,
  [SMALL_STATE(789)] = 21181,
  [SMALL_STATE(790)] = 21188,
  [SMALL_STATE(791)] = 21195,
  [SMALL_STATE(792)] = 21202,
  [SMALL_STATE(793)] = 21209,
  [SMALL_STATE(794)] = 21216,
  [SMALL_STATE(795)] = 21223,
  [SMALL_STATE(796)] = 21230,
  [SMALL_STATE(797)] = 21237,
  [SMALL_STATE(798)] = 21244,
  [SMALL_STATE(799)] = 21251,
  [SMALL_STATE(800)] = 21256,
  [SMALL_STATE(801)] = 21260,
  [SMALL_STATE(802)] = 21264,
  [SMALL_STATE(803)] = 21268,
  [SMALL_STATE(804)] = 21272,
  [SMALL_STATE(805)] = 21276,
  [SMALL_STATE(806)] = 21280,
  [SMALL_STATE(807)] = 21284,
  [SMALL_STATE(808)] = 21288,
  [SMALL_STATE(809)] = 21292,
  [SMALL_STATE(810)] = 21296,
  [SMALL_STATE(811)] = 21300,
  [SMALL_STATE(812)] = 21304,
  [SMALL_STATE(813)] = 21308,
  [SMALL_STATE(814)] = 21312,
  [SMALL_STATE(815)] = 21316,
  [SMALL_STATE(816)] = 21320,
  [SMALL_STATE(817)] = 21324,
  [SMALL_STATE(818)] = 21328,
  [SMALL_STATE(819)] = 21332,
  [SMALL_STATE(820)] = 21336,
  [SMALL_STATE(821)] = 21340,
  [SMALL_STATE(822)] = 21344,
  [SMALL_STATE(823)] = 21348,
  [SMALL_STATE(824)] = 21352,
  [SMALL_STATE(825)] = 21356,
  [SMALL_STATE(826)] = 21360,
  [SMALL_STATE(827)] = 21364,
  [SMALL_STATE(828)] = 21368,
  [SMALL_STATE(829)] = 21372,
  [SMALL_STATE(830)] = 21376,
  [SMALL_STATE(831)] = 21380,
  [SMALL_STATE(832)] = 21384,
  [SMALL_STATE(833)] = 21388,
  [SMALL_STATE(834)] = 21392,
  [SMALL_STATE(835)] = 21396,
  [SMALL_STATE(836)] = 21400,
  [SMALL_STATE(837)] = 21404,
  [SMALL_STATE(838)] = 21408,
  [SMALL_STATE(839)] = 21412,
  [SMALL_STATE(840)] = 21416,
  [SMALL_STATE(841)] = 21420,
  [SMALL_STATE(842)] = 21424,
  [SMALL_STATE(843)] = 21428,
  [SMALL_STATE(844)] = 21432,
  [SMALL_STATE(845)] = 21436,
  [SMALL_STATE(846)] = 21440,
  [SMALL_STATE(847)] = 21444,
  [SMALL_STATE(848)] = 21448,
  [SMALL_STATE(849)] = 21452,
  [SMALL_STATE(850)] = 21456,
  [SMALL_STATE(851)] = 21460,
  [SMALL_STATE(852)] = 21464,
  [SMALL_STATE(853)] = 21468,
  [SMALL_STATE(854)] = 21472,
  [SMALL_STATE(855)] = 21476,
  [SMALL_STATE(856)] = 21480,
  [SMALL_STATE(857)] = 21484,
  [SMALL_STATE(858)] = 21488,
  [SMALL_STATE(859)] = 21492,
  [SMALL_STATE(860)] = 21496,
  [SMALL_STATE(861)] = 21500,
  [SMALL_STATE(862)] = 21504,
  [SMALL_STATE(863)] = 21508,
  [SMALL_STATE(864)] = 21512,
  [SMALL_STATE(865)] = 21516,
  [SMALL_STATE(866)] = 21520,
  [SMALL_STATE(867)] = 21524,
  [SMALL_STATE(868)] = 21528,
  [SMALL_STATE(869)] = 21532,
  [SMALL_STATE(870)] = 21536,
  [SMALL_STATE(871)] = 21540,
  [SMALL_STATE(872)] = 21544,
  [SMALL_STATE(873)] = 21548,
  [SMALL_STATE(874)] = 21552,
  [SMALL_STATE(875)] = 21556,
  [SMALL_STATE(876)] = 21560,
  [SMALL_STATE(877)] = 21564,
  [SMALL_STATE(878)] = 21568,
  [SMALL_STATE(879)] = 21572,
  [SMALL_STATE(880)] = 21576,
  [SMALL_STATE(881)] = 21580,
  [SMALL_STATE(882)] = 21584,
  [SMALL_STATE(883)] = 21588,
  [SMALL_STATE(884)] = 21592,
  [SMALL_STATE(885)] = 21596,
  [SMALL_STATE(886)] = 21600,
  [SMALL_STATE(887)] = 21604,
  [SMALL_STATE(888)] = 21608,
  [SMALL_STATE(889)] = 21612,
  [SMALL_STATE(890)] = 21616,
  [SMALL_STATE(891)] = 21620,
  [SMALL_STATE(892)] = 21624,
  [SMALL_STATE(893)] = 21628,
  [SMALL_STATE(894)] = 21632,
  [SMALL_STATE(895)] = 21636,
  [SMALL_STATE(896)] = 21640,
  [SMALL_STATE(897)] = 21644,
  [SMALL_STATE(898)] = 21648,
  [SMALL_STATE(899)] = 21652,
  [SMALL_STATE(900)] = 21656,
  [SMALL_STATE(901)] = 21660,
  [SMALL_STATE(902)] = 21664,
  [SMALL_STATE(903)] = 21668,
  [SMALL_STATE(904)] = 21672,
  [SMALL_STATE(905)] = 21676,
  [SMALL_STATE(906)] = 21680,
  [SMALL_STATE(907)] = 21684,
  [SMALL_STATE(908)] = 21688,
  [SMALL_STATE(909)] = 21692,
  [SMALL_STATE(910)] = 21696,
  [SMALL_STATE(911)] = 21700,
  [SMALL_STATE(912)] = 21704,
  [SMALL_STATE(913)] = 21708,
  [SMALL_STATE(914)] = 21712,
  [SMALL_STATE(915)] = 21716,
  [SMALL_STATE(916)] = 21720,
  [SMALL_STATE(917)] = 21724,
  [SMALL_STATE(918)] = 21728,
  [SMALL_STATE(919)] = 21732,
  [SMALL_STATE(920)] = 21736,
  [SMALL_STATE(921)] = 21740,
  [SMALL_STATE(922)] = 21744,
  [SMALL_STATE(923)] = 21748,
  [SMALL_STATE(924)] = 21752,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(687),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(490),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(660),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(767),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(766),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(879),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(859),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(821),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(907),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(679),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(680),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(912),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(704),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(704),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(403),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(403),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(822),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(709),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(506),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(613),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(793),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(786),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(814),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(810),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(758),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(758),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(851),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(911),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(730),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(728),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(918),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(685),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(685),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(400),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(400),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(853),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(712),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(535),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(629),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(798),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(796),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(805),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(803),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(763),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(763),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(807),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(720),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(721),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(908),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(718),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(718),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(402),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(402),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(808),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(8),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(673),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(489),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(652),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(769),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(770),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(865),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(861),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(760),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(760),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(836),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(748),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(749),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(915),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(697),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(697),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(406),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(406),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(838),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(32),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(729),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(526),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(628),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(797),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(789),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(812),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(831),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(757),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(757),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(858),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(876),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(694),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(693),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(850),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(678),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(678),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(396),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(396),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(800),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(828),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(887),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(710),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 5),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 5),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(878),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(755),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(97),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(151),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(747),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(802),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(238),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 1, .production_id = 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 1, .production_id = 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 2),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_definition, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 3),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 3),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 3),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 3, .production_id = 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 3, .production_id = 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 2),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 4),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(873),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 3),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(300),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(303),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [945] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(874),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(411),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(623),
  [1208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(410),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(587),
  [1350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(827),
  [1353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(817),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(587),
  [1417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(827),
  [1420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(817),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(397),
  [1466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(525),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(898),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(587),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(866),
  [1640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(677),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(868),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [1772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2), SHIFT_REPEAT(869),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1937] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
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
