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
#define STATE_COUNT 957
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 3
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_doctype = 1,
  anon_sym_html = 2,
  anon_sym_strict = 3,
  anon_sym_xml = 4,
  anon_sym_PIPE = 5,
  anon_sym_PLUS = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_mixin = 10,
  aux_sym_mixin_attributes_token1 = 11,
  anon_sym_block = 12,
  anon_sym_append = 13,
  anon_sym_prepend = 14,
  anon_sym_extends = 15,
  aux_sym_extends_token1 = 16,
  anon_sym_COLON = 17,
  sym_filter_name = 18,
  aux_sym_filter_content_token1 = 19,
  aux_sym_filter_content_token2 = 20,
  anon_sym_unless = 21,
  anon_sym_if = 22,
  anon_sym_elseif = 23,
  anon_sym_else = 24,
  anon_sym_case = 25,
  anon_sym_when = 26,
  aux_sym__when_keyword_token1 = 27,
  anon_sym_default = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_EQ = 30,
  anon_sym_script_DOT = 31,
  aux_sym_script_block_token1 = 32,
  anon_sym_SLASH = 33,
  anon_sym_ = 34,
  anon_sym_DOT = 35,
  aux_sym__ternary_attribute_value_token1 = 36,
  aux_sym__variable_attribute_value_token1 = 37,
  aux_sym__object_attribute_value_token1 = 38,
  aux_sym__template_attribute_value_token1 = 39,
  aux_sym__array_attribute_value_token1 = 40,
  aux_sym__attribute_token1 = 41,
  anon_sym_SLASH_SLASH = 42,
  anon_sym_SLASH_SLASH_DASH = 43,
  sym_tag_name = 44,
  sym_class = 45,
  sym_id = 46,
  aux_sym_angular_attribute_name_token1 = 47,
  aux_sym_angular_attribute_name_token2 = 48,
  aux_sym_angular_attribute_name_token3 = 49,
  sym_attribute_name = 50,
  anon_sym_SQUOTE = 51,
  aux_sym_quoted_javascript_token1 = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_quoted_javascript_token2 = 54,
  aux_sym_content_token1 = 55,
  anon_sym_POUND = 56,
  anon_sym_LBRACE = 57,
  anon_sym_POUND_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_LBRACE_LBRACE = 60,
  anon_sym_RBRACE_RBRACE = 61,
  sym__delimited_javascript = 62,
  sym__un_delimited_javascript_line = 63,
  anon_sym_DASH = 64,
  aux_sym_unbuffered_code_token1 = 65,
  sym__newline = 66,
  sym__indent = 67,
  sym__dedent = 68,
  sym_source_file = 69,
  sym_doctype = 70,
  sym_pipe = 71,
  sym_mixin_use = 72,
  sym_mixin_definition = 73,
  sym_mixin_attributes = 74,
  sym__block_content = 75,
  sym_block_definition = 76,
  sym_block_append = 77,
  sym_block_prepend = 78,
  sym_extends = 79,
  sym_filter = 80,
  sym_filter_content = 81,
  sym_conditional = 82,
  sym_case = 83,
  sym__when_content = 84,
  sym__dummy_tag = 85,
  sym__when_keyword = 86,
  sym_when = 87,
  sym_unescaped_buffered_code = 88,
  sym_buffered_code = 89,
  sym_script_block = 90,
  sym_tag = 91,
  sym__content_after_dot = 92,
  sym_attributes = 93,
  sym_attribute = 94,
  sym__ternary_attribute_value = 95,
  sym__string_attribute_value = 96,
  sym__variable_attribute_value = 97,
  sym__object_attribute_value = 98,
  sym__template_attribute_value = 99,
  sym__array_attribute_value = 100,
  sym__pug_attributes = 101,
  sym__attribute = 102,
  sym__angular_attribute = 103,
  sym_children = 104,
  sym__children_choice = 105,
  sym_comment = 106,
  sym__comment = 107,
  sym__comment_not_first_line = 108,
  sym_angular_attribute_name = 109,
  sym_quoted_javascript = 110,
  sym_quoted_attribute_value = 111,
  sym_content = 112,
  sym__comment_content = 113,
  aux_sym__content_or_javascript = 114,
  sym__un_delimited_javascript = 115,
  aux_sym__un_delimited_javascript_multiline = 116,
  sym__single_line_buf_code = 117,
  sym__multi_line_buf_code = 118,
  sym_unbuffered_code = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_mixin_use_repeat1 = 121,
  aux_sym_mixin_attributes_repeat1 = 122,
  aux_sym_filter_content_repeat1 = 123,
  aux_sym_case_repeat1 = 124,
  aux_sym_script_block_repeat1 = 125,
  aux_sym_tag_repeat1 = 126,
  aux_sym__content_after_dot_repeat1 = 127,
  aux_sym_attributes_repeat1 = 128,
  aux_sym__attribute_repeat1 = 129,
  aux_sym_children_repeat1 = 130,
  aux_sym__comment_repeat1 = 131,
  aux_sym_content_repeat1 = 132,
  aux_sym__single_line_buf_code_repeat1 = 133,
  alias_sym_attribute_value = 134,
  alias_sym_block_name = 135,
  alias_sym_mixin_name = 136,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_mixin] = "mixin",
  [aux_sym_mixin_attributes_token1] = "attribute_name",
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
  [sym_mixin_use] = "mixin_use",
  [sym_mixin_definition] = "mixin_definition",
  [sym_mixin_attributes] = "mixin_attributes",
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
  [sym__pug_attributes] = "_pug_attributes",
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
  [aux_sym_mixin_use_repeat1] = "mixin_use_repeat1",
  [aux_sym_mixin_attributes_repeat1] = "mixin_attributes_repeat1",
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
  [alias_sym_mixin_name] = "mixin_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_mixin] = anon_sym_mixin,
  [aux_sym_mixin_attributes_token1] = sym_attribute_name,
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
  [sym_mixin_use] = sym_mixin_use,
  [sym_mixin_definition] = sym_mixin_definition,
  [sym_mixin_attributes] = sym_mixin_attributes,
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
  [sym__pug_attributes] = sym__pug_attributes,
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
  [aux_sym_mixin_use_repeat1] = aux_sym_mixin_use_repeat1,
  [aux_sym_mixin_attributes_repeat1] = aux_sym_mixin_attributes_repeat1,
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
  [alias_sym_mixin_name] = alias_sym_mixin_name,
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
  [anon_sym_PLUS] = {
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
  [anon_sym_mixin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mixin_attributes_token1] = {
    .visible = true,
    .named = true,
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
  [sym_mixin_use] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_attributes] = {
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
  [sym__pug_attributes] = {
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
  [aux_sym_mixin_use_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mixin_attributes_repeat1] = {
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
  [alias_sym_mixin_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_mixin_name,
  },
  [2] = {
    [0] = alias_sym_block_name,
  },
  [3] = {
    [0] = sym_attribute,
  },
  [4] = {
    [1] = alias_sym_mixin_name,
    [3] = sym_attribute,
  },
  [5] = {
    [1] = aux_sym__when_keyword_token1,
  },
  [6] = {
    [3] = aux_sym__when_keyword_token1,
  },
  [7] = {
    [0] = aux_sym__when_keyword_token1,
  },
  [8] = {
    [1] = alias_sym_attribute_value,
  },
  [9] = {
    [1] = alias_sym_mixin_name,
    [4] = sym_attribute,
  },
  [10] = {
    [3] = sym_children,
  },
  [11] = {
    [5] = sym_children,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__pug_attributes, 2,
    sym__pug_attributes,
    sym_attribute,
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
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '#') ADVANCE(804);
      if (lookahead == '\'') ADVANCE(794);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '`') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == '{') ADVANCE(805);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '`') ADVANCE(647);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(355);
      if (lookahead == '`') ADVANCE(651);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == ']') ADVANCE(653);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ']') ADVANCE(654);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(70);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ']') ADVANCE(656);
      if (lookahead == '`') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(98);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(359);
      if (lookahead == ']') ADVANCE(657);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(169);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(360);
      if (lookahead == ']') ADVANCE(658);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(170);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(361);
      if (lookahead == ']') ADVANCE(659);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(171);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(362);
      if (lookahead == ']') ADVANCE(660);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(173);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(710);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(169);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(637);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(170);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(171);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '}') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(173);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(169);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(637);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(170);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(171);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '}') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(173);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(373);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(374);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(375);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(376);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(380);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(381);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(382);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(383);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == ')') ADVANCE(595);
      if (lookahead == '`') ADVANCE(643);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '`') ADVANCE(645);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(70);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(98);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(393);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(169);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(395);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(170);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(397);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(171);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(399);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(173);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '#') ADVANCE(804);
      if (lookahead == '{') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0) ADVANCE(803);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(811);
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(332);
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '}') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(799);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '?') ADVANCE(624);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '`') ADVANCE(619);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ',') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(799);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '?') ADVANCE(616);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '`') ADVANCE(619);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ',') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == 'w') ADVANCE(711);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '\'') ADVANCE(794);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(800);
      if (lookahead != 0) ADVANCE(801);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 69:
      if (lookahead == '\'') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(796);
      if (lookahead != 0) ADVANCE(797);
      END_STATE();
    case 70:
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(594);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '?') ADVANCE(620);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',') ADVANCE(74);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 76:
      if (lookahead == ')') ADVANCE(627);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '`') ADVANCE(570);
      if (lookahead != 0) ADVANCE(579);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(627);
      if (lookahead == '`') ADVANCE(648);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ')') ADVANCE(626);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == ')') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '}') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(575);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '}') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(575);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(343);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(662);
      END_STATE();
    case 85:
      if (lookahead == '=') ADVANCE(337);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == ']') ADVANCE(566);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(573);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 88:
      if (lookahead == '?') ADVANCE(618);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 89:
      if (lookahead == '?') ADVANCE(183);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '?') ADVANCE(621);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 91:
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '`') ADVANCE(650);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == ']') ADVANCE(655);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(89);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '`') ADVANCE(642);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(96);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 98:
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(312);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 128:
      if (lookahead == 'k') ADVANCE(214);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(161);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 166:
      if (lookahead == '}') ADVANCE(809);
      END_STATE();
    case 167:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(167)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 168:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == 'w') ADVANCE(711);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(168)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 169:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 172:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 173:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 177:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 179:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 181:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(566);
      END_STATE();
    case 184:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(184)
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(710);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 185:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(185)
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 186:
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 187:
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == 'w') ADVANCE(711);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 188:
      if (eof) ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(188)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 189:
      if (eof) ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead == 'w') ADVANCE(711);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(189)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '?') ADVANCE(621);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_mixin_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_extends_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_filter_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_filter_content_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(264);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(264);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '/') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'x') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(304);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(264);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(819);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(662);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '`') ADVANCE(647);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(355);
      if (lookahead == '`') ADVANCE(651);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == ']') ADVANCE(653);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ']') ADVANCE(654);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(70);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ']') ADVANCE(656);
      if (lookahead == '`') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(98);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(359);
      if (lookahead == ']') ADVANCE(657);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(169);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(360);
      if (lookahead == ']') ADVANCE(658);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(170);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(361);
      if (lookahead == ']') ADVANCE(659);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(171);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(362);
      if (lookahead == ']') ADVANCE(660);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(173);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(169);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(637);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(170);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(171);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '}') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(173);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(373);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(374);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(375);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(376);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(380);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(381);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(382);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(383);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == ')') ADVANCE(595);
      if (lookahead == '`') ADVANCE(643);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '`') ADVANCE(645);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(395);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '?') ADVANCE(465);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(397);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '?') ADVANCE(465);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(399);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(409);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(411);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(413);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(387);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(387);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(393);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(393);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '\'') ADVANCE(427);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(423);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(427);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(397);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(425);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(397);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(427);
      if (lookahead == '\'') ADVANCE(427);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(399);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(427);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(399);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == ' ') ADVANCE(525);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '?') ADVANCE(487);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == ' ') ADVANCE(526);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == ',') ADVANCE(526);
      if (lookahead == '?') ADVANCE(488);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == ' ') ADVANCE(527);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ',') ADVANCE(527);
      if (lookahead == '?') ADVANCE(489);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(435);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == ']') ADVANCE(387);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(387);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(389);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(492);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(391);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(435);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == '?') ADVANCE(493);
      if (lookahead == ']') ADVANCE(393);
      if (lookahead == '`') ADVANCE(438);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(393);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(438);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '?') ADVANCE(494);
      if (lookahead == ']') ADVANCE(395);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(395);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '?') ADVANCE(495);
      if (lookahead == ']') ADVANCE(397);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(397);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '\'') ADVANCE(438);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '`') ADVANCE(438);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(399);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == '[') ADVANCE(415);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(444);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead == '[') ADVANCE(419);
      if (lookahead == ']') ADVANCE(419);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(435);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == '[') ADVANCE(421);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '?') ADVANCE(501);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(444);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '?') ADVANCE(502);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(574);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '?') ADVANCE(503);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(446);
      if (lookahead == '"') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(446);
      if (lookahead == '?') ADVANCE(504);
      if (lookahead == '`') ADVANCE(450);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(387);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(447);
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(447);
      if (lookahead == '?') ADVANCE(505);
      if (lookahead == '`') ADVANCE(451);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(389);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '"') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(451);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(448);
      if (lookahead == '?') ADVANCE(506);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(391);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(449);
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(449);
      if (lookahead == '?') ADVANCE(507);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(393);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '"') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(452);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(450);
      if (lookahead == '?') ADVANCE(508);
      if (lookahead == '`') ADVANCE(450);
      if (lookahead == '}') ADVANCE(450);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(395);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(451);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(451);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == '`') ADVANCE(451);
      if (lookahead == '}') ADVANCE(451);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(397);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(452);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '?') ADVANCE(510);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead == '}') ADVANCE(452);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(399);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(446);
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(446);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == '`') ADVANCE(457);
      if (lookahead == '}') ADVANCE(453);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(415);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(447);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(447);
      if (lookahead == '?') ADVANCE(512);
      if (lookahead == '`') ADVANCE(458);
      if (lookahead == '}') ADVANCE(454);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(417);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(448);
      if (lookahead == '?') ADVANCE(513);
      if (lookahead == '`') ADVANCE(455);
      if (lookahead == '}') ADVANCE(455);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(419);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(449);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(449);
      if (lookahead == '?') ADVANCE(514);
      if (lookahead == '`') ADVANCE(459);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(421);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(450);
      if (lookahead == '?') ADVANCE(515);
      if (lookahead == '`') ADVANCE(457);
      if (lookahead == '}') ADVANCE(457);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(423);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(451);
      if (lookahead == '?') ADVANCE(516);
      if (lookahead == '`') ADVANCE(458);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(425);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '?') ADVANCE(517);
      if (lookahead == '`') ADVANCE(459);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(427);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(70);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '`') ADVANCE(462);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(98);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(463);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(169);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(464);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(170);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(465);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(171);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(466);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(173);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(470);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(471);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(472);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(473);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(70);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ',') ADVANCE(462);
      if (lookahead == '`') ADVANCE(476);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(98);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(477);
      if (lookahead == '(') ADVANCE(470);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(169);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(478);
      if (lookahead == '(') ADVANCE(471);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(170);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(479);
      if (lookahead == '(') ADVANCE(472);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(171);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(480);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(173);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(587);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '`') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(587);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '`') ADVANCE(461);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(587);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(483);
      if (lookahead == '`') ADVANCE(463);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"') ADVANCE(484);
      if (lookahead == ')') ADVANCE(595);
      if (lookahead == '`') ADVANCE(467);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(486);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '"') ADVANCE(487);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == ',') ADVANCE(481);
      if (lookahead == '`') ADVANCE(474);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(488);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '`') ADVANCE(475);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(489);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ',') ADVANCE(483);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(490);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(460);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(491);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(461);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(462);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(493);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(463);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(494);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(464);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(495);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ']') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(465);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(496);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(466);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(497);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '[') ADVANCE(474);
      if (lookahead == ']') ADVANCE(474);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(491);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == ']') ADVANCE(475);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(492);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == ']') ADVANCE(476);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(500);
      if (lookahead == '(') ADVANCE(470);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(493);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == ']') ADVANCE(477);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(501);
      if (lookahead == '(') ADVANCE(471);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(494);
      if (lookahead == '[') ADVANCE(478);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(502);
      if (lookahead == '(') ADVANCE(472);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(479);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(503);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(504);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(460);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '}') ADVANCE(505);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(461);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(506);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(462);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(507);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '}') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(463);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(508);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(508);
      if (lookahead == '}') ADVANCE(508);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(464);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(509);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '}') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(465);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(510);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(510);
      if (lookahead == '}') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(466);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(504);
      if (lookahead == '}') ADVANCE(511);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(474);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '}') ADVANCE(512);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(475);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(506);
      if (lookahead == '`') ADVANCE(513);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(476);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(514);
      if (lookahead == '(') ADVANCE(470);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '}') ADVANCE(514);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(477);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(515);
      if (lookahead == '(') ADVANCE(471);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(508);
      if (lookahead == '}') ADVANCE(515);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(478);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(516);
      if (lookahead == '(') ADVANCE(472);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '}') ADVANCE(516);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(479);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(517);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(510);
      if (lookahead == '}') ADVANCE(517);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(480);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == '`') ADVANCE(520);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(521);
      if (lookahead == '(') ADVANCE(470);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == ',') ADVANCE(470);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(522);
      if (lookahead == '(') ADVANCE(471);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(523);
      if (lookahead == '(') ADVANCE(472);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(524);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead == ',') ADVANCE(473);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(525);
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(527);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(481);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(526);
      if (lookahead == '"') ADVANCE(527);
      if (lookahead == '\'') ADVANCE(526);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(527);
      if (lookahead == '"') ADVANCE(527);
      if (lookahead == '\'') ADVANCE(527);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(483);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '"') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(531);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(552);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '`') ADVANCE(532);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '\'') ADVANCE(529);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(553);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(533);
      if (lookahead != 0) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '\'') ADVANCE(533);
      if (lookahead == '(') ADVANCE(547);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(554);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(530);
      if (lookahead != 0) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '\'') ADVANCE(531);
      if (lookahead == '(') ADVANCE(548);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(555);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(534);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '\'') ADVANCE(534);
      if (lookahead == '(') ADVANCE(549);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(532);
      if (lookahead != 0) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == '"') ADVANCE(534);
      if (lookahead == '\'') ADVANCE(533);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(557);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead == '`') ADVANCE(533);
      if (lookahead != 0) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(558);
      if (lookahead == '"') ADVANCE(534);
      if (lookahead == '\'') ADVANCE(534);
      if (lookahead == '(') ADVANCE(551);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(558);
      if (lookahead == '?') ADVANCE(428);
      if (lookahead == '`') ADVANCE(534);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == ' ') ADVANCE(535);
      if (lookahead == '"') ADVANCE(535);
      if (lookahead == '\'') ADVANCE(537);
      if (lookahead == ')') ADVANCE(595);
      if (lookahead == '?') ADVANCE(484);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == ' ') ADVANCE(536);
      if (lookahead == '"') ADVANCE(537);
      if (lookahead == '\'') ADVANCE(536);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '?') ADVANCE(485);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == ' ') ADVANCE(537);
      if (lookahead == '"') ADVANCE(537);
      if (lookahead == '\'') ADVANCE(537);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '?') ADVANCE(486);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(538);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == '?') ADVANCE(518);
      if (lookahead == '`') ADVANCE(542);
      if (lookahead != 0) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '\'') ADVANCE(539);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == '?') ADVANCE(519);
      if (lookahead == '`') ADVANCE(543);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '`') ADVANCE(540);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(541);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == ',') ADVANCE(407);
      if (lookahead == '?') ADVANCE(521);
      if (lookahead == '`') ADVANCE(544);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '?') ADVANCE(522);
      if (lookahead == '`') ADVANCE(542);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '\'') ADVANCE(543);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '?') ADVANCE(523);
      if (lookahead == '`') ADVANCE(543);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '?') ADVANCE(524);
      if (lookahead == '`') ADVANCE(544);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(545);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '?') ADVANCE(402);
      if (lookahead == '`') ADVANCE(549);
      if (lookahead != 0) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '"') ADVANCE(548);
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '?') ADVANCE(404);
      if (lookahead == '`') ADVANCE(550);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(547);
      if (lookahead == '"') ADVANCE(549);
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == ')') ADVANCE(600);
      if (lookahead == '?') ADVANCE(406);
      if (lookahead == '`') ADVANCE(547);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '"') ADVANCE(548);
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == '`') ADVANCE(551);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(549);
      if (lookahead == '"') ADVANCE(549);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == '`') ADVANCE(549);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(550);
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == '`') ADVANCE(550);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(604);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == '`') ADVANCE(551);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(388);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '"') ADVANCE(555);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(390);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(392);
      if (lookahead == '`') ADVANCE(554);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(555);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(394);
      if (lookahead == '`') ADVANCE(558);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '\'') ADVANCE(558);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(396);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == '"') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(558);
      if (lookahead == '"') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(558);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == '`') ADVANCE(558);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ',') ADVANCE(560);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == ']') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ',') ADVANCE(562);
      if (lookahead == '}') ADVANCE(561);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(562);
      if (lookahead == '}') ADVANCE(562);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == ',') ADVANCE(564);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead != 0) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ')') ADVANCE(627);
      if (lookahead == '`') ADVANCE(564);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(566);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '?') ADVANCE(593);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(566);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '?') ADVANCE(585);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(566);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '?') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(566);
      if (lookahead == '?') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(566);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(570);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == '?') ADVANCE(564);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(570);
      if (lookahead == '"') ADVANCE(538);
      if (lookahead == '\'') ADVANCE(539);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '?') ADVANCE(563);
      if (lookahead == '`') ADVANCE(540);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(570);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == '?') ADVANCE(564);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(573);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '?') ADVANCE(560);
      if (lookahead == ']') ADVANCE(566);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(573);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(573);
      if (lookahead == '?') ADVANCE(559);
      if (lookahead == '[') ADVANCE(567);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(575);
      if (lookahead == '"') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == ',') ADVANCE(575);
      if (lookahead == '?') ADVANCE(562);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead == '}') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(575);
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(575);
      if (lookahead == '?') ADVANCE(561);
      if (lookahead == '`') ADVANCE(455);
      if (lookahead == '}') ADVANCE(576);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '?') ADVANCE(586);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(526);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '?') ADVANCE(587);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '"') ADVANCE(535);
      if (lookahead == '\'') ADVANCE(536);
      if (lookahead == ')') ADVANCE(627);
      if (lookahead == '?') ADVANCE(565);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '?') ADVANCE(572);
      if (lookahead == '`') ADVANCE(547);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(582);
      if (lookahead == '"') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(529);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(582);
      if (lookahead == '?') ADVANCE(568);
      if (lookahead == '`') ADVANCE(530);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(582);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '?') ADVANCE(569);
      if (lookahead == '`') ADVANCE(554);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ',') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == ',') ADVANCE(587);
      if (lookahead == '`') ADVANCE(585);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(96);
      if (lookahead != 0) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(593);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(96);
      if (lookahead != 0) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '`') ADVANCE(647);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(355);
      if (lookahead == '`') ADVANCE(651);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(373);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(374);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(375);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(376);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(605);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(607);
      if (lookahead == '}') ADVANCE(606);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(617);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(575);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(575);
      if (lookahead == '?') ADVANCE(605);
      if (lookahead == '}') ADVANCE(576);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(576);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(799);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '?') ADVANCE(624);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '`') ADVANCE(619);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(73);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '[') ADVANCE(613);
      if (lookahead == ']') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '?') ADVANCE(622);
      if (lookahead == '[') ADVANCE(617);
      if (lookahead == ']') ADVANCE(617);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(92);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '?') ADVANCE(620);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(74);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(621);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '`') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(96);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '?') ADVANCE(623);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead == '?') ADVANCE(611);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(570);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == '?') ADVANCE(612);
      if (lookahead == '[') ADVANCE(567);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(574);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '?') ADVANCE(618);
      if (lookahead == '`') ADVANCE(567);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(578);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(582);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(183);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '`') ADVANCE(650);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(642);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(169);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(637);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(170);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(171);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '}') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(173);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '}') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == ')') ADVANCE(609);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(380);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(594);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(183);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(183);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(768);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(761);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(696);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(765);
      if (lookahead == 'x') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(767);
      if (lookahead == 'x') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(621);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(797);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(621);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(801);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(803);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(806);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(808);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(811);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(710);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(710);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(817);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(755);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(828);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 186},
  [2] = {.lex_state = 187, .external_lex_state = 2},
  [3] = {.lex_state = 187, .external_lex_state = 2},
  [4] = {.lex_state = 187, .external_lex_state = 2},
  [5] = {.lex_state = 186, .external_lex_state = 2},
  [6] = {.lex_state = 186, .external_lex_state = 2},
  [7] = {.lex_state = 186, .external_lex_state = 2},
  [8] = {.lex_state = 186},
  [9] = {.lex_state = 63, .external_lex_state = 2},
  [10] = {.lex_state = 63, .external_lex_state = 2},
  [11] = {.lex_state = 186},
  [12] = {.lex_state = 62, .external_lex_state = 3},
  [13] = {.lex_state = 62, .external_lex_state = 3},
  [14] = {.lex_state = 62, .external_lex_state = 3},
  [15] = {.lex_state = 62, .external_lex_state = 2},
  [16] = {.lex_state = 62, .external_lex_state = 2},
  [17] = {.lex_state = 62, .external_lex_state = 2},
  [18] = {.lex_state = 62, .external_lex_state = 3},
  [19] = {.lex_state = 62, .external_lex_state = 3},
  [20] = {.lex_state = 62, .external_lex_state = 3},
  [21] = {.lex_state = 62, .external_lex_state = 3},
  [22] = {.lex_state = 62, .external_lex_state = 3},
  [23] = {.lex_state = 62, .external_lex_state = 3},
  [24] = {.lex_state = 62, .external_lex_state = 3},
  [25] = {.lex_state = 62, .external_lex_state = 3},
  [26] = {.lex_state = 62, .external_lex_state = 3},
  [27] = {.lex_state = 62, .external_lex_state = 3},
  [28] = {.lex_state = 62, .external_lex_state = 3},
  [29] = {.lex_state = 62, .external_lex_state = 3},
  [30] = {.lex_state = 62, .external_lex_state = 3},
  [31] = {.lex_state = 62, .external_lex_state = 3},
  [32] = {.lex_state = 62, .external_lex_state = 3},
  [33] = {.lex_state = 62, .external_lex_state = 3},
  [34] = {.lex_state = 62, .external_lex_state = 3},
  [35] = {.lex_state = 62, .external_lex_state = 3},
  [36] = {.lex_state = 62, .external_lex_state = 3},
  [37] = {.lex_state = 62, .external_lex_state = 3},
  [38] = {.lex_state = 62, .external_lex_state = 3},
  [39] = {.lex_state = 62, .external_lex_state = 3},
  [40] = {.lex_state = 62, .external_lex_state = 3},
  [41] = {.lex_state = 62, .external_lex_state = 3},
  [42] = {.lex_state = 62, .external_lex_state = 3},
  [43] = {.lex_state = 62, .external_lex_state = 3},
  [44] = {.lex_state = 62, .external_lex_state = 3},
  [45] = {.lex_state = 62, .external_lex_state = 3},
  [46] = {.lex_state = 62, .external_lex_state = 3},
  [47] = {.lex_state = 62, .external_lex_state = 3},
  [48] = {.lex_state = 62, .external_lex_state = 3},
  [49] = {.lex_state = 62, .external_lex_state = 3},
  [50] = {.lex_state = 189, .external_lex_state = 2},
  [51] = {.lex_state = 306, .external_lex_state = 2},
  [52] = {.lex_state = 306, .external_lex_state = 2},
  [53] = {.lex_state = 188, .external_lex_state = 2},
  [54] = {.lex_state = 187, .external_lex_state = 2},
  [55] = {.lex_state = 187, .external_lex_state = 2},
  [56] = {.lex_state = 189, .external_lex_state = 2},
  [57] = {.lex_state = 187, .external_lex_state = 1},
  [58] = {.lex_state = 184, .external_lex_state = 2},
  [59] = {.lex_state = 187, .external_lex_state = 1},
  [60] = {.lex_state = 187, .external_lex_state = 1},
  [61] = {.lex_state = 187, .external_lex_state = 1},
  [62] = {.lex_state = 187, .external_lex_state = 1},
  [63] = {.lex_state = 188, .external_lex_state = 3},
  [64] = {.lex_state = 168, .external_lex_state = 2},
  [65] = {.lex_state = 187, .external_lex_state = 1},
  [66] = {.lex_state = 187, .external_lex_state = 1},
  [67] = {.lex_state = 184, .external_lex_state = 2},
  [68] = {.lex_state = 187, .external_lex_state = 1},
  [69] = {.lex_state = 187, .external_lex_state = 1},
  [70] = {.lex_state = 187},
  [71] = {.lex_state = 187, .external_lex_state = 4},
  [72] = {.lex_state = 307, .external_lex_state = 2},
  [73] = {.lex_state = 187, .external_lex_state = 4},
  [74] = {.lex_state = 188, .external_lex_state = 2},
  [75] = {.lex_state = 187, .external_lex_state = 4},
  [76] = {.lex_state = 189, .external_lex_state = 2},
  [77] = {.lex_state = 187, .external_lex_state = 1},
  [78] = {.lex_state = 306, .external_lex_state = 2},
  [79] = {.lex_state = 187, .external_lex_state = 1},
  [80] = {.lex_state = 187, .external_lex_state = 4},
  [81] = {.lex_state = 187, .external_lex_state = 4},
  [82] = {.lex_state = 187, .external_lex_state = 4},
  [83] = {.lex_state = 189, .external_lex_state = 2},
  [84] = {.lex_state = 187, .external_lex_state = 4},
  [85] = {.lex_state = 189, .external_lex_state = 2},
  [86] = {.lex_state = 184, .external_lex_state = 2},
  [87] = {.lex_state = 187, .external_lex_state = 4},
  [88] = {.lex_state = 307, .external_lex_state = 2},
  [89] = {.lex_state = 187},
  [90] = {.lex_state = 187, .external_lex_state = 4},
  [91] = {.lex_state = 187, .external_lex_state = 2},
  [92] = {.lex_state = 185, .external_lex_state = 2},
  [93] = {.lex_state = 186, .external_lex_state = 1},
  [94] = {.lex_state = 186, .external_lex_state = 1},
  [95] = {.lex_state = 187, .external_lex_state = 2},
  [96] = {.lex_state = 187, .external_lex_state = 2},
  [97] = {.lex_state = 187, .external_lex_state = 2},
  [98] = {.lex_state = 187, .external_lex_state = 2},
  [99] = {.lex_state = 187, .external_lex_state = 2},
  [100] = {.lex_state = 167, .external_lex_state = 2},
  [101] = {.lex_state = 187, .external_lex_state = 2},
  [102] = {.lex_state = 187, .external_lex_state = 2},
  [103] = {.lex_state = 188, .external_lex_state = 3},
  [104] = {.lex_state = 187, .external_lex_state = 2},
  [105] = {.lex_state = 187, .external_lex_state = 2},
  [106] = {.lex_state = 63, .external_lex_state = 2},
  [107] = {.lex_state = 187, .external_lex_state = 2},
  [108] = {.lex_state = 187, .external_lex_state = 2},
  [109] = {.lex_state = 187, .external_lex_state = 2},
  [110] = {.lex_state = 187, .external_lex_state = 2},
  [111] = {.lex_state = 187, .external_lex_state = 2},
  [112] = {.lex_state = 187, .external_lex_state = 4},
  [113] = {.lex_state = 187, .external_lex_state = 2},
  [114] = {.lex_state = 186, .external_lex_state = 1},
  [115] = {.lex_state = 186, .external_lex_state = 1},
  [116] = {.lex_state = 187, .external_lex_state = 2},
  [117] = {.lex_state = 63, .external_lex_state = 2},
  [118] = {.lex_state = 238, .external_lex_state = 2},
  [119] = {.lex_state = 187, .external_lex_state = 2},
  [120] = {.lex_state = 187, .external_lex_state = 2},
  [121] = {.lex_state = 168, .external_lex_state = 2},
  [122] = {.lex_state = 186, .external_lex_state = 1},
  [123] = {.lex_state = 187, .external_lex_state = 2},
  [124] = {.lex_state = 187, .external_lex_state = 2},
  [125] = {.lex_state = 187, .external_lex_state = 2},
  [126] = {.lex_state = 187, .external_lex_state = 2},
  [127] = {.lex_state = 187, .external_lex_state = 2},
  [128] = {.lex_state = 186, .external_lex_state = 1},
  [129] = {.lex_state = 187, .external_lex_state = 2},
  [130] = {.lex_state = 238, .external_lex_state = 2},
  [131] = {.lex_state = 187, .external_lex_state = 2},
  [132] = {.lex_state = 187, .external_lex_state = 2},
  [133] = {.lex_state = 187, .external_lex_state = 2},
  [134] = {.lex_state = 186, .external_lex_state = 1},
  [135] = {.lex_state = 187, .external_lex_state = 2},
  [136] = {.lex_state = 187, .external_lex_state = 2},
  [137] = {.lex_state = 185, .external_lex_state = 2},
  [138] = {.lex_state = 187, .external_lex_state = 2},
  [139] = {.lex_state = 187, .external_lex_state = 2},
  [140] = {.lex_state = 187, .external_lex_state = 2},
  [141] = {.lex_state = 187, .external_lex_state = 2},
  [142] = {.lex_state = 187, .external_lex_state = 2},
  [143] = {.lex_state = 187, .external_lex_state = 2},
  [144] = {.lex_state = 187, .external_lex_state = 2},
  [145] = {.lex_state = 187, .external_lex_state = 2},
  [146] = {.lex_state = 186, .external_lex_state = 1},
  [147] = {.lex_state = 187, .external_lex_state = 2},
  [148] = {.lex_state = 187, .external_lex_state = 2},
  [149] = {.lex_state = 187, .external_lex_state = 2},
  [150] = {.lex_state = 187, .external_lex_state = 2},
  [151] = {.lex_state = 187, .external_lex_state = 5},
  [152] = {.lex_state = 63, .external_lex_state = 1},
  [153] = {.lex_state = 187, .external_lex_state = 5},
  [154] = {.lex_state = 187, .external_lex_state = 5},
  [155] = {.lex_state = 63, .external_lex_state = 1},
  [156] = {.lex_state = 186, .external_lex_state = 1},
  [157] = {.lex_state = 185, .external_lex_state = 5},
  [158] = {.lex_state = 63, .external_lex_state = 1},
  [159] = {.lex_state = 63, .external_lex_state = 1},
  [160] = {.lex_state = 63, .external_lex_state = 1},
  [161] = {.lex_state = 63, .external_lex_state = 1},
  [162] = {.lex_state = 187, .external_lex_state = 5},
  [163] = {.lex_state = 187, .external_lex_state = 5},
  [164] = {.lex_state = 63, .external_lex_state = 1},
  [165] = {.lex_state = 63, .external_lex_state = 1},
  [166] = {.lex_state = 185, .external_lex_state = 5},
  [167] = {.lex_state = 187, .external_lex_state = 5},
  [168] = {.lex_state = 11, .external_lex_state = 2},
  [169] = {.lex_state = 187, .external_lex_state = 5},
  [170] = {.lex_state = 187, .external_lex_state = 5},
  [171] = {.lex_state = 186, .external_lex_state = 1},
  [172] = {.lex_state = 187, .external_lex_state = 5},
  [173] = {.lex_state = 187, .external_lex_state = 5},
  [174] = {.lex_state = 187, .external_lex_state = 5},
  [175] = {.lex_state = 185, .external_lex_state = 2},
  [176] = {.lex_state = 187, .external_lex_state = 5},
  [177] = {.lex_state = 188, .external_lex_state = 2},
  [178] = {.lex_state = 11, .external_lex_state = 2},
  [179] = {.lex_state = 188, .external_lex_state = 2},
  [180] = {.lex_state = 187, .external_lex_state = 5},
  [181] = {.lex_state = 187, .external_lex_state = 5},
  [182] = {.lex_state = 307},
  [183] = {.lex_state = 187, .external_lex_state = 5},
  [184] = {.lex_state = 187, .external_lex_state = 5},
  [185] = {.lex_state = 63, .external_lex_state = 1},
  [186] = {.lex_state = 307},
  [187] = {.lex_state = 188, .external_lex_state = 2},
  [188] = {.lex_state = 307, .external_lex_state = 2},
  [189] = {.lex_state = 186, .external_lex_state = 2},
  [190] = {.lex_state = 186, .external_lex_state = 2},
  [191] = {.lex_state = 168, .external_lex_state = 2},
  [192] = {.lex_state = 186, .external_lex_state = 2},
  [193] = {.lex_state = 186, .external_lex_state = 6},
  [194] = {.lex_state = 186, .external_lex_state = 2},
  [195] = {.lex_state = 186, .external_lex_state = 2},
  [196] = {.lex_state = 186, .external_lex_state = 2},
  [197] = {.lex_state = 186, .external_lex_state = 2},
  [198] = {.lex_state = 11, .external_lex_state = 2},
  [199] = {.lex_state = 186, .external_lex_state = 6},
  [200] = {.lex_state = 186, .external_lex_state = 2},
  [201] = {.lex_state = 63, .external_lex_state = 1},
  [202] = {.lex_state = 186, .external_lex_state = 2},
  [203] = {.lex_state = 186, .external_lex_state = 2},
  [204] = {.lex_state = 186, .external_lex_state = 2},
  [205] = {.lex_state = 186, .external_lex_state = 2},
  [206] = {.lex_state = 185, .external_lex_state = 5},
  [207] = {.lex_state = 186, .external_lex_state = 2},
  [208] = {.lex_state = 186, .external_lex_state = 6},
  [209] = {.lex_state = 238, .external_lex_state = 2},
  [210] = {.lex_state = 168, .external_lex_state = 2},
  [211] = {.lex_state = 186, .external_lex_state = 4},
  [212] = {.lex_state = 188, .external_lex_state = 3},
  [213] = {.lex_state = 186, .external_lex_state = 2},
  [214] = {.lex_state = 239, .external_lex_state = 2},
  [215] = {.lex_state = 239, .external_lex_state = 2},
  [216] = {.lex_state = 186, .external_lex_state = 2},
  [217] = {.lex_state = 186, .external_lex_state = 2},
  [218] = {.lex_state = 186, .external_lex_state = 6},
  [219] = {.lex_state = 186, .external_lex_state = 2},
  [220] = {.lex_state = 186, .external_lex_state = 2},
  [221] = {.lex_state = 168, .external_lex_state = 2},
  [222] = {.lex_state = 186, .external_lex_state = 6},
  [223] = {.lex_state = 186, .external_lex_state = 2},
  [224] = {.lex_state = 186, .external_lex_state = 2},
  [225] = {.lex_state = 187},
  [226] = {.lex_state = 186, .external_lex_state = 2},
  [227] = {.lex_state = 186, .external_lex_state = 6},
  [228] = {.lex_state = 63, .external_lex_state = 1},
  [229] = {.lex_state = 186, .external_lex_state = 6},
  [230] = {.lex_state = 186, .external_lex_state = 2},
  [231] = {.lex_state = 186, .external_lex_state = 2},
  [232] = {.lex_state = 186, .external_lex_state = 2},
  [233] = {.lex_state = 186, .external_lex_state = 2},
  [234] = {.lex_state = 186, .external_lex_state = 2},
  [235] = {.lex_state = 186, .external_lex_state = 2},
  [236] = {.lex_state = 186, .external_lex_state = 2},
  [237] = {.lex_state = 186, .external_lex_state = 2},
  [238] = {.lex_state = 186, .external_lex_state = 2},
  [239] = {.lex_state = 186, .external_lex_state = 2},
  [240] = {.lex_state = 188, .external_lex_state = 3},
  [241] = {.lex_state = 186, .external_lex_state = 2},
  [242] = {.lex_state = 186, .external_lex_state = 2},
  [243] = {.lex_state = 186, .external_lex_state = 2},
  [244] = {.lex_state = 186, .external_lex_state = 2},
  [245] = {.lex_state = 186, .external_lex_state = 2},
  [246] = {.lex_state = 186, .external_lex_state = 2},
  [247] = {.lex_state = 186, .external_lex_state = 4},
  [248] = {.lex_state = 167, .external_lex_state = 2},
  [249] = {.lex_state = 186, .external_lex_state = 2},
  [250] = {.lex_state = 188, .external_lex_state = 3},
  [251] = {.lex_state = 186, .external_lex_state = 6},
  [252] = {.lex_state = 186, .external_lex_state = 2},
  [253] = {.lex_state = 186, .external_lex_state = 5},
  [254] = {.lex_state = 63, .external_lex_state = 2},
  [255] = {.lex_state = 12, .external_lex_state = 2},
  [256] = {.lex_state = 63, .external_lex_state = 2},
  [257] = {.lex_state = 12, .external_lex_state = 2},
  [258] = {.lex_state = 63, .external_lex_state = 2},
  [259] = {.lex_state = 63, .external_lex_state = 2},
  [260] = {.lex_state = 63, .external_lex_state = 2},
  [261] = {.lex_state = 186, .external_lex_state = 3},
  [262] = {.lex_state = 63, .external_lex_state = 2},
  [263] = {.lex_state = 63, .external_lex_state = 2},
  [264] = {.lex_state = 63, .external_lex_state = 2},
  [265] = {.lex_state = 63, .external_lex_state = 2},
  [266] = {.lex_state = 63, .external_lex_state = 2},
  [267] = {.lex_state = 63, .external_lex_state = 2},
  [268] = {.lex_state = 63, .external_lex_state = 2},
  [269] = {.lex_state = 63, .external_lex_state = 2},
  [270] = {.lex_state = 186},
  [271] = {.lex_state = 186, .external_lex_state = 6},
  [272] = {.lex_state = 63, .external_lex_state = 2},
  [273] = {.lex_state = 186, .external_lex_state = 5},
  [274] = {.lex_state = 63, .external_lex_state = 2},
  [275] = {.lex_state = 63, .external_lex_state = 2},
  [276] = {.lex_state = 186, .external_lex_state = 5},
  [277] = {.lex_state = 63, .external_lex_state = 2},
  [278] = {.lex_state = 62, .external_lex_state = 1},
  [279] = {.lex_state = 63, .external_lex_state = 2},
  [280] = {.lex_state = 63, .external_lex_state = 2},
  [281] = {.lex_state = 63, .external_lex_state = 2},
  [282] = {.lex_state = 63, .external_lex_state = 2},
  [283] = {.lex_state = 63, .external_lex_state = 2},
  [284] = {.lex_state = 62, .external_lex_state = 1},
  [285] = {.lex_state = 63, .external_lex_state = 2},
  [286] = {.lex_state = 63, .external_lex_state = 2},
  [287] = {.lex_state = 62, .external_lex_state = 1},
  [288] = {.lex_state = 307},
  [289] = {.lex_state = 62, .external_lex_state = 1},
  [290] = {.lex_state = 63, .external_lex_state = 2},
  [291] = {.lex_state = 63, .external_lex_state = 2},
  [292] = {.lex_state = 62, .external_lex_state = 1},
  [293] = {.lex_state = 63, .external_lex_state = 2},
  [294] = {.lex_state = 63, .external_lex_state = 2},
  [295] = {.lex_state = 63, .external_lex_state = 2},
  [296] = {.lex_state = 62, .external_lex_state = 1},
  [297] = {.lex_state = 63, .external_lex_state = 2},
  [298] = {.lex_state = 63, .external_lex_state = 2},
  [299] = {.lex_state = 63, .external_lex_state = 2},
  [300] = {.lex_state = 62, .external_lex_state = 1},
  [301] = {.lex_state = 63, .external_lex_state = 2},
  [302] = {.lex_state = 63, .external_lex_state = 2},
  [303] = {.lex_state = 63, .external_lex_state = 2},
  [304] = {.lex_state = 63, .external_lex_state = 2},
  [305] = {.lex_state = 186, .external_lex_state = 5},
  [306] = {.lex_state = 62, .external_lex_state = 1},
  [307] = {.lex_state = 63, .external_lex_state = 2},
  [308] = {.lex_state = 63, .external_lex_state = 2},
  [309] = {.lex_state = 63, .external_lex_state = 2},
  [310] = {.lex_state = 63, .external_lex_state = 2},
  [311] = {.lex_state = 63, .external_lex_state = 2},
  [312] = {.lex_state = 63, .external_lex_state = 2},
  [313] = {.lex_state = 167, .external_lex_state = 2},
  [314] = {.lex_state = 186},
  [315] = {.lex_state = 186},
  [316] = {.lex_state = 186},
  [317] = {.lex_state = 62, .external_lex_state = 1},
  [318] = {.lex_state = 186},
  [319] = {.lex_state = 186},
  [320] = {.lex_state = 186},
  [321] = {.lex_state = 186},
  [322] = {.lex_state = 186},
  [323] = {.lex_state = 186},
  [324] = {.lex_state = 186},
  [325] = {.lex_state = 186},
  [326] = {.lex_state = 12, .external_lex_state = 2},
  [327] = {.lex_state = 186},
  [328] = {.lex_state = 186},
  [329] = {.lex_state = 239, .external_lex_state = 2},
  [330] = {.lex_state = 186},
  [331] = {.lex_state = 186},
  [332] = {.lex_state = 62, .external_lex_state = 1},
  [333] = {.lex_state = 186},
  [334] = {.lex_state = 186},
  [335] = {.lex_state = 186},
  [336] = {.lex_state = 186},
  [337] = {.lex_state = 186},
  [338] = {.lex_state = 186},
  [339] = {.lex_state = 186},
  [340] = {.lex_state = 167, .external_lex_state = 2},
  [341] = {.lex_state = 186},
  [342] = {.lex_state = 186},
  [343] = {.lex_state = 186},
  [344] = {.lex_state = 186},
  [345] = {.lex_state = 186},
  [346] = {.lex_state = 186},
  [347] = {.lex_state = 186},
  [348] = {.lex_state = 186},
  [349] = {.lex_state = 167, .external_lex_state = 2},
  [350] = {.lex_state = 186},
  [351] = {.lex_state = 186},
  [352] = {.lex_state = 186},
  [353] = {.lex_state = 186},
  [354] = {.lex_state = 186},
  [355] = {.lex_state = 186},
  [356] = {.lex_state = 186},
  [357] = {.lex_state = 186},
  [358] = {.lex_state = 186},
  [359] = {.lex_state = 186},
  [360] = {.lex_state = 186},
  [361] = {.lex_state = 186},
  [362] = {.lex_state = 62, .external_lex_state = 2},
  [363] = {.lex_state = 62, .external_lex_state = 2},
  [364] = {.lex_state = 62, .external_lex_state = 2},
  [365] = {.lex_state = 62, .external_lex_state = 2},
  [366] = {.lex_state = 62, .external_lex_state = 2},
  [367] = {.lex_state = 62, .external_lex_state = 2},
  [368] = {.lex_state = 62, .external_lex_state = 2},
  [369] = {.lex_state = 62, .external_lex_state = 2},
  [370] = {.lex_state = 62, .external_lex_state = 2},
  [371] = {.lex_state = 62, .external_lex_state = 2},
  [372] = {.lex_state = 62, .external_lex_state = 2},
  [373] = {.lex_state = 62, .external_lex_state = 2},
  [374] = {.lex_state = 62, .external_lex_state = 2},
  [375] = {.lex_state = 62, .external_lex_state = 2},
  [376] = {.lex_state = 62, .external_lex_state = 2},
  [377] = {.lex_state = 62, .external_lex_state = 2},
  [378] = {.lex_state = 62, .external_lex_state = 2},
  [379] = {.lex_state = 62, .external_lex_state = 2},
  [380] = {.lex_state = 62, .external_lex_state = 2},
  [381] = {.lex_state = 62, .external_lex_state = 2},
  [382] = {.lex_state = 62, .external_lex_state = 2},
  [383] = {.lex_state = 62, .external_lex_state = 2},
  [384] = {.lex_state = 62, .external_lex_state = 2},
  [385] = {.lex_state = 62, .external_lex_state = 2},
  [386] = {.lex_state = 62, .external_lex_state = 2},
  [387] = {.lex_state = 62, .external_lex_state = 2},
  [388] = {.lex_state = 62, .external_lex_state = 2},
  [389] = {.lex_state = 62, .external_lex_state = 2},
  [390] = {.lex_state = 62, .external_lex_state = 2},
  [391] = {.lex_state = 62, .external_lex_state = 2},
  [392] = {.lex_state = 62, .external_lex_state = 2},
  [393] = {.lex_state = 62, .external_lex_state = 2},
  [394] = {.lex_state = 62, .external_lex_state = 2},
  [395] = {.lex_state = 62, .external_lex_state = 2},
  [396] = {.lex_state = 62, .external_lex_state = 2},
  [397] = {.lex_state = 62, .external_lex_state = 2},
  [398] = {.lex_state = 62, .external_lex_state = 2},
  [399] = {.lex_state = 62, .external_lex_state = 2},
  [400] = {.lex_state = 62, .external_lex_state = 2},
  [401] = {.lex_state = 64},
  [402] = {.lex_state = 64},
  [403] = {.lex_state = 64},
  [404] = {.lex_state = 58, .external_lex_state = 3},
  [405] = {.lex_state = 64},
  [406] = {.lex_state = 58, .external_lex_state = 3},
  [407] = {.lex_state = 58, .external_lex_state = 3},
  [408] = {.lex_state = 58, .external_lex_state = 3},
  [409] = {.lex_state = 64},
  [410] = {.lex_state = 58, .external_lex_state = 3},
  [411] = {.lex_state = 58, .external_lex_state = 3},
  [412] = {.lex_state = 58, .external_lex_state = 3},
  [413] = {.lex_state = 58, .external_lex_state = 3},
  [414] = {.lex_state = 58, .external_lex_state = 3},
  [415] = {.lex_state = 58, .external_lex_state = 3},
  [416] = {.lex_state = 58, .external_lex_state = 3},
  [417] = {.lex_state = 58, .external_lex_state = 3},
  [418] = {.lex_state = 58, .external_lex_state = 3},
  [419] = {.lex_state = 58, .external_lex_state = 3},
  [420] = {.lex_state = 58, .external_lex_state = 3},
  [421] = {.lex_state = 59, .external_lex_state = 3},
  [422] = {.lex_state = 59, .external_lex_state = 3},
  [423] = {.lex_state = 68},
  [424] = {.lex_state = 59, .external_lex_state = 3},
  [425] = {.lex_state = 68},
  [426] = {.lex_state = 59, .external_lex_state = 3},
  [427] = {.lex_state = 68},
  [428] = {.lex_state = 59, .external_lex_state = 3},
  [429] = {.lex_state = 59, .external_lex_state = 3},
  [430] = {.lex_state = 68},
  [431] = {.lex_state = 59, .external_lex_state = 3},
  [432] = {.lex_state = 68},
  [433] = {.lex_state = 68},
  [434] = {.lex_state = 59, .external_lex_state = 3},
  [435] = {.lex_state = 68},
  [436] = {.lex_state = 68},
  [437] = {.lex_state = 68},
  [438] = {.lex_state = 59, .external_lex_state = 3},
  [439] = {.lex_state = 59, .external_lex_state = 3},
  [440] = {.lex_state = 59, .external_lex_state = 3},
  [441] = {.lex_state = 59, .external_lex_state = 3},
  [442] = {.lex_state = 68},
  [443] = {.lex_state = 68},
  [444] = {.lex_state = 68},
  [445] = {.lex_state = 68},
  [446] = {.lex_state = 59, .external_lex_state = 3},
  [447] = {.lex_state = 59, .external_lex_state = 3},
  [448] = {.lex_state = 59, .external_lex_state = 3},
  [449] = {.lex_state = 59, .external_lex_state = 3},
  [450] = {.lex_state = 59, .external_lex_state = 3},
  [451] = {.lex_state = 59, .external_lex_state = 3},
  [452] = {.lex_state = 59, .external_lex_state = 3},
  [453] = {.lex_state = 59, .external_lex_state = 3},
  [454] = {.lex_state = 59, .external_lex_state = 3},
  [455] = {.lex_state = 59, .external_lex_state = 3},
  [456] = {.lex_state = 59, .external_lex_state = 3},
  [457] = {.lex_state = 59, .external_lex_state = 3},
  [458] = {.lex_state = 59, .external_lex_state = 3},
  [459] = {.lex_state = 59, .external_lex_state = 3},
  [460] = {.lex_state = 59, .external_lex_state = 3},
  [461] = {.lex_state = 59, .external_lex_state = 3},
  [462] = {.lex_state = 59, .external_lex_state = 3},
  [463] = {.lex_state = 59, .external_lex_state = 3},
  [464] = {.lex_state = 59, .external_lex_state = 3},
  [465] = {.lex_state = 59, .external_lex_state = 3},
  [466] = {.lex_state = 59, .external_lex_state = 3},
  [467] = {.lex_state = 59, .external_lex_state = 3},
  [468] = {.lex_state = 59, .external_lex_state = 3},
  [469] = {.lex_state = 51, .external_lex_state = 5},
  [470] = {.lex_state = 51, .external_lex_state = 5},
  [471] = {.lex_state = 51, .external_lex_state = 5},
  [472] = {.lex_state = 51, .external_lex_state = 5},
  [473] = {.lex_state = 51, .external_lex_state = 5},
  [474] = {.lex_state = 51, .external_lex_state = 5},
  [475] = {.lex_state = 51, .external_lex_state = 5},
  [476] = {.lex_state = 51, .external_lex_state = 5},
  [477] = {.lex_state = 51, .external_lex_state = 5},
  [478] = {.lex_state = 51, .external_lex_state = 5},
  [479] = {.lex_state = 51, .external_lex_state = 5},
  [480] = {.lex_state = 51, .external_lex_state = 5},
  [481] = {.lex_state = 51, .external_lex_state = 5},
  [482] = {.lex_state = 51, .external_lex_state = 5},
  [483] = {.lex_state = 51, .external_lex_state = 5},
  [484] = {.lex_state = 51, .external_lex_state = 3},
  [485] = {.lex_state = 51, .external_lex_state = 3},
  [486] = {.lex_state = 51, .external_lex_state = 3},
  [487] = {.lex_state = 67, .external_lex_state = 1},
  [488] = {.lex_state = 67, .external_lex_state = 1},
  [489] = {.lex_state = 67, .external_lex_state = 1},
  [490] = {.lex_state = 67, .external_lex_state = 2},
  [491] = {.lex_state = 67, .external_lex_state = 1},
  [492] = {.lex_state = 51, .external_lex_state = 3},
  [493] = {.lex_state = 67, .external_lex_state = 1},
  [494] = {.lex_state = 51, .external_lex_state = 3},
  [495] = {.lex_state = 51, .external_lex_state = 3},
  [496] = {.lex_state = 51},
  [497] = {.lex_state = 51, .external_lex_state = 3},
  [498] = {.lex_state = 51},
  [499] = {.lex_state = 51, .external_lex_state = 3},
  [500] = {.lex_state = 51, .external_lex_state = 3},
  [501] = {.lex_state = 51, .external_lex_state = 3},
  [502] = {.lex_state = 51, .external_lex_state = 3},
  [503] = {.lex_state = 51},
  [504] = {.lex_state = 67, .external_lex_state = 1},
  [505] = {.lex_state = 51},
  [506] = {.lex_state = 67, .external_lex_state = 2},
  [507] = {.lex_state = 51, .external_lex_state = 3},
  [508] = {.lex_state = 51, .external_lex_state = 3},
  [509] = {.lex_state = 51},
  [510] = {.lex_state = 67, .external_lex_state = 2},
  [511] = {.lex_state = 51, .external_lex_state = 3},
  [512] = {.lex_state = 51},
  [513] = {.lex_state = 59, .external_lex_state = 3},
  [514] = {.lex_state = 51, .external_lex_state = 3},
  [515] = {.lex_state = 51, .external_lex_state = 3},
  [516] = {.lex_state = 51, .external_lex_state = 3},
  [517] = {.lex_state = 67, .external_lex_state = 2},
  [518] = {.lex_state = 51, .external_lex_state = 3},
  [519] = {.lex_state = 51},
  [520] = {.lex_state = 59, .external_lex_state = 3},
  [521] = {.lex_state = 67, .external_lex_state = 1},
  [522] = {.lex_state = 51, .external_lex_state = 3},
  [523] = {.lex_state = 51, .external_lex_state = 3},
  [524] = {.lex_state = 51, .external_lex_state = 3},
  [525] = {.lex_state = 67, .external_lex_state = 2},
  [526] = {.lex_state = 51},
  [527] = {.lex_state = 67, .external_lex_state = 1},
  [528] = {.lex_state = 51, .external_lex_state = 3},
  [529] = {.lex_state = 51},
  [530] = {.lex_state = 51, .external_lex_state = 3},
  [531] = {.lex_state = 51, .external_lex_state = 3},
  [532] = {.lex_state = 67, .external_lex_state = 2},
  [533] = {.lex_state = 51, .external_lex_state = 3},
  [534] = {.lex_state = 51},
  [535] = {.lex_state = 51, .external_lex_state = 3},
  [536] = {.lex_state = 51, .external_lex_state = 3},
  [537] = {.lex_state = 51},
  [538] = {.lex_state = 51, .external_lex_state = 3},
  [539] = {.lex_state = 67, .external_lex_state = 2},
  [540] = {.lex_state = 51, .external_lex_state = 3},
  [541] = {.lex_state = 51, .external_lex_state = 3},
  [542] = {.lex_state = 64},
  [543] = {.lex_state = 51},
  [544] = {.lex_state = 51, .external_lex_state = 3},
  [545] = {.lex_state = 51, .external_lex_state = 3},
  [546] = {.lex_state = 51},
  [547] = {.lex_state = 51},
  [548] = {.lex_state = 51, .external_lex_state = 3},
  [549] = {.lex_state = 59, .external_lex_state = 3},
  [550] = {.lex_state = 67, .external_lex_state = 2},
  [551] = {.lex_state = 51, .external_lex_state = 3},
  [552] = {.lex_state = 51, .external_lex_state = 3},
  [553] = {.lex_state = 51, .external_lex_state = 3},
  [554] = {.lex_state = 51, .external_lex_state = 3},
  [555] = {.lex_state = 67, .external_lex_state = 2},
  [556] = {.lex_state = 51, .external_lex_state = 3},
  [557] = {.lex_state = 51, .external_lex_state = 3},
  [558] = {.lex_state = 51, .external_lex_state = 3},
  [559] = {.lex_state = 51},
  [560] = {.lex_state = 51},
  [561] = {.lex_state = 59},
  [562] = {.lex_state = 67, .external_lex_state = 3},
  [563] = {.lex_state = 51},
  [564] = {.lex_state = 51},
  [565] = {.lex_state = 51},
  [566] = {.lex_state = 59},
  [567] = {.lex_state = 51},
  [568] = {.lex_state = 51},
  [569] = {.lex_state = 51},
  [570] = {.lex_state = 51},
  [571] = {.lex_state = 67, .external_lex_state = 3},
  [572] = {.lex_state = 51},
  [573] = {.lex_state = 51, .external_lex_state = 3},
  [574] = {.lex_state = 51},
  [575] = {.lex_state = 67, .external_lex_state = 1},
  [576] = {.lex_state = 51},
  [577] = {.lex_state = 51},
  [578] = {.lex_state = 67, .external_lex_state = 3},
  [579] = {.lex_state = 51},
  [580] = {.lex_state = 67, .external_lex_state = 3},
  [581] = {.lex_state = 67, .external_lex_state = 3},
  [582] = {.lex_state = 51},
  [583] = {.lex_state = 51},
  [584] = {.lex_state = 59},
  [585] = {.lex_state = 51},
  [586] = {.lex_state = 51},
  [587] = {.lex_state = 67, .external_lex_state = 3},
  [588] = {.lex_state = 51},
  [589] = {.lex_state = 51},
  [590] = {.lex_state = 51},
  [591] = {.lex_state = 51},
  [592] = {.lex_state = 51},
  [593] = {.lex_state = 51},
  [594] = {.lex_state = 67, .external_lex_state = 3},
  [595] = {.lex_state = 51},
  [596] = {.lex_state = 51},
  [597] = {.lex_state = 67, .external_lex_state = 3},
  [598] = {.lex_state = 51},
  [599] = {.lex_state = 51},
  [600] = {.lex_state = 51, .external_lex_state = 3},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 51, .external_lex_state = 3},
  [603] = {.lex_state = 67},
  [604] = {.lex_state = 68},
  [605] = {.lex_state = 67, .external_lex_state = 2},
  [606] = {.lex_state = 67},
  [607] = {.lex_state = 67, .external_lex_state = 2},
  [608] = {.lex_state = 67, .external_lex_state = 2},
  [609] = {.lex_state = 67, .external_lex_state = 2},
  [610] = {.lex_state = 67, .external_lex_state = 2},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 67, .external_lex_state = 2},
  [613] = {.lex_state = 67, .external_lex_state = 2},
  [614] = {.lex_state = 67, .external_lex_state = 2},
  [615] = {.lex_state = 59},
  [616] = {.lex_state = 67, .external_lex_state = 2},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 67},
  [619] = {.lex_state = 67, .external_lex_state = 2},
  [620] = {.lex_state = 67, .external_lex_state = 2},
  [621] = {.lex_state = 51, .external_lex_state = 3},
  [622] = {.lex_state = 67, .external_lex_state = 2},
  [623] = {.lex_state = 67, .external_lex_state = 2},
  [624] = {.lex_state = 52, .external_lex_state = 3},
  [625] = {.lex_state = 67},
  [626] = {.lex_state = 67},
  [627] = {.lex_state = 51, .external_lex_state = 3},
  [628] = {.lex_state = 51, .external_lex_state = 5},
  [629] = {.lex_state = 67},
  [630] = {.lex_state = 67},
  [631] = {.lex_state = 58},
  [632] = {.lex_state = 302, .external_lex_state = 5},
  [633] = {.lex_state = 55, .external_lex_state = 2},
  [634] = {.lex_state = 51, .external_lex_state = 3},
  [635] = {.lex_state = 101},
  [636] = {.lex_state = 67},
  [637] = {.lex_state = 101},
  [638] = {.lex_state = 302, .external_lex_state = 5},
  [639] = {.lex_state = 67},
  [640] = {.lex_state = 55, .external_lex_state = 2},
  [641] = {.lex_state = 67},
  [642] = {.lex_state = 101},
  [643] = {.lex_state = 67},
  [644] = {.lex_state = 67},
  [645] = {.lex_state = 67},
  [646] = {.lex_state = 67},
  [647] = {.lex_state = 58},
  [648] = {.lex_state = 67},
  [649] = {.lex_state = 67},
  [650] = {.lex_state = 67},
  [651] = {.lex_state = 52, .external_lex_state = 3},
  [652] = {.lex_state = 67},
  [653] = {.lex_state = 67},
  [654] = {.lex_state = 52, .external_lex_state = 3},
  [655] = {.lex_state = 67},
  [656] = {.lex_state = 302, .external_lex_state = 5},
  [657] = {.lex_state = 55, .external_lex_state = 2},
  [658] = {.lex_state = 67},
  [659] = {.lex_state = 67},
  [660] = {.lex_state = 67},
  [661] = {.lex_state = 67},
  [662] = {.lex_state = 67},
  [663] = {.lex_state = 101},
  [664] = {.lex_state = 55, .external_lex_state = 2},
  [665] = {.lex_state = 302, .external_lex_state = 5},
  [666] = {.lex_state = 302, .external_lex_state = 5},
  [667] = {.lex_state = 67},
  [668] = {.lex_state = 55, .external_lex_state = 2},
  [669] = {.lex_state = 52, .external_lex_state = 3},
  [670] = {.lex_state = 67},
  [671] = {.lex_state = 67},
  [672] = {.lex_state = 302, .external_lex_state = 5},
  [673] = {.lex_state = 52, .external_lex_state = 3},
  [674] = {.lex_state = 51, .external_lex_state = 3},
  [675] = {.lex_state = 101},
  [676] = {.lex_state = 55, .external_lex_state = 2},
  [677] = {.lex_state = 67},
  [678] = {.lex_state = 67},
  [679] = {.lex_state = 67},
  [680] = {.lex_state = 302},
  [681] = {.lex_state = 302, .external_lex_state = 3},
  [682] = {.lex_state = 302},
  [683] = {.lex_state = 302, .external_lex_state = 5},
  [684] = {.lex_state = 0, .external_lex_state = 3},
  [685] = {.lex_state = 52},
  [686] = {.lex_state = 302},
  [687] = {.lex_state = 58},
  [688] = {.lex_state = 302, .external_lex_state = 5},
  [689] = {.lex_state = 52},
  [690] = {.lex_state = 52},
  [691] = {.lex_state = 302, .external_lex_state = 5},
  [692] = {.lex_state = 0, .external_lex_state = 3},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 52},
  [695] = {.lex_state = 52},
  [696] = {.lex_state = 52},
  [697] = {.lex_state = 52},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 58},
  [700] = {.lex_state = 55, .external_lex_state = 3},
  [701] = {.lex_state = 302},
  [702] = {.lex_state = 58},
  [703] = {.lex_state = 58},
  [704] = {.lex_state = 52},
  [705] = {.lex_state = 52},
  [706] = {.lex_state = 71},
  [707] = {.lex_state = 302},
  [708] = {.lex_state = 52},
  [709] = {.lex_state = 52},
  [710] = {.lex_state = 52},
  [711] = {.lex_state = 58},
  [712] = {.lex_state = 58},
  [713] = {.lex_state = 302},
  [714] = {.lex_state = 58},
  [715] = {.lex_state = 58},
  [716] = {.lex_state = 302, .external_lex_state = 5},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 58},
  [719] = {.lex_state = 58},
  [720] = {.lex_state = 302, .external_lex_state = 5},
  [721] = {.lex_state = 302, .external_lex_state = 3},
  [722] = {.lex_state = 302, .external_lex_state = 5},
  [723] = {.lex_state = 58},
  [724] = {.lex_state = 302},
  [725] = {.lex_state = 58},
  [726] = {.lex_state = 55, .external_lex_state = 3},
  [727] = {.lex_state = 58},
  [728] = {.lex_state = 52},
  [729] = {.lex_state = 302, .external_lex_state = 5},
  [730] = {.lex_state = 52},
  [731] = {.lex_state = 302, .external_lex_state = 3},
  [732] = {.lex_state = 58},
  [733] = {.lex_state = 58},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 55, .external_lex_state = 3},
  [736] = {.lex_state = 302},
  [737] = {.lex_state = 0, .external_lex_state = 3},
  [738] = {.lex_state = 58},
  [739] = {.lex_state = 52},
  [740] = {.lex_state = 52},
  [741] = {.lex_state = 52},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 52},
  [744] = {.lex_state = 55, .external_lex_state = 2},
  [745] = {.lex_state = 302, .external_lex_state = 5},
  [746] = {.lex_state = 302, .external_lex_state = 5},
  [747] = {.lex_state = 52},
  [748] = {.lex_state = 302},
  [749] = {.lex_state = 55, .external_lex_state = 3},
  [750] = {.lex_state = 58},
  [751] = {.lex_state = 302, .external_lex_state = 3},
  [752] = {.lex_state = 58},
  [753] = {.lex_state = 58},
  [754] = {.lex_state = 302, .external_lex_state = 5},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 58},
  [757] = {.lex_state = 58},
  [758] = {.lex_state = 55, .external_lex_state = 2},
  [759] = {.lex_state = 0, .external_lex_state = 3},
  [760] = {.lex_state = 302},
  [761] = {.lex_state = 302, .external_lex_state = 3},
  [762] = {.lex_state = 55, .external_lex_state = 3},
  [763] = {.lex_state = 302, .external_lex_state = 5},
  [764] = {.lex_state = 67},
  [765] = {.lex_state = 65},
  [766] = {.lex_state = 67},
  [767] = {.lex_state = 0, .external_lex_state = 6},
  [768] = {.lex_state = 0, .external_lex_state = 6},
  [769] = {.lex_state = 0, .external_lex_state = 6},
  [770] = {.lex_state = 65},
  [771] = {.lex_state = 67},
  [772] = {.lex_state = 69},
  [773] = {.lex_state = 0, .external_lex_state = 6},
  [774] = {.lex_state = 0, .external_lex_state = 6},
  [775] = {.lex_state = 67},
  [776] = {.lex_state = 71},
  [777] = {.lex_state = 0, .external_lex_state = 6},
  [778] = {.lex_state = 67},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0, .external_lex_state = 6},
  [781] = {.lex_state = 65},
  [782] = {.lex_state = 67},
  [783] = {.lex_state = 67},
  [784] = {.lex_state = 71},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 58},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 67},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 69},
  [792] = {.lex_state = 302, .external_lex_state = 5},
  [793] = {.lex_state = 67},
  [794] = {.lex_state = 67},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 302, .external_lex_state = 5},
  [797] = {.lex_state = 0, .external_lex_state = 6},
  [798] = {.lex_state = 0, .external_lex_state = 3},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0, .external_lex_state = 6},
  [801] = {.lex_state = 0, .external_lex_state = 6},
  [802] = {.lex_state = 67},
  [803] = {.lex_state = 67},
  [804] = {.lex_state = 67},
  [805] = {.lex_state = 67},
  [806] = {.lex_state = 67},
  [807] = {.lex_state = 67},
  [808] = {.lex_state = 0, .external_lex_state = 6},
  [809] = {.lex_state = 69},
  [810] = {.lex_state = 52},
  [811] = {.lex_state = 52},
  [812] = {.lex_state = 0, .external_lex_state = 6},
  [813] = {.lex_state = 67},
  [814] = {.lex_state = 67},
  [815] = {.lex_state = 67},
  [816] = {.lex_state = 67},
  [817] = {.lex_state = 52},
  [818] = {.lex_state = 52},
  [819] = {.lex_state = 52},
  [820] = {.lex_state = 0, .external_lex_state = 6},
  [821] = {.lex_state = 0, .external_lex_state = 6},
  [822] = {.lex_state = 0, .external_lex_state = 3},
  [823] = {.lex_state = 52},
  [824] = {.lex_state = 174},
  [825] = {.lex_state = 0, .external_lex_state = 3},
  [826] = {.lex_state = 175},
  [827] = {.lex_state = 174},
  [828] = {.lex_state = 0, .external_lex_state = 3},
  [829] = {.lex_state = 0, .external_lex_state = 3},
  [830] = {.lex_state = 0, .external_lex_state = 3},
  [831] = {.lex_state = 0, .external_lex_state = 3},
  [832] = {.lex_state = 0, .external_lex_state = 3},
  [833] = {.lex_state = 828},
  [834] = {.lex_state = 0, .external_lex_state = 3},
  [835] = {.lex_state = 176},
  [836] = {.lex_state = 0, .external_lex_state = 6},
  [837] = {.lex_state = 0, .external_lex_state = 3},
  [838] = {.lex_state = 0, .external_lex_state = 6},
  [839] = {.lex_state = 175},
  [840] = {.lex_state = 0, .external_lex_state = 3},
  [841] = {.lex_state = 175},
  [842] = {.lex_state = 174},
  [843] = {.lex_state = 0, .external_lex_state = 6},
  [844] = {.lex_state = 0, .external_lex_state = 3},
  [845] = {.lex_state = 0, .external_lex_state = 3},
  [846] = {.lex_state = 828},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 67},
  [850] = {.lex_state = 67},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0, .external_lex_state = 3},
  [853] = {.lex_state = 53},
  [854] = {.lex_state = 828},
  [855] = {.lex_state = 0, .external_lex_state = 3},
  [856] = {.lex_state = 53},
  [857] = {.lex_state = 0, .external_lex_state = 6},
  [858] = {.lex_state = 0, .external_lex_state = 6},
  [859] = {.lex_state = 0, .external_lex_state = 6},
  [860] = {.lex_state = 0, .external_lex_state = 3},
  [861] = {.lex_state = 71},
  [862] = {.lex_state = 0, .external_lex_state = 6},
  [863] = {.lex_state = 0, .external_lex_state = 3},
  [864] = {.lex_state = 0, .external_lex_state = 3},
  [865] = {.lex_state = 0, .external_lex_state = 3},
  [866] = {.lex_state = 0, .external_lex_state = 3},
  [867] = {.lex_state = 0, .external_lex_state = 6},
  [868] = {.lex_state = 0, .external_lex_state = 3},
  [869] = {.lex_state = 302},
  [870] = {.lex_state = 828},
  [871] = {.lex_state = 0, .external_lex_state = 3},
  [872] = {.lex_state = 54},
  [873] = {.lex_state = 0, .external_lex_state = 6},
  [874] = {.lex_state = 302},
  [875] = {.lex_state = 0, .external_lex_state = 3},
  [876] = {.lex_state = 0, .external_lex_state = 3},
  [877] = {.lex_state = 0, .external_lex_state = 6},
  [878] = {.lex_state = 302},
  [879] = {.lex_state = 0, .external_lex_state = 3},
  [880] = {.lex_state = 0, .external_lex_state = 3},
  [881] = {.lex_state = 302},
  [882] = {.lex_state = 0, .external_lex_state = 6},
  [883] = {.lex_state = 0, .external_lex_state = 3},
  [884] = {.lex_state = 0, .external_lex_state = 3},
  [885] = {.lex_state = 828},
  [886] = {.lex_state = 0, .external_lex_state = 3},
  [887] = {.lex_state = 0, .external_lex_state = 6},
  [888] = {.lex_state = 0, .external_lex_state = 6},
  [889] = {.lex_state = 0, .external_lex_state = 6},
  [890] = {.lex_state = 0, .external_lex_state = 3},
  [891] = {.lex_state = 0, .external_lex_state = 3},
  [892] = {.lex_state = 0, .external_lex_state = 6},
  [893] = {.lex_state = 0, .external_lex_state = 3},
  [894] = {.lex_state = 174},
  [895] = {.lex_state = 175},
  [896] = {.lex_state = 0, .external_lex_state = 3},
  [897] = {.lex_state = 0, .external_lex_state = 3},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0, .external_lex_state = 3},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0, .external_lex_state = 3},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 302},
  [904] = {.lex_state = 186},
  [905] = {.lex_state = 0, .external_lex_state = 3},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0, .external_lex_state = 6},
  [909] = {.lex_state = 0, .external_lex_state = 3},
  [910] = {.lex_state = 0, .external_lex_state = 3},
  [911] = {.lex_state = 0, .external_lex_state = 3},
  [912] = {.lex_state = 174},
  [913] = {.lex_state = 175},
  [914] = {.lex_state = 0, .external_lex_state = 3},
  [915] = {.lex_state = 0, .external_lex_state = 6},
  [916] = {.lex_state = 0, .external_lex_state = 6},
  [917] = {.lex_state = 0, .external_lex_state = 6},
  [918] = {.lex_state = 0, .external_lex_state = 6},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0, .external_lex_state = 3},
  [921] = {.lex_state = 0, .external_lex_state = 6},
  [922] = {.lex_state = 0, .external_lex_state = 6},
  [923] = {.lex_state = 0, .external_lex_state = 6},
  [924] = {.lex_state = 0, .external_lex_state = 6},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0, .external_lex_state = 6},
  [927] = {.lex_state = 0, .external_lex_state = 6},
  [928] = {.lex_state = 0, .external_lex_state = 6},
  [929] = {.lex_state = 0, .external_lex_state = 6},
  [930] = {.lex_state = 0, .external_lex_state = 3},
  [931] = {.lex_state = 0, .external_lex_state = 6},
  [932] = {.lex_state = 0, .external_lex_state = 6},
  [933] = {.lex_state = 0, .external_lex_state = 6},
  [934] = {.lex_state = 0, .external_lex_state = 6},
  [935] = {.lex_state = 0, .external_lex_state = 6},
  [936] = {.lex_state = 0, .external_lex_state = 6},
  [937] = {.lex_state = 0, .external_lex_state = 6},
  [938] = {.lex_state = 0, .external_lex_state = 6},
  [939] = {.lex_state = 52},
  [940] = {.lex_state = 0, .external_lex_state = 3},
  [941] = {.lex_state = 0, .external_lex_state = 3},
  [942] = {.lex_state = 0, .external_lex_state = 3},
  [943] = {.lex_state = 52},
  [944] = {.lex_state = 0, .external_lex_state = 3},
  [945] = {.lex_state = 0, .external_lex_state = 3},
  [946] = {.lex_state = 0, .external_lex_state = 3},
  [947] = {.lex_state = 0, .external_lex_state = 3},
  [948] = {.lex_state = 0, .external_lex_state = 3},
  [949] = {.lex_state = 0, .external_lex_state = 3},
  [950] = {.lex_state = 0, .external_lex_state = 3},
  [951] = {.lex_state = 0, .external_lex_state = 3},
  [952] = {.lex_state = 0, .external_lex_state = 3},
  [953] = {.lex_state = 0, .external_lex_state = 3},
  [954] = {.lex_state = 0, .external_lex_state = 3},
  [955] = {.lex_state = 0, .external_lex_state = 3},
  [956] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_mixin] = ACTIONS(1),
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
    [sym_source_file] = STATE(847),
    [sym_doctype] = STATE(11),
    [sym_pipe] = STATE(11),
    [sym_mixin_use] = STATE(11),
    [sym_mixin_definition] = STATE(11),
    [sym_block_definition] = STATE(11),
    [sym_block_append] = STATE(11),
    [sym_block_prepend] = STATE(11),
    [sym_extends] = STATE(11),
    [sym_filter] = STATE(11),
    [sym_conditional] = STATE(11),
    [sym_case] = STATE(11),
    [sym_unescaped_buffered_code] = STATE(11),
    [sym_buffered_code] = STATE(11),
    [sym_script_block] = STATE(11),
    [sym_tag] = STATE(11),
    [sym_comment] = STATE(11),
    [sym__comment] = STATE(318),
    [sym__comment_not_first_line] = STATE(318),
    [sym_unbuffered_code] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [anon_sym_append] = ACTIONS(15),
    [anon_sym_prepend] = ACTIONS(17),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_unless] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_elseif] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(27),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_script_DOT] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(39),
    [sym_tag_name] = ACTIONS(41),
    [sym_class] = ACTIONS(43),
    [sym_id] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      sym__newline,
    ACTIONS(91), 1,
      sym__dedent,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(53), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
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
  [98] = 25,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      sym__newline,
    ACTIONS(93), 1,
      sym__dedent,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(53), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
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
  [196] = 24,
    ACTIONS(97), 1,
      anon_sym_doctype,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_block,
    ACTIONS(108), 1,
      anon_sym_append,
    ACTIONS(111), 1,
      anon_sym_prepend,
    ACTIONS(114), 1,
      anon_sym_extends,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_elseif,
    ACTIONS(126), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(132), 1,
      anon_sym_BANG_EQ,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      anon_sym_script_DOT,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(144), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(147), 1,
      sym_tag_name,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(120), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(150), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(95), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(103), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
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
  [292] = 25,
    ACTIONS(53), 1,
      anon_sym_mixin,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      sym__newline,
    ACTIONS(197), 1,
      sym__dedent,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [388] = 25,
    ACTIONS(53), 1,
      anon_sym_mixin,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym__dedent,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [484] = 24,
    ACTIONS(103), 1,
      anon_sym_mixin,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(201), 1,
      anon_sym_doctype,
    ACTIONS(204), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_block,
    ACTIONS(210), 1,
      anon_sym_append,
    ACTIONS(213), 1,
      anon_sym_prepend,
    ACTIONS(216), 1,
      anon_sym_extends,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(225), 1,
      anon_sym_elseif,
    ACTIONS(228), 1,
      anon_sym_else,
    ACTIONS(231), 1,
      anon_sym_BANG_EQ,
    ACTIONS(234), 1,
      anon_sym_EQ,
    ACTIONS(237), 1,
      anon_sym_script_DOT,
    ACTIONS(240), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(246), 1,
      sym_tag_name,
    ACTIONS(252), 1,
      anon_sym_DASH,
    ACTIONS(255), 1,
      sym__newline,
    ACTIONS(222), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(249), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(95), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PLUS,
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
  [578] = 24,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      anon_sym_doctype,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_PLUS,
    ACTIONS(269), 1,
      anon_sym_mixin,
    ACTIONS(272), 1,
      anon_sym_block,
    ACTIONS(275), 1,
      anon_sym_append,
    ACTIONS(278), 1,
      anon_sym_prepend,
    ACTIONS(281), 1,
      anon_sym_extends,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      anon_sym_elseif,
    ACTIONS(293), 1,
      anon_sym_else,
    ACTIONS(296), 1,
      anon_sym_case,
    ACTIONS(299), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(305), 1,
      anon_sym_script_DOT,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(314), 1,
      sym_tag_name,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(287), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(317), 2,
      sym_class,
      sym_id,
    STATE(318), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 18,
      sym_doctype,
      sym_pipe,
      sym_mixin_use,
      sym_mixin_definition,
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
  [671] = 24,
    ACTIONS(95), 1,
      sym__dedent,
    ACTIONS(323), 1,
      anon_sym_doctype,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    ACTIONS(329), 1,
      anon_sym_block,
    ACTIONS(332), 1,
      anon_sym_append,
    ACTIONS(335), 1,
      anon_sym_prepend,
    ACTIONS(338), 1,
      anon_sym_extends,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(347), 1,
      anon_sym_elseif,
    ACTIONS(350), 1,
      anon_sym_else,
    ACTIONS(353), 1,
      anon_sym_case,
    ACTIONS(356), 1,
      anon_sym_BANG_EQ,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(362), 1,
      anon_sym_script_DOT,
    ACTIONS(365), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(368), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(371), 1,
      sym_tag_name,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      sym__newline,
    ACTIONS(103), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(344), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(374), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [764] = 24,
    ACTIONS(383), 1,
      anon_sym_doctype,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(391), 1,
      anon_sym_prepend,
    ACTIONS(393), 1,
      anon_sym_extends,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_elseif,
    ACTIONS(401), 1,
      anon_sym_else,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(405), 1,
      anon_sym_BANG_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_script_DOT,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(415), 1,
      sym_tag_name,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      sym__newline,
    ACTIONS(423), 1,
      sym__dedent,
    ACTIONS(53), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(397), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(417), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [857] = 24,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      anon_sym_PLUS,
    ACTIONS(11), 1,
      anon_sym_mixin,
    ACTIONS(13), 1,
      anon_sym_block,
    ACTIONS(15), 1,
      anon_sym_append,
    ACTIONS(17), 1,
      anon_sym_prepend,
    ACTIONS(19), 1,
      anon_sym_extends,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_elseif,
    ACTIONS(27), 1,
      anon_sym_else,
    ACTIONS(29), 1,
      anon_sym_case,
    ACTIONS(31), 1,
      anon_sym_BANG_EQ,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(35), 1,
      anon_sym_script_DOT,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(41), 1,
      sym_tag_name,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(43), 2,
      sym_class,
      sym_id,
    STATE(318), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 18,
      sym_doctype,
      sym_pipe,
      sym_mixin_use,
      sym_mixin_definition,
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
  [950] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [1039] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [1128] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [1217] = 23,
    ACTIONS(95), 1,
      sym__dedent,
    ACTIONS(353), 1,
      anon_sym_case,
    ACTIONS(435), 1,
      anon_sym_doctype,
    ACTIONS(438), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_block,
    ACTIONS(444), 1,
      anon_sym_append,
    ACTIONS(447), 1,
      anon_sym_prepend,
    ACTIONS(450), 1,
      anon_sym_extends,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_elseif,
    ACTIONS(462), 1,
      anon_sym_else,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(471), 1,
      anon_sym_script_DOT,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(477), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(480), 1,
      sym_tag_name,
    ACTIONS(486), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      sym__newline,
    ACTIONS(456), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(483), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(15), 17,
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
  [1306] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(528), 1,
      sym__newline,
    ACTIONS(530), 1,
      sym__dedent,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(15), 17,
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
  [1395] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(528), 1,
      sym__newline,
    ACTIONS(532), 1,
      sym__dedent,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(15), 17,
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
  [1484] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [1573] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      anon_sym_DOT,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 17,
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
  [1662] = 23,
    ACTIONS(383), 1,
      anon_sym_doctype,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(391), 1,
      anon_sym_prepend,
    ACTIONS(393), 1,
      anon_sym_extends,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_elseif,
    ACTIONS(401), 1,
      anon_sym_else,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(405), 1,
      anon_sym_BANG_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_script_DOT,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(415), 1,
      sym_tag_name,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(538), 1,
      anon_sym_DOT,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(397), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(417), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [1751] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [1840] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [1929] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      anon_sym_DOT,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 17,
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
  [2018] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [2107] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(17), 17,
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
  [2196] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      anon_sym_DOT,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 17,
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
  [2285] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      anon_sym_DOT,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 17,
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
  [2374] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [2463] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(17), 17,
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
  [2552] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(550), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [2641] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(550), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [2730] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(550), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [2819] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(550), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [2908] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [2997] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [3086] = 23,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [3175] = 23,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [3264] = 23,
    ACTIONS(383), 1,
      anon_sym_doctype,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(391), 1,
      anon_sym_prepend,
    ACTIONS(393), 1,
      anon_sym_extends,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_elseif,
    ACTIONS(401), 1,
      anon_sym_else,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(405), 1,
      anon_sym_BANG_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_script_DOT,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(415), 1,
      sym_tag_name,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(538), 1,
      anon_sym_DOT,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(397), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(417), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [3353] = 23,
    ACTIONS(383), 1,
      anon_sym_doctype,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(391), 1,
      anon_sym_prepend,
    ACTIONS(393), 1,
      anon_sym_extends,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_elseif,
    ACTIONS(401), 1,
      anon_sym_else,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(405), 1,
      anon_sym_BANG_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_script_DOT,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(415), 1,
      sym_tag_name,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(538), 1,
      anon_sym_DOT,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(397), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(417), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [3442] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(17), 17,
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
  [3531] = 23,
    ACTIONS(383), 1,
      anon_sym_doctype,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(391), 1,
      anon_sym_prepend,
    ACTIONS(393), 1,
      anon_sym_extends,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_elseif,
    ACTIONS(401), 1,
      anon_sym_else,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(405), 1,
      anon_sym_BANG_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_script_DOT,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(415), 1,
      sym_tag_name,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(538), 1,
      anon_sym_DOT,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(397), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(417), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [3620] = 23,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(17), 17,
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
  [3709] = 22,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(552), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [3795] = 22,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(17), 17,
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
  [3881] = 22,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(544), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [3967] = 22,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(492), 1,
      anon_sym_doctype,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_block,
    ACTIONS(498), 1,
      anon_sym_append,
    ACTIONS(500), 1,
      anon_sym_prepend,
    ACTIONS(502), 1,
      anon_sym_extends,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_elseif,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(512), 1,
      anon_sym_BANG_EQ,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_script_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(522), 1,
      sym_tag_name,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(506), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(524), 2,
      sym_class,
      sym_id,
    STATE(381), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(16), 17,
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
  [4053] = 22,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(159), 1,
      anon_sym_doctype,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_block,
    ACTIONS(165), 1,
      anon_sym_append,
    ACTIONS(167), 1,
      anon_sym_prepend,
    ACTIONS(169), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_elseif,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(179), 1,
      anon_sym_BANG_EQ,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_script_DOT,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(433), 1,
      sym__newline,
    ACTIONS(173), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(230), 2,
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
  [4139] = 22,
    ACTIONS(49), 1,
      anon_sym_doctype,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_block,
    ACTIONS(57), 1,
      anon_sym_append,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_extends,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_elseif,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      anon_sym_BANG_EQ,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_script_DOT,
    ACTIONS(79), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(91), 2,
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
  [4225] = 22,
    ACTIONS(383), 1,
      anon_sym_doctype,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(391), 1,
      anon_sym_prepend,
    ACTIONS(393), 1,
      anon_sym_extends,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_elseif,
    ACTIONS(401), 1,
      anon_sym_else,
    ACTIONS(403), 1,
      anon_sym_case,
    ACTIONS(405), 1,
      anon_sym_BANG_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_script_DOT,
    ACTIONS(411), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(415), 1,
      sym_tag_name,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(540), 1,
      sym__newline,
    ACTIONS(397), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(417), 2,
      sym_class,
      sym_id,
    STATE(274), 2,
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
  [4311] = 9,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      aux_sym_filter_content_token1,
    ACTIONS(564), 1,
      sym__newline,
    STATE(56), 1,
      sym_attributes,
    STATE(133), 1,
      sym_filter_content,
    STATE(135), 1,
      sym_filter,
    ACTIONS(554), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(556), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4363] = 5,
    ACTIONS(570), 1,
      aux_sym_filter_content_token2,
    STATE(52), 1,
      aux_sym__comment_repeat1,
    STATE(897), 1,
      sym__comment_content,
    ACTIONS(566), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(568), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4405] = 5,
    ACTIONS(576), 1,
      aux_sym_filter_content_token2,
    STATE(52), 1,
      aux_sym__comment_repeat1,
    STATE(897), 1,
      sym__comment_content,
    ACTIONS(572), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(574), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4447] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(583), 1,
      aux_sym_filter_content_token1,
    ACTIONS(585), 1,
      sym__newline,
    STATE(74), 1,
      sym_attributes,
    STATE(197), 1,
      sym_filter_content,
    STATE(245), 1,
      sym_filter,
    ACTIONS(554), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(556), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4497] = 6,
    ACTIONS(591), 1,
      anon_sym_when,
    ACTIONS(593), 1,
      anon_sym_default,
    STATE(684), 1,
      sym__when_keyword,
    STATE(55), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(589), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(587), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4541] = 6,
    ACTIONS(599), 1,
      anon_sym_when,
    ACTIONS(602), 1,
      anon_sym_default,
    STATE(684), 1,
      sym__when_keyword,
    STATE(55), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(597), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(595), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4585] = 7,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      aux_sym_filter_content_token1,
    ACTIONS(564), 1,
      sym__newline,
    STATE(124), 1,
      sym_filter_content,
    STATE(135), 1,
      sym_filter,
    ACTIONS(605), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(607), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4631] = 4,
    ACTIONS(613), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
    ACTIONS(609), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [4670] = 4,
    ACTIONS(619), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(615), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(617), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4709] = 4,
    ACTIONS(625), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
    ACTIONS(621), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [4748] = 4,
    ACTIONS(631), 1,
      sym__indent,
    STATE(101), 1,
      sym_children,
    ACTIONS(627), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(629), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [4787] = 4,
    ACTIONS(637), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(633), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(635), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [4826] = 4,
    ACTIONS(637), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
    ACTIONS(609), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [4865] = 9,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_COLON,
    ACTIONS(643), 1,
      aux_sym_filter_content_token1,
    ACTIONS(645), 1,
      sym__newline,
    STATE(103), 1,
      sym_attributes,
    STATE(338), 1,
      sym_filter,
    STATE(342), 1,
      sym_filter_content,
    ACTIONS(556), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [4914] = 9,
    ACTIONS(554), 1,
      sym__dedent,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      anon_sym_COLON,
    ACTIONS(651), 1,
      aux_sym_filter_content_token1,
    ACTIONS(653), 1,
      sym__newline,
    STATE(121), 1,
      sym_attributes,
    STATE(259), 1,
      sym_filter_content,
    STATE(263), 1,
      sym_filter,
    ACTIONS(556), 22,
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
  [4963] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(655), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(657), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5002] = 4,
    ACTIONS(637), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(661), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5041] = 4,
    ACTIONS(669), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(665), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(667), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5080] = 4,
    ACTIONS(637), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
    ACTIONS(621), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5119] = 4,
    ACTIONS(637), 1,
      sym__indent,
    STATE(140), 1,
      sym_children,
    ACTIONS(672), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(674), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5158] = 6,
    ACTIONS(591), 1,
      anon_sym_when,
    ACTIONS(676), 1,
      anon_sym_default,
    STATE(759), 1,
      sym__when_keyword,
    STATE(89), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(587), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(589), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5200] = 4,
    ACTIONS(678), 1,
      sym__indent,
    STATE(183), 1,
      sym_children,
    ACTIONS(633), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(635), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5238] = 5,
    ACTIONS(680), 1,
      aux_sym_filter_content_token2,
    STATE(88), 1,
      aux_sym__comment_repeat1,
    STATE(837), 1,
      sym__comment_content,
    ACTIONS(566), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(568), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5278] = 4,
    ACTIONS(682), 1,
      sym__indent,
    STATE(174), 1,
      sym_children,
    ACTIONS(621), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5316] = 7,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(583), 1,
      aux_sym_filter_content_token1,
    ACTIONS(585), 1,
      sym__newline,
    STATE(205), 1,
      sym_filter_content,
    STATE(245), 1,
      sym_filter,
    ACTIONS(605), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(607), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5360] = 4,
    ACTIONS(678), 1,
      sym__indent,
    STATE(174), 1,
      sym_children,
    ACTIONS(621), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5398] = 2,
    ACTIONS(684), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(686), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5432] = 3,
    ACTIONS(692), 1,
      sym__indent,
    ACTIONS(688), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(690), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5468] = 2,
    ACTIONS(572), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(574), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5502] = 3,
    ACTIONS(698), 1,
      sym__indent,
    ACTIONS(694), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(696), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5538] = 4,
    ACTIONS(700), 1,
      sym__indent,
    STATE(154), 1,
      sym_children,
    ACTIONS(609), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5576] = 4,
    ACTIONS(678), 1,
      sym__indent,
    STATE(154), 1,
      sym_children,
    ACTIONS(609), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(678), 1,
      sym__indent,
    STATE(172), 1,
      sym_children,
    ACTIONS(661), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5652] = 2,
    ACTIONS(702), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(704), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5686] = 4,
    ACTIONS(706), 1,
      sym__indent,
    STATE(153), 1,
      sym_children,
    ACTIONS(655), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(657), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5724] = 2,
    ACTIONS(708), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(710), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5758] = 2,
    ACTIONS(712), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(714), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5792] = 5,
    ACTIONS(678), 1,
      sym__indent,
    ACTIONS(716), 1,
      sym__dedent,
    STATE(163), 1,
      sym_children,
    ACTIONS(672), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(674), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5832] = 5,
    ACTIONS(718), 1,
      aux_sym_filter_content_token2,
    STATE(88), 1,
      aux_sym__comment_repeat1,
    STATE(837), 1,
      sym__comment_content,
    ACTIONS(572), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(574), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [5872] = 6,
    ACTIONS(599), 1,
      anon_sym_when,
    ACTIONS(721), 1,
      anon_sym_default,
    STATE(759), 1,
      sym__when_keyword,
    STATE(89), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(595), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(597), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5914] = 4,
    ACTIONS(724), 1,
      sym__indent,
    STATE(162), 1,
      sym_children,
    ACTIONS(627), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(629), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5952] = 2,
    ACTIONS(726), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(728), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [5985] = 4,
    ACTIONS(730), 1,
      sym__un_delimited_javascript_line,
    STATE(137), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(615), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(617), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [6022] = 4,
    ACTIONS(732), 1,
      sym__indent,
    STATE(200), 1,
      sym_children,
    ACTIONS(657), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(655), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6059] = 4,
    ACTIONS(734), 1,
      sym__indent,
    STATE(249), 1,
      sym_children,
    ACTIONS(629), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(627), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6096] = 2,
    ACTIONS(621), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6129] = 2,
    ACTIONS(736), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(738), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6162] = 2,
    ACTIONS(633), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(635), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6195] = 2,
    ACTIONS(740), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(742), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6228] = 2,
    ACTIONS(744), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(746), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6261] = 9,
    ACTIONS(554), 1,
      sym__dedent,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_COLON,
    ACTIONS(752), 1,
      aux_sym_filter_content_token1,
    ACTIONS(754), 1,
      sym__newline,
    STATE(248), 1,
      sym_attributes,
    STATE(394), 1,
      sym_filter,
    STATE(395), 1,
      sym_filter_content,
    ACTIONS(556), 20,
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
  [6308] = 2,
    ACTIONS(655), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(657), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6341] = 2,
    ACTIONS(756), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(758), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6374] = 7,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(641), 1,
      anon_sym_COLON,
    ACTIONS(643), 1,
      aux_sym_filter_content_token1,
    ACTIONS(645), 1,
      sym__newline,
    STATE(338), 1,
      sym_filter,
    STATE(346), 1,
      sym_filter_content,
    ACTIONS(607), 22,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [6417] = 2,
    ACTIONS(760), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(762), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6450] = 2,
    ACTIONS(661), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6483] = 6,
    ACTIONS(599), 1,
      anon_sym_when,
    ACTIONS(764), 1,
      anon_sym_default,
    STATE(692), 1,
      sym__when_keyword,
    STATE(106), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(597), 11,
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
    ACTIONS(595), 12,
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
  [6524] = 2,
    ACTIONS(767), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(769), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6557] = 2,
    ACTIONS(771), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(773), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6590] = 3,
    ACTIONS(779), 1,
      sym__dedent,
    ACTIONS(775), 13,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(777), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6625] = 2,
    ACTIONS(609), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6658] = 2,
    ACTIONS(781), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(783), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6691] = 3,
    ACTIONS(785), 1,
      sym__indent,
    ACTIONS(694), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(696), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6726] = 2,
    ACTIONS(787), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(789), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6759] = 4,
    ACTIONS(791), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(611), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(609), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6796] = 4,
    ACTIONS(793), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(611), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(609), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6833] = 2,
    ACTIONS(795), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(797), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6866] = 6,
    ACTIONS(591), 1,
      anon_sym_when,
    ACTIONS(799), 1,
      anon_sym_default,
    STATE(692), 1,
      sym__when_keyword,
    STATE(106), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(589), 11,
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
    ACTIONS(587), 12,
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
  [6907] = 5,
    ACTIONS(801), 1,
      aux_sym_filter_content_token2,
    STATE(118), 1,
      aux_sym__comment_repeat1,
    STATE(844), 1,
      sym__comment_content,
    ACTIONS(572), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(574), 23,
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
  [6946] = 2,
    ACTIONS(804), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(806), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [6979] = 2,
    ACTIONS(808), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(810), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7012] = 7,
    ACTIONS(605), 1,
      sym__dedent,
    ACTIONS(649), 1,
      anon_sym_COLON,
    ACTIONS(651), 1,
      aux_sym_filter_content_token1,
    ACTIONS(653), 1,
      sym__newline,
    STATE(263), 1,
      sym_filter,
    STATE(268), 1,
      sym_filter_content,
    ACTIONS(607), 22,
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
  [7055] = 4,
    ACTIONS(791), 1,
      sym__indent,
    STATE(223), 1,
      sym_children,
    ACTIONS(623), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(621), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7092] = 2,
    ACTIONS(812), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(814), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7125] = 2,
    ACTIONS(816), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(818), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7158] = 2,
    ACTIONS(820), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(822), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7191] = 2,
    ACTIONS(824), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(826), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7224] = 3,
    ACTIONS(832), 1,
      sym__dedent,
    ACTIONS(828), 13,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(830), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7259] = 4,
    ACTIONS(834), 1,
      sym__indent,
    STATE(223), 1,
      sym_children,
    ACTIONS(623), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(621), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7296] = 2,
    ACTIONS(836), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(838), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7329] = 5,
    ACTIONS(840), 1,
      aux_sym_filter_content_token2,
    STATE(118), 1,
      aux_sym__comment_repeat1,
    STATE(844), 1,
      sym__comment_content,
    ACTIONS(566), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(568), 23,
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
  [7368] = 2,
    ACTIONS(672), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(674), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7401] = 2,
    ACTIONS(842), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(844), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7434] = 2,
    ACTIONS(605), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(607), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7467] = 4,
    ACTIONS(791), 1,
      sym__indent,
    STATE(246), 1,
      sym_children,
    ACTIONS(635), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(633), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7504] = 2,
    ACTIONS(846), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(848), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7537] = 2,
    ACTIONS(850), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(852), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7570] = 4,
    ACTIONS(854), 1,
      sym__un_delimited_javascript_line,
    STATE(137), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(665), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(667), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [7607] = 2,
    ACTIONS(857), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(859), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7640] = 2,
    ACTIONS(861), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(863), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7673] = 2,
    ACTIONS(865), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(867), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7706] = 2,
    ACTIONS(869), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(871), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7739] = 2,
    ACTIONS(873), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(875), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(877), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(879), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7805] = 2,
    ACTIONS(881), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(883), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7838] = 2,
    ACTIONS(885), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(887), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7871] = 4,
    ACTIONS(791), 1,
      sym__indent,
    STATE(219), 1,
      sym_children,
    ACTIONS(663), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(661), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7908] = 2,
    ACTIONS(889), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(891), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7941] = 2,
    ACTIONS(893), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(895), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [7974] = 2,
    ACTIONS(897), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(899), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8007] = 2,
    ACTIONS(627), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(629), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8040] = 2,
    ACTIONS(869), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(871), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8072] = 4,
    ACTIONS(901), 1,
      sym__indent,
    STATE(304), 1,
      sym_children,
    ACTIONS(609), 12,
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
    ACTIONS(611), 13,
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
  [8108] = 2,
    ACTIONS(609), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8140] = 2,
    ACTIONS(621), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8172] = 4,
    ACTIONS(903), 1,
      sym__indent,
    STATE(308), 1,
      sym_children,
    ACTIONS(655), 12,
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
    ACTIONS(657), 13,
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
  [8208] = 3,
    ACTIONS(905), 1,
      sym__indent,
    ACTIONS(690), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(688), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8242] = 4,
    ACTIONS(907), 1,
      sym__un_delimited_javascript_line,
    STATE(166), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(615), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(617), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [8278] = 4,
    ACTIONS(909), 1,
      sym__indent,
    STATE(299), 1,
      sym_children,
    ACTIONS(621), 12,
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
    ACTIONS(623), 13,
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
  [8314] = 4,
    ACTIONS(909), 1,
      sym__indent,
    STATE(304), 1,
      sym_children,
    ACTIONS(609), 12,
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
    ACTIONS(611), 13,
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
  [8350] = 4,
    ACTIONS(911), 1,
      sym__indent,
    STATE(309), 1,
      sym_children,
    ACTIONS(627), 12,
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
    ACTIONS(629), 13,
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
  [8386] = 4,
    ACTIONS(913), 1,
      sym__indent,
    STATE(299), 1,
      sym_children,
    ACTIONS(621), 12,
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
    ACTIONS(623), 13,
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
  [8422] = 2,
    ACTIONS(655), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(657), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8454] = 2,
    ACTIONS(865), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(867), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8486] = 4,
    ACTIONS(909), 1,
      sym__indent,
    STATE(297), 1,
      sym_children,
    ACTIONS(633), 12,
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
    ACTIONS(635), 13,
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
  [8522] = 4,
    ACTIONS(909), 1,
      sym__indent,
    STATE(294), 1,
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
  [8558] = 4,
    ACTIONS(915), 1,
      sym__un_delimited_javascript_line,
    STATE(166), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(665), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(667), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [8594] = 2,
    ACTIONS(740), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(742), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8626] = 4,
    ACTIONS(918), 1,
      sym__un_delimited_javascript_line,
    STATE(178), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(615), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(617), 23,
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
  [8662] = 2,
    ACTIONS(627), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(629), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8694] = 2,
    ACTIONS(744), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(746), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8726] = 3,
    ACTIONS(920), 1,
      sym__indent,
    ACTIONS(696), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(694), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8760] = 2,
    ACTIONS(781), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(783), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8792] = 3,
    ACTIONS(716), 1,
      sym__dedent,
    ACTIONS(672), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(674), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8826] = 2,
    ACTIONS(633), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(635), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8858] = 2,
    ACTIONS(712), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(714), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [8890] = 2,
    ACTIONS(736), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(738), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [8922] = 2,
    ACTIONS(708), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(710), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [8954] = 4,
    ACTIONS(922), 1,
      sym__un_delimited_javascript_line,
    STATE(178), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(665), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(667), 23,
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
  [8990] = 2,
    ACTIONS(702), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(704), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [9022] = 2,
    ACTIONS(767), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(769), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9054] = 2,
    ACTIONS(760), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(762), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9086] = 5,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(925), 1,
      aux_sym_filter_content_token2,
    STATE(186), 1,
      aux_sym__comment_repeat1,
    STATE(905), 1,
      sym__comment_content,
    ACTIONS(568), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [9124] = 2,
    ACTIONS(661), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9156] = 2,
    ACTIONS(836), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(838), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9188] = 4,
    ACTIONS(909), 1,
      sym__indent,
    STATE(264), 1,
      sym_children,
    ACTIONS(672), 12,
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
    ACTIONS(674), 13,
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
  [9224] = 5,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    ACTIONS(927), 1,
      aux_sym_filter_content_token2,
    STATE(186), 1,
      aux_sym__comment_repeat1,
    STATE(905), 1,
      sym__comment_content,
    ACTIONS(574), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [9262] = 2,
    ACTIONS(684), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(686), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [9294] = 2,
    ACTIONS(572), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(574), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [9326] = 2,
    ACTIONS(789), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(787), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9357] = 3,
    ACTIONS(930), 1,
      sym__dedent,
    ACTIONS(777), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(775), 13,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9390] = 2,
    ACTIONS(702), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(704), 23,
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
  [9421] = 2,
    ACTIONS(806), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(804), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9452] = 4,
    ACTIONS(932), 1,
      sym__indent,
    STATE(314), 1,
      sym_children,
    ACTIONS(633), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(635), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9487] = 2,
    ACTIONS(810), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(808), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9518] = 2,
    ACTIONS(844), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(842), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9549] = 2,
    ACTIONS(797), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(795), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9580] = 2,
    ACTIONS(607), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(605), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9611] = 2,
    ACTIONS(712), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(714), 24,
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
  [9642] = 4,
    ACTIONS(934), 1,
      sym__indent,
    STATE(353), 1,
      sym_children,
    ACTIONS(621), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9677] = 2,
    ACTIONS(611), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(609), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9708] = 3,
    ACTIONS(936), 1,
      sym__indent,
    ACTIONS(694), 12,
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
    ACTIONS(696), 13,
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
  [9741] = 2,
    ACTIONS(822), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(820), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9772] = 2,
    ACTIONS(769), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(767), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9803] = 2,
    ACTIONS(814), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(812), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9834] = 2,
    ACTIONS(818), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(816), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9865] = 2,
    ACTIONS(712), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(714), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [9896] = 2,
    ACTIONS(826), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(824), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9927] = 4,
    ACTIONS(938), 1,
      sym__indent,
    STATE(323), 1,
      sym_children,
    ACTIONS(655), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(657), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [9962] = 2,
    ACTIONS(572), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(574), 24,
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
  [9993] = 2,
    ACTIONS(684), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(686), 23,
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
  [10024] = 4,
    ACTIONS(940), 1,
      sym__indent,
    ACTIONS(942), 1,
      sym__dedent,
    ACTIONS(694), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(696), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [10059] = 2,
    ACTIONS(684), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(686), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [10090] = 2,
    ACTIONS(623), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(621), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10121] = 5,
    ACTIONS(944), 1,
      aux_sym_filter_content_token2,
    STATE(215), 1,
      aux_sym__comment_repeat1,
    STATE(875), 1,
      sym__comment_content,
    ACTIONS(566), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(568), 21,
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
  [10158] = 5,
    ACTIONS(946), 1,
      aux_sym_filter_content_token2,
    STATE(215), 1,
      aux_sym__comment_repeat1,
    STATE(875), 1,
      sym__comment_content,
    ACTIONS(572), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(574), 21,
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
  [10195] = 2,
    ACTIONS(773), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(771), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10226] = 2,
    ACTIONS(738), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(736), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10257] = 4,
    ACTIONS(949), 1,
      sym__indent,
    STATE(357), 1,
      sym_children,
    ACTIONS(627), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(629), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [10292] = 2,
    ACTIONS(783), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(781), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10323] = 2,
    ACTIONS(838), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(836), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10354] = 2,
    ACTIONS(708), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(710), 23,
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
  [10385] = 4,
    ACTIONS(932), 1,
      sym__indent,
    STATE(353), 1,
      sym_children,
    ACTIONS(621), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [10420] = 2,
    ACTIONS(635), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(633), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10451] = 2,
    ACTIONS(762), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(760), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10482] = 2,
    ACTIONS(951), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(953), 14,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [10513] = 2,
    ACTIONS(758), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(756), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10544] = 4,
    ACTIONS(955), 1,
      sym__indent,
    STATE(348), 1,
      sym_children,
    ACTIONS(609), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [10579] = 3,
    ACTIONS(957), 1,
      sym__indent,
    ACTIONS(688), 12,
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
    ACTIONS(690), 13,
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
  [10612] = 4,
    ACTIONS(932), 1,
      sym__indent,
    STATE(343), 1,
      sym_children,
    ACTIONS(661), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [10647] = 2,
    ACTIONS(728), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(726), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10678] = 2,
    ACTIONS(891), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(889), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10709] = 2,
    ACTIONS(899), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(897), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10740] = 2,
    ACTIONS(895), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(893), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10771] = 2,
    ACTIONS(887), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(885), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10802] = 2,
    ACTIONS(883), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(881), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10833] = 2,
    ACTIONS(879), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(877), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10864] = 2,
    ACTIONS(875), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(873), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10895] = 2,
    ACTIONS(746), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(744), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10926] = 2,
    ACTIONS(742), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(740), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10957] = 2,
    ACTIONS(702), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(704), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [10988] = 2,
    ACTIONS(629), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(627), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
    ACTIONS(863), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(861), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11050] = 2,
    ACTIONS(859), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(857), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11081] = 2,
    ACTIONS(852), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(850), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11112] = 2,
    ACTIONS(848), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(846), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11143] = 2,
    ACTIONS(663), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(661), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11174] = 3,
    ACTIONS(959), 1,
      sym__indent,
    ACTIONS(696), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(694), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11207] = 7,
    ACTIONS(605), 1,
      sym__dedent,
    ACTIONS(750), 1,
      anon_sym_COLON,
    ACTIONS(752), 1,
      aux_sym_filter_content_token1,
    ACTIONS(754), 1,
      sym__newline,
    STATE(392), 1,
      sym_filter_content,
    STATE(394), 1,
      sym_filter,
    ACTIONS(607), 20,
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
  [11248] = 2,
    ACTIONS(657), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(655), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11279] = 2,
    ACTIONS(708), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(710), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [11310] = 4,
    ACTIONS(932), 1,
      sym__indent,
    STATE(348), 1,
      sym_children,
    ACTIONS(609), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [11345] = 3,
    ACTIONS(961), 1,
      sym__dedent,
    ACTIONS(830), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(828), 13,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11378] = 3,
    ACTIONS(963), 1,
      sym__dedent,
    ACTIONS(828), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(830), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [11410] = 3,
    ACTIONS(965), 1,
      sym__dedent,
    ACTIONS(828), 11,
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
    ACTIONS(830), 13,
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
  [11442] = 4,
    ACTIONS(967), 1,
      sym__un_delimited_javascript_line,
    STATE(255), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(665), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(667), 21,
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
  [11476] = 2,
    ACTIONS(842), 12,
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
    ACTIONS(844), 13,
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
  [11506] = 4,
    ACTIONS(970), 1,
      sym__un_delimited_javascript_line,
    STATE(255), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(615), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(617), 21,
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
  [11540] = 2,
    ACTIONS(869), 12,
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
    ACTIONS(871), 13,
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
  [11570] = 2,
    ACTIONS(605), 12,
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
    ACTIONS(607), 13,
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
  [11600] = 2,
    ACTIONS(771), 12,
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
    ACTIONS(773), 13,
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
  [11630] = 3,
    ACTIONS(972), 1,
      sym__newline,
    ACTIONS(893), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(895), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [11662] = 3,
    ACTIONS(974), 1,
      sym__dedent,
    ACTIONS(775), 11,
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
    ACTIONS(777), 13,
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
  [11694] = 2,
    ACTIONS(846), 12,
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
    ACTIONS(848), 13,
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
  [11724] = 2,
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
  [11754] = 2,
    ACTIONS(824), 12,
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
    ACTIONS(826), 13,
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
  [11784] = 2,
    ACTIONS(756), 12,
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
    ACTIONS(758), 13,
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
  [11814] = 2,
    ACTIONS(820), 12,
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
    ACTIONS(822), 13,
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
  [11844] = 2,
    ACTIONS(816), 12,
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
    ACTIONS(818), 13,
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
  [11874] = 2,
    ACTIONS(672), 12,
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
    ACTIONS(674), 13,
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
  [11904] = 3,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
    ACTIONS(976), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(978), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [11936] = 3,
    ACTIONS(982), 1,
      sym__indent,
    ACTIONS(688), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(690), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [11968] = 2,
    ACTIONS(812), 12,
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
    ACTIONS(814), 13,
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
  [11998] = 3,
    ACTIONS(984), 1,
      sym__dedent,
    ACTIONS(736), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(738), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [12030] = 2,
    ACTIONS(726), 12,
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
    ACTIONS(728), 13,
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
  [12060] = 2,
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
  [12090] = 3,
    ACTIONS(986), 1,
      sym__dedent,
    ACTIONS(775), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(777), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [12122] = 2,
    ACTIONS(857), 12,
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
    ACTIONS(859), 13,
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
  [12152] = 4,
    ACTIONS(988), 1,
      sym__indent,
    STATE(375), 1,
      sym_children,
    ACTIONS(629), 11,
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
    ACTIONS(627), 12,
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
  [12186] = 2,
    ACTIONS(889), 12,
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
    ACTIONS(891), 13,
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
  [12216] = 2,
    ACTIONS(808), 12,
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
    ACTIONS(810), 13,
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
  [12246] = 2,
    ACTIONS(897), 12,
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
    ACTIONS(899), 13,
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
  [12276] = 2,
    ACTIONS(893), 12,
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
    ACTIONS(895), 13,
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
  [12306] = 2,
    ACTIONS(885), 12,
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
    ACTIONS(887), 13,
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
  [12336] = 4,
    ACTIONS(990), 1,
      sym__indent,
    STATE(376), 1,
      sym_children,
    ACTIONS(657), 11,
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
    ACTIONS(655), 12,
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
  [12370] = 2,
    ACTIONS(881), 12,
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
    ACTIONS(883), 13,
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
  [12400] = 2,
    ACTIONS(877), 12,
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
    ACTIONS(879), 13,
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
  [12430] = 4,
    ACTIONS(992), 1,
      sym__indent,
    STATE(389), 1,
      sym_children,
    ACTIONS(611), 11,
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
    ACTIONS(609), 12,
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
  [12464] = 2,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    ACTIONS(574), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_mixin,
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
  [12494] = 4,
    ACTIONS(994), 1,
      sym__indent,
    STATE(389), 1,
      sym_children,
    ACTIONS(611), 11,
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
    ACTIONS(609), 12,
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
  [12528] = 2,
    ACTIONS(767), 12,
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
    ACTIONS(769), 13,
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
  [12558] = 2,
    ACTIONS(804), 12,
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
    ACTIONS(806), 13,
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
  [12588] = 4,
    ACTIONS(992), 1,
      sym__indent,
    STATE(398), 1,
      sym_children,
    ACTIONS(623), 11,
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
    ACTIONS(621), 12,
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
  [12622] = 2,
    ACTIONS(736), 12,
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
    ACTIONS(738), 13,
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
  [12652] = 2,
    ACTIONS(781), 12,
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
    ACTIONS(783), 13,
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
  [12682] = 2,
    ACTIONS(873), 12,
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
    ACTIONS(875), 13,
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
  [12712] = 4,
    ACTIONS(996), 1,
      sym__indent,
    STATE(398), 1,
      sym_children,
    ACTIONS(623), 11,
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
    ACTIONS(621), 12,
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
  [12746] = 2,
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
  [12776] = 2,
    ACTIONS(760), 12,
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
    ACTIONS(762), 13,
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
  [12806] = 2,
    ACTIONS(633), 12,
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
    ACTIONS(635), 13,
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
  [12836] = 4,
    ACTIONS(992), 1,
      sym__indent,
    STATE(369), 1,
      sym_children,
    ACTIONS(635), 11,
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
    ACTIONS(633), 12,
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
  [12870] = 2,
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
  [12900] = 2,
    ACTIONS(795), 12,
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
    ACTIONS(797), 13,
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
  [12930] = 2,
    ACTIONS(787), 12,
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
    ACTIONS(789), 13,
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
  [12960] = 2,
    ACTIONS(621), 12,
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
    ACTIONS(623), 13,
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
  [12990] = 2,
    ACTIONS(738), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(736), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [13020] = 4,
    ACTIONS(992), 1,
      sym__indent,
    STATE(368), 1,
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
  [13054] = 2,
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
  [13084] = 2,
    ACTIONS(609), 12,
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
    ACTIONS(611), 13,
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
  [13114] = 2,
    ACTIONS(655), 12,
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
    ACTIONS(657), 13,
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
  [13144] = 2,
    ACTIONS(627), 12,
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
    ACTIONS(629), 13,
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
  [13174] = 2,
    ACTIONS(740), 12,
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
    ACTIONS(742), 13,
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
  [13204] = 2,
    ACTIONS(744), 12,
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
    ACTIONS(746), 13,
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
  [13234] = 2,
    ACTIONS(702), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(704), 21,
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
  [13263] = 2,
    ACTIONS(661), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(663), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13292] = 2,
    ACTIONS(998), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1000), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13321] = 2,
    ACTIONS(771), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(773), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13350] = 3,
    ACTIONS(1002), 1,
      sym__indent,
    ACTIONS(696), 11,
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
    ACTIONS(694), 12,
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
  [13381] = 2,
    ACTIONS(726), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(728), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13410] = 2,
    ACTIONS(808), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(810), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13439] = 2,
    ACTIONS(1004), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1006), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13468] = 2,
    ACTIONS(877), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(879), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13497] = 2,
    ACTIONS(804), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(806), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13526] = 2,
    ACTIONS(609), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(611), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13555] = 2,
    ACTIONS(873), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(875), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13584] = 2,
    ACTIONS(767), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(769), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13613] = 2,
    ACTIONS(712), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(714), 22,
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
  [13642] = 2,
    ACTIONS(881), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(883), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13671] = 2,
    ACTIONS(627), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(629), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13700] = 2,
    ACTIONS(572), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(574), 22,
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
  [13729] = 2,
    ACTIONS(836), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(838), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13758] = 2,
    ACTIONS(861), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(863), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13787] = 3,
    ACTIONS(1008), 1,
      sym__indent,
    ACTIONS(690), 11,
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
    ACTIONS(688), 12,
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
  [13818] = 2,
    ACTIONS(857), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(859), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13847] = 2,
    ACTIONS(850), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(852), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13876] = 2,
    ACTIONS(795), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(797), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13905] = 2,
    ACTIONS(897), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(899), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13934] = 2,
    ACTIONS(885), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(887), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13963] = 2,
    ACTIONS(846), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(848), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [13992] = 2,
    ACTIONS(787), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(789), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14021] = 2,
    ACTIONS(708), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(710), 21,
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
  [14050] = 2,
    ACTIONS(1010), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1012), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14079] = 2,
    ACTIONS(605), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(607), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14108] = 2,
    ACTIONS(781), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(783), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14137] = 2,
    ACTIONS(756), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(758), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14166] = 2,
    ACTIONS(812), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(814), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14195] = 2,
    ACTIONS(816), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(818), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14224] = 2,
    ACTIONS(820), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(822), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14253] = 2,
    ACTIONS(621), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(623), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14282] = 2,
    ACTIONS(684), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(686), 21,
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
  [14311] = 2,
    ACTIONS(842), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(844), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14340] = 2,
    ACTIONS(889), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(891), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14369] = 2,
    ACTIONS(824), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(826), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14398] = 2,
    ACTIONS(633), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(635), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14427] = 2,
    ACTIONS(760), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(762), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14456] = 2,
    ACTIONS(1014), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1016), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
    ACTIONS(1018), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1020), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14514] = 2,
    ACTIONS(655), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(657), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14543] = 2,
    ACTIONS(744), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(746), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14572] = 2,
    ACTIONS(1022), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1024), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14601] = 2,
    ACTIONS(1026), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1028), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14630] = 2,
    ACTIONS(740), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(742), 12,
      anon_sym_doctype,
      anon_sym_mixin,
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
  [14659] = 2,
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
  [14687] = 2,
    ACTIONS(859), 11,
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
    ACTIONS(857), 12,
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
  [14715] = 2,
    ACTIONS(769), 11,
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
    ACTIONS(767), 12,
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
  [14743] = 2,
    ACTIONS(746), 11,
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
    ACTIONS(744), 12,
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
  [14771] = 2,
    ACTIONS(773), 11,
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
    ACTIONS(771), 12,
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
  [14799] = 3,
    ACTIONS(1030), 1,
      sym__dedent,
    ACTIONS(775), 11,
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
    ACTIONS(777), 11,
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
  [14829] = 2,
    ACTIONS(783), 11,
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
    ACTIONS(781), 12,
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
  [14857] = 2,
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
  [14885] = 2,
    ACTIONS(742), 11,
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
    ACTIONS(740), 12,
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
  [14913] = 2,
    ACTIONS(738), 11,
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
    ACTIONS(736), 12,
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
  [14941] = 2,
    ACTIONS(629), 11,
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
    ACTIONS(627), 12,
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
  [14969] = 2,
    ACTIONS(789), 11,
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
    ACTIONS(787), 12,
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
  [14997] = 2,
    ACTIONS(797), 11,
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
    ACTIONS(795), 12,
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
  [15025] = 2,
    ACTIONS(657), 11,
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
    ACTIONS(655), 12,
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
  [15053] = 2,
    ACTIONS(611), 11,
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
    ACTIONS(609), 12,
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
  [15081] = 2,
    ACTIONS(758), 11,
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
    ACTIONS(756), 12,
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
  [15109] = 2,
    ACTIONS(806), 11,
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
    ACTIONS(804), 12,
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
  [15137] = 2,
    ACTIONS(810), 11,
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
    ACTIONS(808), 12,
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
  [15165] = 2,
    ACTIONS(762), 11,
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
    ACTIONS(760), 12,
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
  [15193] = 2,
    ACTIONS(728), 11,
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
    ACTIONS(726), 12,
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
  [15221] = 2,
    ACTIONS(891), 11,
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
    ACTIONS(889), 12,
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
  [15249] = 2,
    ACTIONS(899), 11,
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
    ACTIONS(897), 12,
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
  [15277] = 2,
    ACTIONS(895), 11,
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
    ACTIONS(893), 12,
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
  [15305] = 2,
    ACTIONS(887), 11,
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
    ACTIONS(885), 12,
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
  [15333] = 2,
    ACTIONS(883), 11,
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
    ACTIONS(881), 12,
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
  [15361] = 2,
    ACTIONS(879), 11,
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
    ACTIONS(877), 12,
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
  [15389] = 2,
    ACTIONS(875), 11,
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
    ACTIONS(873), 12,
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
  [15417] = 2,
    ACTIONS(623), 11,
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
    ACTIONS(621), 12,
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
  [15445] = 2,
    ACTIONS(814), 11,
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
    ACTIONS(812), 12,
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
  [15473] = 2,
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
  [15501] = 2,
    ACTIONS(818), 11,
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
    ACTIONS(816), 12,
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
  [15529] = 2,
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
  [15557] = 2,
    ACTIONS(848), 11,
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
    ACTIONS(846), 12,
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
  [15585] = 2,
    ACTIONS(607), 11,
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
    ACTIONS(605), 12,
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
  [15613] = 2,
    ACTIONS(844), 11,
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
    ACTIONS(842), 12,
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
  [15641] = 2,
    ACTIONS(822), 11,
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
    ACTIONS(820), 12,
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
  [15669] = 2,
    ACTIONS(635), 11,
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
    ACTIONS(633), 12,
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
  [15697] = 2,
    ACTIONS(826), 11,
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
    ACTIONS(824), 12,
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
  [15725] = 3,
    ACTIONS(1032), 1,
      sym__dedent,
    ACTIONS(828), 11,
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
    ACTIONS(830), 11,
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
  [15755] = 7,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    STATE(402), 1,
      aux_sym_mixin_use_repeat1,
    STATE(790), 1,
      sym__pug_attributes,
    ACTIONS(1036), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(799), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [15787] = 6,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    STATE(403), 1,
      aux_sym_mixin_use_repeat1,
    STATE(785), 1,
      sym__pug_attributes,
    ACTIONS(1036), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(799), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [15816] = 6,
    ACTIONS(1045), 1,
      anon_sym_SQUOTE,
    ACTIONS(1048), 1,
      anon_sym_DQUOTE,
    STATE(403), 1,
      aux_sym_mixin_use_repeat1,
    STATE(898), 1,
      sym__pug_attributes,
    ACTIONS(1042), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(799), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [15845] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1059), 1,
      anon_sym_SLASH,
    ACTIONS(1061), 1,
      anon_sym_,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1067), 1,
      sym__newline,
    STATE(408), 1,
      aux_sym_tag_repeat1,
    STATE(446), 1,
      sym_attributes,
    ACTIONS(1065), 2,
      sym_class,
      sym_id,
    STATE(169), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15885] = 5,
    ACTIONS(1071), 1,
      anon_sym_SQUOTE,
    ACTIONS(1073), 1,
      anon_sym_DQUOTE,
    STATE(750), 1,
      sym__pug_attributes,
    ACTIONS(1069), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(732), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [15911] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1081), 1,
      anon_sym_SLASH,
    ACTIONS(1083), 1,
      anon_sym_,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(431), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(309), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15951] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1091), 1,
      anon_sym_COLON,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1097), 1,
      anon_sym_SLASH,
    ACTIONS(1099), 1,
      anon_sym_,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1105), 1,
      sym__newline,
    STATE(412), 1,
      aux_sym_tag_repeat1,
    STATE(422), 1,
      sym_attributes,
    ACTIONS(1103), 2,
      sym_class,
      sym_id,
    STATE(241), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [15991] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    ACTIONS(1109), 1,
      anon_sym_SLASH,
    ACTIONS(1111), 1,
      anon_sym_,
    ACTIONS(1113), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(434), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(162), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16031] = 5,
    ACTIONS(1071), 1,
      anon_sym_SQUOTE,
    ACTIONS(1073), 1,
      anon_sym_DQUOTE,
    STATE(714), 1,
      sym__pug_attributes,
    ACTIONS(1069), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(732), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [16057] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1115), 1,
      anon_sym_COLON,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1121), 1,
      anon_sym_SLASH,
    ACTIONS(1123), 1,
      anon_sym_,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(439), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(375), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16097] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1135), 1,
      anon_sym_SLASH,
    ACTIONS(1137), 1,
      anon_sym_,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1141), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(441), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(357), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16137] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1143), 1,
      anon_sym_COLON,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    ACTIONS(1147), 1,
      anon_sym_,
    ACTIONS(1149), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(421), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(249), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16177] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1151), 1,
      anon_sym_COLON,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1157), 1,
      anon_sym_SLASH,
    ACTIONS(1159), 1,
      anon_sym_,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1163), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(438), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(609), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16217] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1165), 1,
      anon_sym_COLON,
    ACTIONS(1167), 1,
      anon_sym_SLASH,
    ACTIONS(1169), 1,
      anon_sym_,
    ACTIONS(1173), 1,
      sym__newline,
    STATE(410), 1,
      aux_sym_tag_repeat1,
    STATE(426), 1,
      sym_attributes,
    ACTIONS(1171), 2,
      sym_class,
      sym_id,
    STATE(372), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16257] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1175), 1,
      anon_sym_COLON,
    ACTIONS(1177), 1,
      anon_sym_SLASH,
    ACTIONS(1179), 1,
      anon_sym_,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_tag_repeat1,
    STATE(429), 1,
      sym_attributes,
    ACTIONS(1181), 2,
      sym_class,
      sym_id,
    STATE(328), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16297] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1185), 1,
      anon_sym_COLON,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1189), 1,
      anon_sym_,
    ACTIONS(1193), 1,
      sym__newline,
    STATE(413), 1,
      aux_sym_tag_repeat1,
    STATE(440), 1,
      sym_attributes,
    ACTIONS(1191), 2,
      sym_class,
      sym_id,
    STATE(608), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16337] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1195), 1,
      anon_sym_COLON,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1201), 1,
      anon_sym_SLASH,
    ACTIONS(1203), 1,
      anon_sym_,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1207), 1,
      sym__newline,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    STATE(428), 1,
      sym_attributes,
    ACTIONS(1087), 2,
      sym_class,
      sym_id,
    STATE(101), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16377] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1209), 1,
      anon_sym_COLON,
    ACTIONS(1211), 1,
      anon_sym_SLASH,
    ACTIONS(1213), 1,
      anon_sym_,
    ACTIONS(1217), 1,
      sym__newline,
    STATE(417), 1,
      aux_sym_tag_repeat1,
    STATE(447), 1,
      sym_attributes,
    ACTIONS(1215), 2,
      sym_class,
      sym_id,
    STATE(150), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16417] = 12,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1219), 1,
      anon_sym_COLON,
    ACTIONS(1221), 1,
      anon_sym_SLASH,
    ACTIONS(1223), 1,
      anon_sym_,
    ACTIONS(1227), 1,
      sym__newline,
    STATE(406), 1,
      aux_sym_tag_repeat1,
    STATE(424), 1,
      sym_attributes,
    ACTIONS(1225), 2,
      sym_class,
      sym_id,
    STATE(310), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16457] = 4,
    STATE(420), 1,
      aux_sym_tag_repeat1,
    ACTIONS(1231), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1233), 2,
      sym_class,
      sym_id,
    ACTIONS(1229), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [16477] = 8,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1236), 1,
      anon_sym_COLON,
    ACTIONS(1238), 1,
      anon_sym_SLASH,
    ACTIONS(1240), 1,
      anon_sym_,
    ACTIONS(1242), 1,
      sym__newline,
    STATE(200), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16504] = 8,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1143), 1,
      anon_sym_COLON,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    ACTIONS(1147), 1,
      anon_sym_,
    ACTIONS(1149), 1,
      sym__newline,
    STATE(249), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16531] = 7,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(1248), 1,
      sym_attribute_name,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(725), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16556] = 8,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1081), 1,
      anon_sym_SLASH,
    ACTIONS(1083), 1,
      anon_sym_,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(309), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16583] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(687), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16608] = 8,
    ACTIONS(1115), 1,
      anon_sym_COLON,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1121), 1,
      anon_sym_SLASH,
    ACTIONS(1123), 1,
      anon_sym_,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(375), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16635] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(727), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16660] = 8,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1254), 1,
      anon_sym_COLON,
    ACTIONS(1256), 1,
      anon_sym_SLASH,
    ACTIONS(1258), 1,
      anon_sym_,
    ACTIONS(1260), 1,
      sym__newline,
    STATE(110), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16687] = 8,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1135), 1,
      anon_sym_SLASH,
    ACTIONS(1137), 1,
      anon_sym_,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1141), 1,
      sym__newline,
    STATE(357), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16714] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(719), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16739] = 8,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1264), 1,
      anon_sym_COLON,
    ACTIONS(1266), 1,
      anon_sym_SLASH,
    ACTIONS(1268), 1,
      anon_sym_,
    ACTIONS(1270), 1,
      sym__newline,
    STATE(308), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16766] = 7,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    ACTIONS(1277), 1,
      sym_attribute_name,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(787), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1274), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16791] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(756), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16816] = 8,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1282), 1,
      anon_sym_COLON,
    ACTIONS(1284), 1,
      anon_sym_SLASH,
    ACTIONS(1286), 1,
      anon_sym_,
    ACTIONS(1288), 1,
      sym__newline,
    STATE(153), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16843] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(715), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16868] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(733), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16893] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(718), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [16918] = 8,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1296), 1,
      anon_sym_COLON,
    ACTIONS(1298), 1,
      anon_sym_SLASH,
    ACTIONS(1300), 1,
      anon_sym_,
    ACTIONS(1302), 1,
      sym__newline,
    STATE(610), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16945] = 8,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1304), 1,
      anon_sym_COLON,
    ACTIONS(1306), 1,
      anon_sym_SLASH,
    ACTIONS(1308), 1,
      anon_sym_,
    ACTIONS(1310), 1,
      sym__newline,
    STATE(376), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16972] = 8,
    ACTIONS(1151), 1,
      anon_sym_COLON,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1157), 1,
      anon_sym_SLASH,
    ACTIONS(1159), 1,
      anon_sym_,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1163), 1,
      sym__newline,
    STATE(609), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [16999] = 8,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1312), 1,
      anon_sym_COLON,
    ACTIONS(1314), 1,
      anon_sym_SLASH,
    ACTIONS(1316), 1,
      anon_sym_,
    ACTIONS(1318), 1,
      sym__newline,
    STATE(323), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17026] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(752), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [17051] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(753), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [17076] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(757), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [17101] = 7,
    ACTIONS(1248), 1,
      sym_attribute_name,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_attributes_repeat1,
    STATE(631), 1,
      sym_angular_attribute_name,
    STATE(699), 1,
      sym_attribute,
    STATE(723), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1246), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [17126] = 8,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    ACTIONS(1109), 1,
      anon_sym_SLASH,
    ACTIONS(1111), 1,
      anon_sym_,
    ACTIONS(1113), 1,
      sym__newline,
    STATE(162), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17153] = 8,
    ACTIONS(1195), 1,
      anon_sym_COLON,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1201), 1,
      anon_sym_SLASH,
    ACTIONS(1203), 1,
      anon_sym_,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1207), 1,
      sym__newline,
    STATE(101), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17180] = 7,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1328), 1,
      anon_sym_COLON,
    ACTIONS(1330), 1,
      anon_sym_,
    ACTIONS(1332), 1,
      sym__newline,
    STATE(95), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17204] = 7,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(1336), 1,
      anon_sym_,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17228] = 7,
    ACTIONS(1195), 1,
      anon_sym_COLON,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1203), 1,
      anon_sym_,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1207), 1,
      sym__newline,
    STATE(101), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17252] = 7,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1236), 1,
      anon_sym_COLON,
    ACTIONS(1240), 1,
      anon_sym_,
    ACTIONS(1242), 1,
      sym__newline,
    STATE(200), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17276] = 7,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1340), 1,
      anon_sym_COLON,
    ACTIONS(1342), 1,
      anon_sym_,
    ACTIONS(1344), 1,
      sym__newline,
    STATE(389), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17300] = 7,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1083), 1,
      anon_sym_,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(309), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17324] = 7,
    ACTIONS(1151), 1,
      anon_sym_COLON,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1163), 1,
      sym__newline,
    STATE(609), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17348] = 7,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1346), 1,
      anon_sym_COLON,
    ACTIONS(1348), 1,
      anon_sym_,
    ACTIONS(1350), 1,
      sym__newline,
    STATE(612), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17372] = 7,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1304), 1,
      anon_sym_COLON,
    ACTIONS(1308), 1,
      anon_sym_,
    ACTIONS(1310), 1,
      sym__newline,
    STATE(376), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17396] = 7,
    ACTIONS(1093), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    ACTIONS(1143), 1,
      anon_sym_COLON,
    ACTIONS(1147), 1,
      anon_sym_,
    ACTIONS(1149), 1,
      sym__newline,
    STATE(249), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17420] = 7,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    ACTIONS(1354), 1,
      anon_sym_,
    ACTIONS(1356), 1,
      sym__newline,
    STATE(154), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17444] = 7,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1137), 1,
      anon_sym_,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1141), 1,
      sym__newline,
    STATE(357), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17468] = 7,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1282), 1,
      anon_sym_COLON,
    ACTIONS(1286), 1,
      anon_sym_,
    ACTIONS(1288), 1,
      sym__newline,
    STATE(153), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17492] = 7,
    ACTIONS(1055), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    ACTIONS(1111), 1,
      anon_sym_,
    ACTIONS(1113), 1,
      sym__newline,
    STATE(162), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17516] = 7,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1312), 1,
      anon_sym_COLON,
    ACTIONS(1316), 1,
      anon_sym_,
    ACTIONS(1318), 1,
      sym__newline,
    STATE(323), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17540] = 7,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1358), 1,
      anon_sym_COLON,
    ACTIONS(1360), 1,
      anon_sym_,
    ACTIONS(1362), 1,
      sym__newline,
    STATE(348), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17564] = 7,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    ACTIONS(1366), 1,
      anon_sym_,
    ACTIONS(1368), 1,
      sym__newline,
    STATE(304), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17588] = 7,
    ACTIONS(1197), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1199), 1,
      anon_sym_EQ,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    ACTIONS(1254), 1,
      anon_sym_COLON,
    ACTIONS(1258), 1,
      anon_sym_,
    ACTIONS(1260), 1,
      sym__newline,
    STATE(110), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17612] = 7,
    ACTIONS(1115), 1,
      anon_sym_COLON,
    ACTIONS(1117), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(1123), 1,
      anon_sym_,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(375), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17636] = 7,
    ACTIONS(1077), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(1264), 1,
      anon_sym_COLON,
    ACTIONS(1268), 1,
      anon_sym_,
    ACTIONS(1270), 1,
      sym__newline,
    STATE(308), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17660] = 7,
    ACTIONS(1153), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1155), 1,
      anon_sym_EQ,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1296), 1,
      anon_sym_COLON,
    ACTIONS(1300), 1,
      anon_sym_,
    ACTIONS(1302), 1,
      sym__newline,
    STATE(610), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [17684] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17707] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1378), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17730] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17753] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1382), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17776] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1384), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17799] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1386), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17822] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17845] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1390), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17868] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1392), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17891] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17914] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1396), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17937] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1398), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17960] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1400), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [17983] = 7,
    ACTIONS(1402), 1,
      aux_sym_content_token1,
    ACTIONS(1405), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1408), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1411), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18006] = 7,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1413), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18029] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1415), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18049] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1417), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(522), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18069] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1419), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18089] = 3,
    ACTIONS(1421), 1,
      sym__indent,
    STATE(613), 1,
      sym_children,
    ACTIONS(621), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18103] = 3,
    ACTIONS(1423), 1,
      sym__indent,
    STATE(612), 1,
      sym_children,
    ACTIONS(609), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18117] = 3,
    ACTIONS(1421), 1,
      sym__indent,
    STATE(612), 1,
      sym_children,
    ACTIONS(609), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18131] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1429), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18147] = 3,
    ACTIONS(1431), 1,
      sym__indent,
    STATE(610), 1,
      sym_children,
    ACTIONS(655), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18161] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18181] = 3,
    ACTIONS(1435), 1,
      sym__indent,
    STATE(609), 1,
      sym_children,
    ACTIONS(627), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18195] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18215] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1439), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18235] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(473), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18255] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1441), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(500), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18275] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(471), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18295] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18315] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1445), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18335] = 6,
    ACTIONS(1447), 1,
      aux_sym_content_token1,
    ACTIONS(1450), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1453), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1456), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18355] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1458), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18375] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(480), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18395] = 3,
    ACTIONS(1421), 1,
      sym__indent,
    STATE(620), 1,
      sym_children,
    ACTIONS(661), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18409] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(469), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18429] = 4,
    ACTIONS(1463), 1,
      sym__newline,
    ACTIONS(1466), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18445] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1468), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18465] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1470), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18485] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(474), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18505] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1472), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18521] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1474), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18541] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(475), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18561] = 2,
    ACTIONS(708), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(710), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [18573] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1476), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18593] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1478), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18613] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1480), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18633] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1482), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18649] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1484), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18669] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(476), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18689] = 2,
    ACTIONS(684), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(686), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [18701] = 3,
    ACTIONS(1486), 1,
      sym__indent,
    STATE(613), 1,
      sym_children,
    ACTIONS(621), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18715] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1488), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18735] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1490), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18755] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1492), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18775] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18791] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(479), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18811] = 3,
    ACTIONS(1421), 1,
      sym__indent,
    STATE(616), 1,
      sym_children,
    ACTIONS(633), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [18825] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1496), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18845] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(481), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18865] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1498), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18885] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1500), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18905] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1502), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [18921] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1504), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18941] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18961] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1506), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [18981] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1508), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19001] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(470), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19021] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1510), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19041] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1512), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19057] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1514), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19077] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1516), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(533), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19097] = 1,
    ACTIONS(1518), 7,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [19107] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(472), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19127] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1520), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19147] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1522), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19167] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(477), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19187] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(478), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19207] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1524), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19227] = 2,
    ACTIONS(702), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(704), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [19239] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1526), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19255] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1528), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19275] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1530), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19295] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1532), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19315] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1534), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19335] = 4,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(1536), 1,
      sym__dedent,
    STATE(506), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19351] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1538), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19371] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1540), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(535), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19391] = 6,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1542), 1,
      sym__newline,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19411] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(544), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19428] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(538), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19445] = 5,
    ACTIONS(1546), 1,
      anon_sym_EQ,
    ACTIONS(1548), 1,
      anon_sym_,
    ACTIONS(1550), 1,
      anon_sym_DOT,
    STATE(584), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1544), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19462] = 3,
    ACTIONS(1552), 1,
      sym__newline,
    STATE(517), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19475] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(494), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19492] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(511), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19509] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(516), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19526] = 5,
    ACTIONS(1550), 1,
      anon_sym_DOT,
    ACTIONS(1556), 1,
      anon_sym_EQ,
    ACTIONS(1558), 1,
      anon_sym_,
    STATE(561), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1554), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19543] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(531), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19560] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(554), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19577] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(515), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19594] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(486), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19611] = 3,
    ACTIONS(1560), 1,
      sym__newline,
    STATE(490), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19624] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(492), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19641] = 4,
    ACTIONS(1564), 1,
      anon_sym_POUND,
    ACTIONS(1566), 1,
      anon_sym_LBRACE,
    ACTIONS(1562), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1568), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [19656] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(495), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19673] = 2,
    ACTIONS(1570), 1,
      sym__indent,
    ACTIONS(694), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [19684] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(502), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19701] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(507), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19718] = 3,
    ACTIONS(1572), 1,
      sym__newline,
    STATE(510), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19731] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(484), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19748] = 3,
    ACTIONS(1574), 1,
      sym__newline,
    STATE(532), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19761] = 3,
    ACTIONS(1576), 1,
      sym__newline,
    STATE(550), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19774] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(514), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19791] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19808] = 4,
    ACTIONS(1580), 1,
      anon_sym_,
    ACTIONS(1582), 1,
      anon_sym_DOT,
    STATE(584), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1578), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [19823] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(523), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19840] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(524), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19857] = 3,
    ACTIONS(1585), 1,
      sym__newline,
    STATE(525), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19870] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(528), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19887] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(499), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19904] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(530), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19921] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(536), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19938] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(552), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19955] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(508), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19972] = 3,
    ACTIONS(1587), 1,
      sym__newline,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [19985] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(553), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20002] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(545), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20019] = 3,
    ACTIONS(1589), 1,
      sym__newline,
    STATE(555), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20032] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20049] = 5,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1372), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(621), 1,
      aux_sym_content_repeat1,
    STATE(558), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20066] = 4,
    ACTIONS(1591), 1,
      aux_sym_content_token1,
    ACTIONS(1596), 1,
      sym__newline,
    STATE(600), 1,
      aux_sym_content_repeat1,
    ACTIONS(1594), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [20080] = 4,
    ACTIONS(1598), 1,
      anon_sym_when,
    ACTIONS(1600), 1,
      anon_sym_default,
    STATE(684), 1,
      sym__when_keyword,
    STATE(54), 2,
      sym_when,
      aux_sym_case_repeat1,
  [20094] = 3,
    ACTIONS(1602), 1,
      anon_sym_LBRACE,
    ACTIONS(1594), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1596), 2,
      sym__newline,
      aux_sym_content_token1,
  [20106] = 3,
    STATE(151), 1,
      sym_tag,
    STATE(163), 1,
      sym__dummy_tag,
    ACTIONS(1604), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20118] = 1,
    ACTIONS(1272), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [20126] = 1,
    ACTIONS(744), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20134] = 3,
    STATE(258), 1,
      sym_tag,
    STATE(264), 1,
      sym__dummy_tag,
    ACTIONS(417), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20146] = 1,
    ACTIONS(740), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20154] = 1,
    ACTIONS(627), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20162] = 1,
    ACTIONS(655), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20170] = 1,
    ACTIONS(609), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20178] = 4,
    ACTIONS(1598), 1,
      anon_sym_when,
    ACTIONS(1606), 1,
      anon_sym_default,
    STATE(692), 1,
      sym__when_keyword,
    STATE(117), 2,
      sym_when,
      aux_sym_case_repeat1,
  [20192] = 1,
    ACTIONS(621), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20200] = 1,
    ACTIONS(633), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20208] = 1,
    ACTIONS(760), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20216] = 2,
    ACTIONS(1580), 1,
      anon_sym_,
    ACTIONS(1578), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [20226] = 1,
    ACTIONS(661), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20234] = 4,
    ACTIONS(1598), 1,
      anon_sym_when,
    ACTIONS(1608), 1,
      anon_sym_default,
    STATE(759), 1,
      sym__when_keyword,
    STATE(70), 2,
      sym_when,
      aux_sym_case_repeat1,
  [20248] = 3,
    STATE(140), 1,
      sym__dummy_tag,
    STATE(141), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20260] = 1,
    ACTIONS(767), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20268] = 1,
    ACTIONS(781), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20276] = 4,
    ACTIONS(1370), 1,
      aux_sym_content_token1,
    ACTIONS(1612), 1,
      sym__newline,
    STATE(600), 1,
      aux_sym_content_repeat1,
    ACTIONS(1610), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [20290] = 1,
    ACTIONS(836), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20298] = 1,
    ACTIONS(736), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20306] = 4,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1616), 1,
      sym__newline,
    STATE(253), 1,
      sym__single_line_buf_code,
    STATE(860), 1,
      sym__un_delimited_javascript,
  [20319] = 2,
    STATE(213), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20328] = 2,
    STATE(223), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20337] = 2,
    ACTIONS(1618), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1620), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [20346] = 2,
    ACTIONS(1411), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1622), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [20355] = 2,
    STATE(353), 1,
      sym_tag,
    ACTIONS(43), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20364] = 2,
    STATE(323), 1,
      sym_tag,
    ACTIONS(43), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20373] = 3,
    ACTIONS(1626), 1,
      anon_sym_EQ,
    ACTIONS(1628), 1,
      anon_sym_,
    ACTIONS(1624), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [20384] = 4,
    ACTIONS(572), 1,
      sym__dedent,
    ACTIONS(1630), 1,
      aux_sym_filter_content_token2,
    STATE(632), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20397] = 4,
    ACTIONS(1633), 1,
      aux_sym_script_block_token1,
    ACTIONS(1636), 1,
      sym__newline,
    ACTIONS(1639), 1,
      sym__dedent,
    STATE(633), 1,
      aux_sym_script_block_repeat1,
  [20410] = 2,
    ACTIONS(1641), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1643), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [20419] = 4,
    ACTIONS(1645), 1,
      anon_sym_append,
    ACTIONS(1647), 1,
      anon_sym_prepend,
    ACTIONS(1649), 1,
      sym_tag_name,
    STATE(145), 1,
      sym__block_content,
  [20432] = 2,
    STATE(348), 1,
      sym_tag,
    ACTIONS(43), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20441] = 4,
    ACTIONS(1651), 1,
      anon_sym_append,
    ACTIONS(1653), 1,
      anon_sym_prepend,
    ACTIONS(1655), 1,
      sym_tag_name,
    STATE(337), 1,
      sym__block_content,
  [20454] = 4,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1659), 1,
      sym__dedent,
    STATE(632), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20467] = 2,
    STATE(299), 1,
      sym_tag,
    ACTIONS(417), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20476] = 4,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    ACTIONS(1665), 1,
      sym__dedent,
    STATE(633), 1,
      aux_sym_script_block_repeat1,
  [20489] = 2,
    STATE(304), 1,
      sym_tag,
    ACTIONS(417), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20498] = 4,
    ACTIONS(1667), 1,
      anon_sym_append,
    ACTIONS(1669), 1,
      anon_sym_prepend,
    ACTIONS(1671), 1,
      sym_tag_name,
    STATE(234), 1,
      sym__block_content,
  [20511] = 2,
    STATE(308), 1,
      sym_tag,
    ACTIONS(417), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20520] = 2,
    STATE(309), 1,
      sym_tag,
    ACTIONS(417), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20529] = 2,
    STATE(398), 1,
      sym_tag,
    ACTIONS(524), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20538] = 2,
    STATE(389), 1,
      sym_tag,
    ACTIONS(524), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20547] = 2,
    ACTIONS(1675), 1,
      anon_sym_,
    ACTIONS(1673), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [20556] = 2,
    STATE(609), 1,
      sym_tag,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20565] = 2,
    STATE(376), 1,
      sym_tag,
    ACTIONS(524), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20574] = 2,
    STATE(375), 1,
      sym_tag,
    ACTIONS(524), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20583] = 4,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1677), 1,
      sym__newline,
    STATE(127), 1,
      sym__single_line_buf_code,
    STATE(893), 1,
      sym__un_delimited_javascript,
  [20596] = 2,
    STATE(97), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20605] = 2,
    STATE(249), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20614] = 4,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1679), 1,
      sym__newline,
    STATE(252), 1,
      sym__single_line_buf_code,
    STATE(822), 1,
      sym__un_delimited_javascript,
  [20627] = 2,
    STATE(95), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20636] = 4,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1681), 1,
      sym__dedent,
    STATE(632), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20649] = 4,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    ACTIONS(1683), 1,
      sym__dedent,
    STATE(633), 1,
      aux_sym_script_block_repeat1,
  [20662] = 2,
    STATE(610), 1,
      sym_tag,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20671] = 2,
    STATE(110), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20680] = 2,
    STATE(101), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20689] = 2,
    STATE(154), 1,
      sym_tag,
    ACTIONS(1604), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20698] = 2,
    STATE(162), 1,
      sym_tag,
    ACTIONS(1604), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20707] = 4,
    ACTIONS(1685), 1,
      anon_sym_append,
    ACTIONS(1687), 1,
      anon_sym_prepend,
    ACTIONS(1689), 1,
      sym_tag_name,
    STATE(385), 1,
      sym__block_content,
  [20720] = 4,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    ACTIONS(1691), 1,
      sym__dedent,
    STATE(633), 1,
      aux_sym_script_block_repeat1,
  [20733] = 4,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1693), 1,
      sym__dedent,
    STATE(632), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20746] = 4,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1695), 1,
      sym__dedent,
    STATE(632), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20759] = 2,
    STATE(200), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20768] = 4,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    ACTIONS(1697), 1,
      sym__dedent,
    STATE(633), 1,
      aux_sym_script_block_repeat1,
  [20781] = 4,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1699), 1,
      sym__newline,
    STATE(400), 1,
      sym__single_line_buf_code,
    STATE(832), 1,
      sym__un_delimited_javascript,
  [20794] = 2,
    STATE(612), 1,
      sym_tag,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20803] = 2,
    STATE(174), 1,
      sym_tag,
    ACTIONS(1604), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20812] = 4,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1701), 1,
      sym__dedent,
    STATE(632), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20825] = 4,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1703), 1,
      sym__newline,
    STATE(254), 1,
      sym__single_line_buf_code,
    STATE(829), 1,
      sym__un_delimited_javascript,
  [20838] = 2,
    ACTIONS(1594), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1596), 2,
      sym__newline,
      aux_sym_content_token1,
  [20847] = 4,
    ACTIONS(1705), 1,
      anon_sym_append,
    ACTIONS(1707), 1,
      anon_sym_prepend,
    ACTIONS(1709), 1,
      sym_tag_name,
    STATE(283), 1,
      sym__block_content,
  [20860] = 4,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    ACTIONS(1711), 1,
      sym__dedent,
    STATE(633), 1,
      aux_sym_script_block_repeat1,
  [20873] = 2,
    STATE(153), 1,
      sym_tag,
    ACTIONS(1604), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20882] = 2,
    STATE(613), 1,
      sym_tag,
    ACTIONS(1425), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20891] = 2,
    STATE(357), 1,
      sym_tag,
    ACTIONS(43), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20900] = 3,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    STATE(672), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [20910] = 3,
    ACTIONS(1713), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1715), 1,
      sym__newline,
    STATE(840), 1,
      sym__comment_content,
  [20920] = 3,
    ACTIONS(1717), 1,
      aux_sym_filter_content_token2,
    STATE(182), 1,
      aux_sym__comment_repeat1,
    STATE(905), 1,
      sym__comment_content,
  [20930] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1721), 1,
      sym__dedent,
    STATE(691), 1,
      aux_sym_filter_content_repeat1,
  [20940] = 3,
    ACTIONS(1723), 1,
      anon_sym_COLON,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(131), 1,
      sym__when_content,
  [20950] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(605), 1,
      sym__single_line_buf_code,
    STATE(911), 1,
      sym__un_delimited_javascript,
  [20960] = 3,
    ACTIONS(1727), 1,
      aux_sym_filter_content_token2,
    STATE(51), 1,
      aux_sym__comment_repeat1,
    STATE(897), 1,
      sym__comment_content,
  [20970] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1731), 1,
      anon_sym_RPAREN,
    ACTIONS(1733), 1,
      anon_sym_,
  [20980] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1735), 1,
      sym__dedent,
    STATE(716), 1,
      aux_sym_filter_content_repeat1,
  [20990] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(607), 1,
      sym__single_line_buf_code,
    STATE(911), 1,
      sym__un_delimited_javascript,
  [21000] = 3,
    ACTIONS(1737), 1,
      sym__un_delimited_javascript_line,
    STATE(58), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(109), 1,
      sym__multi_line_buf_code,
  [21010] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1739), 1,
      sym__dedent,
    STATE(716), 1,
      aux_sym_filter_content_repeat1,
  [21020] = 3,
    ACTIONS(1741), 1,
      anon_sym_COLON,
    ACTIONS(1743), 1,
      sym__newline,
    STATE(269), 1,
      sym__when_content,
  [21030] = 1,
    ACTIONS(1745), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [21036] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(358), 1,
      sym__single_line_buf_code,
    STATE(884), 1,
      sym__un_delimited_javascript,
  [21046] = 3,
    ACTIONS(1747), 1,
      sym__un_delimited_javascript_line,
    STATE(92), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(190), 1,
      sym__multi_line_buf_code,
  [21056] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(311), 1,
      sym__single_line_buf_code,
    STATE(829), 1,
      sym__un_delimited_javascript,
  [21066] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(312), 1,
      sym__single_line_buf_code,
    STATE(829), 1,
      sym__un_delimited_javascript,
  [21076] = 1,
    ACTIONS(1749), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [21082] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1751), 1,
      anon_sym_RPAREN,
  [21092] = 3,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(676), 1,
      aux_sym_script_block_repeat1,
  [21102] = 3,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    STATE(665), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [21112] = 2,
    ACTIONS(1755), 1,
      anon_sym_,
    ACTIONS(1753), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21120] = 2,
    ACTIONS(1759), 1,
      anon_sym_,
    ACTIONS(1757), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21128] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(99), 1,
      sym__single_line_buf_code,
    STATE(893), 1,
      sym__un_delimited_javascript,
  [21138] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(98), 1,
      sym__single_line_buf_code,
    STATE(893), 1,
      sym__un_delimited_javascript,
  [21148] = 3,
    ACTIONS(1761), 1,
      anon_sym_RPAREN,
    ACTIONS(1763), 1,
      aux_sym_mixin_attributes_token1,
    STATE(784), 1,
      aux_sym_mixin_attributes_repeat1,
  [21158] = 3,
    ACTIONS(1765), 1,
      aux_sym_filter_content_token2,
    STATE(72), 1,
      aux_sym__comment_repeat1,
    STATE(837), 1,
      sym__comment_content,
  [21168] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(238), 1,
      sym__single_line_buf_code,
    STATE(822), 1,
      sym__un_delimited_javascript,
  [21178] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(239), 1,
      sym__single_line_buf_code,
    STATE(822), 1,
      sym__un_delimited_javascript,
  [21188] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(361), 1,
      sym__single_line_buf_code,
    STATE(884), 1,
      sym__un_delimited_javascript,
  [21198] = 2,
    ACTIONS(1769), 1,
      anon_sym_,
    ACTIONS(1767), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21206] = 2,
    ACTIONS(1773), 1,
      anon_sym_,
    ACTIONS(1771), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21214] = 3,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    STATE(638), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [21224] = 2,
    ACTIONS(1777), 1,
      anon_sym_,
    ACTIONS(1775), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21232] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
  [21242] = 3,
    ACTIONS(1781), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1784), 1,
      sym__dedent,
    STATE(716), 1,
      aux_sym_filter_content_repeat1,
  [21252] = 3,
    ACTIONS(1786), 1,
      anon_sym_SQUOTE,
    ACTIONS(1788), 1,
      anon_sym_DQUOTE,
    STATE(738), 1,
      sym_quoted_javascript,
  [21262] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
  [21272] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
  [21282] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1794), 1,
      sym__dedent,
    STATE(688), 1,
      aux_sym_filter_content_repeat1,
  [21292] = 3,
    ACTIONS(1796), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1798), 1,
      sym__newline,
    STATE(890), 1,
      sym__comment_content,
  [21302] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1800), 1,
      sym__dedent,
    STATE(729), 1,
      aux_sym_filter_content_repeat1,
  [21312] = 2,
    ACTIONS(1804), 1,
      anon_sym_,
    ACTIONS(1802), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21320] = 3,
    ACTIONS(1806), 1,
      aux_sym_filter_content_token2,
    STATE(214), 1,
      aux_sym__comment_repeat1,
    STATE(875), 1,
      sym__comment_content,
  [21330] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1808), 1,
      anon_sym_RPAREN,
  [21340] = 3,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(640), 1,
      aux_sym_script_block_repeat1,
  [21350] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1810), 1,
      anon_sym_RPAREN,
  [21360] = 3,
    ACTIONS(1812), 1,
      sym__un_delimited_javascript_line,
    STATE(257), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(367), 1,
      sym__multi_line_buf_code,
  [21370] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1814), 1,
      sym__dedent,
    STATE(716), 1,
      aux_sym_filter_content_repeat1,
  [21380] = 3,
    ACTIONS(1816), 1,
      sym__un_delimited_javascript_line,
    STATE(157), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(276), 1,
      sym__multi_line_buf_code,
  [21390] = 3,
    ACTIONS(1818), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1820), 1,
      sym__newline,
    STATE(865), 1,
      sym__comment_content,
  [21400] = 2,
    ACTIONS(1824), 1,
      anon_sym_,
    ACTIONS(1822), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21408] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1826), 1,
      anon_sym_RPAREN,
  [21418] = 1,
    ACTIONS(1828), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [21424] = 3,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(664), 1,
      aux_sym_script_block_repeat1,
  [21434] = 3,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    STATE(666), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [21444] = 3,
    ACTIONS(1830), 1,
      anon_sym_LPAREN,
    ACTIONS(1832), 1,
      sym__newline,
    STATE(930), 1,
      sym_mixin_attributes,
  [21454] = 2,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1834), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21462] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(370), 1,
      sym__single_line_buf_code,
    STATE(832), 1,
      sym__un_delimited_javascript,
  [21472] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(170), 1,
      sym__single_line_buf_code,
    STATE(864), 1,
      sym__un_delimited_javascript,
  [21482] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(167), 1,
      sym__single_line_buf_code,
    STATE(864), 1,
      sym__un_delimited_javascript,
  [21492] = 1,
    ACTIONS(1838), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [21498] = 3,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(365), 1,
      sym__single_line_buf_code,
    STATE(832), 1,
      sym__un_delimited_javascript,
  [21508] = 1,
    ACTIONS(1840), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [21514] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1842), 1,
      sym__dedent,
    STATE(754), 1,
      aux_sym_filter_content_repeat1,
  [21524] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1844), 1,
      sym__dedent,
    STATE(716), 1,
      aux_sym_filter_content_repeat1,
  [21534] = 3,
    ACTIONS(1846), 1,
      sym__un_delimited_javascript_line,
    STATE(168), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(262), 1,
      sym__multi_line_buf_code,
  [21544] = 3,
    ACTIONS(1657), 1,
      aux_sym_filter_content_token2,
    STATE(656), 1,
      aux_sym__comment_repeat1,
    STATE(825), 1,
      sym__comment_content,
  [21554] = 3,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(657), 1,
      aux_sym_script_block_repeat1,
  [21564] = 2,
    ACTIONS(1850), 1,
      anon_sym_,
    ACTIONS(1848), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21572] = 3,
    ACTIONS(1852), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1854), 1,
      sym__newline,
    STATE(891), 1,
      sym__comment_content,
  [21582] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
  [21592] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1858), 1,
      anon_sym_RPAREN,
  [21602] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1860), 1,
      sym__dedent,
    STATE(716), 1,
      aux_sym_filter_content_repeat1,
  [21612] = 1,
    ACTIONS(1862), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [21618] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
  [21628] = 3,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
    ACTIONS(1866), 1,
      anon_sym_RPAREN,
  [21638] = 1,
    ACTIONS(1639), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [21644] = 3,
    ACTIONS(1868), 1,
      anon_sym_COLON,
    ACTIONS(1870), 1,
      sym__newline,
    STATE(173), 1,
      sym__when_content,
  [21654] = 3,
    ACTIONS(1872), 1,
      aux_sym_filter_content_token2,
    STATE(130), 1,
      aux_sym__comment_repeat1,
    STATE(844), 1,
      sym__comment_content,
  [21664] = 3,
    ACTIONS(1874), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1876), 1,
      sym__newline,
    STATE(909), 1,
      sym__comment_content,
  [21674] = 3,
    ACTIONS(1661), 1,
      aux_sym_script_block_token1,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(668), 1,
      aux_sym_script_block_repeat1,
  [21684] = 3,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1878), 1,
      sym__dedent,
    STATE(746), 1,
      aux_sym_filter_content_repeat1,
  [21694] = 2,
    ACTIONS(1880), 1,
      sym_tag_name,
    STATE(143), 1,
      sym__block_content,
  [21701] = 2,
    ACTIONS(1882), 1,
      anon_sym_DQUOTE,
    ACTIONS(1884), 1,
      aux_sym_quoted_javascript_token2,
  [21708] = 2,
    ACTIONS(1880), 1,
      sym_tag_name,
    STATE(144), 1,
      sym__block_content,
  [21715] = 2,
    ACTIONS(791), 1,
      sym__indent,
    STATE(204), 1,
      sym_children,
  [21722] = 2,
    ACTIONS(932), 1,
      sym__indent,
    STATE(350), 1,
      sym_children,
  [21729] = 2,
    ACTIONS(909), 1,
      sym__indent,
    STATE(272), 1,
      sym_children,
  [21736] = 2,
    ACTIONS(1886), 1,
      anon_sym_DQUOTE,
    ACTIONS(1888), 1,
      aux_sym_quoted_javascript_token2,
  [21743] = 2,
    ACTIONS(1890), 1,
      sym_tag_name,
    STATE(333), 1,
      sym__block_content,
  [21750] = 2,
    ACTIONS(1892), 1,
      anon_sym_SQUOTE,
    ACTIONS(1894), 1,
      aux_sym_quoted_javascript_token1,
  [21757] = 2,
    ACTIONS(909), 1,
      sym__indent,
    STATE(256), 1,
      sym_children,
  [21764] = 2,
    ACTIONS(932), 1,
      sym__indent,
    STATE(345), 1,
      sym_children,
  [21771] = 2,
    ACTIONS(1896), 1,
      sym_tag_name,
    STATE(275), 1,
      sym__block_content,
  [21778] = 2,
    ACTIONS(1898), 1,
      aux_sym_mixin_attributes_token1,
    STATE(776), 1,
      aux_sym_mixin_attributes_repeat1,
  [21785] = 2,
    ACTIONS(637), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
  [21792] = 2,
    ACTIONS(1896), 1,
      sym_tag_name,
    STATE(277), 1,
      sym__block_content,
  [21799] = 2,
    ACTIONS(1901), 1,
      anon_sym_COMMA,
    ACTIONS(1903), 1,
      anon_sym_RPAREN,
  [21806] = 2,
    ACTIONS(932), 1,
      sym__indent,
    STATE(320), 1,
      sym_children,
  [21813] = 2,
    ACTIONS(1892), 1,
      anon_sym_DQUOTE,
    ACTIONS(1905), 1,
      aux_sym_quoted_javascript_token2,
  [21820] = 2,
    ACTIONS(1907), 1,
      sym_tag_name,
    STATE(243), 1,
      sym__block_content,
  [21827] = 2,
    ACTIONS(1896), 1,
      sym_tag_name,
    STATE(285), 1,
      sym__block_content,
  [21834] = 2,
    ACTIONS(1909), 1,
      aux_sym_mixin_attributes_token1,
    STATE(776), 1,
      aux_sym_mixin_attributes_repeat1,
  [21841] = 2,
    ACTIONS(1911), 1,
      anon_sym_COMMA,
    ACTIONS(1913), 1,
      anon_sym_RPAREN,
  [21848] = 2,
    ACTIONS(1901), 1,
      anon_sym_COMMA,
    ACTIONS(1915), 1,
      anon_sym_RPAREN,
  [21855] = 2,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_,
  [21862] = 1,
    ACTIONS(1759), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21867] = 2,
    ACTIONS(1907), 1,
      sym_tag_name,
    STATE(244), 1,
      sym__block_content,
  [21874] = 2,
    ACTIONS(1911), 1,
      anon_sym_COMMA,
    ACTIONS(1917), 1,
      anon_sym_RPAREN,
  [21881] = 2,
    ACTIONS(1882), 1,
      anon_sym_SQUOTE,
    ACTIONS(1919), 1,
      aux_sym_quoted_javascript_token1,
  [21888] = 1,
    ACTIONS(572), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [21893] = 2,
    ACTIONS(1890), 1,
      sym_tag_name,
    STATE(334), 1,
      sym__block_content,
  [21900] = 2,
    ACTIONS(1896), 1,
      sym_tag_name,
    STATE(286), 1,
      sym__block_content,
  [21907] = 1,
    ACTIONS(1755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21912] = 1,
    ACTIONS(1784), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [21917] = 2,
    ACTIONS(992), 1,
      sym__indent,
    STATE(390), 1,
      sym_children,
  [21924] = 1,
    ACTIONS(1921), 2,
      sym__newline,
      anon_sym_COLON,
  [21929] = 1,
    ACTIONS(1824), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21934] = 2,
    ACTIONS(932), 1,
      sym__indent,
    STATE(355), 1,
      sym_children,
  [21941] = 2,
    ACTIONS(992), 1,
      sym__indent,
    STATE(396), 1,
      sym_children,
  [21948] = 2,
    ACTIONS(1923), 1,
      sym_tag_name,
    STATE(393), 1,
      sym__block_content,
  [21955] = 2,
    ACTIONS(1923), 1,
      sym_tag_name,
    STATE(363), 1,
      sym__block_content,
  [21962] = 2,
    ACTIONS(1923), 1,
      sym_tag_name,
    STATE(387), 1,
      sym__block_content,
  [21969] = 2,
    ACTIONS(1923), 1,
      sym_tag_name,
    STATE(386), 1,
      sym__block_content,
  [21976] = 2,
    ACTIONS(1890), 1,
      sym_tag_name,
    STATE(327), 1,
      sym__block_content,
  [21983] = 2,
    ACTIONS(1907), 1,
      sym_tag_name,
    STATE(236), 1,
      sym__block_content,
  [21990] = 2,
    ACTIONS(791), 1,
      sym__indent,
    STATE(195), 1,
      sym_children,
  [21997] = 2,
    ACTIONS(1886), 1,
      anon_sym_SQUOTE,
    ACTIONS(1925), 1,
      aux_sym_quoted_javascript_token1,
  [22004] = 2,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(834), 1,
      sym__un_delimited_javascript,
  [22011] = 2,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(879), 1,
      sym__un_delimited_javascript,
  [22018] = 2,
    ACTIONS(637), 1,
      sym__indent,
    STATE(132), 1,
      sym_children,
  [22025] = 2,
    ACTIONS(1907), 1,
      sym_tag_name,
    STATE(235), 1,
      sym__block_content,
  [22032] = 2,
    ACTIONS(1880), 1,
      sym_tag_name,
    STATE(136), 1,
      sym__block_content,
  [22039] = 2,
    ACTIONS(1880), 1,
      sym_tag_name,
    STATE(138), 1,
      sym__block_content,
  [22046] = 2,
    ACTIONS(1890), 1,
      sym_tag_name,
    STATE(321), 1,
      sym__block_content,
  [22053] = 2,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(855), 1,
      sym__un_delimited_javascript,
  [22060] = 2,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(871), 1,
      sym__un_delimited_javascript,
  [22067] = 2,
    ACTIONS(1614), 1,
      sym__un_delimited_javascript_line,
    STATE(886), 1,
      sym__un_delimited_javascript,
  [22074] = 2,
    ACTIONS(932), 1,
      sym__indent,
    STATE(352), 1,
      sym_children,
  [22081] = 1,
    ACTIONS(1927), 1,
      sym__indent,
  [22085] = 1,
    ACTIONS(1929), 1,
      sym__newline,
  [22089] = 1,
    ACTIONS(1931), 1,
      sym__un_delimited_javascript_line,
  [22093] = 1,
    ACTIONS(1933), 1,
      sym_filter_name,
  [22097] = 1,
    ACTIONS(1935), 1,
      sym__newline,
  [22101] = 1,
    ACTIONS(1937), 1,
      aux_sym_extends_token1,
  [22105] = 1,
    ACTIONS(1939), 1,
      sym_filter_name,
  [22109] = 1,
    ACTIONS(1941), 1,
      sym__newline,
  [22113] = 1,
    ACTIONS(1943), 1,
      sym__newline,
  [22117] = 1,
    ACTIONS(1945), 1,
      sym__newline,
  [22121] = 1,
    ACTIONS(1947), 1,
      sym__newline,
  [22125] = 1,
    ACTIONS(1949), 1,
      sym__newline,
  [22129] = 1,
    ACTIONS(1951), 1,
      aux_sym_unbuffered_code_token1,
  [22133] = 1,
    ACTIONS(1953), 1,
      sym__newline,
  [22137] = 1,
    ACTIONS(1955), 1,
      aux_sym__attribute_token1,
  [22141] = 1,
    ACTIONS(1957), 1,
      sym__indent,
  [22145] = 1,
    ACTIONS(1959), 1,
      sym__newline,
  [22149] = 1,
    ACTIONS(1961), 1,
      sym__indent,
  [22153] = 1,
    ACTIONS(1963), 1,
      aux_sym_extends_token1,
  [22157] = 1,
    ACTIONS(1965), 1,
      sym__newline,
  [22161] = 1,
    ACTIONS(1967), 1,
      aux_sym_extends_token1,
  [22165] = 1,
    ACTIONS(1969), 1,
      sym_filter_name,
  [22169] = 1,
    ACTIONS(1971), 1,
      sym__indent,
  [22173] = 1,
    ACTIONS(1973), 1,
      sym__newline,
  [22177] = 1,
    ACTIONS(1975), 1,
      sym__newline,
  [22181] = 1,
    ACTIONS(1977), 1,
      aux_sym_unbuffered_code_token1,
  [22185] = 1,
    ACTIONS(1979), 1,
      ts_builtin_sym_end,
  [22189] = 1,
    ACTIONS(1981), 1,
      anon_sym_SQUOTE,
  [22193] = 1,
    ACTIONS(1983), 1,
      sym_tag_name,
  [22197] = 1,
    ACTIONS(1985), 1,
      sym_tag_name,
  [22201] = 1,
    ACTIONS(1981), 1,
      anon_sym_DQUOTE,
  [22205] = 1,
    ACTIONS(1987), 1,
      sym__newline,
  [22209] = 1,
    ACTIONS(1989), 1,
      sym__delimited_javascript,
  [22213] = 1,
    ACTIONS(1991), 1,
      aux_sym_unbuffered_code_token1,
  [22217] = 1,
    ACTIONS(1993), 1,
      sym__newline,
  [22221] = 1,
    ACTIONS(1995), 1,
      sym__delimited_javascript,
  [22225] = 1,
    ACTIONS(1997), 1,
      sym__indent,
  [22229] = 1,
    ACTIONS(1999), 1,
      sym__indent,
  [22233] = 1,
    ACTIONS(2001), 1,
      sym__indent,
  [22237] = 1,
    ACTIONS(2003), 1,
      sym__newline,
  [22241] = 1,
    ACTIONS(2005), 1,
      aux_sym_mixin_attributes_token1,
  [22245] = 1,
    ACTIONS(2007), 1,
      sym__indent,
  [22249] = 1,
    ACTIONS(2009), 1,
      sym__newline,
  [22253] = 1,
    ACTIONS(2011), 1,
      sym__newline,
  [22257] = 1,
    ACTIONS(2013), 1,
      sym__newline,
  [22261] = 1,
    ACTIONS(2015), 1,
      sym__newline,
  [22265] = 1,
    ACTIONS(2017), 1,
      sym__indent,
  [22269] = 1,
    ACTIONS(2019), 1,
      sym__newline,
  [22273] = 1,
    ACTIONS(2021), 1,
      aux_sym_filter_content_token2,
  [22277] = 1,
    ACTIONS(2023), 1,
      aux_sym_unbuffered_code_token1,
  [22281] = 1,
    ACTIONS(2025), 1,
      sym__newline,
  [22285] = 1,
    ACTIONS(2027), 1,
      aux_sym__when_keyword_token1,
  [22289] = 1,
    ACTIONS(2029), 1,
      sym__indent,
  [22293] = 1,
    ACTIONS(2031), 1,
      aux_sym_filter_content_token2,
  [22297] = 1,
    ACTIONS(2033), 1,
      sym__newline,
  [22301] = 1,
    ACTIONS(2035), 1,
      sym__newline,
  [22305] = 1,
    ACTIONS(2037), 1,
      sym__indent,
  [22309] = 1,
    ACTIONS(2039), 1,
      aux_sym_filter_content_token2,
  [22313] = 1,
    ACTIONS(2041), 1,
      sym__newline,
  [22317] = 1,
    ACTIONS(2043), 1,
      sym__newline,
  [22321] = 1,
    ACTIONS(2045), 1,
      aux_sym_filter_content_token2,
  [22325] = 1,
    ACTIONS(2047), 1,
      sym__indent,
  [22329] = 1,
    ACTIONS(2049), 1,
      sym__newline,
  [22333] = 1,
    ACTIONS(2051), 1,
      sym__newline,
  [22337] = 1,
    ACTIONS(2053), 1,
      aux_sym_unbuffered_code_token1,
  [22341] = 1,
    ACTIONS(2055), 1,
      sym__newline,
  [22345] = 1,
    ACTIONS(2057), 1,
      sym__indent,
  [22349] = 1,
    ACTIONS(2059), 1,
      sym__indent,
  [22353] = 1,
    ACTIONS(2061), 1,
      sym__indent,
  [22357] = 1,
    ACTIONS(2063), 1,
      sym__newline,
  [22361] = 1,
    ACTIONS(2065), 1,
      sym__newline,
  [22365] = 1,
    ACTIONS(2067), 1,
      sym__indent,
  [22369] = 1,
    ACTIONS(2069), 1,
      sym__newline,
  [22373] = 1,
    ACTIONS(2071), 1,
      sym_filter_name,
  [22377] = 1,
    ACTIONS(2073), 1,
      aux_sym_extends_token1,
  [22381] = 1,
    ACTIONS(2075), 1,
      sym__newline,
  [22385] = 1,
    ACTIONS(2077), 1,
      sym__newline,
  [22389] = 1,
    ACTIONS(1911), 1,
      anon_sym_COMMA,
  [22393] = 1,
    ACTIONS(2079), 1,
      sym__newline,
  [22397] = 1,
    ACTIONS(1901), 1,
      anon_sym_COMMA,
  [22401] = 1,
    ACTIONS(2081), 1,
      sym__newline,
  [22405] = 1,
    ACTIONS(2083), 1,
      anon_sym_RBRACE,
  [22409] = 1,
    ACTIONS(2085), 1,
      aux_sym_filter_content_token2,
  [22413] = 1,
    ACTIONS(2083), 1,
      anon_sym_RBRACE_RBRACE,
  [22417] = 1,
    ACTIONS(2087), 1,
      sym__newline,
  [22421] = 1,
    ACTIONS(2089), 1,
      anon_sym_SQUOTE,
  [22425] = 1,
    ACTIONS(2089), 1,
      anon_sym_DQUOTE,
  [22429] = 1,
    ACTIONS(2091), 1,
      sym__indent,
  [22433] = 1,
    ACTIONS(2093), 1,
      sym__newline,
  [22437] = 1,
    ACTIONS(2095), 1,
      sym__newline,
  [22441] = 1,
    ACTIONS(2097), 1,
      sym__newline,
  [22445] = 1,
    ACTIONS(2099), 1,
      sym_filter_name,
  [22449] = 1,
    ACTIONS(2101), 1,
      aux_sym_extends_token1,
  [22453] = 1,
    ACTIONS(2103), 1,
      sym__newline,
  [22457] = 1,
    ACTIONS(2105), 1,
      sym__indent,
  [22461] = 1,
    ACTIONS(2107), 1,
      sym__indent,
  [22465] = 1,
    ACTIONS(2109), 1,
      sym__indent,
  [22469] = 1,
    ACTIONS(2111), 1,
      sym__indent,
  [22473] = 1,
    ACTIONS(2113), 1,
      anon_sym_SQUOTE,
  [22477] = 1,
    ACTIONS(2115), 1,
      sym__newline,
  [22481] = 1,
    ACTIONS(2117), 1,
      sym__indent,
  [22485] = 1,
    ACTIONS(2119), 1,
      sym__indent,
  [22489] = 1,
    ACTIONS(2121), 1,
      sym__indent,
  [22493] = 1,
    ACTIONS(2123), 1,
      sym__indent,
  [22497] = 1,
    ACTIONS(2113), 1,
      anon_sym_DQUOTE,
  [22501] = 1,
    ACTIONS(2125), 1,
      sym__indent,
  [22505] = 1,
    ACTIONS(2127), 1,
      sym__indent,
  [22509] = 1,
    ACTIONS(2129), 1,
      sym__indent,
  [22513] = 1,
    ACTIONS(2131), 1,
      sym__indent,
  [22517] = 1,
    ACTIONS(2133), 1,
      sym__newline,
  [22521] = 1,
    ACTIONS(2135), 1,
      sym__indent,
  [22525] = 1,
    ACTIONS(2137), 1,
      sym__indent,
  [22529] = 1,
    ACTIONS(2139), 1,
      sym__indent,
  [22533] = 1,
    ACTIONS(2141), 1,
      sym__indent,
  [22537] = 1,
    ACTIONS(2143), 1,
      sym__indent,
  [22541] = 1,
    ACTIONS(2145), 1,
      sym__indent,
  [22545] = 1,
    ACTIONS(2147), 1,
      sym__indent,
  [22549] = 1,
    ACTIONS(2149), 1,
      sym__indent,
  [22553] = 1,
    ACTIONS(2151), 1,
      sym__un_delimited_javascript_line,
  [22557] = 1,
    ACTIONS(2153), 1,
      sym__newline,
  [22561] = 1,
    ACTIONS(2155), 1,
      sym__newline,
  [22565] = 1,
    ACTIONS(2157), 1,
      sym__newline,
  [22569] = 1,
    ACTIONS(2159), 1,
      sym__un_delimited_javascript_line,
  [22573] = 1,
    ACTIONS(2161), 1,
      sym__newline,
  [22577] = 1,
    ACTIONS(2163), 1,
      sym__newline,
  [22581] = 1,
    ACTIONS(2165), 1,
      sym__newline,
  [22585] = 1,
    ACTIONS(2167), 1,
      sym__newline,
  [22589] = 1,
    ACTIONS(2169), 1,
      sym__newline,
  [22593] = 1,
    ACTIONS(2171), 1,
      sym__newline,
  [22597] = 1,
    ACTIONS(2173), 1,
      sym__newline,
  [22601] = 1,
    ACTIONS(2175), 1,
      sym__newline,
  [22605] = 1,
    ACTIONS(2177), 1,
      sym__newline,
  [22609] = 1,
    ACTIONS(2179), 1,
      sym__newline,
  [22613] = 1,
    ACTIONS(2181), 1,
      sym__newline,
  [22617] = 1,
    ACTIONS(2183), 1,
      sym__newline,
  [22621] = 1,
    ACTIONS(2185), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 388,
  [SMALL_STATE(7)] = 484,
  [SMALL_STATE(8)] = 578,
  [SMALL_STATE(9)] = 671,
  [SMALL_STATE(10)] = 764,
  [SMALL_STATE(11)] = 857,
  [SMALL_STATE(12)] = 950,
  [SMALL_STATE(13)] = 1039,
  [SMALL_STATE(14)] = 1128,
  [SMALL_STATE(15)] = 1217,
  [SMALL_STATE(16)] = 1306,
  [SMALL_STATE(17)] = 1395,
  [SMALL_STATE(18)] = 1484,
  [SMALL_STATE(19)] = 1573,
  [SMALL_STATE(20)] = 1662,
  [SMALL_STATE(21)] = 1751,
  [SMALL_STATE(22)] = 1840,
  [SMALL_STATE(23)] = 1929,
  [SMALL_STATE(24)] = 2018,
  [SMALL_STATE(25)] = 2107,
  [SMALL_STATE(26)] = 2196,
  [SMALL_STATE(27)] = 2285,
  [SMALL_STATE(28)] = 2374,
  [SMALL_STATE(29)] = 2463,
  [SMALL_STATE(30)] = 2552,
  [SMALL_STATE(31)] = 2641,
  [SMALL_STATE(32)] = 2730,
  [SMALL_STATE(33)] = 2819,
  [SMALL_STATE(34)] = 2908,
  [SMALL_STATE(35)] = 2997,
  [SMALL_STATE(36)] = 3086,
  [SMALL_STATE(37)] = 3175,
  [SMALL_STATE(38)] = 3264,
  [SMALL_STATE(39)] = 3353,
  [SMALL_STATE(40)] = 3442,
  [SMALL_STATE(41)] = 3531,
  [SMALL_STATE(42)] = 3620,
  [SMALL_STATE(43)] = 3709,
  [SMALL_STATE(44)] = 3795,
  [SMALL_STATE(45)] = 3881,
  [SMALL_STATE(46)] = 3967,
  [SMALL_STATE(47)] = 4053,
  [SMALL_STATE(48)] = 4139,
  [SMALL_STATE(49)] = 4225,
  [SMALL_STATE(50)] = 4311,
  [SMALL_STATE(51)] = 4363,
  [SMALL_STATE(52)] = 4405,
  [SMALL_STATE(53)] = 4447,
  [SMALL_STATE(54)] = 4497,
  [SMALL_STATE(55)] = 4541,
  [SMALL_STATE(56)] = 4585,
  [SMALL_STATE(57)] = 4631,
  [SMALL_STATE(58)] = 4670,
  [SMALL_STATE(59)] = 4709,
  [SMALL_STATE(60)] = 4748,
  [SMALL_STATE(61)] = 4787,
  [SMALL_STATE(62)] = 4826,
  [SMALL_STATE(63)] = 4865,
  [SMALL_STATE(64)] = 4914,
  [SMALL_STATE(65)] = 4963,
  [SMALL_STATE(66)] = 5002,
  [SMALL_STATE(67)] = 5041,
  [SMALL_STATE(68)] = 5080,
  [SMALL_STATE(69)] = 5119,
  [SMALL_STATE(70)] = 5158,
  [SMALL_STATE(71)] = 5200,
  [SMALL_STATE(72)] = 5238,
  [SMALL_STATE(73)] = 5278,
  [SMALL_STATE(74)] = 5316,
  [SMALL_STATE(75)] = 5360,
  [SMALL_STATE(76)] = 5398,
  [SMALL_STATE(77)] = 5432,
  [SMALL_STATE(78)] = 5468,
  [SMALL_STATE(79)] = 5502,
  [SMALL_STATE(80)] = 5538,
  [SMALL_STATE(81)] = 5576,
  [SMALL_STATE(82)] = 5614,
  [SMALL_STATE(83)] = 5652,
  [SMALL_STATE(84)] = 5686,
  [SMALL_STATE(85)] = 5724,
  [SMALL_STATE(86)] = 5758,
  [SMALL_STATE(87)] = 5792,
  [SMALL_STATE(88)] = 5832,
  [SMALL_STATE(89)] = 5872,
  [SMALL_STATE(90)] = 5914,
  [SMALL_STATE(91)] = 5952,
  [SMALL_STATE(92)] = 5985,
  [SMALL_STATE(93)] = 6022,
  [SMALL_STATE(94)] = 6059,
  [SMALL_STATE(95)] = 6096,
  [SMALL_STATE(96)] = 6129,
  [SMALL_STATE(97)] = 6162,
  [SMALL_STATE(98)] = 6195,
  [SMALL_STATE(99)] = 6228,
  [SMALL_STATE(100)] = 6261,
  [SMALL_STATE(101)] = 6308,
  [SMALL_STATE(102)] = 6341,
  [SMALL_STATE(103)] = 6374,
  [SMALL_STATE(104)] = 6417,
  [SMALL_STATE(105)] = 6450,
  [SMALL_STATE(106)] = 6483,
  [SMALL_STATE(107)] = 6524,
  [SMALL_STATE(108)] = 6557,
  [SMALL_STATE(109)] = 6590,
  [SMALL_STATE(110)] = 6625,
  [SMALL_STATE(111)] = 6658,
  [SMALL_STATE(112)] = 6691,
  [SMALL_STATE(113)] = 6726,
  [SMALL_STATE(114)] = 6759,
  [SMALL_STATE(115)] = 6796,
  [SMALL_STATE(116)] = 6833,
  [SMALL_STATE(117)] = 6866,
  [SMALL_STATE(118)] = 6907,
  [SMALL_STATE(119)] = 6946,
  [SMALL_STATE(120)] = 6979,
  [SMALL_STATE(121)] = 7012,
  [SMALL_STATE(122)] = 7055,
  [SMALL_STATE(123)] = 7092,
  [SMALL_STATE(124)] = 7125,
  [SMALL_STATE(125)] = 7158,
  [SMALL_STATE(126)] = 7191,
  [SMALL_STATE(127)] = 7224,
  [SMALL_STATE(128)] = 7259,
  [SMALL_STATE(129)] = 7296,
  [SMALL_STATE(130)] = 7329,
  [SMALL_STATE(131)] = 7368,
  [SMALL_STATE(132)] = 7401,
  [SMALL_STATE(133)] = 7434,
  [SMALL_STATE(134)] = 7467,
  [SMALL_STATE(135)] = 7504,
  [SMALL_STATE(136)] = 7537,
  [SMALL_STATE(137)] = 7570,
  [SMALL_STATE(138)] = 7607,
  [SMALL_STATE(139)] = 7640,
  [SMALL_STATE(140)] = 7673,
  [SMALL_STATE(141)] = 7706,
  [SMALL_STATE(142)] = 7739,
  [SMALL_STATE(143)] = 7772,
  [SMALL_STATE(144)] = 7805,
  [SMALL_STATE(145)] = 7838,
  [SMALL_STATE(146)] = 7871,
  [SMALL_STATE(147)] = 7908,
  [SMALL_STATE(148)] = 7941,
  [SMALL_STATE(149)] = 7974,
  [SMALL_STATE(150)] = 8007,
  [SMALL_STATE(151)] = 8040,
  [SMALL_STATE(152)] = 8072,
  [SMALL_STATE(153)] = 8108,
  [SMALL_STATE(154)] = 8140,
  [SMALL_STATE(155)] = 8172,
  [SMALL_STATE(156)] = 8208,
  [SMALL_STATE(157)] = 8242,
  [SMALL_STATE(158)] = 8278,
  [SMALL_STATE(159)] = 8314,
  [SMALL_STATE(160)] = 8350,
  [SMALL_STATE(161)] = 8386,
  [SMALL_STATE(162)] = 8422,
  [SMALL_STATE(163)] = 8454,
  [SMALL_STATE(164)] = 8486,
  [SMALL_STATE(165)] = 8522,
  [SMALL_STATE(166)] = 8558,
  [SMALL_STATE(167)] = 8594,
  [SMALL_STATE(168)] = 8626,
  [SMALL_STATE(169)] = 8662,
  [SMALL_STATE(170)] = 8694,
  [SMALL_STATE(171)] = 8726,
  [SMALL_STATE(172)] = 8760,
  [SMALL_STATE(173)] = 8792,
  [SMALL_STATE(174)] = 8826,
  [SMALL_STATE(175)] = 8858,
  [SMALL_STATE(176)] = 8890,
  [SMALL_STATE(177)] = 8922,
  [SMALL_STATE(178)] = 8954,
  [SMALL_STATE(179)] = 8990,
  [SMALL_STATE(180)] = 9022,
  [SMALL_STATE(181)] = 9054,
  [SMALL_STATE(182)] = 9086,
  [SMALL_STATE(183)] = 9124,
  [SMALL_STATE(184)] = 9156,
  [SMALL_STATE(185)] = 9188,
  [SMALL_STATE(186)] = 9224,
  [SMALL_STATE(187)] = 9262,
  [SMALL_STATE(188)] = 9294,
  [SMALL_STATE(189)] = 9326,
  [SMALL_STATE(190)] = 9357,
  [SMALL_STATE(191)] = 9390,
  [SMALL_STATE(192)] = 9421,
  [SMALL_STATE(193)] = 9452,
  [SMALL_STATE(194)] = 9487,
  [SMALL_STATE(195)] = 9518,
  [SMALL_STATE(196)] = 9549,
  [SMALL_STATE(197)] = 9580,
  [SMALL_STATE(198)] = 9611,
  [SMALL_STATE(199)] = 9642,
  [SMALL_STATE(200)] = 9677,
  [SMALL_STATE(201)] = 9708,
  [SMALL_STATE(202)] = 9741,
  [SMALL_STATE(203)] = 9772,
  [SMALL_STATE(204)] = 9803,
  [SMALL_STATE(205)] = 9834,
  [SMALL_STATE(206)] = 9865,
  [SMALL_STATE(207)] = 9896,
  [SMALL_STATE(208)] = 9927,
  [SMALL_STATE(209)] = 9962,
  [SMALL_STATE(210)] = 9993,
  [SMALL_STATE(211)] = 10024,
  [SMALL_STATE(212)] = 10059,
  [SMALL_STATE(213)] = 10090,
  [SMALL_STATE(214)] = 10121,
  [SMALL_STATE(215)] = 10158,
  [SMALL_STATE(216)] = 10195,
  [SMALL_STATE(217)] = 10226,
  [SMALL_STATE(218)] = 10257,
  [SMALL_STATE(219)] = 10292,
  [SMALL_STATE(220)] = 10323,
  [SMALL_STATE(221)] = 10354,
  [SMALL_STATE(222)] = 10385,
  [SMALL_STATE(223)] = 10420,
  [SMALL_STATE(224)] = 10451,
  [SMALL_STATE(225)] = 10482,
  [SMALL_STATE(226)] = 10513,
  [SMALL_STATE(227)] = 10544,
  [SMALL_STATE(228)] = 10579,
  [SMALL_STATE(229)] = 10612,
  [SMALL_STATE(230)] = 10647,
  [SMALL_STATE(231)] = 10678,
  [SMALL_STATE(232)] = 10709,
  [SMALL_STATE(233)] = 10740,
  [SMALL_STATE(234)] = 10771,
  [SMALL_STATE(235)] = 10802,
  [SMALL_STATE(236)] = 10833,
  [SMALL_STATE(237)] = 10864,
  [SMALL_STATE(238)] = 10895,
  [SMALL_STATE(239)] = 10926,
  [SMALL_STATE(240)] = 10957,
  [SMALL_STATE(241)] = 10988,
  [SMALL_STATE(242)] = 11019,
  [SMALL_STATE(243)] = 11050,
  [SMALL_STATE(244)] = 11081,
  [SMALL_STATE(245)] = 11112,
  [SMALL_STATE(246)] = 11143,
  [SMALL_STATE(247)] = 11174,
  [SMALL_STATE(248)] = 11207,
  [SMALL_STATE(249)] = 11248,
  [SMALL_STATE(250)] = 11279,
  [SMALL_STATE(251)] = 11310,
  [SMALL_STATE(252)] = 11345,
  [SMALL_STATE(253)] = 11378,
  [SMALL_STATE(254)] = 11410,
  [SMALL_STATE(255)] = 11442,
  [SMALL_STATE(256)] = 11476,
  [SMALL_STATE(257)] = 11506,
  [SMALL_STATE(258)] = 11540,
  [SMALL_STATE(259)] = 11570,
  [SMALL_STATE(260)] = 11600,
  [SMALL_STATE(261)] = 11630,
  [SMALL_STATE(262)] = 11662,
  [SMALL_STATE(263)] = 11694,
  [SMALL_STATE(264)] = 11724,
  [SMALL_STATE(265)] = 11754,
  [SMALL_STATE(266)] = 11784,
  [SMALL_STATE(267)] = 11814,
  [SMALL_STATE(268)] = 11844,
  [SMALL_STATE(269)] = 11874,
  [SMALL_STATE(270)] = 11904,
  [SMALL_STATE(271)] = 11936,
  [SMALL_STATE(272)] = 11968,
  [SMALL_STATE(273)] = 11998,
  [SMALL_STATE(274)] = 12030,
  [SMALL_STATE(275)] = 12060,
  [SMALL_STATE(276)] = 12090,
  [SMALL_STATE(277)] = 12122,
  [SMALL_STATE(278)] = 12152,
  [SMALL_STATE(279)] = 12186,
  [SMALL_STATE(280)] = 12216,
  [SMALL_STATE(281)] = 12246,
  [SMALL_STATE(282)] = 12276,
  [SMALL_STATE(283)] = 12306,
  [SMALL_STATE(284)] = 12336,
  [SMALL_STATE(285)] = 12370,
  [SMALL_STATE(286)] = 12400,
  [SMALL_STATE(287)] = 12430,
  [SMALL_STATE(288)] = 12464,
  [SMALL_STATE(289)] = 12494,
  [SMALL_STATE(290)] = 12528,
  [SMALL_STATE(291)] = 12558,
  [SMALL_STATE(292)] = 12588,
  [SMALL_STATE(293)] = 12622,
  [SMALL_STATE(294)] = 12652,
  [SMALL_STATE(295)] = 12682,
  [SMALL_STATE(296)] = 12712,
  [SMALL_STATE(297)] = 12746,
  [SMALL_STATE(298)] = 12776,
  [SMALL_STATE(299)] = 12806,
  [SMALL_STATE(300)] = 12836,
  [SMALL_STATE(301)] = 12870,
  [SMALL_STATE(302)] = 12900,
  [SMALL_STATE(303)] = 12930,
  [SMALL_STATE(304)] = 12960,
  [SMALL_STATE(305)] = 12990,
  [SMALL_STATE(306)] = 13020,
  [SMALL_STATE(307)] = 13054,
  [SMALL_STATE(308)] = 13084,
  [SMALL_STATE(309)] = 13114,
  [SMALL_STATE(310)] = 13144,
  [SMALL_STATE(311)] = 13174,
  [SMALL_STATE(312)] = 13204,
  [SMALL_STATE(313)] = 13234,
  [SMALL_STATE(314)] = 13263,
  [SMALL_STATE(315)] = 13292,
  [SMALL_STATE(316)] = 13321,
  [SMALL_STATE(317)] = 13350,
  [SMALL_STATE(318)] = 13381,
  [SMALL_STATE(319)] = 13410,
  [SMALL_STATE(320)] = 13439,
  [SMALL_STATE(321)] = 13468,
  [SMALL_STATE(322)] = 13497,
  [SMALL_STATE(323)] = 13526,
  [SMALL_STATE(324)] = 13555,
  [SMALL_STATE(325)] = 13584,
  [SMALL_STATE(326)] = 13613,
  [SMALL_STATE(327)] = 13642,
  [SMALL_STATE(328)] = 13671,
  [SMALL_STATE(329)] = 13700,
  [SMALL_STATE(330)] = 13729,
  [SMALL_STATE(331)] = 13758,
  [SMALL_STATE(332)] = 13787,
  [SMALL_STATE(333)] = 13818,
  [SMALL_STATE(334)] = 13847,
  [SMALL_STATE(335)] = 13876,
  [SMALL_STATE(336)] = 13905,
  [SMALL_STATE(337)] = 13934,
  [SMALL_STATE(338)] = 13963,
  [SMALL_STATE(339)] = 13992,
  [SMALL_STATE(340)] = 14021,
  [SMALL_STATE(341)] = 14050,
  [SMALL_STATE(342)] = 14079,
  [SMALL_STATE(343)] = 14108,
  [SMALL_STATE(344)] = 14137,
  [SMALL_STATE(345)] = 14166,
  [SMALL_STATE(346)] = 14195,
  [SMALL_STATE(347)] = 14224,
  [SMALL_STATE(348)] = 14253,
  [SMALL_STATE(349)] = 14282,
  [SMALL_STATE(350)] = 14311,
  [SMALL_STATE(351)] = 14340,
  [SMALL_STATE(352)] = 14369,
  [SMALL_STATE(353)] = 14398,
  [SMALL_STATE(354)] = 14427,
  [SMALL_STATE(355)] = 14456,
  [SMALL_STATE(356)] = 14485,
  [SMALL_STATE(357)] = 14514,
  [SMALL_STATE(358)] = 14543,
  [SMALL_STATE(359)] = 14572,
  [SMALL_STATE(360)] = 14601,
  [SMALL_STATE(361)] = 14630,
  [SMALL_STATE(362)] = 14659,
  [SMALL_STATE(363)] = 14687,
  [SMALL_STATE(364)] = 14715,
  [SMALL_STATE(365)] = 14743,
  [SMALL_STATE(366)] = 14771,
  [SMALL_STATE(367)] = 14799,
  [SMALL_STATE(368)] = 14829,
  [SMALL_STATE(369)] = 14857,
  [SMALL_STATE(370)] = 14885,
  [SMALL_STATE(371)] = 14913,
  [SMALL_STATE(372)] = 14941,
  [SMALL_STATE(373)] = 14969,
  [SMALL_STATE(374)] = 14997,
  [SMALL_STATE(375)] = 15025,
  [SMALL_STATE(376)] = 15053,
  [SMALL_STATE(377)] = 15081,
  [SMALL_STATE(378)] = 15109,
  [SMALL_STATE(379)] = 15137,
  [SMALL_STATE(380)] = 15165,
  [SMALL_STATE(381)] = 15193,
  [SMALL_STATE(382)] = 15221,
  [SMALL_STATE(383)] = 15249,
  [SMALL_STATE(384)] = 15277,
  [SMALL_STATE(385)] = 15305,
  [SMALL_STATE(386)] = 15333,
  [SMALL_STATE(387)] = 15361,
  [SMALL_STATE(388)] = 15389,
  [SMALL_STATE(389)] = 15417,
  [SMALL_STATE(390)] = 15445,
  [SMALL_STATE(391)] = 15473,
  [SMALL_STATE(392)] = 15501,
  [SMALL_STATE(393)] = 15529,
  [SMALL_STATE(394)] = 15557,
  [SMALL_STATE(395)] = 15585,
  [SMALL_STATE(396)] = 15613,
  [SMALL_STATE(397)] = 15641,
  [SMALL_STATE(398)] = 15669,
  [SMALL_STATE(399)] = 15697,
  [SMALL_STATE(400)] = 15725,
  [SMALL_STATE(401)] = 15755,
  [SMALL_STATE(402)] = 15787,
  [SMALL_STATE(403)] = 15816,
  [SMALL_STATE(404)] = 15845,
  [SMALL_STATE(405)] = 15885,
  [SMALL_STATE(406)] = 15911,
  [SMALL_STATE(407)] = 15951,
  [SMALL_STATE(408)] = 15991,
  [SMALL_STATE(409)] = 16031,
  [SMALL_STATE(410)] = 16057,
  [SMALL_STATE(411)] = 16097,
  [SMALL_STATE(412)] = 16137,
  [SMALL_STATE(413)] = 16177,
  [SMALL_STATE(414)] = 16217,
  [SMALL_STATE(415)] = 16257,
  [SMALL_STATE(416)] = 16297,
  [SMALL_STATE(417)] = 16337,
  [SMALL_STATE(418)] = 16377,
  [SMALL_STATE(419)] = 16417,
  [SMALL_STATE(420)] = 16457,
  [SMALL_STATE(421)] = 16477,
  [SMALL_STATE(422)] = 16504,
  [SMALL_STATE(423)] = 16531,
  [SMALL_STATE(424)] = 16556,
  [SMALL_STATE(425)] = 16583,
  [SMALL_STATE(426)] = 16608,
  [SMALL_STATE(427)] = 16635,
  [SMALL_STATE(428)] = 16660,
  [SMALL_STATE(429)] = 16687,
  [SMALL_STATE(430)] = 16714,
  [SMALL_STATE(431)] = 16739,
  [SMALL_STATE(432)] = 16766,
  [SMALL_STATE(433)] = 16791,
  [SMALL_STATE(434)] = 16816,
  [SMALL_STATE(435)] = 16843,
  [SMALL_STATE(436)] = 16868,
  [SMALL_STATE(437)] = 16893,
  [SMALL_STATE(438)] = 16918,
  [SMALL_STATE(439)] = 16945,
  [SMALL_STATE(440)] = 16972,
  [SMALL_STATE(441)] = 16999,
  [SMALL_STATE(442)] = 17026,
  [SMALL_STATE(443)] = 17051,
  [SMALL_STATE(444)] = 17076,
  [SMALL_STATE(445)] = 17101,
  [SMALL_STATE(446)] = 17126,
  [SMALL_STATE(447)] = 17153,
  [SMALL_STATE(448)] = 17180,
  [SMALL_STATE(449)] = 17204,
  [SMALL_STATE(450)] = 17228,
  [SMALL_STATE(451)] = 17252,
  [SMALL_STATE(452)] = 17276,
  [SMALL_STATE(453)] = 17300,
  [SMALL_STATE(454)] = 17324,
  [SMALL_STATE(455)] = 17348,
  [SMALL_STATE(456)] = 17372,
  [SMALL_STATE(457)] = 17396,
  [SMALL_STATE(458)] = 17420,
  [SMALL_STATE(459)] = 17444,
  [SMALL_STATE(460)] = 17468,
  [SMALL_STATE(461)] = 17492,
  [SMALL_STATE(462)] = 17516,
  [SMALL_STATE(463)] = 17540,
  [SMALL_STATE(464)] = 17564,
  [SMALL_STATE(465)] = 17588,
  [SMALL_STATE(466)] = 17612,
  [SMALL_STATE(467)] = 17636,
  [SMALL_STATE(468)] = 17660,
  [SMALL_STATE(469)] = 17684,
  [SMALL_STATE(470)] = 17707,
  [SMALL_STATE(471)] = 17730,
  [SMALL_STATE(472)] = 17753,
  [SMALL_STATE(473)] = 17776,
  [SMALL_STATE(474)] = 17799,
  [SMALL_STATE(475)] = 17822,
  [SMALL_STATE(476)] = 17845,
  [SMALL_STATE(477)] = 17868,
  [SMALL_STATE(478)] = 17891,
  [SMALL_STATE(479)] = 17914,
  [SMALL_STATE(480)] = 17937,
  [SMALL_STATE(481)] = 17960,
  [SMALL_STATE(482)] = 17983,
  [SMALL_STATE(483)] = 18006,
  [SMALL_STATE(484)] = 18029,
  [SMALL_STATE(485)] = 18049,
  [SMALL_STATE(486)] = 18069,
  [SMALL_STATE(487)] = 18089,
  [SMALL_STATE(488)] = 18103,
  [SMALL_STATE(489)] = 18117,
  [SMALL_STATE(490)] = 18131,
  [SMALL_STATE(491)] = 18147,
  [SMALL_STATE(492)] = 18161,
  [SMALL_STATE(493)] = 18181,
  [SMALL_STATE(494)] = 18195,
  [SMALL_STATE(495)] = 18215,
  [SMALL_STATE(496)] = 18235,
  [SMALL_STATE(497)] = 18255,
  [SMALL_STATE(498)] = 18275,
  [SMALL_STATE(499)] = 18295,
  [SMALL_STATE(500)] = 18315,
  [SMALL_STATE(501)] = 18335,
  [SMALL_STATE(502)] = 18355,
  [SMALL_STATE(503)] = 18375,
  [SMALL_STATE(504)] = 18395,
  [SMALL_STATE(505)] = 18409,
  [SMALL_STATE(506)] = 18429,
  [SMALL_STATE(507)] = 18445,
  [SMALL_STATE(508)] = 18465,
  [SMALL_STATE(509)] = 18485,
  [SMALL_STATE(510)] = 18505,
  [SMALL_STATE(511)] = 18521,
  [SMALL_STATE(512)] = 18541,
  [SMALL_STATE(513)] = 18561,
  [SMALL_STATE(514)] = 18573,
  [SMALL_STATE(515)] = 18593,
  [SMALL_STATE(516)] = 18613,
  [SMALL_STATE(517)] = 18633,
  [SMALL_STATE(518)] = 18649,
  [SMALL_STATE(519)] = 18669,
  [SMALL_STATE(520)] = 18689,
  [SMALL_STATE(521)] = 18701,
  [SMALL_STATE(522)] = 18715,
  [SMALL_STATE(523)] = 18735,
  [SMALL_STATE(524)] = 18755,
  [SMALL_STATE(525)] = 18775,
  [SMALL_STATE(526)] = 18791,
  [SMALL_STATE(527)] = 18811,
  [SMALL_STATE(528)] = 18825,
  [SMALL_STATE(529)] = 18845,
  [SMALL_STATE(530)] = 18865,
  [SMALL_STATE(531)] = 18885,
  [SMALL_STATE(532)] = 18905,
  [SMALL_STATE(533)] = 18921,
  [SMALL_STATE(534)] = 18941,
  [SMALL_STATE(535)] = 18961,
  [SMALL_STATE(536)] = 18981,
  [SMALL_STATE(537)] = 19001,
  [SMALL_STATE(538)] = 19021,
  [SMALL_STATE(539)] = 19041,
  [SMALL_STATE(540)] = 19057,
  [SMALL_STATE(541)] = 19077,
  [SMALL_STATE(542)] = 19097,
  [SMALL_STATE(543)] = 19107,
  [SMALL_STATE(544)] = 19127,
  [SMALL_STATE(545)] = 19147,
  [SMALL_STATE(546)] = 19167,
  [SMALL_STATE(547)] = 19187,
  [SMALL_STATE(548)] = 19207,
  [SMALL_STATE(549)] = 19227,
  [SMALL_STATE(550)] = 19239,
  [SMALL_STATE(551)] = 19255,
  [SMALL_STATE(552)] = 19275,
  [SMALL_STATE(553)] = 19295,
  [SMALL_STATE(554)] = 19315,
  [SMALL_STATE(555)] = 19335,
  [SMALL_STATE(556)] = 19351,
  [SMALL_STATE(557)] = 19371,
  [SMALL_STATE(558)] = 19391,
  [SMALL_STATE(559)] = 19411,
  [SMALL_STATE(560)] = 19428,
  [SMALL_STATE(561)] = 19445,
  [SMALL_STATE(562)] = 19462,
  [SMALL_STATE(563)] = 19475,
  [SMALL_STATE(564)] = 19492,
  [SMALL_STATE(565)] = 19509,
  [SMALL_STATE(566)] = 19526,
  [SMALL_STATE(567)] = 19543,
  [SMALL_STATE(568)] = 19560,
  [SMALL_STATE(569)] = 19577,
  [SMALL_STATE(570)] = 19594,
  [SMALL_STATE(571)] = 19611,
  [SMALL_STATE(572)] = 19624,
  [SMALL_STATE(573)] = 19641,
  [SMALL_STATE(574)] = 19656,
  [SMALL_STATE(575)] = 19673,
  [SMALL_STATE(576)] = 19684,
  [SMALL_STATE(577)] = 19701,
  [SMALL_STATE(578)] = 19718,
  [SMALL_STATE(579)] = 19731,
  [SMALL_STATE(580)] = 19748,
  [SMALL_STATE(581)] = 19761,
  [SMALL_STATE(582)] = 19774,
  [SMALL_STATE(583)] = 19791,
  [SMALL_STATE(584)] = 19808,
  [SMALL_STATE(585)] = 19823,
  [SMALL_STATE(586)] = 19840,
  [SMALL_STATE(587)] = 19857,
  [SMALL_STATE(588)] = 19870,
  [SMALL_STATE(589)] = 19887,
  [SMALL_STATE(590)] = 19904,
  [SMALL_STATE(591)] = 19921,
  [SMALL_STATE(592)] = 19938,
  [SMALL_STATE(593)] = 19955,
  [SMALL_STATE(594)] = 19972,
  [SMALL_STATE(595)] = 19985,
  [SMALL_STATE(596)] = 20002,
  [SMALL_STATE(597)] = 20019,
  [SMALL_STATE(598)] = 20032,
  [SMALL_STATE(599)] = 20049,
  [SMALL_STATE(600)] = 20066,
  [SMALL_STATE(601)] = 20080,
  [SMALL_STATE(602)] = 20094,
  [SMALL_STATE(603)] = 20106,
  [SMALL_STATE(604)] = 20118,
  [SMALL_STATE(605)] = 20126,
  [SMALL_STATE(606)] = 20134,
  [SMALL_STATE(607)] = 20146,
  [SMALL_STATE(608)] = 20154,
  [SMALL_STATE(609)] = 20162,
  [SMALL_STATE(610)] = 20170,
  [SMALL_STATE(611)] = 20178,
  [SMALL_STATE(612)] = 20192,
  [SMALL_STATE(613)] = 20200,
  [SMALL_STATE(614)] = 20208,
  [SMALL_STATE(615)] = 20216,
  [SMALL_STATE(616)] = 20226,
  [SMALL_STATE(617)] = 20234,
  [SMALL_STATE(618)] = 20248,
  [SMALL_STATE(619)] = 20260,
  [SMALL_STATE(620)] = 20268,
  [SMALL_STATE(621)] = 20276,
  [SMALL_STATE(622)] = 20290,
  [SMALL_STATE(623)] = 20298,
  [SMALL_STATE(624)] = 20306,
  [SMALL_STATE(625)] = 20319,
  [SMALL_STATE(626)] = 20328,
  [SMALL_STATE(627)] = 20337,
  [SMALL_STATE(628)] = 20346,
  [SMALL_STATE(629)] = 20355,
  [SMALL_STATE(630)] = 20364,
  [SMALL_STATE(631)] = 20373,
  [SMALL_STATE(632)] = 20384,
  [SMALL_STATE(633)] = 20397,
  [SMALL_STATE(634)] = 20410,
  [SMALL_STATE(635)] = 20419,
  [SMALL_STATE(636)] = 20432,
  [SMALL_STATE(637)] = 20441,
  [SMALL_STATE(638)] = 20454,
  [SMALL_STATE(639)] = 20467,
  [SMALL_STATE(640)] = 20476,
  [SMALL_STATE(641)] = 20489,
  [SMALL_STATE(642)] = 20498,
  [SMALL_STATE(643)] = 20511,
  [SMALL_STATE(644)] = 20520,
  [SMALL_STATE(645)] = 20529,
  [SMALL_STATE(646)] = 20538,
  [SMALL_STATE(647)] = 20547,
  [SMALL_STATE(648)] = 20556,
  [SMALL_STATE(649)] = 20565,
  [SMALL_STATE(650)] = 20574,
  [SMALL_STATE(651)] = 20583,
  [SMALL_STATE(652)] = 20596,
  [SMALL_STATE(653)] = 20605,
  [SMALL_STATE(654)] = 20614,
  [SMALL_STATE(655)] = 20627,
  [SMALL_STATE(656)] = 20636,
  [SMALL_STATE(657)] = 20649,
  [SMALL_STATE(658)] = 20662,
  [SMALL_STATE(659)] = 20671,
  [SMALL_STATE(660)] = 20680,
  [SMALL_STATE(661)] = 20689,
  [SMALL_STATE(662)] = 20698,
  [SMALL_STATE(663)] = 20707,
  [SMALL_STATE(664)] = 20720,
  [SMALL_STATE(665)] = 20733,
  [SMALL_STATE(666)] = 20746,
  [SMALL_STATE(667)] = 20759,
  [SMALL_STATE(668)] = 20768,
  [SMALL_STATE(669)] = 20781,
  [SMALL_STATE(670)] = 20794,
  [SMALL_STATE(671)] = 20803,
  [SMALL_STATE(672)] = 20812,
  [SMALL_STATE(673)] = 20825,
  [SMALL_STATE(674)] = 20838,
  [SMALL_STATE(675)] = 20847,
  [SMALL_STATE(676)] = 20860,
  [SMALL_STATE(677)] = 20873,
  [SMALL_STATE(678)] = 20882,
  [SMALL_STATE(679)] = 20891,
  [SMALL_STATE(680)] = 20900,
  [SMALL_STATE(681)] = 20910,
  [SMALL_STATE(682)] = 20920,
  [SMALL_STATE(683)] = 20930,
  [SMALL_STATE(684)] = 20940,
  [SMALL_STATE(685)] = 20950,
  [SMALL_STATE(686)] = 20960,
  [SMALL_STATE(687)] = 20970,
  [SMALL_STATE(688)] = 20980,
  [SMALL_STATE(689)] = 20990,
  [SMALL_STATE(690)] = 21000,
  [SMALL_STATE(691)] = 21010,
  [SMALL_STATE(692)] = 21020,
  [SMALL_STATE(693)] = 21030,
  [SMALL_STATE(694)] = 21036,
  [SMALL_STATE(695)] = 21046,
  [SMALL_STATE(696)] = 21056,
  [SMALL_STATE(697)] = 21066,
  [SMALL_STATE(698)] = 21076,
  [SMALL_STATE(699)] = 21082,
  [SMALL_STATE(700)] = 21092,
  [SMALL_STATE(701)] = 21102,
  [SMALL_STATE(702)] = 21112,
  [SMALL_STATE(703)] = 21120,
  [SMALL_STATE(704)] = 21128,
  [SMALL_STATE(705)] = 21138,
  [SMALL_STATE(706)] = 21148,
  [SMALL_STATE(707)] = 21158,
  [SMALL_STATE(708)] = 21168,
  [SMALL_STATE(709)] = 21178,
  [SMALL_STATE(710)] = 21188,
  [SMALL_STATE(711)] = 21198,
  [SMALL_STATE(712)] = 21206,
  [SMALL_STATE(713)] = 21214,
  [SMALL_STATE(714)] = 21224,
  [SMALL_STATE(715)] = 21232,
  [SMALL_STATE(716)] = 21242,
  [SMALL_STATE(717)] = 21252,
  [SMALL_STATE(718)] = 21262,
  [SMALL_STATE(719)] = 21272,
  [SMALL_STATE(720)] = 21282,
  [SMALL_STATE(721)] = 21292,
  [SMALL_STATE(722)] = 21302,
  [SMALL_STATE(723)] = 21312,
  [SMALL_STATE(724)] = 21320,
  [SMALL_STATE(725)] = 21330,
  [SMALL_STATE(726)] = 21340,
  [SMALL_STATE(727)] = 21350,
  [SMALL_STATE(728)] = 21360,
  [SMALL_STATE(729)] = 21370,
  [SMALL_STATE(730)] = 21380,
  [SMALL_STATE(731)] = 21390,
  [SMALL_STATE(732)] = 21400,
  [SMALL_STATE(733)] = 21408,
  [SMALL_STATE(734)] = 21418,
  [SMALL_STATE(735)] = 21424,
  [SMALL_STATE(736)] = 21434,
  [SMALL_STATE(737)] = 21444,
  [SMALL_STATE(738)] = 21454,
  [SMALL_STATE(739)] = 21462,
  [SMALL_STATE(740)] = 21472,
  [SMALL_STATE(741)] = 21482,
  [SMALL_STATE(742)] = 21492,
  [SMALL_STATE(743)] = 21498,
  [SMALL_STATE(744)] = 21508,
  [SMALL_STATE(745)] = 21514,
  [SMALL_STATE(746)] = 21524,
  [SMALL_STATE(747)] = 21534,
  [SMALL_STATE(748)] = 21544,
  [SMALL_STATE(749)] = 21554,
  [SMALL_STATE(750)] = 21564,
  [SMALL_STATE(751)] = 21572,
  [SMALL_STATE(752)] = 21582,
  [SMALL_STATE(753)] = 21592,
  [SMALL_STATE(754)] = 21602,
  [SMALL_STATE(755)] = 21612,
  [SMALL_STATE(756)] = 21618,
  [SMALL_STATE(757)] = 21628,
  [SMALL_STATE(758)] = 21638,
  [SMALL_STATE(759)] = 21644,
  [SMALL_STATE(760)] = 21654,
  [SMALL_STATE(761)] = 21664,
  [SMALL_STATE(762)] = 21674,
  [SMALL_STATE(763)] = 21684,
  [SMALL_STATE(764)] = 21694,
  [SMALL_STATE(765)] = 21701,
  [SMALL_STATE(766)] = 21708,
  [SMALL_STATE(767)] = 21715,
  [SMALL_STATE(768)] = 21722,
  [SMALL_STATE(769)] = 21729,
  [SMALL_STATE(770)] = 21736,
  [SMALL_STATE(771)] = 21743,
  [SMALL_STATE(772)] = 21750,
  [SMALL_STATE(773)] = 21757,
  [SMALL_STATE(774)] = 21764,
  [SMALL_STATE(775)] = 21771,
  [SMALL_STATE(776)] = 21778,
  [SMALL_STATE(777)] = 21785,
  [SMALL_STATE(778)] = 21792,
  [SMALL_STATE(779)] = 21799,
  [SMALL_STATE(780)] = 21806,
  [SMALL_STATE(781)] = 21813,
  [SMALL_STATE(782)] = 21820,
  [SMALL_STATE(783)] = 21827,
  [SMALL_STATE(784)] = 21834,
  [SMALL_STATE(785)] = 21841,
  [SMALL_STATE(786)] = 21848,
  [SMALL_STATE(787)] = 21855,
  [SMALL_STATE(788)] = 21862,
  [SMALL_STATE(789)] = 21867,
  [SMALL_STATE(790)] = 21874,
  [SMALL_STATE(791)] = 21881,
  [SMALL_STATE(792)] = 21888,
  [SMALL_STATE(793)] = 21893,
  [SMALL_STATE(794)] = 21900,
  [SMALL_STATE(795)] = 21907,
  [SMALL_STATE(796)] = 21912,
  [SMALL_STATE(797)] = 21917,
  [SMALL_STATE(798)] = 21924,
  [SMALL_STATE(799)] = 21929,
  [SMALL_STATE(800)] = 21934,
  [SMALL_STATE(801)] = 21941,
  [SMALL_STATE(802)] = 21948,
  [SMALL_STATE(803)] = 21955,
  [SMALL_STATE(804)] = 21962,
  [SMALL_STATE(805)] = 21969,
  [SMALL_STATE(806)] = 21976,
  [SMALL_STATE(807)] = 21983,
  [SMALL_STATE(808)] = 21990,
  [SMALL_STATE(809)] = 21997,
  [SMALL_STATE(810)] = 22004,
  [SMALL_STATE(811)] = 22011,
  [SMALL_STATE(812)] = 22018,
  [SMALL_STATE(813)] = 22025,
  [SMALL_STATE(814)] = 22032,
  [SMALL_STATE(815)] = 22039,
  [SMALL_STATE(816)] = 22046,
  [SMALL_STATE(817)] = 22053,
  [SMALL_STATE(818)] = 22060,
  [SMALL_STATE(819)] = 22067,
  [SMALL_STATE(820)] = 22074,
  [SMALL_STATE(821)] = 22081,
  [SMALL_STATE(822)] = 22085,
  [SMALL_STATE(823)] = 22089,
  [SMALL_STATE(824)] = 22093,
  [SMALL_STATE(825)] = 22097,
  [SMALL_STATE(826)] = 22101,
  [SMALL_STATE(827)] = 22105,
  [SMALL_STATE(828)] = 22109,
  [SMALL_STATE(829)] = 22113,
  [SMALL_STATE(830)] = 22117,
  [SMALL_STATE(831)] = 22121,
  [SMALL_STATE(832)] = 22125,
  [SMALL_STATE(833)] = 22129,
  [SMALL_STATE(834)] = 22133,
  [SMALL_STATE(835)] = 22137,
  [SMALL_STATE(836)] = 22141,
  [SMALL_STATE(837)] = 22145,
  [SMALL_STATE(838)] = 22149,
  [SMALL_STATE(839)] = 22153,
  [SMALL_STATE(840)] = 22157,
  [SMALL_STATE(841)] = 22161,
  [SMALL_STATE(842)] = 22165,
  [SMALL_STATE(843)] = 22169,
  [SMALL_STATE(844)] = 22173,
  [SMALL_STATE(845)] = 22177,
  [SMALL_STATE(846)] = 22181,
  [SMALL_STATE(847)] = 22185,
  [SMALL_STATE(848)] = 22189,
  [SMALL_STATE(849)] = 22193,
  [SMALL_STATE(850)] = 22197,
  [SMALL_STATE(851)] = 22201,
  [SMALL_STATE(852)] = 22205,
  [SMALL_STATE(853)] = 22209,
  [SMALL_STATE(854)] = 22213,
  [SMALL_STATE(855)] = 22217,
  [SMALL_STATE(856)] = 22221,
  [SMALL_STATE(857)] = 22225,
  [SMALL_STATE(858)] = 22229,
  [SMALL_STATE(859)] = 22233,
  [SMALL_STATE(860)] = 22237,
  [SMALL_STATE(861)] = 22241,
  [SMALL_STATE(862)] = 22245,
  [SMALL_STATE(863)] = 22249,
  [SMALL_STATE(864)] = 22253,
  [SMALL_STATE(865)] = 22257,
  [SMALL_STATE(866)] = 22261,
  [SMALL_STATE(867)] = 22265,
  [SMALL_STATE(868)] = 22269,
  [SMALL_STATE(869)] = 22273,
  [SMALL_STATE(870)] = 22277,
  [SMALL_STATE(871)] = 22281,
  [SMALL_STATE(872)] = 22285,
  [SMALL_STATE(873)] = 22289,
  [SMALL_STATE(874)] = 22293,
  [SMALL_STATE(875)] = 22297,
  [SMALL_STATE(876)] = 22301,
  [SMALL_STATE(877)] = 22305,
  [SMALL_STATE(878)] = 22309,
  [SMALL_STATE(879)] = 22313,
  [SMALL_STATE(880)] = 22317,
  [SMALL_STATE(881)] = 22321,
  [SMALL_STATE(882)] = 22325,
  [SMALL_STATE(883)] = 22329,
  [SMALL_STATE(884)] = 22333,
  [SMALL_STATE(885)] = 22337,
  [SMALL_STATE(886)] = 22341,
  [SMALL_STATE(887)] = 22345,
  [SMALL_STATE(888)] = 22349,
  [SMALL_STATE(889)] = 22353,
  [SMALL_STATE(890)] = 22357,
  [SMALL_STATE(891)] = 22361,
  [SMALL_STATE(892)] = 22365,
  [SMALL_STATE(893)] = 22369,
  [SMALL_STATE(894)] = 22373,
  [SMALL_STATE(895)] = 22377,
  [SMALL_STATE(896)] = 22381,
  [SMALL_STATE(897)] = 22385,
  [SMALL_STATE(898)] = 22389,
  [SMALL_STATE(899)] = 22393,
  [SMALL_STATE(900)] = 22397,
  [SMALL_STATE(901)] = 22401,
  [SMALL_STATE(902)] = 22405,
  [SMALL_STATE(903)] = 22409,
  [SMALL_STATE(904)] = 22413,
  [SMALL_STATE(905)] = 22417,
  [SMALL_STATE(906)] = 22421,
  [SMALL_STATE(907)] = 22425,
  [SMALL_STATE(908)] = 22429,
  [SMALL_STATE(909)] = 22433,
  [SMALL_STATE(910)] = 22437,
  [SMALL_STATE(911)] = 22441,
  [SMALL_STATE(912)] = 22445,
  [SMALL_STATE(913)] = 22449,
  [SMALL_STATE(914)] = 22453,
  [SMALL_STATE(915)] = 22457,
  [SMALL_STATE(916)] = 22461,
  [SMALL_STATE(917)] = 22465,
  [SMALL_STATE(918)] = 22469,
  [SMALL_STATE(919)] = 22473,
  [SMALL_STATE(920)] = 22477,
  [SMALL_STATE(921)] = 22481,
  [SMALL_STATE(922)] = 22485,
  [SMALL_STATE(923)] = 22489,
  [SMALL_STATE(924)] = 22493,
  [SMALL_STATE(925)] = 22497,
  [SMALL_STATE(926)] = 22501,
  [SMALL_STATE(927)] = 22505,
  [SMALL_STATE(928)] = 22509,
  [SMALL_STATE(929)] = 22513,
  [SMALL_STATE(930)] = 22517,
  [SMALL_STATE(931)] = 22521,
  [SMALL_STATE(932)] = 22525,
  [SMALL_STATE(933)] = 22529,
  [SMALL_STATE(934)] = 22533,
  [SMALL_STATE(935)] = 22537,
  [SMALL_STATE(936)] = 22541,
  [SMALL_STATE(937)] = 22545,
  [SMALL_STATE(938)] = 22549,
  [SMALL_STATE(939)] = 22553,
  [SMALL_STATE(940)] = 22557,
  [SMALL_STATE(941)] = 22561,
  [SMALL_STATE(942)] = 22565,
  [SMALL_STATE(943)] = 22569,
  [SMALL_STATE(944)] = 22573,
  [SMALL_STATE(945)] = 22577,
  [SMALL_STATE(946)] = 22581,
  [SMALL_STATE(947)] = 22585,
  [SMALL_STATE(948)] = 22589,
  [SMALL_STATE(949)] = 22593,
  [SMALL_STATE(950)] = 22597,
  [SMALL_STATE(951)] = 22601,
  [SMALL_STATE(952)] = 22605,
  [SMALL_STATE(953)] = 22609,
  [SMALL_STATE(954)] = 22613,
  [SMALL_STATE(955)] = 22617,
  [SMALL_STATE(956)] = 22621,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(939),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(755),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(551),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(635),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(766),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(764),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(841),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(827),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(817),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(817),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(852),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(939),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(704),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(705),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(944),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(681),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(681),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(418),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(418),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(854),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(4),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(693),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(557),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(642),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(813),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(807),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(839),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(842),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(810),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(810),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(831),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(708),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(709),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(940),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(731),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(731),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(407),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(407),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(833),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(742),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(541),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(850),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(849),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(637),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(806),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(816),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(826),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(824),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(811),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(811),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(828),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(823),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(694),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(710),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(845),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(721),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(721),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(846),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(734),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(485),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(675),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(783),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(794),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(895),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(894),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(819),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(819),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(883),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(943),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(697),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(696),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(950),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(751),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(751),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(419),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(419),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(885),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(895),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(698),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(497),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(663),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(805),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(804),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(913),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(912),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(818),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(818),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(868),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(743),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(739),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(947),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(414),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(414),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(870),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(15),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(956),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 5),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 5),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(897),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 5),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 5),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(872),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(684),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 7),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 7),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(86),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(837),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(759),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 10),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 10),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(692),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 11),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 11),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 4),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 6),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 6),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(844),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 3, .production_id = 2),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 3, .production_id = 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 1),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 1),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 3),
  [854] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(175),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 3),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 2),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 2),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_definition, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 1, .production_id = 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 1, .production_id = 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(206),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(198),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(905),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(875),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(326),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 2, .production_id = 1),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 2, .production_id = 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 5, .production_id = 4),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 5, .production_id = 4),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 5, .production_id = 1),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 5, .production_id = 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 4, .production_id = 1),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 4, .production_id = 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 6, .production_id = 9),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 6, .production_id = 9),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 4, .production_id = 1),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 4, .production_id = 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [1042] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(799),
  [1045] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(809),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(770),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(955),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(951),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(420),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(647),
  [1277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(566),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(573),
  [1405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(853),
  [1408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(856),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(573),
  [1450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(853),
  [1453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(856),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(416),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(506),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2, .production_id = 3),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(835),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(573),
  [1594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(825),
  [1633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(910),
  [1636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(744),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 8),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 8),
  [1757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2), SHIFT_REPEAT(866),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pug_attributes, 1),
  [1824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pug_attributes, 1),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2), SHIFT_REPEAT(900),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1979] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 3),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 2),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 4),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
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
