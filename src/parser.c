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
#define STATE_COUNT 1062
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 4
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_doctype = 1,
  anon_sym_html = 2,
  anon_sym_strict = 3,
  anon_sym_xml = 4,
  anon_sym_PIPE = 5,
  anon_sym_include = 6,
  aux_sym_include_token1 = 7,
  anon_sym_while = 8,
  aux_sym__each_js_token1 = 9,
  anon_sym_COMMA = 10,
  anon_sym_else = 11,
  anon_sym_each = 12,
  anon_sym_for = 13,
  anon_sym_in = 14,
  anon_sym_PLUS = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_mixin = 18,
  aux_sym_mixin_attributes_token1 = 19,
  anon_sym_block = 20,
  anon_sym_append = 21,
  anon_sym_prepend = 22,
  anon_sym_extends = 23,
  anon_sym_COLON = 24,
  sym_filter_name = 25,
  aux_sym_filter_content_token1 = 26,
  aux_sym_filter_content_token2 = 27,
  anon_sym_unless = 28,
  anon_sym_if = 29,
  anon_sym_elseif = 30,
  anon_sym_case = 31,
  anon_sym_when = 32,
  aux_sym__when_keyword_token1 = 33,
  anon_sym_default = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_EQ = 36,
  anon_sym_script_DOT = 37,
  anon_sym_SLASH = 38,
  anon_sym_ = 39,
  anon_sym_DOT = 40,
  aux_sym__ternary_attribute_value_token1 = 41,
  aux_sym__variable_attribute_value_token1 = 42,
  aux_sym__object_attribute_value_token1 = 43,
  aux_sym__template_attribute_value_token1 = 44,
  aux_sym__array_attribute_value_token1 = 45,
  aux_sym__attribute_token1 = 46,
  anon_sym_SLASH_SLASH = 47,
  anon_sym_SLASH_SLASH_DASH = 48,
  sym_tag_name = 49,
  sym_class = 50,
  sym_id = 51,
  aux_sym_angular_attribute_name_token1 = 52,
  aux_sym_angular_attribute_name_token2 = 53,
  aux_sym_angular_attribute_name_token3 = 54,
  sym_attribute_name = 55,
  anon_sym_SQUOTE = 56,
  aux_sym_quoted_javascript_token1 = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_quoted_javascript_token2 = 59,
  aux_sym_content_token1 = 60,
  anon_sym_POUND = 61,
  anon_sym_LBRACE = 62,
  anon_sym_POUND_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_LBRACE_LBRACE = 65,
  anon_sym_RBRACE_RBRACE = 66,
  sym__delimited_javascript = 67,
  sym__un_delimited_javascript_line = 68,
  anon_sym_DASH = 69,
  aux_sym_unbuffered_code_token1 = 70,
  sym__newline = 71,
  sym__indent = 72,
  sym__dedent = 73,
  sym_source_file = 74,
  sym_doctype = 75,
  sym_pipe = 76,
  sym_include = 77,
  sym_while = 78,
  sym__each_js = 79,
  sym_iteration_variable = 80,
  sym_iteration_iterator = 81,
  sym__each_else = 82,
  sym_each = 83,
  sym_mixin_use = 84,
  sym_mixin_definition = 85,
  sym_mixin_attributes = 86,
  sym__block_content = 87,
  sym_block_definition = 88,
  sym_block_append = 89,
  sym_block_prepend = 90,
  sym_extends = 91,
  sym_filter = 92,
  sym_filter_content = 93,
  sym_conditional = 94,
  sym_case = 95,
  sym__when_content = 96,
  sym__dummy_tag = 97,
  sym__when_keyword = 98,
  sym_when = 99,
  sym_unescaped_buffered_code = 100,
  sym_buffered_code = 101,
  sym_script_block = 102,
  sym_tag = 103,
  sym__content_after_dot = 104,
  sym_attributes = 105,
  sym_attribute = 106,
  sym__ternary_attribute_value = 107,
  sym__string_attribute_value = 108,
  sym__variable_attribute_value = 109,
  sym__object_attribute_value = 110,
  sym__template_attribute_value = 111,
  sym__array_attribute_value = 112,
  sym__pug_attributes = 113,
  sym__attribute = 114,
  sym__angular_attribute = 115,
  sym_children = 116,
  sym__children_choice = 117,
  sym_comment = 118,
  sym__comment = 119,
  sym__comment_not_first_line = 120,
  sym_angular_attribute_name = 121,
  sym_quoted_javascript = 122,
  sym_quoted_attribute_value = 123,
  sym_content = 124,
  sym__comment_content = 125,
  aux_sym__content_or_javascript = 126,
  sym__un_delimited_javascript = 127,
  aux_sym__un_delimited_javascript_multiline = 128,
  sym__single_line_buf_code = 129,
  sym__multi_line_buf_code = 130,
  sym_unbuffered_code = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_mixin_use_repeat1 = 133,
  aux_sym_mixin_attributes_repeat1 = 134,
  aux_sym_filter_content_repeat1 = 135,
  aux_sym_case_repeat1 = 136,
  aux_sym_script_block_repeat1 = 137,
  aux_sym_tag_repeat1 = 138,
  aux_sym__content_after_dot_repeat1 = 139,
  aux_sym_attributes_repeat1 = 140,
  aux_sym__attribute_repeat1 = 141,
  aux_sym_children_repeat1 = 142,
  aux_sym__comment_repeat1 = 143,
  aux_sym_content_repeat1 = 144,
  aux_sym__single_line_buf_code_repeat1 = 145,
  alias_sym_attribute_value = 146,
  alias_sym_block_name = 147,
  alias_sym_filename = 148,
  alias_sym_mixin_name = 149,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_include] = "keyword",
  [aux_sym_include_token1] = "include_token1",
  [anon_sym_while] = "keyword",
  [aux_sym__each_js_token1] = "javascript",
  [anon_sym_COMMA] = ",",
  [anon_sym_else] = "keyword",
  [anon_sym_each] = "keyword",
  [anon_sym_for] = "keyword",
  [anon_sym_in] = "keyword",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_mixin] = "keyword",
  [aux_sym_mixin_attributes_token1] = "attribute_name",
  [anon_sym_block] = "keyword",
  [anon_sym_append] = "keyword",
  [anon_sym_prepend] = "keyword",
  [anon_sym_extends] = "keyword",
  [anon_sym_COLON] = ":",
  [sym_filter_name] = "filter_name",
  [aux_sym_filter_content_token1] = "filter_content_token1",
  [aux_sym_filter_content_token2] = "filter_content_token2",
  [anon_sym_unless] = "keyword",
  [anon_sym_if] = "keyword",
  [anon_sym_elseif] = "keyword",
  [anon_sym_case] = "keyword",
  [anon_sym_when] = "keyword",
  [aux_sym__when_keyword_token1] = "javascript",
  [anon_sym_default] = "keyword",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ] = "=",
  [anon_sym_script_DOT] = "script.",
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
  [sym_include] = "include",
  [sym_while] = "while",
  [sym__each_js] = "_each_js",
  [sym_iteration_variable] = "iteration_variable",
  [sym_iteration_iterator] = "iteration_iterator",
  [sym__each_else] = "else",
  [sym_each] = "each",
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
  [alias_sym_filename] = "filename",
  [alias_sym_mixin_name] = "mixin_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [anon_sym_while] = anon_sym_include,
  [aux_sym__each_js_token1] = aux_sym__each_js_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_else] = anon_sym_include,
  [anon_sym_each] = anon_sym_include,
  [anon_sym_for] = anon_sym_include,
  [anon_sym_in] = anon_sym_include,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_mixin] = anon_sym_include,
  [aux_sym_mixin_attributes_token1] = sym_attribute_name,
  [anon_sym_block] = anon_sym_include,
  [anon_sym_append] = anon_sym_include,
  [anon_sym_prepend] = anon_sym_include,
  [anon_sym_extends] = anon_sym_include,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_filter_name] = sym_filter_name,
  [aux_sym_filter_content_token1] = aux_sym_filter_content_token1,
  [aux_sym_filter_content_token2] = aux_sym_filter_content_token2,
  [anon_sym_unless] = anon_sym_include,
  [anon_sym_if] = anon_sym_include,
  [anon_sym_elseif] = anon_sym_include,
  [anon_sym_case] = anon_sym_include,
  [anon_sym_when] = anon_sym_include,
  [aux_sym__when_keyword_token1] = aux_sym__each_js_token1,
  [anon_sym_default] = anon_sym_include,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_script_DOT] = anon_sym_script_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__ternary_attribute_value_token1] = aux_sym__each_js_token1,
  [aux_sym__variable_attribute_value_token1] = aux_sym__each_js_token1,
  [aux_sym__object_attribute_value_token1] = aux_sym__each_js_token1,
  [aux_sym__template_attribute_value_token1] = aux_sym__each_js_token1,
  [aux_sym__array_attribute_value_token1] = aux_sym__each_js_token1,
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
  [aux_sym_quoted_javascript_token1] = aux_sym__each_js_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = aux_sym__each_js_token1,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__delimited_javascript] = aux_sym__each_js_token1,
  [sym__un_delimited_javascript_line] = sym__un_delimited_javascript_line,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_unbuffered_code_token1] = aux_sym_unbuffered_code_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_doctype] = sym_doctype,
  [sym_pipe] = sym_pipe,
  [sym_include] = sym_include,
  [sym_while] = sym_while,
  [sym__each_js] = sym__each_js,
  [sym_iteration_variable] = sym_iteration_variable,
  [sym_iteration_iterator] = sym_iteration_iterator,
  [sym__each_else] = sym__each_else,
  [sym_each] = sym_each,
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
  [sym__un_delimited_javascript] = aux_sym__each_js_token1,
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
  [alias_sym_filename] = alias_sym_filename,
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
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__each_js_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixin] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mixin_attributes_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_extends] = {
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
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__when_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = true,
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
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym__each_js] = {
    .visible = false,
    .named = true,
  },
  [sym_iteration_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_iteration_iterator] = {
    .visible = true,
    .named = true,
  },
  [sym__each_else] = {
    .visible = true,
    .named = true,
  },
  [sym_each] = {
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
  [alias_sym_filename] = {
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
    [1] = alias_sym_filename,
  },
  [2] = {
    [0] = aux_sym__each_js_token1,
  },
  [3] = {
    [1] = alias_sym_mixin_name,
  },
  [4] = {
    [0] = alias_sym_block_name,
  },
  [5] = {
    [2] = alias_sym_filename,
  },
  [6] = {
    [0] = sym_attribute,
  },
  [7] = {
    [1] = alias_sym_mixin_name,
    [3] = sym_attribute,
  },
  [8] = {
    [1] = aux_sym__each_js_token1,
  },
  [9] = {
    [3] = aux_sym__each_js_token1,
  },
  [10] = {
    [1] = alias_sym_attribute_value,
  },
  [11] = {
    [1] = alias_sym_mixin_name,
    [4] = sym_attribute,
  },
  [12] = {
    [3] = sym_children,
  },
  [13] = {
    [5] = sym_children,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__pug_attributes, 2,
    sym__pug_attributes,
    sym_attribute,
  aux_sym__un_delimited_javascript_multiline, 2,
    aux_sym__un_delimited_javascript_multiline,
    aux_sym__each_js_token1,
  aux_sym_script_block_repeat1, 2,
    aux_sym_script_block_repeat1,
    aux_sym__each_js_token1,
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
      if (eof) ADVANCE(199);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '#') ADVANCE(765);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead == '{') ADVANCE(766);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '}') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '`') ADVANCE(583);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(292);
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == ']') ADVANCE(590);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(67);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ']') ADVANCE(591);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(71);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ']') ADVANCE(593);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(100);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(296);
      if (lookahead == ']') ADVANCE(594);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(179);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(297);
      if (lookahead == ']') ADVANCE(595);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(180);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(298);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(181);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(299);
      if (lookahead == ']') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(182);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(570);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(571);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '}') ADVANCE(572);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(100);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(304);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(180);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(305);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(181);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(306);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(576);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(570);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(571);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '}') ADVANCE(572);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(100);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(304);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(180);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(305);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(181);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(306);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(576);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(310);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(312);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(318);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(319);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(320);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '`') ADVANCE(581);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(323);
      if (lookahead == ')') ADVANCE(534);
      if (lookahead == '`') ADVANCE(582);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(67);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(71);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(100);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(180);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(181);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(336);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(182);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '#') ADVANCE(765);
      if (lookahead == '{') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(763);
      if (lookahead != 0) ADVANCE(764);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == ':') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(772);
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(275);
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(703);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 56:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(782);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '}') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '}') ADVANCE(578);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(91);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(60)
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '?') ADVANCE(561);
      if (lookahead == '[') ADVANCE(551);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '(' ||
          lookahead == ',') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(545);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '?') ADVANCE(553);
      if (lookahead == '[') ADVANCE(551);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '(' ||
          lookahead == ',') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(545);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(632);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(631);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(759);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0) ADVANCE(762);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 70:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(757);
      if (lookahead != 0) ADVANCE(758);
      END_STATE();
    case 71:
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(531);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == '?') ADVANCE(557);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',') ADVANCE(75);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 78:
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '`') ADVANCE(585);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == ')') ADVANCE(563);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '`') ADVANCE(586);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == ')') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '}') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '}') ADVANCE(578);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(91);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '}') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(512);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(283);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(599);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 88:
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(510);
      END_STATE();
    case 89:
      if (lookahead == '?') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 90:
      if (lookahead == '?') ADVANCE(555);
      if (lookahead == '`') ADVANCE(554);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(93);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 91:
      if (lookahead == '?') ADVANCE(192);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 93:
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '`') ADVANCE(587);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == ']') ADVANCE(592);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(91);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '`') ADVANCE(579);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(98);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 100:
      if (lookahead == '`') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 172:
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 174:
      if (lookahead == '}') ADVANCE(770);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(632);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(175)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 176:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(631);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(176)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 177:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '\n') SKIP(177)
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 178:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\n') SKIP(178)
      if (lookahead == '\r') ADVANCE(212);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 179:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 184:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 185:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(747);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 190:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(503);
      END_STATE();
    case 193:
      if (eof) ADVANCE(199);
      if (lookahead == '\n') SKIP(193)
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 194:
      if (eof) ADVANCE(199);
      if (lookahead == '\n') SKIP(194)
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(703);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 195:
      if (eof) ADVANCE(199);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(632);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 196:
      if (eof) ADVANCE(199);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(631);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 197:
      if (eof) ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(632);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(197)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 198:
      if (eof) ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'b') ADVANCE(642);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(646);
      if (lookahead == 'w') ADVANCE(631);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(198)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(212);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__each_js_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(781);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '?') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_mixin_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_filter_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_filter_content_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(599);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(747);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '`') ADVANCE(583);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(292);
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == ']') ADVANCE(590);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(67);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ']') ADVANCE(591);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(71);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ']') ADVANCE(593);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(100);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(296);
      if (lookahead == ']') ADVANCE(594);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(179);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(297);
      if (lookahead == ']') ADVANCE(595);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(180);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(298);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(181);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(299);
      if (lookahead == ']') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(182);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(570);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(571);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '}') ADVANCE(572);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(100);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(304);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(180);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(305);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(181);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(306);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(576);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(310);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(312);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(318);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(319);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(320);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '`') ADVANCE(581);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(323);
      if (lookahead == ')') ADVANCE(534);
      if (lookahead == '`') ADVANCE(582);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(324);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(397);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(324);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(397);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(328);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '?') ADVANCE(399);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(328);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '?') ADVANCE(399);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == '`') ADVANCE(336);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '?') ADVANCE(401);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(332);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '?') ADVANCE(401);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '?') ADVANCE(402);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '?') ADVANCE(402);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '?') ADVANCE(403);
      if (lookahead == '`') ADVANCE(336);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(336);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '?') ADVANCE(403);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == '?') ADVANCE(404);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == '?') ADVANCE(404);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '?') ADVANCE(406);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '?') ADVANCE(406);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == '?') ADVANCE(407);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(344);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == '?') ADVANCE(407);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(350);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(346);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '?') ADVANCE(409);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(348);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '?') ADVANCE(409);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == '\'') ADVANCE(350);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(350);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(324);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == '`') ADVANCE(360);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(324);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(326);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(326);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(328);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == '`') ADVANCE(356);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(328);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == '`') ADVANCE(356);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead == '`') ADVANCE(360);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(360);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(362);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(336);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(336);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(472);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == ',') ADVANCE(462);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(360);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '?') ADVANCE(425);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '`') ADVANCE(373);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(324);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '?') ADVANCE(428);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '`') ADVANCE(374);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(326);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == ']') ADVANCE(328);
      if (lookahead == '`') ADVANCE(371);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(328);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == ']') ADVANCE(330);
      if (lookahead == '`') ADVANCE(375);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(330);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '?') ADVANCE(431);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(373);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(332);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '`') ADVANCE(374);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(334);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ') ADVANCE(375);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead == '`') ADVANCE(375);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(336);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(379);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == '`') ADVANCE(380);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '?') ADVANCE(435);
      if (lookahead == '[') ADVANCE(354);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '?') ADVANCE(436);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == ']') ADVANCE(356);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(379);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '[') ADVANCE(358);
      if (lookahead == ']') ADVANCE(358);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == ']') ADVANCE(360);
      if (lookahead == '`') ADVANCE(380);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead == '[') ADVANCE(362);
      if (lookahead == ']') ADVANCE(362);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(375);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(375);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead == '[') ADVANCE(364);
      if (lookahead == ']') ADVANCE(364);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '}') ADVANCE(383);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(384);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead == '}') ADVANCE(384);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(385);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead == '}') ADVANCE(385);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(328);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(386);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead == '}') ADVANCE(386);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(330);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(387);
      if (lookahead == '?') ADVANCE(445);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '}') ADVANCE(387);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead == '}') ADVANCE(389);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '?') ADVANCE(448);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == '}') ADVANCE(390);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(352);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(384);
      if (lookahead == '?') ADVANCE(449);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead == '}') ADVANCE(391);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(354);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(385);
      if (lookahead == '?') ADVANCE(450);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(356);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(386);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead == '}') ADVANCE(393);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(358);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(387);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == '}') ADVANCE(394);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(360);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead == '}') ADVANCE(395);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(362);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '?') ADVANCE(454);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead == '}') ADVANCE(396);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(364);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(67);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(71);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(100);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(400);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(179);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(401);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(180);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(402);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(181);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(403);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(182);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(408);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(409);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(410);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ',') ADVANCE(397);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(67);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ',') ADVANCE(398);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(71);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '(') ADVANCE(406);
      if (lookahead == ',') ADVANCE(399);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(100);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(414);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ',') ADVANCE(400);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(179);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(415);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ',') ADVANCE(401);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(180);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(416);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ',') ADVANCE(402);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(181);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(417);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(182);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(420);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(502);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(502);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(422);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(502);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(423);
      if (lookahead == ')') ADVANCE(534);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"') ADVANCE(424);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(426);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(427);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ']') ADVANCE(397);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(397);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(398);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '`') ADVANCE(429);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(399);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(430);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(400);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(431);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ']') ADVANCE(401);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(401);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(432);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(402);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(433);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(403);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(435);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(406);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(437);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == ']') ADVANCE(414);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '[') ADVANCE(415);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(416);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(440);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(441);
      if (lookahead == '}') ADVANCE(441);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(397);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == '}') ADVANCE(442);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(398);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead == '}') ADVANCE(443);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(399);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(444);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(444);
      if (lookahead == '}') ADVANCE(444);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(400);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(445);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(445);
      if (lookahead == '}') ADVANCE(445);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(401);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(446);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(402);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(447);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(403);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(441);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(411);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(412);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(406);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == '`') ADVANCE(450);
      if (lookahead == '}') ADVANCE(450);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(413);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(451);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(444);
      if (lookahead == '}') ADVANCE(451);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(414);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(445);
      if (lookahead == '}') ADVANCE(452);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(415);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(453);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(446);
      if (lookahead == '}') ADVANCE(453);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(416);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(454);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(447);
      if (lookahead == '}') ADVANCE(454);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(417);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(455);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead == ',') ADVANCE(405);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '(') ADVANCE(406);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == ',') ADVANCE(406);
      if (lookahead == '`') ADVANCE(457);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == ',') ADVANCE(407);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(459);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(460);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(461);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == ',') ADVANCE(410);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(463);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(336);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(489);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(489);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(490);
      if (lookahead == '"') ADVANCE(468);
      if (lookahead == '\'') ADVANCE(466);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(491);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(470);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(491);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '`') ADVANCE(467);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(492);
      if (lookahead == '"') ADVANCE(468);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(492);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(493);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(493);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(494);
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '\'') ADVANCE(470);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(494);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(495);
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(472);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(473);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == ' ') ADVANCE(474);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == ')') ADVANCE(534);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(338);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '?') ADVANCE(455);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '"') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(476);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead == ',') ADVANCE(340);
      if (lookahead == '?') ADVANCE(456);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '"') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(567);
      if (lookahead == ',') ADVANCE(346);
      if (lookahead == '?') ADVANCE(459);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(482);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == ')') ADVANCE(535);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(483);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(487);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(484);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(485);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(486);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(488);
      if (lookahead == ')') ADVANCE(539);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(487);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == ')') ADVANCE(540);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '`') ADVANCE(487);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == ' ') ADVANCE(488);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\'') ADVANCE(488);
      if (lookahead == ')') ADVANCE(541);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(489);
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == '\'') ADVANCE(492);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(490);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(490);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(491);
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(492);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(492);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(493);
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '\'') ADVANCE(495);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(494);
      if (lookahead == '"') ADVANCE(495);
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(495);
      if (lookahead == '"') ADVANCE(495);
      if (lookahead == '\'') ADVANCE(495);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == '[') ADVANCE(522);
      if (lookahead == ']') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(530);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ',') ADVANCE(499);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ',') ADVANCE(499);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(503);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '?') ADVANCE(530);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(503);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ',') ADVANCE(503);
      if (lookahead == '?') ADVANCE(522);
      if (lookahead == '`') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(503);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ',') ADVANCE(503);
      if (lookahead == '?') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(504);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(503);
      if (lookahead == '?') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(503);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(507);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '?') ADVANCE(501);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(507);
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(476);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(507);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '?') ADVANCE(501);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '`') ADVANCE(371);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ',') ADVANCE(510);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead == '}') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(516);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(515);
      if (lookahead == '?') ADVANCE(523);
      if (lookahead == '`') ADVANCE(356);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '\'') ADVANCE(463);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(524);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '?') ADVANCE(502);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(517);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(466);
      if (lookahead == '(') ADVANCE(517);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(519);
      if (lookahead == '?') ADVANCE(505);
      if (lookahead == '`') ADVANCE(467);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == '\'') ADVANCE(490);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(506);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ',') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(502);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '`') ADVANCE(522);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(98);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(530);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(98);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '`') ADVANCE(583);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(292);
      if (lookahead == '`') ADVANCE(588);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(310);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(312);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '}') ADVANCE(542);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '?') ADVANCE(544);
      if (lookahead == '}') ADVANCE(543);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '?') ADVANCE(542);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(513);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '?') ADVANCE(561);
      if (lookahead == '[') ADVANCE(551);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(545);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(74);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(550);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(559);
      if (lookahead == '[') ADVANCE(554);
      if (lookahead == ']') ADVANCE(554);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(94);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == '?') ADVANCE(557);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(75);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '?') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '`') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(98);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '?') ADVANCE(560);
      if (lookahead == '`') ADVANCE(554);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(93);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '?') ADVANCE(548);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(507);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == '?') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(504);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == '?') ADVANCE(549);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(511);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(516);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(555);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(515);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(517);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(550);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(519);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(192);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(99);
      if (lookahead == '`') ADVANCE(587);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(579);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(570);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(67);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(571);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(71);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '}') ADVANCE(572);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(100);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(304);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(180);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(305);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(181);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(306);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(576);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '}') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(81);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '}') ADVANCE(578);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(91);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ')') ADVANCE(547);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(566);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(192);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(192);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead == 'x') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 's') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 's') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 's') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 's') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 't') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 't') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 't') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == '.') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == 'x') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'd') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'd') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'd') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'o') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'f') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'h') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'h') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'k') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'r') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'r') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 's') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 's') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 's') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 's') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 's') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 't') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 't') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'u') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'u') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'x') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == 'y') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(747);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(748);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(758);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(758);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(764);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(767);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(769);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(772);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'm') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(703);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(779);
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '.') ADVANCE(783);
      if (lookahead == '/') ADVANCE(778);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == 'w') ADVANCE(703);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(748);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(785);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(788);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 195},
  [2] = {.lex_state = 196, .external_lex_state = 2},
  [3] = {.lex_state = 196, .external_lex_state = 2},
  [4] = {.lex_state = 196, .external_lex_state = 2},
  [5] = {.lex_state = 195, .external_lex_state = 2},
  [6] = {.lex_state = 195, .external_lex_state = 2},
  [7] = {.lex_state = 195, .external_lex_state = 2},
  [8] = {.lex_state = 195},
  [9] = {.lex_state = 64, .external_lex_state = 2},
  [10] = {.lex_state = 64, .external_lex_state = 2},
  [11] = {.lex_state = 195},
  [12] = {.lex_state = 63, .external_lex_state = 3},
  [13] = {.lex_state = 63, .external_lex_state = 3},
  [14] = {.lex_state = 63, .external_lex_state = 3},
  [15] = {.lex_state = 63, .external_lex_state = 3},
  [16] = {.lex_state = 63, .external_lex_state = 3},
  [17] = {.lex_state = 63, .external_lex_state = 3},
  [18] = {.lex_state = 63, .external_lex_state = 3},
  [19] = {.lex_state = 63, .external_lex_state = 3},
  [20] = {.lex_state = 63, .external_lex_state = 3},
  [21] = {.lex_state = 63, .external_lex_state = 2},
  [22] = {.lex_state = 63, .external_lex_state = 3},
  [23] = {.lex_state = 63, .external_lex_state = 3},
  [24] = {.lex_state = 63, .external_lex_state = 3},
  [25] = {.lex_state = 63, .external_lex_state = 3},
  [26] = {.lex_state = 63, .external_lex_state = 3},
  [27] = {.lex_state = 63, .external_lex_state = 3},
  [28] = {.lex_state = 63, .external_lex_state = 3},
  [29] = {.lex_state = 63, .external_lex_state = 3},
  [30] = {.lex_state = 63, .external_lex_state = 3},
  [31] = {.lex_state = 63, .external_lex_state = 3},
  [32] = {.lex_state = 63, .external_lex_state = 3},
  [33] = {.lex_state = 63, .external_lex_state = 3},
  [34] = {.lex_state = 63, .external_lex_state = 3},
  [35] = {.lex_state = 63, .external_lex_state = 3},
  [36] = {.lex_state = 63, .external_lex_state = 3},
  [37] = {.lex_state = 63, .external_lex_state = 2},
  [38] = {.lex_state = 63, .external_lex_state = 3},
  [39] = {.lex_state = 63, .external_lex_state = 3},
  [40] = {.lex_state = 63, .external_lex_state = 2},
  [41] = {.lex_state = 63, .external_lex_state = 3},
  [42] = {.lex_state = 63, .external_lex_state = 3},
  [43] = {.lex_state = 63, .external_lex_state = 3},
  [44] = {.lex_state = 63, .external_lex_state = 3},
  [45] = {.lex_state = 63, .external_lex_state = 3},
  [46] = {.lex_state = 63, .external_lex_state = 3},
  [47] = {.lex_state = 63, .external_lex_state = 3},
  [48] = {.lex_state = 63, .external_lex_state = 3},
  [49] = {.lex_state = 63, .external_lex_state = 3},
  [50] = {.lex_state = 198, .external_lex_state = 2},
  [51] = {.lex_state = 197, .external_lex_state = 2},
  [52] = {.lex_state = 196, .external_lex_state = 2},
  [53] = {.lex_state = 196, .external_lex_state = 2},
  [54] = {.lex_state = 198, .external_lex_state = 2},
  [55] = {.lex_state = 196, .external_lex_state = 1},
  [56] = {.lex_state = 193, .external_lex_state = 2},
  [57] = {.lex_state = 196, .external_lex_state = 1},
  [58] = {.lex_state = 176, .external_lex_state = 2},
  [59] = {.lex_state = 196, .external_lex_state = 1},
  [60] = {.lex_state = 196, .external_lex_state = 1},
  [61] = {.lex_state = 196, .external_lex_state = 1},
  [62] = {.lex_state = 193, .external_lex_state = 2},
  [63] = {.lex_state = 196, .external_lex_state = 1},
  [64] = {.lex_state = 197, .external_lex_state = 3},
  [65] = {.lex_state = 196, .external_lex_state = 1},
  [66] = {.lex_state = 196, .external_lex_state = 1},
  [67] = {.lex_state = 196, .external_lex_state = 1},
  [68] = {.lex_state = 196, .external_lex_state = 4},
  [69] = {.lex_state = 196, .external_lex_state = 4},
  [70] = {.lex_state = 198, .external_lex_state = 2},
  [71] = {.lex_state = 196, .external_lex_state = 4},
  [72] = {.lex_state = 196, .external_lex_state = 4},
  [73] = {.lex_state = 196},
  [74] = {.lex_state = 196, .external_lex_state = 4},
  [75] = {.lex_state = 196, .external_lex_state = 4},
  [76] = {.lex_state = 198, .external_lex_state = 2},
  [77] = {.lex_state = 196, .external_lex_state = 4},
  [78] = {.lex_state = 196, .external_lex_state = 1},
  [79] = {.lex_state = 196, .external_lex_state = 4},
  [80] = {.lex_state = 196},
  [81] = {.lex_state = 196, .external_lex_state = 2},
  [82] = {.lex_state = 193, .external_lex_state = 2},
  [83] = {.lex_state = 196, .external_lex_state = 4},
  [84] = {.lex_state = 196, .external_lex_state = 1},
  [85] = {.lex_state = 197, .external_lex_state = 2},
  [86] = {.lex_state = 198, .external_lex_state = 2},
  [87] = {.lex_state = 196, .external_lex_state = 2},
  [88] = {.lex_state = 196, .external_lex_state = 2},
  [89] = {.lex_state = 196, .external_lex_state = 2},
  [90] = {.lex_state = 196, .external_lex_state = 2},
  [91] = {.lex_state = 194, .external_lex_state = 2},
  [92] = {.lex_state = 196, .external_lex_state = 4},
  [93] = {.lex_state = 176, .external_lex_state = 2},
  [94] = {.lex_state = 196, .external_lex_state = 2},
  [95] = {.lex_state = 195, .external_lex_state = 1},
  [96] = {.lex_state = 195, .external_lex_state = 1},
  [97] = {.lex_state = 196, .external_lex_state = 2},
  [98] = {.lex_state = 195, .external_lex_state = 1},
  [99] = {.lex_state = 196, .external_lex_state = 2},
  [100] = {.lex_state = 196, .external_lex_state = 2},
  [101] = {.lex_state = 195, .external_lex_state = 1},
  [102] = {.lex_state = 64, .external_lex_state = 2},
  [103] = {.lex_state = 196, .external_lex_state = 2},
  [104] = {.lex_state = 196, .external_lex_state = 2},
  [105] = {.lex_state = 196, .external_lex_state = 2},
  [106] = {.lex_state = 195, .external_lex_state = 1},
  [107] = {.lex_state = 196, .external_lex_state = 2},
  [108] = {.lex_state = 196, .external_lex_state = 2},
  [109] = {.lex_state = 195, .external_lex_state = 1},
  [110] = {.lex_state = 197, .external_lex_state = 3},
  [111] = {.lex_state = 196, .external_lex_state = 2},
  [112] = {.lex_state = 195, .external_lex_state = 1},
  [113] = {.lex_state = 64, .external_lex_state = 2},
  [114] = {.lex_state = 196, .external_lex_state = 2},
  [115] = {.lex_state = 194, .external_lex_state = 2},
  [116] = {.lex_state = 196, .external_lex_state = 2},
  [117] = {.lex_state = 196, .external_lex_state = 2},
  [118] = {.lex_state = 196, .external_lex_state = 2},
  [119] = {.lex_state = 196, .external_lex_state = 2},
  [120] = {.lex_state = 196, .external_lex_state = 2},
  [121] = {.lex_state = 196, .external_lex_state = 2},
  [122] = {.lex_state = 195, .external_lex_state = 1},
  [123] = {.lex_state = 196, .external_lex_state = 2},
  [124] = {.lex_state = 196, .external_lex_state = 2},
  [125] = {.lex_state = 196, .external_lex_state = 2},
  [126] = {.lex_state = 196, .external_lex_state = 2},
  [127] = {.lex_state = 196, .external_lex_state = 2},
  [128] = {.lex_state = 196, .external_lex_state = 2},
  [129] = {.lex_state = 196, .external_lex_state = 2},
  [130] = {.lex_state = 196, .external_lex_state = 2},
  [131] = {.lex_state = 196, .external_lex_state = 2},
  [132] = {.lex_state = 196, .external_lex_state = 2},
  [133] = {.lex_state = 196, .external_lex_state = 2},
  [134] = {.lex_state = 196, .external_lex_state = 2},
  [135] = {.lex_state = 196, .external_lex_state = 2},
  [136] = {.lex_state = 196, .external_lex_state = 2},
  [137] = {.lex_state = 196, .external_lex_state = 2},
  [138] = {.lex_state = 175, .external_lex_state = 2},
  [139] = {.lex_state = 196, .external_lex_state = 2},
  [140] = {.lex_state = 196, .external_lex_state = 2},
  [141] = {.lex_state = 196, .external_lex_state = 2},
  [142] = {.lex_state = 196, .external_lex_state = 2},
  [143] = {.lex_state = 196, .external_lex_state = 2},
  [144] = {.lex_state = 196, .external_lex_state = 2},
  [145] = {.lex_state = 196, .external_lex_state = 2},
  [146] = {.lex_state = 196, .external_lex_state = 2},
  [147] = {.lex_state = 196, .external_lex_state = 2},
  [148] = {.lex_state = 196, .external_lex_state = 2},
  [149] = {.lex_state = 196, .external_lex_state = 2},
  [150] = {.lex_state = 196, .external_lex_state = 2},
  [151] = {.lex_state = 11, .external_lex_state = 2},
  [152] = {.lex_state = 196, .external_lex_state = 5},
  [153] = {.lex_state = 196, .external_lex_state = 5},
  [154] = {.lex_state = 194, .external_lex_state = 5},
  [155] = {.lex_state = 64, .external_lex_state = 1},
  [156] = {.lex_state = 196, .external_lex_state = 5},
  [157] = {.lex_state = 197, .external_lex_state = 2},
  [158] = {.lex_state = 64, .external_lex_state = 1},
  [159] = {.lex_state = 64, .external_lex_state = 1},
  [160] = {.lex_state = 196, .external_lex_state = 5},
  [161] = {.lex_state = 196, .external_lex_state = 5},
  [162] = {.lex_state = 196, .external_lex_state = 5},
  [163] = {.lex_state = 196, .external_lex_state = 5},
  [164] = {.lex_state = 196, .external_lex_state = 5},
  [165] = {.lex_state = 195, .external_lex_state = 1},
  [166] = {.lex_state = 197, .external_lex_state = 2},
  [167] = {.lex_state = 195, .external_lex_state = 2},
  [168] = {.lex_state = 196, .external_lex_state = 5},
  [169] = {.lex_state = 196, .external_lex_state = 5},
  [170] = {.lex_state = 196, .external_lex_state = 5},
  [171] = {.lex_state = 197, .external_lex_state = 2},
  [172] = {.lex_state = 196, .external_lex_state = 5},
  [173] = {.lex_state = 196, .external_lex_state = 5},
  [174] = {.lex_state = 64, .external_lex_state = 1},
  [175] = {.lex_state = 194, .external_lex_state = 5},
  [176] = {.lex_state = 196, .external_lex_state = 5},
  [177] = {.lex_state = 196, .external_lex_state = 5},
  [178] = {.lex_state = 196, .external_lex_state = 5},
  [179] = {.lex_state = 64, .external_lex_state = 1},
  [180] = {.lex_state = 195, .external_lex_state = 1},
  [181] = {.lex_state = 11, .external_lex_state = 2},
  [182] = {.lex_state = 64, .external_lex_state = 1},
  [183] = {.lex_state = 64, .external_lex_state = 1},
  [184] = {.lex_state = 64, .external_lex_state = 1},
  [185] = {.lex_state = 64, .external_lex_state = 1},
  [186] = {.lex_state = 194, .external_lex_state = 2},
  [187] = {.lex_state = 195, .external_lex_state = 2},
  [188] = {.lex_state = 194, .external_lex_state = 5},
  [189] = {.lex_state = 64, .external_lex_state = 1},
  [190] = {.lex_state = 195, .external_lex_state = 2},
  [191] = {.lex_state = 195, .external_lex_state = 2},
  [192] = {.lex_state = 195, .external_lex_state = 6},
  [193] = {.lex_state = 197, .external_lex_state = 3},
  [194] = {.lex_state = 195, .external_lex_state = 2},
  [195] = {.lex_state = 195, .external_lex_state = 2},
  [196] = {.lex_state = 195, .external_lex_state = 2},
  [197] = {.lex_state = 195, .external_lex_state = 2},
  [198] = {.lex_state = 195, .external_lex_state = 2},
  [199] = {.lex_state = 195, .external_lex_state = 2},
  [200] = {.lex_state = 195, .external_lex_state = 2},
  [201] = {.lex_state = 197, .external_lex_state = 3},
  [202] = {.lex_state = 195, .external_lex_state = 2},
  [203] = {.lex_state = 176, .external_lex_state = 2},
  [204] = {.lex_state = 195, .external_lex_state = 2},
  [205] = {.lex_state = 176, .external_lex_state = 2},
  [206] = {.lex_state = 195, .external_lex_state = 2},
  [207] = {.lex_state = 195, .external_lex_state = 6},
  [208] = {.lex_state = 195, .external_lex_state = 2},
  [209] = {.lex_state = 195, .external_lex_state = 2},
  [210] = {.lex_state = 195, .external_lex_state = 6},
  [211] = {.lex_state = 195, .external_lex_state = 2},
  [212] = {.lex_state = 195, .external_lex_state = 2},
  [213] = {.lex_state = 64, .external_lex_state = 2},
  [214] = {.lex_state = 197, .external_lex_state = 3},
  [215] = {.lex_state = 195, .external_lex_state = 2},
  [216] = {.lex_state = 195, .external_lex_state = 4},
  [217] = {.lex_state = 195, .external_lex_state = 6},
  [218] = {.lex_state = 195, .external_lex_state = 2},
  [219] = {.lex_state = 195, .external_lex_state = 2},
  [220] = {.lex_state = 196},
  [221] = {.lex_state = 195, .external_lex_state = 6},
  [222] = {.lex_state = 195, .external_lex_state = 2},
  [223] = {.lex_state = 195, .external_lex_state = 2},
  [224] = {.lex_state = 195, .external_lex_state = 2},
  [225] = {.lex_state = 195, .external_lex_state = 2},
  [226] = {.lex_state = 195, .external_lex_state = 2},
  [227] = {.lex_state = 195, .external_lex_state = 2},
  [228] = {.lex_state = 195, .external_lex_state = 2},
  [229] = {.lex_state = 11, .external_lex_state = 2},
  [230] = {.lex_state = 195, .external_lex_state = 2},
  [231] = {.lex_state = 195, .external_lex_state = 2},
  [232] = {.lex_state = 195, .external_lex_state = 2},
  [233] = {.lex_state = 176, .external_lex_state = 2},
  [234] = {.lex_state = 195, .external_lex_state = 2},
  [235] = {.lex_state = 195, .external_lex_state = 2},
  [236] = {.lex_state = 195, .external_lex_state = 2},
  [237] = {.lex_state = 195, .external_lex_state = 2},
  [238] = {.lex_state = 195, .external_lex_state = 2},
  [239] = {.lex_state = 195, .external_lex_state = 2},
  [240] = {.lex_state = 195, .external_lex_state = 2},
  [241] = {.lex_state = 195, .external_lex_state = 2},
  [242] = {.lex_state = 195, .external_lex_state = 2},
  [243] = {.lex_state = 175, .external_lex_state = 2},
  [244] = {.lex_state = 64, .external_lex_state = 1},
  [245] = {.lex_state = 195, .external_lex_state = 2},
  [246] = {.lex_state = 195, .external_lex_state = 4},
  [247] = {.lex_state = 195, .external_lex_state = 2},
  [248] = {.lex_state = 195, .external_lex_state = 2},
  [249] = {.lex_state = 195, .external_lex_state = 6},
  [250] = {.lex_state = 195, .external_lex_state = 6},
  [251] = {.lex_state = 195, .external_lex_state = 2},
  [252] = {.lex_state = 195, .external_lex_state = 2},
  [253] = {.lex_state = 195, .external_lex_state = 6},
  [254] = {.lex_state = 195, .external_lex_state = 2},
  [255] = {.lex_state = 64, .external_lex_state = 2},
  [256] = {.lex_state = 64, .external_lex_state = 2},
  [257] = {.lex_state = 63, .external_lex_state = 1},
  [258] = {.lex_state = 64, .external_lex_state = 2},
  [259] = {.lex_state = 64, .external_lex_state = 2},
  [260] = {.lex_state = 64, .external_lex_state = 2},
  [261] = {.lex_state = 63, .external_lex_state = 1},
  [262] = {.lex_state = 64, .external_lex_state = 2},
  [263] = {.lex_state = 64, .external_lex_state = 2},
  [264] = {.lex_state = 195, .external_lex_state = 6},
  [265] = {.lex_state = 195},
  [266] = {.lex_state = 64, .external_lex_state = 2},
  [267] = {.lex_state = 64, .external_lex_state = 2},
  [268] = {.lex_state = 195, .external_lex_state = 5},
  [269] = {.lex_state = 64, .external_lex_state = 2},
  [270] = {.lex_state = 64, .external_lex_state = 2},
  [271] = {.lex_state = 64, .external_lex_state = 2},
  [272] = {.lex_state = 64, .external_lex_state = 2},
  [273] = {.lex_state = 64, .external_lex_state = 2},
  [274] = {.lex_state = 195, .external_lex_state = 5},
  [275] = {.lex_state = 64, .external_lex_state = 2},
  [276] = {.lex_state = 64, .external_lex_state = 2},
  [277] = {.lex_state = 64, .external_lex_state = 2},
  [278] = {.lex_state = 64, .external_lex_state = 2},
  [279] = {.lex_state = 64, .external_lex_state = 2},
  [280] = {.lex_state = 64, .external_lex_state = 2},
  [281] = {.lex_state = 64, .external_lex_state = 2},
  [282] = {.lex_state = 64, .external_lex_state = 2},
  [283] = {.lex_state = 195, .external_lex_state = 3},
  [284] = {.lex_state = 64, .external_lex_state = 2},
  [285] = {.lex_state = 195},
  [286] = {.lex_state = 195, .external_lex_state = 5},
  [287] = {.lex_state = 64, .external_lex_state = 2},
  [288] = {.lex_state = 55, .external_lex_state = 2},
  [289] = {.lex_state = 64, .external_lex_state = 2},
  [290] = {.lex_state = 55, .external_lex_state = 2},
  [291] = {.lex_state = 64, .external_lex_state = 2},
  [292] = {.lex_state = 63, .external_lex_state = 1},
  [293] = {.lex_state = 64, .external_lex_state = 2},
  [294] = {.lex_state = 63, .external_lex_state = 1},
  [295] = {.lex_state = 64, .external_lex_state = 2},
  [296] = {.lex_state = 64, .external_lex_state = 2},
  [297] = {.lex_state = 64, .external_lex_state = 2},
  [298] = {.lex_state = 64, .external_lex_state = 2},
  [299] = {.lex_state = 64, .external_lex_state = 2},
  [300] = {.lex_state = 64, .external_lex_state = 2},
  [301] = {.lex_state = 64, .external_lex_state = 2},
  [302] = {.lex_state = 64, .external_lex_state = 2},
  [303] = {.lex_state = 64, .external_lex_state = 2},
  [304] = {.lex_state = 64, .external_lex_state = 2},
  [305] = {.lex_state = 64, .external_lex_state = 2},
  [306] = {.lex_state = 195, .external_lex_state = 5},
  [307] = {.lex_state = 64, .external_lex_state = 2},
  [308] = {.lex_state = 64, .external_lex_state = 2},
  [309] = {.lex_state = 64, .external_lex_state = 2},
  [310] = {.lex_state = 64, .external_lex_state = 2},
  [311] = {.lex_state = 63, .external_lex_state = 1},
  [312] = {.lex_state = 64, .external_lex_state = 2},
  [313] = {.lex_state = 63, .external_lex_state = 1},
  [314] = {.lex_state = 64, .external_lex_state = 2},
  [315] = {.lex_state = 64, .external_lex_state = 2},
  [316] = {.lex_state = 63, .external_lex_state = 1},
  [317] = {.lex_state = 63, .external_lex_state = 1},
  [318] = {.lex_state = 64, .external_lex_state = 2},
  [319] = {.lex_state = 64, .external_lex_state = 2},
  [320] = {.lex_state = 64, .external_lex_state = 2},
  [321] = {.lex_state = 195},
  [322] = {.lex_state = 63, .external_lex_state = 2},
  [323] = {.lex_state = 195},
  [324] = {.lex_state = 175, .external_lex_state = 2},
  [325] = {.lex_state = 195},
  [326] = {.lex_state = 195},
  [327] = {.lex_state = 195},
  [328] = {.lex_state = 195},
  [329] = {.lex_state = 195},
  [330] = {.lex_state = 195},
  [331] = {.lex_state = 195},
  [332] = {.lex_state = 195},
  [333] = {.lex_state = 195},
  [334] = {.lex_state = 195},
  [335] = {.lex_state = 195},
  [336] = {.lex_state = 195},
  [337] = {.lex_state = 195},
  [338] = {.lex_state = 195},
  [339] = {.lex_state = 63, .external_lex_state = 1},
  [340] = {.lex_state = 195},
  [341] = {.lex_state = 195},
  [342] = {.lex_state = 195},
  [343] = {.lex_state = 195},
  [344] = {.lex_state = 195},
  [345] = {.lex_state = 63, .external_lex_state = 1},
  [346] = {.lex_state = 195},
  [347] = {.lex_state = 195},
  [348] = {.lex_state = 195},
  [349] = {.lex_state = 195},
  [350] = {.lex_state = 195},
  [351] = {.lex_state = 195},
  [352] = {.lex_state = 195},
  [353] = {.lex_state = 195},
  [354] = {.lex_state = 195},
  [355] = {.lex_state = 195},
  [356] = {.lex_state = 195},
  [357] = {.lex_state = 195},
  [358] = {.lex_state = 175, .external_lex_state = 2},
  [359] = {.lex_state = 195},
  [360] = {.lex_state = 195},
  [361] = {.lex_state = 195},
  [362] = {.lex_state = 175, .external_lex_state = 2},
  [363] = {.lex_state = 195},
  [364] = {.lex_state = 195},
  [365] = {.lex_state = 195},
  [366] = {.lex_state = 195},
  [367] = {.lex_state = 195},
  [368] = {.lex_state = 195},
  [369] = {.lex_state = 195},
  [370] = {.lex_state = 195},
  [371] = {.lex_state = 195},
  [372] = {.lex_state = 195},
  [373] = {.lex_state = 195},
  [374] = {.lex_state = 55, .external_lex_state = 2},
  [375] = {.lex_state = 195},
  [376] = {.lex_state = 63, .external_lex_state = 2},
  [377] = {.lex_state = 63, .external_lex_state = 2},
  [378] = {.lex_state = 63, .external_lex_state = 2},
  [379] = {.lex_state = 63, .external_lex_state = 2},
  [380] = {.lex_state = 63, .external_lex_state = 2},
  [381] = {.lex_state = 63, .external_lex_state = 2},
  [382] = {.lex_state = 63, .external_lex_state = 2},
  [383] = {.lex_state = 63, .external_lex_state = 2},
  [384] = {.lex_state = 63, .external_lex_state = 2},
  [385] = {.lex_state = 63, .external_lex_state = 2},
  [386] = {.lex_state = 63, .external_lex_state = 2},
  [387] = {.lex_state = 63, .external_lex_state = 2},
  [388] = {.lex_state = 63, .external_lex_state = 2},
  [389] = {.lex_state = 63, .external_lex_state = 2},
  [390] = {.lex_state = 63, .external_lex_state = 2},
  [391] = {.lex_state = 63, .external_lex_state = 2},
  [392] = {.lex_state = 63, .external_lex_state = 2},
  [393] = {.lex_state = 63, .external_lex_state = 2},
  [394] = {.lex_state = 63, .external_lex_state = 2},
  [395] = {.lex_state = 63, .external_lex_state = 2},
  [396] = {.lex_state = 63, .external_lex_state = 2},
  [397] = {.lex_state = 63, .external_lex_state = 2},
  [398] = {.lex_state = 63, .external_lex_state = 2},
  [399] = {.lex_state = 63, .external_lex_state = 2},
  [400] = {.lex_state = 63, .external_lex_state = 2},
  [401] = {.lex_state = 63, .external_lex_state = 2},
  [402] = {.lex_state = 63, .external_lex_state = 2},
  [403] = {.lex_state = 63, .external_lex_state = 2},
  [404] = {.lex_state = 63, .external_lex_state = 2},
  [405] = {.lex_state = 63, .external_lex_state = 2},
  [406] = {.lex_state = 63, .external_lex_state = 2},
  [407] = {.lex_state = 63, .external_lex_state = 2},
  [408] = {.lex_state = 63, .external_lex_state = 2},
  [409] = {.lex_state = 63, .external_lex_state = 2},
  [410] = {.lex_state = 63, .external_lex_state = 2},
  [411] = {.lex_state = 63, .external_lex_state = 2},
  [412] = {.lex_state = 63, .external_lex_state = 2},
  [413] = {.lex_state = 63, .external_lex_state = 2},
  [414] = {.lex_state = 63, .external_lex_state = 2},
  [415] = {.lex_state = 63, .external_lex_state = 2},
  [416] = {.lex_state = 63, .external_lex_state = 2},
  [417] = {.lex_state = 63, .external_lex_state = 2},
  [418] = {.lex_state = 63, .external_lex_state = 2},
  [419] = {.lex_state = 63, .external_lex_state = 2},
  [420] = {.lex_state = 63, .external_lex_state = 2},
  [421] = {.lex_state = 65},
  [422] = {.lex_state = 65},
  [423] = {.lex_state = 65},
  [424] = {.lex_state = 59, .external_lex_state = 3},
  [425] = {.lex_state = 59, .external_lex_state = 3},
  [426] = {.lex_state = 59, .external_lex_state = 3},
  [427] = {.lex_state = 59, .external_lex_state = 3},
  [428] = {.lex_state = 59, .external_lex_state = 3},
  [429] = {.lex_state = 59, .external_lex_state = 3},
  [430] = {.lex_state = 59, .external_lex_state = 3},
  [431] = {.lex_state = 59, .external_lex_state = 3},
  [432] = {.lex_state = 59, .external_lex_state = 3},
  [433] = {.lex_state = 59, .external_lex_state = 3},
  [434] = {.lex_state = 65},
  [435] = {.lex_state = 59, .external_lex_state = 3},
  [436] = {.lex_state = 59, .external_lex_state = 3},
  [437] = {.lex_state = 59, .external_lex_state = 3},
  [438] = {.lex_state = 65},
  [439] = {.lex_state = 59, .external_lex_state = 3},
  [440] = {.lex_state = 59, .external_lex_state = 3},
  [441] = {.lex_state = 60, .external_lex_state = 3},
  [442] = {.lex_state = 69},
  [443] = {.lex_state = 69},
  [444] = {.lex_state = 60, .external_lex_state = 3},
  [445] = {.lex_state = 60, .external_lex_state = 3},
  [446] = {.lex_state = 69},
  [447] = {.lex_state = 60, .external_lex_state = 3},
  [448] = {.lex_state = 69},
  [449] = {.lex_state = 69},
  [450] = {.lex_state = 69},
  [451] = {.lex_state = 60, .external_lex_state = 3},
  [452] = {.lex_state = 69},
  [453] = {.lex_state = 69},
  [454] = {.lex_state = 60, .external_lex_state = 3},
  [455] = {.lex_state = 60, .external_lex_state = 3},
  [456] = {.lex_state = 60, .external_lex_state = 3},
  [457] = {.lex_state = 69},
  [458] = {.lex_state = 69},
  [459] = {.lex_state = 69},
  [460] = {.lex_state = 60, .external_lex_state = 3},
  [461] = {.lex_state = 69},
  [462] = {.lex_state = 60, .external_lex_state = 3},
  [463] = {.lex_state = 69},
  [464] = {.lex_state = 69},
  [465] = {.lex_state = 60, .external_lex_state = 3},
  [466] = {.lex_state = 69},
  [467] = {.lex_state = 60, .external_lex_state = 3},
  [468] = {.lex_state = 60, .external_lex_state = 3},
  [469] = {.lex_state = 60, .external_lex_state = 3},
  [470] = {.lex_state = 60, .external_lex_state = 3},
  [471] = {.lex_state = 60, .external_lex_state = 3},
  [472] = {.lex_state = 50, .external_lex_state = 2},
  [473] = {.lex_state = 50, .external_lex_state = 2},
  [474] = {.lex_state = 60, .external_lex_state = 3},
  [475] = {.lex_state = 50, .external_lex_state = 2},
  [476] = {.lex_state = 60, .external_lex_state = 3},
  [477] = {.lex_state = 60, .external_lex_state = 3},
  [478] = {.lex_state = 60, .external_lex_state = 3},
  [479] = {.lex_state = 60, .external_lex_state = 3},
  [480] = {.lex_state = 60, .external_lex_state = 3},
  [481] = {.lex_state = 60, .external_lex_state = 3},
  [482] = {.lex_state = 50, .external_lex_state = 2},
  [483] = {.lex_state = 60, .external_lex_state = 3},
  [484] = {.lex_state = 60, .external_lex_state = 3},
  [485] = {.lex_state = 60, .external_lex_state = 3},
  [486] = {.lex_state = 50, .external_lex_state = 2},
  [487] = {.lex_state = 50, .external_lex_state = 2},
  [488] = {.lex_state = 50, .external_lex_state = 2},
  [489] = {.lex_state = 60, .external_lex_state = 3},
  [490] = {.lex_state = 60, .external_lex_state = 3},
  [491] = {.lex_state = 50, .external_lex_state = 2},
  [492] = {.lex_state = 50, .external_lex_state = 2},
  [493] = {.lex_state = 60, .external_lex_state = 3},
  [494] = {.lex_state = 60, .external_lex_state = 3},
  [495] = {.lex_state = 60, .external_lex_state = 3},
  [496] = {.lex_state = 60, .external_lex_state = 3},
  [497] = {.lex_state = 50, .external_lex_state = 2},
  [498] = {.lex_state = 60, .external_lex_state = 3},
  [499] = {.lex_state = 50, .external_lex_state = 2},
  [500] = {.lex_state = 50, .external_lex_state = 2},
  [501] = {.lex_state = 50, .external_lex_state = 2},
  [502] = {.lex_state = 60, .external_lex_state = 3},
  [503] = {.lex_state = 50, .external_lex_state = 2},
  [504] = {.lex_state = 60, .external_lex_state = 3},
  [505] = {.lex_state = 50, .external_lex_state = 2},
  [506] = {.lex_state = 50, .external_lex_state = 3},
  [507] = {.lex_state = 50, .external_lex_state = 3},
  [508] = {.lex_state = 50, .external_lex_state = 3},
  [509] = {.lex_state = 50, .external_lex_state = 3},
  [510] = {.lex_state = 177, .external_lex_state = 3},
  [511] = {.lex_state = 50, .external_lex_state = 3},
  [512] = {.lex_state = 50, .external_lex_state = 3},
  [513] = {.lex_state = 50, .external_lex_state = 3},
  [514] = {.lex_state = 50, .external_lex_state = 3},
  [515] = {.lex_state = 50, .external_lex_state = 3},
  [516] = {.lex_state = 50, .external_lex_state = 3},
  [517] = {.lex_state = 50, .external_lex_state = 3},
  [518] = {.lex_state = 50, .external_lex_state = 3},
  [519] = {.lex_state = 50, .external_lex_state = 3},
  [520] = {.lex_state = 50, .external_lex_state = 3},
  [521] = {.lex_state = 50, .external_lex_state = 3},
  [522] = {.lex_state = 68, .external_lex_state = 2},
  [523] = {.lex_state = 50, .external_lex_state = 3},
  [524] = {.lex_state = 50, .external_lex_state = 3},
  [525] = {.lex_state = 50, .external_lex_state = 3},
  [526] = {.lex_state = 68, .external_lex_state = 2},
  [527] = {.lex_state = 50, .external_lex_state = 3},
  [528] = {.lex_state = 50, .external_lex_state = 3},
  [529] = {.lex_state = 50, .external_lex_state = 3},
  [530] = {.lex_state = 60, .external_lex_state = 3},
  [531] = {.lex_state = 50, .external_lex_state = 3},
  [532] = {.lex_state = 50, .external_lex_state = 3},
  [533] = {.lex_state = 68, .external_lex_state = 2},
  [534] = {.lex_state = 68, .external_lex_state = 2},
  [535] = {.lex_state = 50, .external_lex_state = 3},
  [536] = {.lex_state = 50, .external_lex_state = 3},
  [537] = {.lex_state = 50, .external_lex_state = 3},
  [538] = {.lex_state = 50, .external_lex_state = 3},
  [539] = {.lex_state = 68, .external_lex_state = 2},
  [540] = {.lex_state = 50, .external_lex_state = 3},
  [541] = {.lex_state = 68, .external_lex_state = 1},
  [542] = {.lex_state = 50, .external_lex_state = 3},
  [543] = {.lex_state = 50, .external_lex_state = 3},
  [544] = {.lex_state = 68, .external_lex_state = 2},
  [545] = {.lex_state = 50, .external_lex_state = 3},
  [546] = {.lex_state = 50, .external_lex_state = 3},
  [547] = {.lex_state = 50, .external_lex_state = 3},
  [548] = {.lex_state = 50, .external_lex_state = 3},
  [549] = {.lex_state = 68, .external_lex_state = 1},
  [550] = {.lex_state = 50, .external_lex_state = 3},
  [551] = {.lex_state = 60, .external_lex_state = 3},
  [552] = {.lex_state = 50, .external_lex_state = 3},
  [553] = {.lex_state = 50, .external_lex_state = 3},
  [554] = {.lex_state = 50, .external_lex_state = 3},
  [555] = {.lex_state = 50, .external_lex_state = 3},
  [556] = {.lex_state = 68, .external_lex_state = 2},
  [557] = {.lex_state = 50, .external_lex_state = 3},
  [558] = {.lex_state = 50, .external_lex_state = 3},
  [559] = {.lex_state = 50, .external_lex_state = 3},
  [560] = {.lex_state = 50, .external_lex_state = 3},
  [561] = {.lex_state = 68, .external_lex_state = 2},
  [562] = {.lex_state = 50, .external_lex_state = 3},
  [563] = {.lex_state = 50, .external_lex_state = 3},
  [564] = {.lex_state = 68, .external_lex_state = 1},
  [565] = {.lex_state = 50, .external_lex_state = 3},
  [566] = {.lex_state = 68, .external_lex_state = 1},
  [567] = {.lex_state = 50, .external_lex_state = 3},
  [568] = {.lex_state = 60, .external_lex_state = 3},
  [569] = {.lex_state = 50, .external_lex_state = 3},
  [570] = {.lex_state = 50, .external_lex_state = 3},
  [571] = {.lex_state = 68, .external_lex_state = 1},
  [572] = {.lex_state = 65},
  [573] = {.lex_state = 68, .external_lex_state = 1},
  [574] = {.lex_state = 50, .external_lex_state = 3},
  [575] = {.lex_state = 68, .external_lex_state = 1},
  [576] = {.lex_state = 50, .external_lex_state = 3},
  [577] = {.lex_state = 50, .external_lex_state = 3},
  [578] = {.lex_state = 50, .external_lex_state = 3},
  [579] = {.lex_state = 68, .external_lex_state = 2},
  [580] = {.lex_state = 68, .external_lex_state = 1},
  [581] = {.lex_state = 50, .external_lex_state = 3},
  [582] = {.lex_state = 68, .external_lex_state = 3},
  [583] = {.lex_state = 68, .external_lex_state = 1},
  [584] = {.lex_state = 68, .external_lex_state = 3},
  [585] = {.lex_state = 50},
  [586] = {.lex_state = 50},
  [587] = {.lex_state = 50},
  [588] = {.lex_state = 50},
  [589] = {.lex_state = 50, .external_lex_state = 3},
  [590] = {.lex_state = 50},
  [591] = {.lex_state = 50},
  [592] = {.lex_state = 50},
  [593] = {.lex_state = 50},
  [594] = {.lex_state = 68, .external_lex_state = 3},
  [595] = {.lex_state = 50},
  [596] = {.lex_state = 50},
  [597] = {.lex_state = 50},
  [598] = {.lex_state = 50},
  [599] = {.lex_state = 50},
  [600] = {.lex_state = 50},
  [601] = {.lex_state = 68, .external_lex_state = 3},
  [602] = {.lex_state = 50},
  [603] = {.lex_state = 178, .external_lex_state = 3},
  [604] = {.lex_state = 50},
  [605] = {.lex_state = 50},
  [606] = {.lex_state = 50},
  [607] = {.lex_state = 50},
  [608] = {.lex_state = 50},
  [609] = {.lex_state = 68, .external_lex_state = 3},
  [610] = {.lex_state = 50},
  [611] = {.lex_state = 50},
  [612] = {.lex_state = 60},
  [613] = {.lex_state = 50},
  [614] = {.lex_state = 60},
  [615] = {.lex_state = 68, .external_lex_state = 3},
  [616] = {.lex_state = 50},
  [617] = {.lex_state = 50},
  [618] = {.lex_state = 60},
  [619] = {.lex_state = 68, .external_lex_state = 3},
  [620] = {.lex_state = 68, .external_lex_state = 3},
  [621] = {.lex_state = 50},
  [622] = {.lex_state = 50},
  [623] = {.lex_state = 50},
  [624] = {.lex_state = 68},
  [625] = {.lex_state = 68, .external_lex_state = 2},
  [626] = {.lex_state = 60},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 50, .external_lex_state = 2},
  [629] = {.lex_state = 68, .external_lex_state = 2},
  [630] = {.lex_state = 68, .external_lex_state = 2},
  [631] = {.lex_state = 50, .external_lex_state = 3},
  [632] = {.lex_state = 68, .external_lex_state = 2},
  [633] = {.lex_state = 50, .external_lex_state = 2},
  [634] = {.lex_state = 68, .external_lex_state = 2},
  [635] = {.lex_state = 50, .external_lex_state = 3},
  [636] = {.lex_state = 68, .external_lex_state = 2},
  [637] = {.lex_state = 68},
  [638] = {.lex_state = 68, .external_lex_state = 2},
  [639] = {.lex_state = 68, .external_lex_state = 2},
  [640] = {.lex_state = 68},
  [641] = {.lex_state = 50, .external_lex_state = 3},
  [642] = {.lex_state = 68, .external_lex_state = 2},
  [643] = {.lex_state = 68, .external_lex_state = 2},
  [644] = {.lex_state = 68, .external_lex_state = 2},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 68, .external_lex_state = 2},
  [647] = {.lex_state = 69},
  [648] = {.lex_state = 68, .external_lex_state = 2},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 103},
  [651] = {.lex_state = 51, .external_lex_state = 2},
  [652] = {.lex_state = 258, .external_lex_state = 5},
  [653] = {.lex_state = 258, .external_lex_state = 5},
  [654] = {.lex_state = 178, .external_lex_state = 3},
  [655] = {.lex_state = 50, .external_lex_state = 3},
  [656] = {.lex_state = 68},
  [657] = {.lex_state = 68},
  [658] = {.lex_state = 51, .external_lex_state = 2},
  [659] = {.lex_state = 50, .external_lex_state = 3},
  [660] = {.lex_state = 68},
  [661] = {.lex_state = 68},
  [662] = {.lex_state = 68},
  [663] = {.lex_state = 68},
  [664] = {.lex_state = 68},
  [665] = {.lex_state = 258, .external_lex_state = 5},
  [666] = {.lex_state = 258, .external_lex_state = 5},
  [667] = {.lex_state = 68},
  [668] = {.lex_state = 258, .external_lex_state = 5},
  [669] = {.lex_state = 68},
  [670] = {.lex_state = 68},
  [671] = {.lex_state = 50, .external_lex_state = 3},
  [672] = {.lex_state = 68},
  [673] = {.lex_state = 68},
  [674] = {.lex_state = 56, .external_lex_state = 3},
  [675] = {.lex_state = 56, .external_lex_state = 3},
  [676] = {.lex_state = 178, .external_lex_state = 3},
  [677] = {.lex_state = 68},
  [678] = {.lex_state = 68},
  [679] = {.lex_state = 68},
  [680] = {.lex_state = 103},
  [681] = {.lex_state = 68},
  [682] = {.lex_state = 56, .external_lex_state = 3},
  [683] = {.lex_state = 103},
  [684] = {.lex_state = 68},
  [685] = {.lex_state = 68},
  [686] = {.lex_state = 103},
  [687] = {.lex_state = 68},
  [688] = {.lex_state = 51, .external_lex_state = 2},
  [689] = {.lex_state = 68},
  [690] = {.lex_state = 68},
  [691] = {.lex_state = 56, .external_lex_state = 3},
  [692] = {.lex_state = 103},
  [693] = {.lex_state = 59},
  [694] = {.lex_state = 178, .external_lex_state = 3},
  [695] = {.lex_state = 258, .external_lex_state = 5},
  [696] = {.lex_state = 68},
  [697] = {.lex_state = 51, .external_lex_state = 2},
  [698] = {.lex_state = 68},
  [699] = {.lex_state = 68},
  [700] = {.lex_state = 258, .external_lex_state = 5},
  [701] = {.lex_state = 51, .external_lex_state = 2},
  [702] = {.lex_state = 68},
  [703] = {.lex_state = 258, .external_lex_state = 5},
  [704] = {.lex_state = 68},
  [705] = {.lex_state = 258, .external_lex_state = 5},
  [706] = {.lex_state = 56, .external_lex_state = 3},
  [707] = {.lex_state = 258, .external_lex_state = 5},
  [708] = {.lex_state = 68},
  [709] = {.lex_state = 59},
  [710] = {.lex_state = 51, .external_lex_state = 2},
  [711] = {.lex_state = 258, .external_lex_state = 5},
  [712] = {.lex_state = 68},
  [713] = {.lex_state = 56},
  [714] = {.lex_state = 258},
  [715] = {.lex_state = 183},
  [716] = {.lex_state = 183},
  [717] = {.lex_state = 183},
  [718] = {.lex_state = 258, .external_lex_state = 5},
  [719] = {.lex_state = 59},
  [720] = {.lex_state = 183},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 59},
  [723] = {.lex_state = 59},
  [724] = {.lex_state = 59},
  [725] = {.lex_state = 59},
  [726] = {.lex_state = 56},
  [727] = {.lex_state = 59},
  [728] = {.lex_state = 258, .external_lex_state = 5},
  [729] = {.lex_state = 0, .external_lex_state = 3},
  [730] = {.lex_state = 59},
  [731] = {.lex_state = 258, .external_lex_state = 5},
  [732] = {.lex_state = 258},
  [733] = {.lex_state = 56},
  [734] = {.lex_state = 59},
  [735] = {.lex_state = 51, .external_lex_state = 3},
  [736] = {.lex_state = 258, .external_lex_state = 3},
  [737] = {.lex_state = 59},
  [738] = {.lex_state = 258},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 59},
  [741] = {.lex_state = 52},
  [742] = {.lex_state = 52},
  [743] = {.lex_state = 258},
  [744] = {.lex_state = 51, .external_lex_state = 3},
  [745] = {.lex_state = 258, .external_lex_state = 3},
  [746] = {.lex_state = 51, .external_lex_state = 2},
  [747] = {.lex_state = 56},
  [748] = {.lex_state = 56},
  [749] = {.lex_state = 0, .external_lex_state = 3},
  [750] = {.lex_state = 258, .external_lex_state = 5},
  [751] = {.lex_state = 258},
  [752] = {.lex_state = 258},
  [753] = {.lex_state = 51, .external_lex_state = 3},
  [754] = {.lex_state = 258, .external_lex_state = 3},
  [755] = {.lex_state = 52},
  [756] = {.lex_state = 258},
  [757] = {.lex_state = 56},
  [758] = {.lex_state = 56},
  [759] = {.lex_state = 258},
  [760] = {.lex_state = 258, .external_lex_state = 3},
  [761] = {.lex_state = 51, .external_lex_state = 3},
  [762] = {.lex_state = 183},
  [763] = {.lex_state = 258, .external_lex_state = 3},
  [764] = {.lex_state = 59},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 258},
  [767] = {.lex_state = 51, .external_lex_state = 2},
  [768] = {.lex_state = 59},
  [769] = {.lex_state = 258, .external_lex_state = 5},
  [770] = {.lex_state = 0, .external_lex_state = 3},
  [771] = {.lex_state = 258, .external_lex_state = 5},
  [772] = {.lex_state = 59},
  [773] = {.lex_state = 59},
  [774] = {.lex_state = 258, .external_lex_state = 5},
  [775] = {.lex_state = 56},
  [776] = {.lex_state = 56},
  [777] = {.lex_state = 59},
  [778] = {.lex_state = 59},
  [779] = {.lex_state = 258, .external_lex_state = 5},
  [780] = {.lex_state = 56},
  [781] = {.lex_state = 56},
  [782] = {.lex_state = 59},
  [783] = {.lex_state = 258, .external_lex_state = 5},
  [784] = {.lex_state = 56},
  [785] = {.lex_state = 59},
  [786] = {.lex_state = 258},
  [787] = {.lex_state = 51, .external_lex_state = 3},
  [788] = {.lex_state = 258, .external_lex_state = 5},
  [789] = {.lex_state = 59},
  [790] = {.lex_state = 258, .external_lex_state = 5},
  [791] = {.lex_state = 72},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 59},
  [794] = {.lex_state = 52},
  [795] = {.lex_state = 59},
  [796] = {.lex_state = 56},
  [797] = {.lex_state = 56},
  [798] = {.lex_state = 258, .external_lex_state = 5},
  [799] = {.lex_state = 56},
  [800] = {.lex_state = 56},
  [801] = {.lex_state = 56},
  [802] = {.lex_state = 0, .external_lex_state = 3},
  [803] = {.lex_state = 59},
  [804] = {.lex_state = 258, .external_lex_state = 5},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 52},
  [807] = {.lex_state = 59},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 56},
  [810] = {.lex_state = 56},
  [811] = {.lex_state = 51},
  [812] = {.lex_state = 0, .external_lex_state = 6},
  [813] = {.lex_state = 0, .external_lex_state = 6},
  [814] = {.lex_state = 0, .external_lex_state = 6},
  [815] = {.lex_state = 51},
  [816] = {.lex_state = 0, .external_lex_state = 6},
  [817] = {.lex_state = 56},
  [818] = {.lex_state = 51},
  [819] = {.lex_state = 0, .external_lex_state = 6},
  [820] = {.lex_state = 68},
  [821] = {.lex_state = 68},
  [822] = {.lex_state = 68},
  [823] = {.lex_state = 68},
  [824] = {.lex_state = 0, .external_lex_state = 6},
  [825] = {.lex_state = 51},
  [826] = {.lex_state = 56},
  [827] = {.lex_state = 51},
  [828] = {.lex_state = 51},
  [829] = {.lex_state = 0, .external_lex_state = 6},
  [830] = {.lex_state = 68},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 56},
  [833] = {.lex_state = 68},
  [834] = {.lex_state = 51},
  [835] = {.lex_state = 0, .external_lex_state = 6},
  [836] = {.lex_state = 51},
  [837] = {.lex_state = 68},
  [838] = {.lex_state = 68},
  [839] = {.lex_state = 56},
  [840] = {.lex_state = 51},
  [841] = {.lex_state = 0, .external_lex_state = 6},
  [842] = {.lex_state = 68},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0, .external_lex_state = 6},
  [845] = {.lex_state = 0, .external_lex_state = 6},
  [846] = {.lex_state = 68},
  [847] = {.lex_state = 68},
  [848] = {.lex_state = 68},
  [849] = {.lex_state = 0, .external_lex_state = 3},
  [850] = {.lex_state = 0, .external_lex_state = 6},
  [851] = {.lex_state = 258, .external_lex_state = 5},
  [852] = {.lex_state = 56},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0, .external_lex_state = 6},
  [855] = {.lex_state = 59},
  [856] = {.lex_state = 68},
  [857] = {.lex_state = 66},
  [858] = {.lex_state = 70},
  [859] = {.lex_state = 183},
  [860] = {.lex_state = 51},
  [861] = {.lex_state = 0, .external_lex_state = 6},
  [862] = {.lex_state = 0, .external_lex_state = 6},
  [863] = {.lex_state = 0, .external_lex_state = 6},
  [864] = {.lex_state = 0, .external_lex_state = 6},
  [865] = {.lex_state = 68},
  [866] = {.lex_state = 0, .external_lex_state = 6},
  [867] = {.lex_state = 68},
  [868] = {.lex_state = 68},
  [869] = {.lex_state = 258, .external_lex_state = 5},
  [870] = {.lex_state = 0, .external_lex_state = 6},
  [871] = {.lex_state = 72},
  [872] = {.lex_state = 0, .external_lex_state = 6},
  [873] = {.lex_state = 0, .external_lex_state = 6},
  [874] = {.lex_state = 70},
  [875] = {.lex_state = 0, .external_lex_state = 6},
  [876] = {.lex_state = 66},
  [877] = {.lex_state = 0, .external_lex_state = 6},
  [878] = {.lex_state = 68},
  [879] = {.lex_state = 0, .external_lex_state = 6},
  [880] = {.lex_state = 0, .external_lex_state = 6},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 68},
  [883] = {.lex_state = 70},
  [884] = {.lex_state = 66},
  [885] = {.lex_state = 68},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 72},
  [891] = {.lex_state = 0, .external_lex_state = 6},
  [892] = {.lex_state = 0, .external_lex_state = 6},
  [893] = {.lex_state = 0, .external_lex_state = 6},
  [894] = {.lex_state = 68},
  [895] = {.lex_state = 0, .external_lex_state = 6},
  [896] = {.lex_state = 0, .external_lex_state = 3},
  [897] = {.lex_state = 0, .external_lex_state = 3},
  [898] = {.lex_state = 0, .external_lex_state = 6},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0, .external_lex_state = 3},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0, .external_lex_state = 3},
  [903] = {.lex_state = 0, .external_lex_state = 3},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0, .external_lex_state = 3},
  [906] = {.lex_state = 0, .external_lex_state = 3},
  [907] = {.lex_state = 0, .external_lex_state = 3},
  [908] = {.lex_state = 184},
  [909] = {.lex_state = 258},
  [910] = {.lex_state = 0, .external_lex_state = 3},
  [911] = {.lex_state = 51},
  [912] = {.lex_state = 0, .external_lex_state = 3},
  [913] = {.lex_state = 788},
  [914] = {.lex_state = 0, .external_lex_state = 3},
  [915] = {.lex_state = 0, .external_lex_state = 3},
  [916] = {.lex_state = 51},
  [917] = {.lex_state = 0, .external_lex_state = 6},
  [918] = {.lex_state = 0, .external_lex_state = 6},
  [919] = {.lex_state = 788},
  [920] = {.lex_state = 0, .external_lex_state = 3},
  [921] = {.lex_state = 0, .external_lex_state = 3},
  [922] = {.lex_state = 0, .external_lex_state = 6},
  [923] = {.lex_state = 0, .external_lex_state = 3},
  [924] = {.lex_state = 0, .external_lex_state = 3},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 72},
  [928] = {.lex_state = 0, .external_lex_state = 3},
  [929] = {.lex_state = 0, .external_lex_state = 3},
  [930] = {.lex_state = 0, .external_lex_state = 3},
  [931] = {.lex_state = 0, .external_lex_state = 3},
  [932] = {.lex_state = 788},
  [933] = {.lex_state = 0, .external_lex_state = 3},
  [934] = {.lex_state = 0, .external_lex_state = 3},
  [935] = {.lex_state = 51},
  [936] = {.lex_state = 0, .external_lex_state = 6},
  [937] = {.lex_state = 0, .external_lex_state = 3},
  [938] = {.lex_state = 53},
  [939] = {.lex_state = 0, .external_lex_state = 6},
  [940] = {.lex_state = 0, .external_lex_state = 3},
  [941] = {.lex_state = 0, .external_lex_state = 3},
  [942] = {.lex_state = 51},
  [943] = {.lex_state = 56},
  [944] = {.lex_state = 54},
  [945] = {.lex_state = 0, .external_lex_state = 3},
  [946] = {.lex_state = 185},
  [947] = {.lex_state = 0, .external_lex_state = 3},
  [948] = {.lex_state = 0, .external_lex_state = 3},
  [949] = {.lex_state = 51},
  [950] = {.lex_state = 788},
  [951] = {.lex_state = 0, .external_lex_state = 3},
  [952] = {.lex_state = 0, .external_lex_state = 3},
  [953] = {.lex_state = 0, .external_lex_state = 6},
  [954] = {.lex_state = 0, .external_lex_state = 6},
  [955] = {.lex_state = 258},
  [956] = {.lex_state = 258},
  [957] = {.lex_state = 0, .external_lex_state = 6},
  [958] = {.lex_state = 0, .external_lex_state = 6},
  [959] = {.lex_state = 0, .external_lex_state = 3},
  [960] = {.lex_state = 0, .external_lex_state = 6},
  [961] = {.lex_state = 53},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0, .external_lex_state = 3},
  [964] = {.lex_state = 68},
  [965] = {.lex_state = 258},
  [966] = {.lex_state = 0, .external_lex_state = 3},
  [967] = {.lex_state = 0, .external_lex_state = 3},
  [968] = {.lex_state = 51},
  [969] = {.lex_state = 788},
  [970] = {.lex_state = 0, .external_lex_state = 3},
  [971] = {.lex_state = 0, .external_lex_state = 3},
  [972] = {.lex_state = 68},
  [973] = {.lex_state = 0, .external_lex_state = 6},
  [974] = {.lex_state = 185},
  [975] = {.lex_state = 195},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0, .external_lex_state = 6},
  [978] = {.lex_state = 0, .external_lex_state = 6},
  [979] = {.lex_state = 0, .external_lex_state = 3},
  [980] = {.lex_state = 51},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0, .external_lex_state = 3},
  [984] = {.lex_state = 0, .external_lex_state = 3},
  [985] = {.lex_state = 0, .external_lex_state = 3},
  [986] = {.lex_state = 0, .external_lex_state = 3},
  [987] = {.lex_state = 0, .external_lex_state = 6},
  [988] = {.lex_state = 0, .external_lex_state = 6},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0, .external_lex_state = 3},
  [992] = {.lex_state = 185},
  [993] = {.lex_state = 0, .external_lex_state = 6},
  [994] = {.lex_state = 0, .external_lex_state = 3},
  [995] = {.lex_state = 51},
  [996] = {.lex_state = 51},
  [997] = {.lex_state = 51},
  [998] = {.lex_state = 0, .external_lex_state = 3},
  [999] = {.lex_state = 51},
  [1000] = {.lex_state = 0, .external_lex_state = 3},
  [1001] = {.lex_state = 51},
  [1002] = {.lex_state = 0, .external_lex_state = 3},
  [1003] = {.lex_state = 0, .external_lex_state = 3},
  [1004] = {.lex_state = 0, .external_lex_state = 3},
  [1005] = {.lex_state = 0, .external_lex_state = 6},
  [1006] = {.lex_state = 0, .external_lex_state = 6},
  [1007] = {.lex_state = 0, .external_lex_state = 3},
  [1008] = {.lex_state = 0, .external_lex_state = 6},
  [1009] = {.lex_state = 0, .external_lex_state = 6},
  [1010] = {.lex_state = 51},
  [1011] = {.lex_state = 185},
  [1012] = {.lex_state = 0, .external_lex_state = 3},
  [1013] = {.lex_state = 0, .external_lex_state = 6},
  [1014] = {.lex_state = 0, .external_lex_state = 6},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0, .external_lex_state = 6},
  [1017] = {.lex_state = 0, .external_lex_state = 6},
  [1018] = {.lex_state = 0, .external_lex_state = 3},
  [1019] = {.lex_state = 51},
  [1020] = {.lex_state = 0, .external_lex_state = 6},
  [1021] = {.lex_state = 0, .external_lex_state = 6},
  [1022] = {.lex_state = 0, .external_lex_state = 3},
  [1023] = {.lex_state = 0, .external_lex_state = 6},
  [1024] = {.lex_state = 0, .external_lex_state = 6},
  [1025] = {.lex_state = 51},
  [1026] = {.lex_state = 258},
  [1027] = {.lex_state = 0, .external_lex_state = 6},
  [1028] = {.lex_state = 0, .external_lex_state = 6},
  [1029] = {.lex_state = 0, .external_lex_state = 3},
  [1030] = {.lex_state = 0, .external_lex_state = 6},
  [1031] = {.lex_state = 0, .external_lex_state = 6},
  [1032] = {.lex_state = 0, .external_lex_state = 6},
  [1033] = {.lex_state = 0, .external_lex_state = 6},
  [1034] = {.lex_state = 0, .external_lex_state = 6},
  [1035] = {.lex_state = 0, .external_lex_state = 6},
  [1036] = {.lex_state = 56},
  [1037] = {.lex_state = 0, .external_lex_state = 3},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0, .external_lex_state = 3},
  [1040] = {.lex_state = 0, .external_lex_state = 3},
  [1041] = {.lex_state = 56},
  [1042] = {.lex_state = 0, .external_lex_state = 3},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0, .external_lex_state = 3},
  [1045] = {.lex_state = 0, .external_lex_state = 3},
  [1046] = {.lex_state = 0, .external_lex_state = 3},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0, .external_lex_state = 3},
  [1049] = {.lex_state = 0, .external_lex_state = 3},
  [1050] = {.lex_state = 0, .external_lex_state = 3},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0, .external_lex_state = 3},
  [1053] = {.lex_state = 0, .external_lex_state = 3},
  [1054] = {.lex_state = 0, .external_lex_state = 3},
  [1055] = {.lex_state = 0, .external_lex_state = 3},
  [1056] = {.lex_state = 0, .external_lex_state = 3},
  [1057] = {.lex_state = 0, .external_lex_state = 3},
  [1058] = {.lex_state = 51},
  [1059] = {.lex_state = 185},
  [1060] = {.lex_state = 185},
  [1061] = {.lex_state = 258},
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
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(962),
    [sym_doctype] = STATE(11),
    [sym_pipe] = STATE(11),
    [sym_include] = STATE(11),
    [sym_while] = STATE(11),
    [sym_each] = STATE(11),
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
    [sym__comment] = STATE(359),
    [sym__comment_not_first_line] = STATE(359),
    [sym_unbuffered_code] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_each] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_mixin] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_extends] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_unless] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_elseif] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_script_DOT] = ACTIONS(41),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(45),
    [sym_tag_name] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
    [sym_id] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(103), 1,
      sym__dedent,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(67), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
    STATE(3), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [111] = 27,
    ACTIONS(107), 1,
      anon_sym_doctype,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_include,
    ACTIONS(116), 1,
      anon_sym_while,
    ACTIONS(119), 1,
      anon_sym_else,
    ACTIONS(127), 1,
      anon_sym_block,
    ACTIONS(130), 1,
      anon_sym_append,
    ACTIONS(133), 1,
      anon_sym_prepend,
    ACTIONS(136), 1,
      anon_sym_extends,
    ACTIONS(139), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_elseif,
    ACTIONS(148), 1,
      anon_sym_case,
    ACTIONS(151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      anon_sym_script_DOT,
    ACTIONS(160), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(166), 1,
      sym_tag_name,
    ACTIONS(172), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(122), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(142), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(169), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(105), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(125), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
    STATE(3), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [220] = 28,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(67), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
    STATE(3), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [331] = 28,
    ACTIONS(67), 1,
      anon_sym_mixin,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      sym__newline,
    ACTIONS(224), 1,
      sym__dedent,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [440] = 27,
    ACTIONS(125), 1,
      anon_sym_mixin,
    ACTIONS(148), 1,
      anon_sym_case,
    ACTIONS(226), 1,
      anon_sym_doctype,
    ACTIONS(229), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_include,
    ACTIONS(235), 1,
      anon_sym_while,
    ACTIONS(238), 1,
      anon_sym_else,
    ACTIONS(244), 1,
      anon_sym_block,
    ACTIONS(247), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(253), 1,
      anon_sym_extends,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(265), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(271), 1,
      anon_sym_script_DOT,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(277), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(280), 1,
      sym_tag_name,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(289), 1,
      sym__newline,
    ACTIONS(241), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(259), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(283), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(105), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    STATE(6), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [547] = 28,
    ACTIONS(67), 1,
      anon_sym_mixin,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      sym__newline,
    ACTIONS(292), 1,
      sym__dedent,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [656] = 27,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_doctype,
    ACTIONS(299), 1,
      anon_sym_PIPE,
    ACTIONS(302), 1,
      anon_sym_include,
    ACTIONS(305), 1,
      anon_sym_while,
    ACTIONS(308), 1,
      anon_sym_else,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(317), 1,
      anon_sym_mixin,
    ACTIONS(320), 1,
      anon_sym_block,
    ACTIONS(323), 1,
      anon_sym_append,
    ACTIONS(326), 1,
      anon_sym_prepend,
    ACTIONS(329), 1,
      anon_sym_extends,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(338), 1,
      anon_sym_elseif,
    ACTIONS(341), 1,
      anon_sym_case,
    ACTIONS(344), 1,
      anon_sym_BANG_EQ,
    ACTIONS(347), 1,
      anon_sym_EQ,
    ACTIONS(350), 1,
      anon_sym_script_DOT,
    ACTIONS(353), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(356), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(359), 1,
      sym_tag_name,
    ACTIONS(365), 1,
      anon_sym_DASH,
    ACTIONS(311), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(335), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(362), 2,
      sym_class,
      sym_id,
    STATE(359), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 21,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [762] = 27,
    ACTIONS(105), 1,
      sym__dedent,
    ACTIONS(368), 1,
      anon_sym_doctype,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_include,
    ACTIONS(377), 1,
      anon_sym_while,
    ACTIONS(380), 1,
      anon_sym_else,
    ACTIONS(386), 1,
      anon_sym_block,
    ACTIONS(389), 1,
      anon_sym_append,
    ACTIONS(392), 1,
      anon_sym_prepend,
    ACTIONS(395), 1,
      anon_sym_extends,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(404), 1,
      anon_sym_elseif,
    ACTIONS(407), 1,
      anon_sym_case,
    ACTIONS(410), 1,
      anon_sym_BANG_EQ,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_script_DOT,
    ACTIONS(419), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(422), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(425), 1,
      sym_tag_name,
    ACTIONS(431), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      sym__newline,
    ACTIONS(125), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(383), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(401), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(428), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [868] = 27,
    ACTIONS(437), 1,
      anon_sym_doctype,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_include,
    ACTIONS(443), 1,
      anon_sym_while,
    ACTIONS(445), 1,
      anon_sym_else,
    ACTIONS(449), 1,
      anon_sym_block,
    ACTIONS(451), 1,
      anon_sym_append,
    ACTIONS(453), 1,
      anon_sym_prepend,
    ACTIONS(455), 1,
      anon_sym_extends,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_elseif,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_script_DOT,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(475), 1,
      sym_tag_name,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(481), 1,
      sym__newline,
    ACTIONS(483), 1,
      sym__dedent,
    ACTIONS(67), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(447), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(459), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(477), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [974] = 27,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(17), 1,
      anon_sym_PLUS,
    ACTIONS(19), 1,
      anon_sym_mixin,
    ACTIONS(21), 1,
      anon_sym_block,
    ACTIONS(23), 1,
      anon_sym_append,
    ACTIONS(25), 1,
      anon_sym_prepend,
    ACTIONS(27), 1,
      anon_sym_extends,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_elseif,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_BANG_EQ,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(41), 1,
      anon_sym_script_DOT,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(31), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(359), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 21,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1080] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(40), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1182] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1284] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1386] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1488] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1590] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1692] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1794] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1896] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [1998] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(549), 1,
      sym__newline,
    ACTIONS(551), 1,
      sym__dedent,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(37), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2100] = 26,
    ACTIONS(437), 1,
      anon_sym_doctype,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_include,
    ACTIONS(443), 1,
      anon_sym_while,
    ACTIONS(445), 1,
      anon_sym_else,
    ACTIONS(449), 1,
      anon_sym_block,
    ACTIONS(451), 1,
      anon_sym_append,
    ACTIONS(453), 1,
      anon_sym_prepend,
    ACTIONS(455), 1,
      anon_sym_extends,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_elseif,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_script_DOT,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(475), 1,
      sym_tag_name,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(447), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(459), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(477), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2202] = 26,
    ACTIONS(437), 1,
      anon_sym_doctype,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_include,
    ACTIONS(443), 1,
      anon_sym_while,
    ACTIONS(445), 1,
      anon_sym_else,
    ACTIONS(449), 1,
      anon_sym_block,
    ACTIONS(451), 1,
      anon_sym_append,
    ACTIONS(453), 1,
      anon_sym_prepend,
    ACTIONS(455), 1,
      anon_sym_extends,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_elseif,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_script_DOT,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(475), 1,
      sym_tag_name,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(447), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(459), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(477), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2304] = 26,
    ACTIONS(437), 1,
      anon_sym_doctype,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_include,
    ACTIONS(443), 1,
      anon_sym_while,
    ACTIONS(445), 1,
      anon_sym_else,
    ACTIONS(449), 1,
      anon_sym_block,
    ACTIONS(451), 1,
      anon_sym_append,
    ACTIONS(453), 1,
      anon_sym_prepend,
    ACTIONS(455), 1,
      anon_sym_extends,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_elseif,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_script_DOT,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(475), 1,
      sym_tag_name,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(447), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(459), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(477), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2406] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(557), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2508] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(557), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2610] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(557), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2712] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(40), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2814] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [2916] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(557), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3018] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3120] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(40), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3222] = 26,
    ACTIONS(437), 1,
      anon_sym_doctype,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_include,
    ACTIONS(443), 1,
      anon_sym_while,
    ACTIONS(445), 1,
      anon_sym_else,
    ACTIONS(449), 1,
      anon_sym_block,
    ACTIONS(451), 1,
      anon_sym_append,
    ACTIONS(453), 1,
      anon_sym_prepend,
    ACTIONS(455), 1,
      anon_sym_extends,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_elseif,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_script_DOT,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(475), 1,
      sym_tag_name,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(447), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(459), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(477), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3324] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3426] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3528] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3630] = 26,
    ACTIONS(105), 1,
      sym__dedent,
    ACTIONS(407), 1,
      anon_sym_case,
    ACTIONS(561), 1,
      anon_sym_doctype,
    ACTIONS(564), 1,
      anon_sym_PIPE,
    ACTIONS(567), 1,
      anon_sym_include,
    ACTIONS(570), 1,
      anon_sym_while,
    ACTIONS(573), 1,
      anon_sym_else,
    ACTIONS(579), 1,
      anon_sym_block,
    ACTIONS(582), 1,
      anon_sym_append,
    ACTIONS(585), 1,
      anon_sym_prepend,
    ACTIONS(588), 1,
      anon_sym_extends,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(597), 1,
      anon_sym_elseif,
    ACTIONS(600), 1,
      anon_sym_BANG_EQ,
    ACTIONS(603), 1,
      anon_sym_EQ,
    ACTIONS(606), 1,
      anon_sym_script_DOT,
    ACTIONS(609), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(612), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(615), 1,
      sym_tag_name,
    ACTIONS(621), 1,
      anon_sym_DASH,
    ACTIONS(624), 1,
      sym__newline,
    ACTIONS(576), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(594), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(618), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(37), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3732] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(40), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3834] = 26,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [3936] = 26,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(549), 1,
      sym__newline,
    ACTIONS(627), 1,
      sym__dedent,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(37), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4038] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4140] = 26,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4242] = 25,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(539), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4341] = 25,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(40), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4440] = 25,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_doctype,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_include,
    ACTIONS(493), 1,
      anon_sym_while,
    ACTIONS(495), 1,
      anon_sym_else,
    ACTIONS(499), 1,
      anon_sym_block,
    ACTIONS(501), 1,
      anon_sym_append,
    ACTIONS(503), 1,
      anon_sym_prepend,
    ACTIONS(505), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_elseif,
    ACTIONS(513), 1,
      anon_sym_BANG_EQ,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_script_DOT,
    ACTIONS(521), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(525), 1,
      sym_tag_name,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(509), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(527), 2,
      sym_class,
      sym_id,
    STATE(420), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4539] = 25,
    ACTIONS(437), 1,
      anon_sym_doctype,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_include,
    ACTIONS(443), 1,
      anon_sym_while,
    ACTIONS(445), 1,
      anon_sym_else,
    ACTIONS(449), 1,
      anon_sym_block,
    ACTIONS(451), 1,
      anon_sym_append,
    ACTIONS(453), 1,
      anon_sym_prepend,
    ACTIONS(455), 1,
      anon_sym_extends,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_elseif,
    ACTIONS(463), 1,
      anon_sym_case,
    ACTIONS(465), 1,
      anon_sym_BANG_EQ,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_script_DOT,
    ACTIONS(471), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(475), 1,
      sym_tag_name,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(447), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(459), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(477), 2,
      sym_class,
      sym_id,
    STATE(255), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4638] = 25,
    ACTIONS(55), 1,
      anon_sym_doctype,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_block,
    ACTIONS(71), 1,
      anon_sym_append,
    ACTIONS(73), 1,
      anon_sym_prepend,
    ACTIONS(75), 1,
      anon_sym_extends,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_elseif,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      anon_sym_BANG_EQ,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_script_DOT,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(65), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(79), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(97), 2,
      sym_class,
      sym_id,
    STATE(124), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4737] = 25,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(559), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4836] = 25,
    ACTIONS(83), 1,
      anon_sym_case,
    ACTIONS(180), 1,
      anon_sym_doctype,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_include,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(192), 1,
      anon_sym_block,
    ACTIONS(194), 1,
      anon_sym_append,
    ACTIONS(196), 1,
      anon_sym_prepend,
    ACTIONS(198), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_elseif,
    ACTIONS(206), 1,
      anon_sym_BANG_EQ,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_script_DOT,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(216), 1,
      sym_tag_name,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(202), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(218), 2,
      sym_class,
      sym_id,
    STATE(242), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 20,
      sym_doctype,
      sym_pipe,
      sym_include,
      sym_while,
      sym_each,
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
  [4935] = 9,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      aux_sym_filter_content_token1,
    ACTIONS(639), 1,
      sym__newline,
    STATE(54), 1,
      sym_attributes,
    STATE(117), 1,
      sym_filter,
    STATE(119), 1,
      sym_filter_content,
    ACTIONS(629), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(631), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [4991] = 9,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(645), 1,
      aux_sym_filter_content_token1,
    ACTIONS(647), 1,
      sym__newline,
    STATE(85), 1,
      sym_attributes,
    STATE(226), 1,
      sym_filter_content,
    STATE(227), 1,
      sym_filter,
    ACTIONS(629), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(631), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [5045] = 6,
    ACTIONS(653), 1,
      anon_sym_when,
    ACTIONS(656), 1,
      anon_sym_default,
    STATE(770), 1,
      sym__when_keyword,
    STATE(52), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(649), 14,
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
    ACTIONS(651), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5093] = 6,
    ACTIONS(663), 1,
      anon_sym_when,
    ACTIONS(665), 1,
      anon_sym_default,
    STATE(770), 1,
      sym__when_keyword,
    STATE(52), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(659), 14,
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
    ACTIONS(661), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5141] = 7,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      aux_sym_filter_content_token1,
    ACTIONS(639), 1,
      sym__newline,
    STATE(117), 1,
      sym_filter,
    STATE(137), 1,
      sym_filter_content,
    ACTIONS(667), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(669), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [5191] = 4,
    ACTIONS(675), 1,
      sym__indent,
    STATE(116), 1,
      sym_children,
    ACTIONS(671), 14,
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
    ACTIONS(673), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5234] = 4,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(56), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(677), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(679), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [5277] = 4,
    ACTIONS(675), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(684), 14,
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
    ACTIONS(686), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5320] = 9,
    ACTIONS(629), 1,
      sym__dedent,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(692), 1,
      aux_sym_filter_content_token1,
    ACTIONS(694), 1,
      sym__newline,
    STATE(93), 1,
      sym_attributes,
    STATE(314), 1,
      sym_filter,
    STATE(315), 1,
      sym_filter_content,
    ACTIONS(631), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [5373] = 4,
    ACTIONS(675), 1,
      sym__indent,
    STATE(87), 1,
      sym_children,
    ACTIONS(696), 14,
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
    ACTIONS(698), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5416] = 4,
    ACTIONS(704), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(700), 14,
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
    ACTIONS(702), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5459] = 4,
    ACTIONS(675), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(706), 14,
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
    ACTIONS(708), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5502] = 4,
    ACTIONS(714), 1,
      sym__un_delimited_javascript_line,
    STATE(56), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(710), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(712), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [5545] = 4,
    ACTIONS(716), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(706), 14,
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
    ACTIONS(708), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5588] = 9,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      anon_sym_COLON,
    ACTIONS(722), 1,
      aux_sym_filter_content_token1,
    ACTIONS(724), 1,
      sym__newline,
    STATE(110), 1,
      sym_attributes,
    STATE(338), 1,
      sym_filter,
    STATE(342), 1,
      sym_filter_content,
    ACTIONS(631), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [5641] = 4,
    ACTIONS(730), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
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
    ACTIONS(728), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5684] = 4,
    ACTIONS(675), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(700), 14,
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
    ACTIONS(702), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5727] = 4,
    ACTIONS(736), 1,
      sym__indent,
    STATE(127), 1,
      sym_children,
    ACTIONS(732), 14,
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
    ACTIONS(734), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5770] = 5,
    ACTIONS(738), 1,
      sym__indent,
    ACTIONS(740), 1,
      sym__dedent,
    STATE(176), 1,
      sym_children,
    ACTIONS(671), 12,
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
    ACTIONS(673), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5814] = 4,
    ACTIONS(742), 1,
      sym__indent,
    STATE(156), 1,
      sym_children,
    ACTIONS(706), 13,
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
    ACTIONS(708), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5856] = 2,
    ACTIONS(744), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(746), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [5894] = 4,
    ACTIONS(748), 1,
      sym__indent,
    STATE(153), 1,
      sym_children,
    ACTIONS(700), 13,
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
    ACTIONS(702), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5936] = 4,
    ACTIONS(738), 1,
      sym__indent,
    STATE(156), 1,
      sym_children,
    ACTIONS(706), 13,
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
    ACTIONS(708), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [5978] = 6,
    ACTIONS(653), 1,
      anon_sym_when,
    ACTIONS(750), 1,
      anon_sym_default,
    STATE(749), 1,
      sym__when_keyword,
    STATE(73), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(649), 12,
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
    ACTIONS(651), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6024] = 4,
    ACTIONS(738), 1,
      sym__indent,
    STATE(153), 1,
      sym_children,
    ACTIONS(700), 13,
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
    ACTIONS(702), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6066] = 4,
    ACTIONS(738), 1,
      sym__indent,
    STATE(162), 1,
      sym_children,
    ACTIONS(684), 13,
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
    ACTIONS(686), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6108] = 2,
    ACTIONS(753), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(755), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [6146] = 4,
    ACTIONS(757), 1,
      sym__indent,
    STATE(164), 1,
      sym_children,
    ACTIONS(726), 13,
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
    ACTIONS(728), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6188] = 3,
    ACTIONS(763), 1,
      sym__indent,
    ACTIONS(759), 14,
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
    ACTIONS(761), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6228] = 4,
    ACTIONS(765), 1,
      sym__indent,
    STATE(173), 1,
      sym_children,
    ACTIONS(732), 13,
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
    ACTIONS(734), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6270] = 6,
    ACTIONS(663), 1,
      anon_sym_when,
    ACTIONS(767), 1,
      anon_sym_default,
    STATE(749), 1,
      sym__when_keyword,
    STATE(73), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(659), 12,
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
    ACTIONS(661), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6316] = 4,
    ACTIONS(773), 1,
      anon_sym_else,
    STATE(94), 1,
      sym__each_else,
    ACTIONS(769), 14,
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
    ACTIONS(771), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6358] = 2,
    ACTIONS(775), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(777), 30,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [6396] = 4,
    ACTIONS(738), 1,
      sym__indent,
    STATE(160), 1,
      sym_children,
    ACTIONS(696), 13,
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
    ACTIONS(698), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6438] = 3,
    ACTIONS(783), 1,
      sym__indent,
    ACTIONS(779), 14,
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
    ACTIONS(781), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6478] = 7,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(645), 1,
      aux_sym_filter_content_token1,
    ACTIONS(647), 1,
      sym__newline,
    STATE(211), 1,
      sym_filter_content,
    STATE(227), 1,
      sym_filter,
    ACTIONS(667), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(669), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [6526] = 2,
    ACTIONS(785), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(787), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [6564] = 2,
    ACTIONS(789), 14,
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
    ACTIONS(791), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6601] = 2,
    ACTIONS(793), 14,
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
    ACTIONS(795), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6638] = 2,
    ACTIONS(671), 14,
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
    ACTIONS(673), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6675] = 2,
    ACTIONS(797), 14,
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
    ACTIONS(799), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6712] = 4,
    ACTIONS(801), 1,
      sym__un_delimited_javascript_line,
    STATE(115), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(710), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(712), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [6753] = 3,
    ACTIONS(803), 1,
      sym__indent,
    ACTIONS(759), 13,
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
    ACTIONS(761), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6792] = 7,
    ACTIONS(667), 1,
      sym__dedent,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(692), 1,
      aux_sym_filter_content_token1,
    ACTIONS(694), 1,
      sym__newline,
    STATE(297), 1,
      sym_filter_content,
    STATE(314), 1,
      sym_filter,
    ACTIONS(669), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [6839] = 2,
    ACTIONS(805), 14,
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
    ACTIONS(807), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6876] = 4,
    ACTIONS(809), 1,
      sym__indent,
    STATE(232), 1,
      sym_children,
    ACTIONS(700), 14,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6917] = 4,
    ACTIONS(811), 1,
      sym__indent,
    STATE(232), 1,
      sym_children,
    ACTIONS(700), 14,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6958] = 2,
    ACTIONS(813), 14,
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
    ACTIONS(815), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [6995] = 4,
    ACTIONS(817), 1,
      sym__indent,
    STATE(191), 1,
      sym_children,
    ACTIONS(706), 14,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7036] = 2,
    ACTIONS(819), 14,
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
    ACTIONS(821), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7073] = 2,
    ACTIONS(696), 14,
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
    ACTIONS(698), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7110] = 4,
    ACTIONS(811), 1,
      sym__indent,
    STATE(191), 1,
      sym_children,
    ACTIONS(706), 14,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7151] = 6,
    ACTIONS(663), 1,
      anon_sym_when,
    ACTIONS(823), 1,
      anon_sym_default,
    STATE(729), 1,
      sym__when_keyword,
    STATE(113), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(659), 12,
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
    ACTIONS(661), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7196] = 2,
    ACTIONS(825), 14,
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
    ACTIONS(827), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7233] = 2,
    ACTIONS(829), 14,
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
    ACTIONS(831), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7270] = 2,
    ACTIONS(684), 14,
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
    ACTIONS(686), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7307] = 4,
    ACTIONS(833), 1,
      sym__indent,
    STATE(199), 1,
      sym_children,
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
    ACTIONS(728), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7348] = 2,
    ACTIONS(835), 14,
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
    ACTIONS(837), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7385] = 2,
    ACTIONS(839), 14,
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
    ACTIONS(841), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7422] = 4,
    ACTIONS(843), 1,
      sym__indent,
    STATE(215), 1,
      sym_children,
    ACTIONS(732), 14,
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
    ACTIONS(734), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7463] = 7,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(720), 1,
      anon_sym_COLON,
    ACTIONS(722), 1,
      aux_sym_filter_content_token1,
    ACTIONS(724), 1,
      sym__newline,
    STATE(338), 1,
      sym_filter,
    STATE(369), 1,
      sym_filter_content,
    ACTIONS(669), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [7510] = 2,
    ACTIONS(845), 14,
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
    ACTIONS(847), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7547] = 4,
    ACTIONS(811), 1,
      sym__indent,
    STATE(254), 1,
      sym_children,
    ACTIONS(684), 14,
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
    ACTIONS(686), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7588] = 6,
    ACTIONS(653), 1,
      anon_sym_when,
    ACTIONS(849), 1,
      anon_sym_default,
    STATE(729), 1,
      sym__when_keyword,
    STATE(113), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(649), 12,
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
    ACTIONS(651), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7633] = 2,
    ACTIONS(700), 14,
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
    ACTIONS(702), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7670] = 4,
    ACTIONS(852), 1,
      sym__un_delimited_javascript_line,
    STATE(115), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(677), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(679), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [7711] = 2,
    ACTIONS(855), 14,
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
    ACTIONS(857), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7748] = 2,
    ACTIONS(859), 14,
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
    ACTIONS(861), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7785] = 3,
    ACTIONS(867), 1,
      sym__dedent,
    ACTIONS(863), 13,
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
    ACTIONS(865), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7824] = 2,
    ACTIONS(667), 14,
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
    ACTIONS(669), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7861] = 2,
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
    ACTIONS(871), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7898] = 2,
    ACTIONS(706), 14,
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
    ACTIONS(708), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7935] = 4,
    ACTIONS(811), 1,
      sym__indent,
    STATE(248), 1,
      sym_children,
    ACTIONS(696), 14,
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
    ACTIONS(698), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [7976] = 2,
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
    ACTIONS(875), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8013] = 2,
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
    ACTIONS(879), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8050] = 2,
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
    ACTIONS(883), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8087] = 2,
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
    ACTIONS(887), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8124] = 2,
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
    ACTIONS(728), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8161] = 2,
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
    ACTIONS(891), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8198] = 2,
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
    ACTIONS(895), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8235] = 2,
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
    ACTIONS(899), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8272] = 2,
    ACTIONS(901), 14,
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
    ACTIONS(903), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8309] = 2,
    ACTIONS(905), 14,
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
    ACTIONS(907), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8346] = 2,
    ACTIONS(909), 14,
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
    ACTIONS(911), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8383] = 2,
    ACTIONS(913), 14,
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
    ACTIONS(915), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8420] = 2,
    ACTIONS(732), 14,
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
    ACTIONS(734), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8457] = 2,
    ACTIONS(917), 14,
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
    ACTIONS(919), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8494] = 2,
    ACTIONS(921), 14,
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
    ACTIONS(923), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8531] = 9,
    ACTIONS(629), 1,
      sym__dedent,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      aux_sym_filter_content_token1,
    ACTIONS(931), 1,
      sym__newline,
    STATE(243), 1,
      sym_attributes,
    STATE(397), 1,
      sym_filter,
    STATE(399), 1,
      sym_filter_content,
    ACTIONS(631), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [8582] = 2,
    ACTIONS(933), 14,
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
    ACTIONS(935), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8619] = 2,
    ACTIONS(937), 14,
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
    ACTIONS(939), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8656] = 2,
    ACTIONS(941), 14,
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
    ACTIONS(943), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8693] = 2,
    ACTIONS(945), 14,
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
    ACTIONS(947), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8730] = 2,
    ACTIONS(949), 14,
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
    ACTIONS(951), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8767] = 3,
    ACTIONS(957), 1,
      sym__dedent,
    ACTIONS(953), 13,
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
    ACTIONS(955), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8806] = 2,
    ACTIONS(959), 14,
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
    ACTIONS(961), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8843] = 2,
    ACTIONS(963), 14,
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
    ACTIONS(965), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8880] = 2,
    ACTIONS(967), 14,
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
    ACTIONS(969), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8917] = 2,
    ACTIONS(971), 14,
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
    ACTIONS(973), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8954] = 2,
    ACTIONS(975), 14,
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
    ACTIONS(977), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [8991] = 2,
    ACTIONS(979), 14,
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
    ACTIONS(981), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9028] = 4,
    ACTIONS(983), 1,
      sym__un_delimited_javascript_line,
    STATE(181), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(710), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(712), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [9068] = 2,
    ACTIONS(829), 13,
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
    ACTIONS(831), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9104] = 2,
    ACTIONS(684), 13,
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
    ACTIONS(686), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9140] = 4,
    ACTIONS(985), 1,
      sym__un_delimited_javascript_line,
    STATE(175), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(710), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(712), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [9180] = 4,
    ACTIONS(987), 1,
      sym__indent,
    STATE(275), 1,
      sym_children,
    ACTIONS(706), 12,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9220] = 2,
    ACTIONS(700), 13,
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
    ACTIONS(702), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9256] = 2,
    ACTIONS(785), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(787), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [9292] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(266), 1,
      sym_children,
    ACTIONS(700), 12,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9332] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(275), 1,
      sym_children,
    ACTIONS(706), 12,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9372] = 2,
    ACTIONS(789), 13,
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
    ACTIONS(791), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9408] = 2,
    ACTIONS(819), 13,
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
    ACTIONS(821), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9444] = 2,
    ACTIONS(696), 13,
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
    ACTIONS(698), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9480] = 2,
    ACTIONS(793), 13,
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
    ACTIONS(795), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9516] = 2,
    ACTIONS(706), 13,
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
    ACTIONS(708), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9552] = 3,
    ACTIONS(991), 1,
      sym__indent,
    ACTIONS(759), 14,
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
    ACTIONS(761), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9590] = 2,
    ACTIONS(753), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(755), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [9626] = 4,
    ACTIONS(993), 1,
      anon_sym_else,
    STATE(252), 1,
      sym__each_else,
    ACTIONS(769), 14,
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
    ACTIONS(771), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9666] = 2,
    ACTIONS(825), 13,
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
    ACTIONS(827), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9702] = 2,
    ACTIONS(839), 13,
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
    ACTIONS(841), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9738] = 3,
    ACTIONS(740), 1,
      sym__dedent,
    ACTIONS(671), 12,
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
    ACTIONS(673), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9776] = 2,
    ACTIONS(744), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(746), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [9812] = 2,
    ACTIONS(835), 13,
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
    ACTIONS(837), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9848] = 2,
    ACTIONS(726), 13,
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
    ACTIONS(728), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9884] = 4,
    ACTIONS(995), 1,
      sym__indent,
    STATE(298), 1,
      sym_children,
    ACTIONS(732), 12,
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
    ACTIONS(734), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [9924] = 4,
    ACTIONS(997), 1,
      sym__un_delimited_javascript_line,
    STATE(175), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(677), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(679), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [9964] = 2,
    ACTIONS(855), 13,
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
    ACTIONS(857), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10000] = 2,
    ACTIONS(732), 13,
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
    ACTIONS(734), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10036] = 2,
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
    ACTIONS(871), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10072] = 4,
    ACTIONS(1000), 1,
      sym__indent,
    STATE(266), 1,
      sym_children,
    ACTIONS(700), 12,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10112] = 3,
    ACTIONS(1002), 1,
      sym__indent,
    ACTIONS(779), 14,
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
    ACTIONS(781), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10150] = 4,
    ACTIONS(1004), 1,
      sym__un_delimited_javascript_line,
    STATE(181), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(677), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(679), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [10190] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(305), 1,
      sym_children,
    ACTIONS(684), 12,
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
    ACTIONS(686), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10230] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(308), 1,
      sym_children,
    ACTIONS(671), 12,
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
    ACTIONS(673), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10270] = 4,
    ACTIONS(1007), 1,
      sym__indent,
    STATE(296), 1,
      sym_children,
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
    ACTIONS(728), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10310] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(318), 1,
      sym_children,
    ACTIONS(696), 12,
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
    ACTIONS(698), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10350] = 2,
    ACTIONS(775), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(777), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [10386] = 2,
    ACTIONS(797), 14,
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
    ACTIONS(799), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10421] = 2,
    ACTIONS(775), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(777), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [10456] = 3,
    ACTIONS(1009), 1,
      sym__indent,
    ACTIONS(759), 12,
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
    ACTIONS(761), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10493] = 3,
    ACTIONS(1011), 1,
      sym__dedent,
    ACTIONS(863), 13,
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
    ACTIONS(865), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10530] = 2,
    ACTIONS(700), 14,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10565] = 4,
    ACTIONS(1013), 1,
      sym__indent,
    STATE(344), 1,
      sym_children,
    ACTIONS(732), 12,
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
    ACTIONS(734), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10604] = 2,
    ACTIONS(785), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(787), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [10639] = 2,
    ACTIONS(845), 14,
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
    ACTIONS(847), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10674] = 2,
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
    ACTIONS(875), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10709] = 2,
    ACTIONS(793), 14,
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
    ACTIONS(795), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10744] = 2,
    ACTIONS(979), 14,
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
    ACTIONS(981), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10779] = 2,
    ACTIONS(835), 14,
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
    ACTIONS(837), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10814] = 2,
    ACTIONS(706), 14,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10849] = 2,
    ACTIONS(963), 14,
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
    ACTIONS(965), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10884] = 2,
    ACTIONS(753), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(755), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [10919] = 2,
    ACTIONS(975), 14,
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
    ACTIONS(977), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [10954] = 2,
    ACTIONS(744), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(746), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [10989] = 2,
    ACTIONS(967), 14,
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
    ACTIONS(969), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11024] = 2,
    ACTIONS(753), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(755), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [11059] = 2,
    ACTIONS(971), 14,
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
    ACTIONS(973), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11094] = 4,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(375), 1,
      sym_children,
    ACTIONS(706), 12,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11133] = 2,
    ACTIONS(959), 14,
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
    ACTIONS(961), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11168] = 3,
    ACTIONS(1017), 1,
      sym__dedent,
    ACTIONS(953), 13,
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
    ACTIONS(955), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11205] = 4,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(348), 1,
      sym_children,
    ACTIONS(700), 12,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11244] = 2,
    ACTIONS(921), 14,
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
    ACTIONS(923), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11279] = 2,
    ACTIONS(917), 14,
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
    ACTIONS(919), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11314] = 4,
    ACTIONS(1019), 1,
      anon_sym_else,
    STATE(302), 1,
      sym__each_else,
    ACTIONS(769), 12,
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
    ACTIONS(771), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11353] = 2,
    ACTIONS(744), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(746), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
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
  [11388] = 2,
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
    ACTIONS(728), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11423] = 3,
    ACTIONS(1021), 1,
      sym__indent,
    ACTIONS(759), 13,
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
    ACTIONS(761), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11460] = 4,
    ACTIONS(1023), 1,
      sym__indent,
    STATE(348), 1,
      sym_children,
    ACTIONS(700), 12,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11499] = 2,
    ACTIONS(913), 14,
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
    ACTIONS(915), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11534] = 2,
    ACTIONS(949), 14,
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
    ACTIONS(951), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11569] = 2,
    ACTIONS(1025), 12,
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
    ACTIONS(1027), 18,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11604] = 4,
    ACTIONS(1029), 1,
      sym__indent,
    STATE(375), 1,
      sym_children,
    ACTIONS(706), 12,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11643] = 2,
    ACTIONS(945), 14,
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
    ACTIONS(947), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11678] = 2,
    ACTIONS(941), 14,
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
    ACTIONS(943), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11713] = 2,
    ACTIONS(937), 14,
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
    ACTIONS(939), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11748] = 2,
    ACTIONS(933), 14,
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
    ACTIONS(935), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11783] = 2,
    ACTIONS(667), 14,
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
    ACTIONS(669), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11818] = 2,
    ACTIONS(859), 14,
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
    ACTIONS(861), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11853] = 2,
    ACTIONS(732), 14,
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
    ACTIONS(734), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11888] = 2,
    ACTIONS(775), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(777), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [11923] = 2,
    ACTIONS(839), 14,
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
    ACTIONS(841), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11958] = 2,
    ACTIONS(825), 14,
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
    ACTIONS(827), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [11993] = 2,
    ACTIONS(684), 14,
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
    ACTIONS(686), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12028] = 2,
    ACTIONS(785), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(787), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [12063] = 2,
    ACTIONS(909), 14,
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
    ACTIONS(911), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12098] = 2,
    ACTIONS(905), 14,
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
    ACTIONS(907), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12133] = 2,
    ACTIONS(901), 14,
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
    ACTIONS(903), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12168] = 2,
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
    ACTIONS(899), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12203] = 2,
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
    ACTIONS(895), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12238] = 2,
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
    ACTIONS(891), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12273] = 2,
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
    ACTIONS(887), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12308] = 2,
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
    ACTIONS(883), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12343] = 2,
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
    ACTIONS(879), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12378] = 7,
    ACTIONS(667), 1,
      sym__dedent,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      aux_sym_filter_content_token1,
    ACTIONS(931), 1,
      sym__newline,
    STATE(397), 1,
      sym_filter,
    STATE(406), 1,
      sym_filter_content,
    ACTIONS(669), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [12423] = 3,
    ACTIONS(1031), 1,
      sym__indent,
    ACTIONS(779), 12,
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
    ACTIONS(781), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12460] = 2,
    ACTIONS(829), 14,
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
    ACTIONS(831), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12495] = 4,
    ACTIONS(1033), 1,
      sym__indent,
    ACTIONS(1035), 1,
      sym__dedent,
    ACTIONS(759), 12,
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
    ACTIONS(761), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12534] = 2,
    ACTIONS(813), 14,
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
    ACTIONS(815), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12569] = 2,
    ACTIONS(789), 14,
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
    ACTIONS(791), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12604] = 4,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(337), 1,
      sym_children,
    ACTIONS(684), 12,
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
    ACTIONS(686), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12643] = 4,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(321), 1,
      sym_children,
    ACTIONS(696), 12,
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
    ACTIONS(698), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12682] = 2,
    ACTIONS(819), 14,
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
    ACTIONS(821), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12717] = 2,
    ACTIONS(805), 14,
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
    ACTIONS(807), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12752] = 4,
    ACTIONS(1037), 1,
      sym__indent,
    STATE(372), 1,
      sym_children,
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
    ACTIONS(728), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12791] = 2,
    ACTIONS(696), 14,
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
    ACTIONS(698), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12826] = 2,
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
    ACTIONS(879), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12860] = 2,
    ACTIONS(975), 12,
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
    ACTIONS(977), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12894] = 4,
    ACTIONS(1039), 1,
      sym__indent,
    STATE(418), 1,
      sym_children,
    ACTIONS(700), 12,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12932] = 2,
    ACTIONS(979), 12,
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
    ACTIONS(981), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [12966] = 2,
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
    ACTIONS(875), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13000] = 2,
    ACTIONS(971), 12,
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
    ACTIONS(973), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13034] = 4,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(398), 1,
      sym_children,
    ACTIONS(706), 12,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13072] = 2,
    ACTIONS(845), 12,
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
    ACTIONS(847), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13106] = 2,
    ACTIONS(959), 12,
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
    ACTIONS(961), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13140] = 3,
    ACTIONS(1043), 1,
      sym__indent,
    ACTIONS(779), 12,
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
    ACTIONS(781), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13176] = 3,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
    ACTIONS(1045), 12,
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
    ACTIONS(1047), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13212] = 2,
    ACTIONS(684), 12,
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
    ACTIONS(686), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13246] = 3,
    ACTIONS(1051), 1,
      sym__dedent,
    ACTIONS(953), 11,
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
    ACTIONS(955), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13282] = 3,
    ACTIONS(1053), 1,
      sym__dedent,
    ACTIONS(953), 12,
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
    ACTIONS(955), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13318] = 2,
    ACTIONS(949), 12,
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
    ACTIONS(951), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13352] = 2,
    ACTIONS(945), 12,
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
    ACTIONS(947), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13386] = 2,
    ACTIONS(941), 12,
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
    ACTIONS(943), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13420] = 2,
    ACTIONS(937), 12,
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
    ACTIONS(939), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13454] = 2,
    ACTIONS(933), 12,
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
    ACTIONS(935), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13488] = 3,
    ACTIONS(1055), 1,
      sym__dedent,
    ACTIONS(835), 12,
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
    ACTIONS(837), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13524] = 2,
    ACTIONS(700), 12,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13558] = 2,
    ACTIONS(909), 12,
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
    ACTIONS(911), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13592] = 2,
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
    ACTIONS(907), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13626] = 2,
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
    ACTIONS(903), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13660] = 2,
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
    ACTIONS(899), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13694] = 2,
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
    ACTIONS(895), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13728] = 2,
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
    ACTIONS(891), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13762] = 2,
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
    ACTIONS(887), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13796] = 3,
    ACTIONS(1057), 1,
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
    ACTIONS(895), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13832] = 2,
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
    ACTIONS(883), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13866] = 4,
    ACTIONS(1059), 1,
      anon_sym_else,
    STATE(341), 1,
      sym__each_else,
    ACTIONS(769), 12,
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
    ACTIONS(771), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13904] = 3,
    ACTIONS(1061), 1,
      sym__dedent,
    ACTIONS(863), 12,
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
    ACTIONS(865), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13940] = 2,
    ACTIONS(793), 12,
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
    ACTIONS(795), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [13974] = 4,
    ACTIONS(1063), 1,
      sym__un_delimited_javascript_line,
    STATE(288), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(677), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(679), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [14012] = 3,
    ACTIONS(1066), 1,
      sym__dedent,
    ACTIONS(863), 11,
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
    ACTIONS(865), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14048] = 4,
    ACTIONS(1068), 1,
      sym__un_delimited_javascript_line,
    STATE(288), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(710), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(712), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [14086] = 2,
    ACTIONS(732), 12,
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
    ACTIONS(734), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14120] = 4,
    ACTIONS(1070), 1,
      sym__indent,
    STATE(398), 1,
      sym_children,
    ACTIONS(706), 12,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14158] = 2,
    ACTIONS(967), 12,
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
    ACTIONS(969), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14192] = 4,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(418), 1,
      sym_children,
    ACTIONS(700), 12,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14230] = 2,
    ACTIONS(829), 12,
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
    ACTIONS(831), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14264] = 2,
    ACTIONS(706), 12,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14298] = 2,
    ACTIONS(921), 12,
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
    ACTIONS(923), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14332] = 2,
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
    ACTIONS(728), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14366] = 2,
    ACTIONS(913), 12,
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
    ACTIONS(915), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14400] = 2,
    ACTIONS(835), 12,
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
    ACTIONS(837), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14434] = 2,
    ACTIONS(797), 12,
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
    ACTIONS(799), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14468] = 2,
    ACTIONS(805), 12,
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
    ACTIONS(807), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14502] = 2,
    ACTIONS(671), 12,
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
    ACTIONS(673), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14536] = 2,
    ACTIONS(839), 12,
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
    ACTIONS(841), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14570] = 2,
    ACTIONS(696), 12,
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
    ACTIONS(698), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14604] = 2,
    ACTIONS(835), 13,
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
    ACTIONS(837), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14638] = 2,
    ACTIONS(825), 12,
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
    ACTIONS(827), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14672] = 2,
    ACTIONS(855), 12,
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
    ACTIONS(857), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14706] = 2,
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
    ACTIONS(871), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14740] = 2,
    ACTIONS(813), 12,
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
    ACTIONS(815), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14774] = 4,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(411), 1,
      sym_children,
    ACTIONS(696), 12,
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
    ACTIONS(698), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14812] = 2,
    ACTIONS(819), 12,
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
    ACTIONS(821), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14846] = 4,
    ACTIONS(1072), 1,
      sym__indent,
    STATE(392), 1,
      sym_children,
    ACTIONS(732), 12,
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
    ACTIONS(734), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14884] = 2,
    ACTIONS(859), 12,
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
    ACTIONS(861), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14918] = 2,
    ACTIONS(667), 12,
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
    ACTIONS(669), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14952] = 4,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(416), 1,
      sym_children,
    ACTIONS(684), 12,
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
    ACTIONS(686), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [14990] = 4,
    ACTIONS(1074), 1,
      sym__indent,
    STATE(419), 1,
      sym_children,
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
    ACTIONS(728), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15028] = 2,
    ACTIONS(789), 12,
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
    ACTIONS(791), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15062] = 2,
    ACTIONS(917), 12,
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
    ACTIONS(919), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15096] = 2,
    ACTIONS(963), 12,
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
    ACTIONS(965), 17,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15130] = 2,
    ACTIONS(789), 12,
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
    ACTIONS(791), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15163] = 4,
    ACTIONS(1076), 1,
      anon_sym_else,
    STATE(409), 1,
      sym__each_else,
    ACTIONS(769), 12,
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
    ACTIONS(771), 14,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15200] = 2,
    ACTIONS(933), 12,
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
    ACTIONS(935), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15233] = 2,
    ACTIONS(785), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(787), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [15266] = 2,
    ACTIONS(937), 12,
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
    ACTIONS(939), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15299] = 2,
    ACTIONS(1078), 12,
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
    ACTIONS(1080), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15332] = 2,
    ACTIONS(732), 12,
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
    ACTIONS(734), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15365] = 2,
    ACTIONS(793), 12,
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
    ACTIONS(795), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15398] = 2,
    ACTIONS(941), 12,
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
    ACTIONS(943), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15431] = 2,
    ACTIONS(1082), 12,
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
    ACTIONS(1084), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15464] = 2,
    ACTIONS(1086), 12,
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
    ACTIONS(1088), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15497] = 2,
    ACTIONS(967), 12,
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
    ACTIONS(969), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15530] = 2,
    ACTIONS(945), 12,
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
    ACTIONS(947), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15563] = 2,
    ACTIONS(813), 12,
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
    ACTIONS(815), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15596] = 2,
    ACTIONS(819), 12,
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
    ACTIONS(821), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15629] = 2,
    ACTIONS(949), 12,
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
    ACTIONS(951), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15662] = 2,
    ACTIONS(696), 12,
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
    ACTIONS(698), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15695] = 2,
    ACTIONS(859), 12,
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
    ACTIONS(861), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15728] = 3,
    ACTIONS(1090), 1,
      sym__indent,
    ACTIONS(779), 12,
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
    ACTIONS(781), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15763] = 2,
    ACTIONS(839), 12,
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
    ACTIONS(841), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15796] = 2,
    ACTIONS(805), 12,
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
    ACTIONS(807), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15829] = 2,
    ACTIONS(667), 12,
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
    ACTIONS(669), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15862] = 2,
    ACTIONS(797), 12,
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
    ACTIONS(799), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15895] = 2,
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
    ACTIONS(728), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15928] = 3,
    ACTIONS(1092), 1,
      sym__indent,
    ACTIONS(759), 12,
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
    ACTIONS(761), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15963] = 2,
    ACTIONS(829), 12,
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
    ACTIONS(831), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [15996] = 2,
    ACTIONS(825), 12,
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
    ACTIONS(827), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16029] = 2,
    ACTIONS(684), 12,
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
    ACTIONS(686), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16062] = 2,
    ACTIONS(979), 12,
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
    ACTIONS(981), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16095] = 2,
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
    ACTIONS(875), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16128] = 2,
    ACTIONS(909), 12,
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
    ACTIONS(911), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16161] = 2,
    ACTIONS(845), 12,
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
    ACTIONS(847), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16194] = 2,
    ACTIONS(959), 12,
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
    ACTIONS(961), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16227] = 2,
    ACTIONS(913), 12,
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
    ACTIONS(915), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16260] = 2,
    ACTIONS(905), 12,
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
    ACTIONS(907), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16293] = 2,
    ACTIONS(901), 12,
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
    ACTIONS(903), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16326] = 2,
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
    ACTIONS(899), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16359] = 2,
    ACTIONS(753), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(755), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [16392] = 2,
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
    ACTIONS(879), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16425] = 2,
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
    ACTIONS(883), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16458] = 2,
    ACTIONS(1094), 12,
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
    ACTIONS(1096), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16491] = 2,
    ACTIONS(744), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(746), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [16524] = 2,
    ACTIONS(963), 12,
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
    ACTIONS(965), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16557] = 2,
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
    ACTIONS(891), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16590] = 2,
    ACTIONS(1098), 12,
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
    ACTIONS(1100), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16623] = 2,
    ACTIONS(971), 12,
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
    ACTIONS(973), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16656] = 2,
    ACTIONS(917), 12,
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
    ACTIONS(919), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16689] = 2,
    ACTIONS(1102), 12,
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
    ACTIONS(1104), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16722] = 2,
    ACTIONS(921), 12,
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
    ACTIONS(923), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16755] = 2,
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
    ACTIONS(887), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16788] = 2,
    ACTIONS(975), 12,
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
    ACTIONS(977), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16821] = 2,
    ACTIONS(706), 12,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16854] = 2,
    ACTIONS(1106), 12,
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
    ACTIONS(1108), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16887] = 2,
    ACTIONS(775), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(777), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
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
  [16920] = 2,
    ACTIONS(700), 12,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_mixin,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16953] = 3,
    ACTIONS(1110), 1,
      sym__dedent,
    ACTIONS(953), 11,
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
    ACTIONS(955), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [16987] = 2,
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
    ACTIONS(895), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17019] = 2,
    ACTIONS(797), 12,
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
    ACTIONS(799), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17051] = 2,
    ACTIONS(793), 12,
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
    ACTIONS(795), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17083] = 2,
    ACTIONS(839), 12,
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
    ACTIONS(841), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17115] = 2,
    ACTIONS(913), 12,
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
    ACTIONS(915), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17147] = 3,
    ACTIONS(1112), 1,
      sym__dedent,
    ACTIONS(863), 11,
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
    ACTIONS(865), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17181] = 2,
    ACTIONS(949), 12,
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
    ACTIONS(951), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17213] = 2,
    ACTIONS(732), 12,
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
    ACTIONS(734), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17245] = 2,
    ACTIONS(945), 12,
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
    ACTIONS(947), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17277] = 2,
    ACTIONS(845), 12,
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
    ACTIONS(847), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17309] = 2,
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
    ACTIONS(875), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17341] = 2,
    ACTIONS(813), 12,
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
    ACTIONS(815), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17373] = 2,
    ACTIONS(941), 12,
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
    ACTIONS(943), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17405] = 2,
    ACTIONS(937), 12,
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
    ACTIONS(939), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17437] = 2,
    ACTIONS(979), 12,
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
    ACTIONS(981), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17469] = 2,
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
    ACTIONS(728), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17501] = 2,
    ACTIONS(933), 12,
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
    ACTIONS(935), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17533] = 2,
    ACTIONS(975), 12,
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
    ACTIONS(977), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17565] = 2,
    ACTIONS(835), 12,
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
    ACTIONS(837), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17597] = 2,
    ACTIONS(825), 12,
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
    ACTIONS(827), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17629] = 2,
    ACTIONS(859), 12,
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
    ACTIONS(861), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17661] = 2,
    ACTIONS(700), 12,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17693] = 2,
    ACTIONS(667), 12,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17725] = 2,
    ACTIONS(909), 12,
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
    ACTIONS(911), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17757] = 2,
    ACTIONS(971), 12,
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
    ACTIONS(973), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17789] = 2,
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
    ACTIONS(907), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17821] = 2,
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
    ACTIONS(903), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17853] = 2,
    ACTIONS(917), 12,
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
    ACTIONS(919), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17885] = 2,
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
    ACTIONS(899), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17917] = 2,
    ACTIONS(921), 12,
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
    ACTIONS(923), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17949] = 2,
    ACTIONS(967), 12,
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
    ACTIONS(969), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [17981] = 2,
    ACTIONS(959), 12,
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
    ACTIONS(961), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18013] = 2,
    ACTIONS(805), 12,
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
    ACTIONS(807), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18045] = 2,
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
    ACTIONS(891), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18077] = 2,
    ACTIONS(789), 12,
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
    ACTIONS(791), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18109] = 2,
    ACTIONS(819), 12,
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
    ACTIONS(821), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18141] = 2,
    ACTIONS(963), 12,
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
    ACTIONS(965), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18173] = 2,
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
    ACTIONS(887), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18205] = 2,
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
    ACTIONS(883), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18237] = 2,
    ACTIONS(696), 12,
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
    ACTIONS(698), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18269] = 2,
    ACTIONS(829), 12,
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
    ACTIONS(831), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18301] = 2,
    ACTIONS(684), 12,
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
    ACTIONS(686), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18333] = 2,
    ACTIONS(706), 12,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18365] = 2,
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
    ACTIONS(879), 15,
      anon_sym_doctype,
      anon_sym_include,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [18397] = 7,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    ACTIONS(1120), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      aux_sym_mixin_use_repeat1,
    STATE(888), 1,
      sym__pug_attributes,
    ACTIONS(1116), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(886), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18429] = 6,
    ACTIONS(1125), 1,
      anon_sym_SQUOTE,
    ACTIONS(1128), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_mixin_use_repeat1,
    STATE(976), 1,
      sym__pug_attributes,
    ACTIONS(1122), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(886), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18458] = 6,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    ACTIONS(1120), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_mixin_use_repeat1,
    STATE(881), 1,
      sym__pug_attributes,
    ACTIONS(1116), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(886), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18487] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_SLASH,
    ACTIONS(1141), 1,
      anon_sym_,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1147), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(454), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(344), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18527] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_SLASH,
    ACTIONS(1157), 1,
      anon_sym_,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1161), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(451), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(392), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18567] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1163), 1,
      anon_sym_COLON,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1169), 1,
      anon_sym_SLASH,
    ACTIONS(1171), 1,
      anon_sym_,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1177), 1,
      sym__newline,
    STATE(432), 1,
      aux_sym_tag_repeat1,
    STATE(444), 1,
      sym_attributes,
    ACTIONS(1175), 2,
      sym_class,
      sym_id,
    STATE(634), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18607] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1179), 1,
      anon_sym_COLON,
    ACTIONS(1181), 1,
      anon_sym_SLASH,
    ACTIONS(1183), 1,
      anon_sym_,
    ACTIONS(1187), 1,
      sym__newline,
    STATE(425), 1,
      aux_sym_tag_repeat1,
    STATE(447), 1,
      sym_attributes,
    ACTIONS(1185), 2,
      sym_class,
      sym_id,
    STATE(384), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18647] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1189), 1,
      anon_sym_COLON,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1195), 1,
      anon_sym_SLASH,
    ACTIONS(1197), 1,
      anon_sym_,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1203), 1,
      sym__newline,
    STATE(431), 1,
      aux_sym_tag_repeat1,
    STATE(456), 1,
      sym_attributes,
    ACTIONS(1201), 2,
      sym_class,
      sym_id,
    STATE(177), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18687] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1205), 1,
      anon_sym_COLON,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_SLASH,
    ACTIONS(1213), 1,
      anon_sym_,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1219), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_tag_repeat1,
    STATE(462), 1,
      sym_attributes,
    ACTIONS(1217), 2,
      sym_class,
      sym_id,
    STATE(291), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18727] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1221), 1,
      anon_sym_COLON,
    ACTIONS(1223), 1,
      anon_sym_SLASH,
    ACTIONS(1225), 1,
      anon_sym_,
    ACTIONS(1229), 1,
      sym__newline,
    STATE(424), 1,
      aux_sym_tag_repeat1,
    STATE(468), 1,
      sym_attributes,
    ACTIONS(1227), 2,
      sym_class,
      sym_id,
    STATE(327), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18767] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_SLASH,
    ACTIONS(1235), 1,
      anon_sym_,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(465), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18807] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(1241), 1,
      anon_sym_SLASH,
    ACTIONS(1243), 1,
      anon_sym_,
    ACTIONS(1245), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(445), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(638), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18847] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_SLASH,
    ACTIONS(1251), 1,
      anon_sym_,
    ACTIONS(1253), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(467), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(298), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18887] = 5,
    ACTIONS(1257), 1,
      anon_sym_SQUOTE,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    STATE(730), 1,
      sym__pug_attributes,
    ACTIONS(1255), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(734), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18913] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1261), 1,
      anon_sym_COLON,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1267), 1,
      anon_sym_SLASH,
    ACTIONS(1269), 1,
      anon_sym_,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(455), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18953] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1275), 1,
      anon_sym_COLON,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1281), 1,
      anon_sym_SLASH,
    ACTIONS(1283), 1,
      anon_sym_,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1289), 1,
      sym__newline,
    STATE(439), 1,
      aux_sym_tag_repeat1,
    STATE(469), 1,
      sym_attributes,
    ACTIONS(1287), 2,
      sym_class,
      sym_id,
    STATE(228), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18993] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1291), 1,
      anon_sym_COLON,
    ACTIONS(1293), 1,
      anon_sym_SLASH,
    ACTIONS(1295), 1,
      anon_sym_,
    ACTIONS(1299), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym_tag_repeat1,
    STATE(460), 1,
      sym_attributes,
    ACTIONS(1297), 2,
      sym_class,
      sym_id,
    STATE(135), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19033] = 5,
    ACTIONS(1257), 1,
      anon_sym_SQUOTE,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    STATE(740), 1,
      sym__pug_attributes,
    ACTIONS(1255), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(734), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [19059] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1301), 1,
      anon_sym_COLON,
    ACTIONS(1303), 1,
      anon_sym_SLASH,
    ACTIONS(1305), 1,
      anon_sym_,
    ACTIONS(1307), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(441), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(215), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19099] = 4,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    ACTIONS(1311), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1313), 2,
      sym_class,
      sym_id,
    ACTIONS(1309), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [19119] = 8,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1316), 1,
      anon_sym_COLON,
    ACTIONS(1318), 1,
      anon_sym_SLASH,
    ACTIONS(1320), 1,
      anon_sym_,
    ACTIONS(1322), 1,
      sym__newline,
    STATE(199), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19146] = 7,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    ACTIONS(1328), 1,
      sym_attribute_name,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(778), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19171] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(722), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19196] = 8,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(1241), 1,
      anon_sym_SLASH,
    ACTIONS(1243), 1,
      anon_sym_,
    ACTIONS(1245), 1,
      sym__newline,
    STATE(638), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19223] = 8,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1332), 1,
      anon_sym_COLON,
    ACTIONS(1334), 1,
      anon_sym_SLASH,
    ACTIONS(1336), 1,
      anon_sym_,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(629), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19250] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(793), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19275] = 8,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_SLASH,
    ACTIONS(1157), 1,
      anon_sym_,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1161), 1,
      sym__newline,
    STATE(392), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19302] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(795), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19327] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(719), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19352] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(789), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19377] = 8,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1348), 1,
      anon_sym_COLON,
    ACTIONS(1350), 1,
      anon_sym_SLASH,
    ACTIONS(1352), 1,
      anon_sym_,
    ACTIONS(1354), 1,
      sym__newline,
    STATE(419), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19404] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(764), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19429] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(768), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19454] = 8,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1360), 1,
      anon_sym_COLON,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1364), 1,
      anon_sym_,
    ACTIONS(1366), 1,
      sym__newline,
    STATE(372), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19481] = 8,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1368), 1,
      anon_sym_COLON,
    ACTIONS(1370), 1,
      anon_sym_SLASH,
    ACTIONS(1372), 1,
      anon_sym_,
    ACTIONS(1374), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19508] = 8,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1233), 1,
      anon_sym_SLASH,
    ACTIONS(1235), 1,
      anon_sym_,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19535] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(773), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19560] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(803), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19585] = 7,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
    ACTIONS(1385), 1,
      sym_attribute_name,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(855), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1382), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19610] = 8,
    ACTIONS(1261), 1,
      anon_sym_COLON,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1267), 1,
      anon_sym_SLASH,
    ACTIONS(1269), 1,
      anon_sym_,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      sym__newline,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19637] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(777), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19662] = 8,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_SLASH,
    ACTIONS(1251), 1,
      anon_sym_,
    ACTIONS(1253), 1,
      sym__newline,
    STATE(298), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19689] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(772), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19714] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(807), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19739] = 8,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1394), 1,
      anon_sym_COLON,
    ACTIONS(1396), 1,
      anon_sym_SLASH,
    ACTIONS(1398), 1,
      anon_sym_,
    ACTIONS(1400), 1,
      sym__newline,
    STATE(164), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19766] = 7,
    ACTIONS(1328), 1,
      sym_attribute_name,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_attributes_repeat1,
    STATE(709), 1,
      sym_angular_attribute_name,
    STATE(785), 1,
      sym_attribute,
    STATE(782), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1326), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19791] = 8,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1404), 1,
      anon_sym_COLON,
    ACTIONS(1406), 1,
      anon_sym_SLASH,
    ACTIONS(1408), 1,
      anon_sym_,
    ACTIONS(1410), 1,
      sym__newline,
    STATE(296), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19818] = 8,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_SLASH,
    ACTIONS(1141), 1,
      anon_sym_,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1147), 1,
      sym__newline,
    STATE(344), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19845] = 8,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1301), 1,
      anon_sym_COLON,
    ACTIONS(1303), 1,
      anon_sym_SLASH,
    ACTIONS(1305), 1,
      anon_sym_,
    ACTIONS(1307), 1,
      sym__newline,
    STATE(215), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19872] = 7,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1404), 1,
      anon_sym_COLON,
    ACTIONS(1408), 1,
      anon_sym_,
    ACTIONS(1410), 1,
      sym__newline,
    STATE(296), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19896] = 7,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(1235), 1,
      anon_sym_,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19920] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1420), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19946] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1422), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19972] = 7,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(1426), 1,
      anon_sym_,
    ACTIONS(1428), 1,
      sym__newline,
    STATE(275), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19996] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1430), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20022] = 7,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1316), 1,
      anon_sym_COLON,
    ACTIONS(1320), 1,
      anon_sym_,
    ACTIONS(1322), 1,
      sym__newline,
    STATE(199), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20046] = 7,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1432), 1,
      anon_sym_COLON,
    ACTIONS(1434), 1,
      anon_sym_,
    ACTIONS(1436), 1,
      sym__newline,
    STATE(156), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20070] = 7,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1157), 1,
      anon_sym_,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1161), 1,
      sym__newline,
    STATE(392), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20094] = 7,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    ACTIONS(1440), 1,
      anon_sym_,
    ACTIONS(1442), 1,
      sym__newline,
    STATE(191), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20118] = 7,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1332), 1,
      anon_sym_COLON,
    ACTIONS(1336), 1,
      anon_sym_,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(629), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20142] = 7,
    ACTIONS(1191), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    ACTIONS(1394), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      anon_sym_,
    ACTIONS(1400), 1,
      sym__newline,
    STATE(164), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20166] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1444), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20192] = 7,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1141), 1,
      anon_sym_,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1147), 1,
      sym__newline,
    STATE(344), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20216] = 7,
    ACTIONS(1261), 1,
      anon_sym_COLON,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1269), 1,
      anon_sym_,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      sym__newline,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20240] = 7,
    ACTIONS(1207), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1215), 1,
      anon_sym_DOT,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1251), 1,
      anon_sym_,
    ACTIONS(1253), 1,
      sym__newline,
    STATE(298), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20264] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1446), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20290] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1448), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20316] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1450), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20342] = 7,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(1243), 1,
      anon_sym_,
    ACTIONS(1245), 1,
      sym__newline,
    STATE(638), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20366] = 7,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1368), 1,
      anon_sym_COLON,
    ACTIONS(1372), 1,
      anon_sym_,
    ACTIONS(1374), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20390] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1452), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20416] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1454), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20442] = 7,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1348), 1,
      anon_sym_COLON,
    ACTIONS(1352), 1,
      anon_sym_,
    ACTIONS(1354), 1,
      sym__newline,
    STATE(419), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20466] = 7,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1360), 1,
      anon_sym_COLON,
    ACTIONS(1364), 1,
      anon_sym_,
    ACTIONS(1366), 1,
      sym__newline,
    STATE(372), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20490] = 7,
    ACTIONS(1277), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    ACTIONS(1301), 1,
      anon_sym_COLON,
    ACTIONS(1305), 1,
      anon_sym_,
    ACTIONS(1307), 1,
      sym__newline,
    STATE(215), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20514] = 7,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1456), 1,
      anon_sym_COLON,
    ACTIONS(1458), 1,
      anon_sym_,
    ACTIONS(1460), 1,
      sym__newline,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20538] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1462), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20564] = 7,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1464), 1,
      anon_sym_COLON,
    ACTIONS(1466), 1,
      anon_sym_,
    ACTIONS(1468), 1,
      sym__newline,
    STATE(375), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20588] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1470), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20614] = 8,
    ACTIONS(1472), 1,
      aux_sym_content_token1,
    ACTIONS(1475), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1478), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1481), 1,
      sym__newline,
    ACTIONS(1484), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20640] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1486), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20666] = 7,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1488), 1,
      anon_sym_COLON,
    ACTIONS(1490), 1,
      anon_sym_,
    ACTIONS(1492), 1,
      sym__newline,
    STATE(398), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20690] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20716] = 7,
    ACTIONS(1165), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    ACTIONS(1496), 1,
      anon_sym_COLON,
    ACTIONS(1498), 1,
      anon_sym_,
    ACTIONS(1500), 1,
      sym__newline,
    STATE(632), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20740] = 8,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    ACTIONS(1502), 1,
      sym__dedent,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20766] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(499), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20789] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(501), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20812] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(497), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20835] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(473), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20858] = 8,
    ACTIONS(631), 1,
      aux_sym_include_token1,
    ACTIONS(1504), 1,
      anon_sym_LPAREN,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1508), 1,
      aux_sym_filter_content_token1,
    ACTIONS(1510), 1,
      sym__newline,
    STATE(603), 1,
      sym_attributes,
    STATE(916), 1,
      sym_filter_content,
    STATE(995), 1,
      sym_filter,
  [20883] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(491), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20906] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(505), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20929] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(475), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20952] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(503), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20975] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(492), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20998] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(472), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21021] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(487), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21044] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(488), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21067] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(486), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21090] = 7,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(482), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21113] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1512), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(569), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21133] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1518), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21149] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1520), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21169] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1522), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21189] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1524), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21209] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1526), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21225] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1528), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21245] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1530), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21265] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1532), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21285] = 2,
    ACTIONS(744), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(746), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [21297] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1534), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21317] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1536), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21337] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1538), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21353] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1540), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21369] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1542), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(538), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21389] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1544), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21409] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1546), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(527), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21429] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1548), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21449] = 4,
    ACTIONS(1553), 1,
      sym__newline,
    ACTIONS(1556), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1550), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21465] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1558), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21485] = 3,
    ACTIONS(1560), 1,
      sym__indent,
    STATE(638), 1,
      sym_children,
    ACTIONS(732), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21499] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1562), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21519] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1564), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21539] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1566), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21555] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1568), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21575] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1570), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21595] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1572), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21615] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1574), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21635] = 3,
    ACTIONS(1576), 1,
      sym__indent,
    STATE(629), 1,
      sym_children,
    ACTIONS(726), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21649] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1578), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21669] = 2,
    ACTIONS(753), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(755), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [21681] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1580), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21701] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1582), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21721] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1584), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21741] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1586), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21761] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1588), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21777] = 6,
    ACTIONS(1590), 1,
      aux_sym_content_token1,
    ACTIONS(1593), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1599), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21797] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1601), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21817] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1603), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21837] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1605), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21857] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1607), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21873] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1609), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21893] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1611), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21913] = 3,
    ACTIONS(1613), 1,
      sym__indent,
    STATE(632), 1,
      sym_children,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21927] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1615), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(567), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21947] = 3,
    ACTIONS(1617), 1,
      sym__indent,
    STATE(632), 1,
      sym_children,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21961] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1619), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21981] = 2,
    ACTIONS(785), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(787), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [21993] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1621), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22013] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1623), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22033] = 3,
    ACTIONS(1613), 1,
      sym__indent,
    STATE(625), 1,
      sym_children,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22047] = 1,
    ACTIONS(1625), 7,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [22057] = 3,
    ACTIONS(1613), 1,
      sym__indent,
    STATE(644), 1,
      sym_children,
    ACTIONS(684), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22071] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1627), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22091] = 3,
    ACTIONS(1629), 1,
      sym__indent,
    STATE(625), 1,
      sym_children,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22105] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1631), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(578), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22125] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1633), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22145] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1635), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22165] = 4,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(1637), 1,
      sym__dedent,
    STATE(539), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22181] = 3,
    ACTIONS(1613), 1,
      sym__indent,
    STATE(648), 1,
      sym_children,
    ACTIONS(696), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22195] = 6,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1639), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(557), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22215] = 3,
    ACTIONS(1641), 1,
      sym__newline,
    STATE(579), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22228] = 2,
    ACTIONS(1643), 1,
      sym__indent,
    ACTIONS(759), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22239] = 3,
    ACTIONS(1645), 1,
      sym__newline,
    STATE(544), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22252] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(543), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22269] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(542), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22286] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(559), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22303] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(570), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22320] = 4,
    ACTIONS(1649), 1,
      anon_sym_POUND,
    ACTIONS(1651), 1,
      anon_sym_LBRACE,
    ACTIONS(1647), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1653), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22335] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(528), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22352] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(577), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22369] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(523), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22386] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(524), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22403] = 3,
    ACTIONS(1655), 1,
      sym__newline,
    STATE(561), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22416] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(581), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22433] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(536), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22450] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(529), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22467] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(550), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22484] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(553), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22501] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(531), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22518] = 3,
    ACTIONS(1657), 1,
      sym__newline,
    STATE(533), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22531] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(552), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22548] = 6,
    ACTIONS(669), 1,
      aux_sym_include_token1,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1508), 1,
      aux_sym_filter_content_token1,
    ACTIONS(1510), 1,
      sym__newline,
    STATE(995), 1,
      sym_filter,
    STATE(996), 1,
      sym_filter_content,
  [22567] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(546), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22584] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(558), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22601] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(525), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22618] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(574), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22635] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22652] = 3,
    ACTIONS(1659), 1,
      sym__newline,
    STATE(522), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22665] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(563), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22682] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(532), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22699] = 5,
    ACTIONS(1663), 1,
      anon_sym_EQ,
    ACTIONS(1665), 1,
      anon_sym_,
    ACTIONS(1667), 1,
      anon_sym_DOT,
    STATE(614), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1661), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22716] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(555), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22733] = 5,
    ACTIONS(1667), 1,
      anon_sym_DOT,
    ACTIONS(1671), 1,
      anon_sym_EQ,
    ACTIONS(1673), 1,
      anon_sym_,
    STATE(618), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1669), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22750] = 3,
    ACTIONS(1675), 1,
      sym__newline,
    STATE(526), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22763] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(545), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22780] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(554), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22797] = 4,
    ACTIONS(1679), 1,
      anon_sym_,
    ACTIONS(1681), 1,
      anon_sym_DOT,
    STATE(618), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1677), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [22812] = 3,
    ACTIONS(1684), 1,
      sym__newline,
    STATE(556), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22825] = 3,
    ACTIONS(1686), 1,
      sym__newline,
    STATE(534), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22838] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(562), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22855] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22872] = 5,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1414), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1416), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(631), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22889] = 3,
    STATE(176), 1,
      sym__dummy_tag,
    STATE(178), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22901] = 1,
    ACTIONS(684), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22909] = 2,
    ACTIONS(1679), 1,
      anon_sym_,
    ACTIONS(1677), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [22919] = 4,
    ACTIONS(1690), 1,
      anon_sym_when,
    ACTIONS(1692), 1,
      anon_sym_default,
    STATE(770), 1,
      sym__when_keyword,
    STATE(53), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22933] = 2,
    ACTIONS(1694), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1484), 3,
      sym__newline,
      sym__dedent,
      aux_sym_content_token1,
  [22943] = 1,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22951] = 1,
    ACTIONS(839), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22959] = 4,
    ACTIONS(1412), 1,
      aux_sym_content_token1,
    ACTIONS(1698), 1,
      sym__newline,
    STATE(641), 1,
      aux_sym_content_repeat1,
    ACTIONS(1696), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22973] = 1,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22981] = 2,
    ACTIONS(1702), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1700), 3,
      sym__newline,
      sym__dedent,
      aux_sym_content_token1,
  [22991] = 1,
    ACTIONS(732), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22999] = 3,
    ACTIONS(1706), 1,
      anon_sym_LBRACE,
    ACTIONS(1704), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1708), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23011] = 1,
    ACTIONS(825), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23019] = 3,
    STATE(308), 1,
      sym__dummy_tag,
    STATE(309), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23031] = 1,
    ACTIONS(726), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23039] = 1,
    ACTIONS(793), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23047] = 3,
    STATE(116), 1,
      sym__dummy_tag,
    STATE(120), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23059] = 4,
    ACTIONS(1704), 1,
      sym__newline,
    ACTIONS(1710), 1,
      aux_sym_content_token1,
    STATE(641), 1,
      aux_sym_content_repeat1,
    ACTIONS(1708), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23073] = 1,
    ACTIONS(829), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23081] = 1,
    ACTIONS(835), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23089] = 1,
    ACTIONS(696), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23097] = 4,
    ACTIONS(1690), 1,
      anon_sym_when,
    ACTIONS(1713), 1,
      anon_sym_default,
    STATE(729), 1,
      sym__when_keyword,
    STATE(102), 2,
      sym_when,
      aux_sym_case_repeat1,
  [23111] = 1,
    ACTIONS(819), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23119] = 1,
    ACTIONS(1380), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [23127] = 1,
    ACTIONS(789), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23135] = 4,
    ACTIONS(1690), 1,
      anon_sym_when,
    ACTIONS(1715), 1,
      anon_sym_default,
    STATE(749), 1,
      sym__when_keyword,
    STATE(80), 2,
      sym_when,
      aux_sym_case_repeat1,
  [23149] = 4,
    ACTIONS(1717), 1,
      anon_sym_append,
    ACTIONS(1719), 1,
      anon_sym_prepend,
    ACTIONS(1721), 1,
      sym_tag_name,
    STATE(357), 1,
      sym__block_content,
  [23162] = 4,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    ACTIONS(1727), 1,
      sym__dedent,
    STATE(710), 1,
      aux_sym_script_block_repeat1,
  [23175] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1731), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23188] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1733), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23201] = 2,
    ACTIONS(744), 1,
      sym__newline,
    ACTIONS(746), 3,
      aux_sym_include_token1,
      anon_sym_COLON,
      aux_sym_filter_content_token1,
  [23210] = 2,
    ACTIONS(1735), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1737), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23219] = 2,
    STATE(191), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23228] = 2,
    STATE(344), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23237] = 4,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    ACTIONS(1739), 1,
      sym__dedent,
    STATE(710), 1,
      aux_sym_script_block_repeat1,
  [23250] = 2,
    ACTIONS(1741), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1743), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23259] = 2,
    STATE(156), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23268] = 2,
    STATE(348), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23277] = 2,
    STATE(164), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23286] = 2,
    STATE(372), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23295] = 2,
    STATE(419), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23304] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1745), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23317] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1747), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23330] = 2,
    STATE(199), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23339] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1749), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23352] = 2,
    STATE(232), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23361] = 2,
    STATE(392), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23370] = 2,
    ACTIONS(1704), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1708), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23379] = 2,
    STATE(298), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23388] = 2,
    STATE(153), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23397] = 4,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1753), 1,
      sym__newline,
    STATE(376), 1,
      sym__single_line_buf_code,
    STATE(897), 1,
      sym__un_delimited_javascript,
  [23410] = 4,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1755), 1,
      sym__newline,
    STATE(209), 1,
      sym__single_line_buf_code,
    STATE(998), 1,
      sym__un_delimited_javascript,
  [23423] = 2,
    ACTIONS(753), 1,
      sym__newline,
    ACTIONS(755), 3,
      aux_sym_include_token1,
      anon_sym_COLON,
      aux_sym_filter_content_token1,
  [23432] = 2,
    STATE(215), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23441] = 2,
    STATE(266), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23450] = 2,
    STATE(173), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23459] = 4,
    ACTIONS(1757), 1,
      anon_sym_append,
    ACTIONS(1759), 1,
      anon_sym_prepend,
    ACTIONS(1761), 1,
      sym_tag_name,
    STATE(279), 1,
      sym__block_content,
  [23472] = 2,
    STATE(398), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23481] = 4,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1763), 1,
      sym__newline,
    STATE(268), 1,
      sym__single_line_buf_code,
    STATE(984), 1,
      sym__un_delimited_javascript,
  [23494] = 4,
    ACTIONS(1765), 1,
      anon_sym_append,
    ACTIONS(1767), 1,
      anon_sym_prepend,
    ACTIONS(1769), 1,
      sym_tag_name,
    STATE(405), 1,
      sym__block_content,
  [23507] = 2,
    STATE(375), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23516] = 2,
    STATE(275), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23525] = 4,
    ACTIONS(1771), 1,
      anon_sym_append,
    ACTIONS(1773), 1,
      anon_sym_prepend,
    ACTIONS(1775), 1,
      sym_tag_name,
    STATE(130), 1,
      sym__block_content,
  [23538] = 2,
    STATE(296), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23547] = 4,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    ACTIONS(1777), 1,
      sym__dedent,
    STATE(710), 1,
      aux_sym_script_block_repeat1,
  [23560] = 2,
    STATE(127), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23569] = 2,
    STATE(625), 1,
      sym_tag,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23578] = 4,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1779), 1,
      sym__newline,
    STATE(267), 1,
      sym__single_line_buf_code,
    STATE(910), 1,
      sym__un_delimited_javascript,
  [23591] = 4,
    ACTIONS(1781), 1,
      anon_sym_append,
    ACTIONS(1783), 1,
      anon_sym_prepend,
    ACTIONS(1785), 1,
      sym_tag_name,
    STATE(237), 1,
      sym__block_content,
  [23604] = 2,
    ACTIONS(1789), 1,
      anon_sym_,
    ACTIONS(1787), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [23613] = 2,
    ACTIONS(785), 1,
      sym__newline,
    ACTIONS(787), 3,
      aux_sym_include_token1,
      anon_sym_COLON,
      aux_sym_filter_content_token1,
  [23622] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1791), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23635] = 2,
    STATE(418), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23644] = 4,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    ACTIONS(1793), 1,
      sym__dedent,
    STATE(710), 1,
      aux_sym_script_block_repeat1,
  [23657] = 2,
    STATE(632), 1,
      sym_tag,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23666] = 2,
    STATE(121), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23675] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1795), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23688] = 4,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    ACTIONS(1797), 1,
      sym__dedent,
    STATE(710), 1,
      aux_sym_script_block_repeat1,
  [23701] = 2,
    STATE(638), 1,
      sym_tag,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23710] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1799), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23723] = 2,
    STATE(114), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23732] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1801), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23745] = 4,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1803), 1,
      sym__newline,
    STATE(144), 1,
      sym__single_line_buf_code,
    STATE(1029), 1,
      sym__un_delimited_javascript,
  [23758] = 4,
    ACTIONS(1805), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1808), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23771] = 2,
    STATE(629), 1,
      sym_tag,
    ACTIONS(1514), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23780] = 3,
    ACTIONS(1812), 1,
      anon_sym_EQ,
    ACTIONS(1814), 1,
      anon_sym_,
    ACTIONS(1810), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23791] = 4,
    ACTIONS(1816), 1,
      aux_sym_include_token1,
    ACTIONS(1819), 1,
      sym__newline,
    ACTIONS(1822), 1,
      sym__dedent,
    STATE(710), 1,
      aux_sym_script_block_repeat1,
  [23804] = 4,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1824), 1,
      sym__dedent,
    STATE(707), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23817] = 2,
    STATE(105), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23826] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(636), 1,
      sym__single_line_buf_code,
    STATE(929), 1,
      sym__un_delimited_javascript,
  [23836] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(703), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [23846] = 3,
    ACTIONS(1826), 1,
      aux_sym__each_js_token1,
    STATE(831), 1,
      sym__each_js,
    STATE(1051), 1,
      sym_iteration_variable,
  [23856] = 3,
    ACTIONS(1826), 1,
      aux_sym__each_js_token1,
    STATE(831), 1,
      sym__each_js,
    STATE(1047), 1,
      sym_iteration_variable,
  [23866] = 3,
    ACTIONS(1826), 1,
      aux_sym__each_js_token1,
    STATE(831), 1,
      sym__each_js,
    STATE(1043), 1,
      sym_iteration_variable,
  [23876] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1830), 1,
      sym__dedent,
    STATE(728), 1,
      aux_sym_filter_content_repeat1,
  [23886] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1834), 1,
      anon_sym_RPAREN,
    ACTIONS(1836), 1,
      anon_sym_,
  [23896] = 3,
    ACTIONS(1826), 1,
      aux_sym__each_js_token1,
    STATE(831), 1,
      sym__each_js,
    STATE(1038), 1,
      sym_iteration_variable,
  [23906] = 1,
    ACTIONS(1838), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23912] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1840), 1,
      anon_sym_RPAREN,
  [23922] = 2,
    ACTIONS(1844), 1,
      anon_sym_,
    ACTIONS(1842), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23930] = 2,
    ACTIONS(1848), 1,
      anon_sym_,
    ACTIONS(1846), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23938] = 2,
    ACTIONS(1852), 1,
      anon_sym_,
    ACTIONS(1850), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23946] = 3,
    ACTIONS(1854), 1,
      sym__un_delimited_javascript_line,
    STATE(62), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(118), 1,
      sym__multi_line_buf_code,
  [23956] = 2,
    ACTIONS(1858), 1,
      anon_sym_,
    ACTIONS(1856), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23964] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1860), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [23974] = 3,
    ACTIONS(1862), 1,
      anon_sym_COLON,
    ACTIONS(1864), 1,
      sym__newline,
    STATE(303), 1,
      sym__when_content,
  [23984] = 2,
    ACTIONS(1868), 1,
      anon_sym_,
    ACTIONS(1866), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23992] = 3,
    ACTIONS(1870), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1873), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [24002] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(711), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24012] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(630), 1,
      sym__single_line_buf_code,
    STATE(929), 1,
      sym__un_delimited_javascript,
  [24022] = 2,
    ACTIONS(1877), 1,
      anon_sym_,
    ACTIONS(1875), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24030] = 3,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(701), 1,
      aux_sym_script_block_repeat1,
  [24040] = 3,
    ACTIONS(1879), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1881), 1,
      sym__newline,
    STATE(937), 1,
      sym__comment_content,
  [24050] = 2,
    ACTIONS(1885), 1,
      anon_sym_,
    ACTIONS(1883), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24058] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(668), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24068] = 1,
    ACTIONS(1887), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24074] = 2,
    ACTIONS(1891), 1,
      anon_sym_,
    ACTIONS(1889), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24082] = 3,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1893), 1,
      aux_sym_include_token1,
    STATE(942), 1,
      sym_filter,
  [24092] = 3,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1895), 1,
      aux_sym_include_token1,
    STATE(980), 1,
      sym_filter,
  [24102] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(653), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24112] = 3,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(658), 1,
      aux_sym_script_block_repeat1,
  [24122] = 3,
    ACTIONS(1897), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1899), 1,
      sym__newline,
    STATE(924), 1,
      sym__comment_content,
  [24132] = 1,
    ACTIONS(1822), 3,
      sym__newline,
      sym__dedent,
      aux_sym_include_token1,
  [24138] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(103), 1,
      sym__single_line_buf_code,
    STATE(1029), 1,
      sym__un_delimited_javascript,
  [24148] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(108), 1,
      sym__single_line_buf_code,
    STATE(1029), 1,
      sym__un_delimited_javascript,
  [24158] = 3,
    ACTIONS(1901), 1,
      anon_sym_COLON,
    ACTIONS(1903), 1,
      sym__newline,
    STATE(170), 1,
      sym__when_content,
  [24168] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1905), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [24178] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(695), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24188] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(700), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24198] = 3,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(697), 1,
      aux_sym_script_block_repeat1,
  [24208] = 3,
    ACTIONS(1907), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1909), 1,
      sym__newline,
    STATE(1000), 1,
      sym__comment_content,
  [24218] = 3,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1911), 1,
      aux_sym_include_token1,
    STATE(1025), 1,
      sym_filter,
  [24228] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(665), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24238] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(347), 1,
      sym__single_line_buf_code,
    STATE(994), 1,
      sym__un_delimited_javascript,
  [24248] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(340), 1,
      sym__single_line_buf_code,
    STATE(994), 1,
      sym__un_delimited_javascript,
  [24258] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(652), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24268] = 3,
    ACTIONS(1913), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1915), 1,
      sym__newline,
    STATE(945), 1,
      sym__comment_content,
  [24278] = 3,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(651), 1,
      aux_sym_script_block_repeat1,
  [24288] = 3,
    ACTIONS(1826), 1,
      aux_sym__each_js_token1,
    STATE(831), 1,
      sym__each_js,
    STATE(1015), 1,
      sym_iteration_variable,
  [24298] = 3,
    ACTIONS(1917), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1919), 1,
      sym__newline,
    STATE(963), 1,
      sym__comment_content,
  [24308] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1921), 1,
      anon_sym_RPAREN,
  [24318] = 3,
    ACTIONS(1923), 1,
      anon_sym_SQUOTE,
    ACTIONS(1925), 1,
      anon_sym_DQUOTE,
    STATE(737), 1,
      sym_quoted_javascript,
  [24328] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(705), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24338] = 1,
    ACTIONS(1927), 3,
      sym__newline,
      sym__dedent,
      aux_sym_include_token1,
  [24344] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1929), 1,
      anon_sym_RPAREN,
  [24354] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1931), 1,
      sym__dedent,
    STATE(750), 1,
      aux_sym_filter_content_repeat1,
  [24364] = 3,
    ACTIONS(1933), 1,
      anon_sym_COLON,
    ACTIONS(1935), 1,
      sym__newline,
    STATE(89), 1,
      sym__when_content,
  [24374] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1937), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [24384] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1939), 1,
      anon_sym_RPAREN,
  [24394] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1941), 1,
      anon_sym_RPAREN,
  [24404] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1943), 1,
      sym__dedent,
    STATE(783), 1,
      aux_sym_filter_content_repeat1,
  [24414] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(304), 1,
      sym__single_line_buf_code,
    STATE(910), 1,
      sym__un_delimited_javascript,
  [24424] = 3,
    ACTIONS(1945), 1,
      sym__un_delimited_javascript_line,
    STATE(91), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(190), 1,
      sym__multi_line_buf_code,
  [24434] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1947), 1,
      anon_sym_RPAREN,
  [24444] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1949), 1,
      anon_sym_RPAREN,
  [24454] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1951), 1,
      sym__dedent,
    STATE(771), 1,
      aux_sym_filter_content_repeat1,
  [24464] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(307), 1,
      sym__single_line_buf_code,
    STATE(910), 1,
      sym__un_delimited_javascript,
  [24474] = 3,
    ACTIONS(1953), 1,
      sym__un_delimited_javascript_line,
    STATE(290), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(382), 1,
      sym__multi_line_buf_code,
  [24484] = 2,
    ACTIONS(1957), 1,
      anon_sym_,
    ACTIONS(1955), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24492] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1959), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [24502] = 3,
    ACTIONS(1961), 1,
      sym__un_delimited_javascript_line,
    STATE(154), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(286), 1,
      sym__multi_line_buf_code,
  [24512] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1963), 1,
      anon_sym_RPAREN,
  [24522] = 3,
    ACTIONS(1729), 1,
      aux_sym_filter_content_token2,
    STATE(666), 1,
      aux_sym__comment_repeat1,
    STATE(906), 1,
      sym__comment_content,
  [24532] = 3,
    ACTIONS(1723), 1,
      aux_sym_include_token1,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(688), 1,
      aux_sym_script_block_repeat1,
  [24542] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1965), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [24552] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1967), 1,
      anon_sym_RPAREN,
  [24562] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1969), 1,
      sym__dedent,
    STATE(788), 1,
      aux_sym_filter_content_repeat1,
  [24572] = 3,
    ACTIONS(1971), 1,
      anon_sym_RPAREN,
    ACTIONS(1973), 1,
      aux_sym_mixin_attributes_token1,
    STATE(890), 1,
      aux_sym_mixin_attributes_repeat1,
  [24582] = 1,
    ACTIONS(1975), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24588] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1977), 1,
      anon_sym_RPAREN,
  [24598] = 3,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1979), 1,
      aux_sym_include_token1,
    STATE(1019), 1,
      sym_filter,
  [24608] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1981), 1,
      anon_sym_RPAREN,
  [24618] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(380), 1,
      sym__single_line_buf_code,
    STATE(897), 1,
      sym__un_delimited_javascript,
  [24628] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(396), 1,
      sym__single_line_buf_code,
    STATE(897), 1,
      sym__un_delimited_javascript,
  [24638] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1983), 1,
      sym__dedent,
    STATE(731), 1,
      aux_sym_filter_content_repeat1,
  [24648] = 3,
    ACTIONS(1985), 1,
      sym__un_delimited_javascript_line,
    STATE(151), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(289), 1,
      sym__multi_line_buf_code,
  [24658] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(168), 1,
      sym__single_line_buf_code,
    STATE(986), 1,
      sym__un_delimited_javascript,
  [24668] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(169), 1,
      sym__single_line_buf_code,
    STATE(986), 1,
      sym__un_delimited_javascript,
  [24678] = 3,
    ACTIONS(1987), 1,
      anon_sym_LPAREN,
    ACTIONS(1989), 1,
      sym__newline,
    STATE(902), 1,
      sym_mixin_attributes,
  [24688] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1991), 1,
      anon_sym_RPAREN,
  [24698] = 3,
    ACTIONS(1828), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1993), 1,
      sym__dedent,
    STATE(798), 1,
      aux_sym_filter_content_repeat1,
  [24708] = 1,
    ACTIONS(1995), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24714] = 3,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1997), 1,
      aux_sym_include_token1,
    STATE(935), 1,
      sym_filter,
  [24724] = 3,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
    ACTIONS(1999), 1,
      anon_sym_RPAREN,
  [24734] = 1,
    ACTIONS(2001), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24740] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(998), 1,
      sym__un_delimited_javascript,
  [24750] = 3,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(230), 1,
      sym__single_line_buf_code,
    STATE(998), 1,
      sym__un_delimited_javascript,
  [24760] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(1018), 1,
      sym_iteration_iterator,
  [24767] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(223), 1,
      sym_children,
  [24774] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(149), 1,
      sym_children,
  [24781] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(145), 1,
      sym_children,
  [24788] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(896), 1,
      sym_iteration_iterator,
  [24795] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(263), 1,
      sym_children,
  [24802] = 2,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(971), 1,
      sym__un_delimited_javascript,
  [24809] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(970), 1,
      sym_iteration_iterator,
  [24816] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(256), 1,
      sym_children,
  [24823] = 2,
    ACTIONS(2005), 1,
      sym_tag_name,
    STATE(235), 1,
      sym__block_content,
  [24830] = 2,
    ACTIONS(2007), 1,
      sym_tag_name,
    STATE(269), 1,
      sym__block_content,
  [24837] = 2,
    ACTIONS(2005), 1,
      sym_tag_name,
    STATE(236), 1,
      sym__block_content,
  [24844] = 2,
    ACTIONS(2007), 1,
      sym_tag_name,
    STATE(270), 1,
      sym__block_content,
  [24851] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(271), 1,
      sym_children,
  [24858] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(959), 1,
      sym_iteration_iterator,
  [24865] = 2,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(952), 1,
      sym__un_delimited_javascript,
  [24872] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(951), 1,
      sym_iteration_iterator,
  [24879] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(940), 1,
      sym_iteration_iterator,
  [24886] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(329), 1,
      sym_children,
  [24893] = 2,
    ACTIONS(2005), 1,
      sym_tag_name,
    STATE(222), 1,
      sym__block_content,
  [24900] = 2,
    ACTIONS(2009), 1,
      anon_sym_COMMA,
    ACTIONS(2011), 1,
      anon_sym_in,
  [24907] = 2,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(934), 1,
      sym__un_delimited_javascript,
  [24914] = 2,
    ACTIONS(2005), 1,
      sym_tag_name,
    STATE(219), 1,
      sym__block_content,
  [24921] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(933), 1,
      sym_iteration_iterator,
  [24928] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
  [24935] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(923), 1,
      sym_iteration_iterator,
  [24942] = 2,
    ACTIONS(2013), 1,
      sym_tag_name,
    STATE(333), 1,
      sym__block_content,
  [24949] = 2,
    ACTIONS(2013), 1,
      sym_tag_name,
    STATE(336), 1,
      sym__block_content,
  [24956] = 2,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(915), 1,
      sym__un_delimited_javascript,
  [24963] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(914), 1,
      sym_iteration_iterator,
  [24970] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(334), 1,
      sym_children,
  [24977] = 2,
    ACTIONS(2015), 1,
      sym_tag_name,
    STATE(143), 1,
      sym__block_content,
  [24984] = 2,
    ACTIONS(2017), 1,
      anon_sym_COMMA,
    ACTIONS(2019), 1,
      anon_sym_RPAREN,
  [24991] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(310), 1,
      sym_children,
  [24998] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(81), 1,
      sym_children,
  [25005] = 2,
    ACTIONS(2007), 1,
      sym_tag_name,
    STATE(277), 1,
      sym__block_content,
  [25012] = 2,
    ACTIONS(2007), 1,
      sym_tag_name,
    STATE(278), 1,
      sym__block_content,
  [25019] = 2,
    ACTIONS(2015), 1,
      sym_tag_name,
    STATE(142), 1,
      sym__block_content,
  [25026] = 1,
    ACTIONS(2021), 2,
      sym__newline,
      anon_sym_COLON,
  [25031] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
  [25038] = 1,
    ACTIONS(1873), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [25043] = 2,
    ACTIONS(1751), 1,
      sym__un_delimited_javascript_line,
    STATE(1003), 1,
      sym__un_delimited_javascript,
  [25050] = 1,
    ACTIONS(1844), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [25055] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(353), 1,
      sym_children,
  [25062] = 2,
    ACTIONS(1832), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_,
  [25069] = 2,
    ACTIONS(2015), 1,
      sym_tag_name,
    STATE(132), 1,
      sym__block_content,
  [25076] = 2,
    ACTIONS(2023), 1,
      anon_sym_DQUOTE,
    ACTIONS(2025), 1,
      aux_sym_quoted_javascript_token2,
  [25083] = 2,
    ACTIONS(2023), 1,
      anon_sym_SQUOTE,
    ACTIONS(2027), 1,
      aux_sym_quoted_javascript_token1,
  [25090] = 2,
    ACTIONS(2029), 1,
      aux_sym__each_js_token1,
    STATE(899), 1,
      sym__each_js,
  [25097] = 2,
    ACTIONS(2003), 1,
      aux_sym_include_token1,
    STATE(900), 1,
      sym_iteration_iterator,
  [25104] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(365), 1,
      sym_children,
  [25111] = 2,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(388), 1,
      sym_children,
  [25118] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
  [25125] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(208), 1,
      sym_children,
  [25132] = 2,
    ACTIONS(2015), 1,
      sym_tag_name,
    STATE(131), 1,
      sym__block_content,
  [25139] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(366), 1,
      sym_children,
  [25146] = 2,
    ACTIONS(2031), 1,
      sym_tag_name,
    STATE(403), 1,
      sym__block_content,
  [25153] = 2,
    ACTIONS(2031), 1,
      sym_tag_name,
    STATE(402), 1,
      sym__block_content,
  [25160] = 1,
    ACTIONS(1808), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [25165] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(371), 1,
      sym_children,
  [25172] = 2,
    ACTIONS(2033), 1,
      aux_sym_mixin_attributes_token1,
    STATE(871), 1,
      aux_sym_mixin_attributes_repeat1,
  [25179] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(202), 1,
      sym_children,
  [25186] = 2,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(389), 1,
      sym_children,
  [25193] = 2,
    ACTIONS(2036), 1,
      anon_sym_SQUOTE,
    ACTIONS(2038), 1,
      aux_sym_quoted_javascript_token1,
  [25200] = 2,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(322), 1,
      sym_children,
  [25207] = 2,
    ACTIONS(2036), 1,
      anon_sym_DQUOTE,
    ACTIONS(2040), 1,
      aux_sym_quoted_javascript_token2,
  [25214] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(167), 1,
      sym_children,
  [25221] = 2,
    ACTIONS(2031), 1,
      sym_tag_name,
    STATE(383), 1,
      sym__block_content,
  [25228] = 2,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(394), 1,
      sym_children,
  [25235] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(285), 1,
      sym_children,
  [25242] = 2,
    ACTIONS(2042), 1,
      anon_sym_COMMA,
    ACTIONS(2044), 1,
      anon_sym_RPAREN,
  [25249] = 2,
    ACTIONS(2013), 1,
      sym_tag_name,
    STATE(356), 1,
      sym__block_content,
  [25256] = 2,
    ACTIONS(2046), 1,
      anon_sym_SQUOTE,
    ACTIONS(2048), 1,
      aux_sym_quoted_javascript_token1,
  [25263] = 2,
    ACTIONS(2046), 1,
      anon_sym_DQUOTE,
    ACTIONS(2050), 1,
      aux_sym_quoted_javascript_token2,
  [25270] = 2,
    ACTIONS(2031), 1,
      sym_tag_name,
    STATE(385), 1,
      sym__block_content,
  [25277] = 1,
    ACTIONS(1877), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [25282] = 1,
    ACTIONS(1848), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [25287] = 2,
    ACTIONS(2042), 1,
      anon_sym_COMMA,
    ACTIONS(2052), 1,
      anon_sym_RPAREN,
  [25294] = 2,
    ACTIONS(2017), 1,
      anon_sym_COMMA,
    ACTIONS(2054), 1,
      anon_sym_RPAREN,
  [25301] = 2,
    ACTIONS(2056), 1,
      aux_sym_mixin_attributes_token1,
    STATE(871), 1,
      aux_sym_mixin_attributes_repeat1,
  [25308] = 2,
    ACTIONS(1041), 1,
      sym__indent,
    STATE(408), 1,
      sym_children,
  [25315] = 2,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(330), 1,
      sym_children,
  [25322] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(247), 1,
      sym_children,
  [25329] = 2,
    ACTIONS(2013), 1,
      sym_tag_name,
    STATE(355), 1,
      sym__block_content,
  [25336] = 1,
    ACTIONS(2058), 1,
      sym__indent,
  [25340] = 1,
    ACTIONS(2060), 1,
      sym__newline,
  [25344] = 1,
    ACTIONS(2062), 1,
      sym__newline,
  [25348] = 1,
    ACTIONS(2064), 1,
      sym__indent,
  [25352] = 1,
    ACTIONS(2066), 1,
      anon_sym_in,
  [25356] = 1,
    ACTIONS(2068), 1,
      sym__newline,
  [25360] = 1,
    ACTIONS(2070), 1,
      anon_sym_SQUOTE,
  [25364] = 1,
    ACTIONS(2072), 1,
      sym__newline,
  [25368] = 1,
    ACTIONS(2074), 1,
      sym__newline,
  [25372] = 1,
    ACTIONS(2070), 1,
      anon_sym_DQUOTE,
  [25376] = 1,
    ACTIONS(2076), 1,
      sym__newline,
  [25380] = 1,
    ACTIONS(2078), 1,
      sym__newline,
  [25384] = 1,
    ACTIONS(2080), 1,
      sym__newline,
  [25388] = 1,
    ACTIONS(2082), 1,
      aux_sym__attribute_token1,
  [25392] = 1,
    ACTIONS(2084), 1,
      aux_sym_filter_content_token2,
  [25396] = 1,
    ACTIONS(2086), 1,
      sym__newline,
  [25400] = 1,
    ACTIONS(2088), 1,
      aux_sym_include_token1,
  [25404] = 1,
    ACTIONS(2090), 1,
      sym__newline,
  [25408] = 1,
    ACTIONS(2092), 1,
      aux_sym_unbuffered_code_token1,
  [25412] = 1,
    ACTIONS(2094), 1,
      sym__newline,
  [25416] = 1,
    ACTIONS(2096), 1,
      sym__newline,
  [25420] = 1,
    ACTIONS(667), 1,
      aux_sym_include_token1,
  [25424] = 1,
    ACTIONS(2098), 1,
      sym__indent,
  [25428] = 1,
    ACTIONS(2100), 1,
      sym__indent,
  [25432] = 1,
    ACTIONS(2102), 1,
      aux_sym_unbuffered_code_token1,
  [25436] = 1,
    ACTIONS(2104), 1,
      sym__newline,
  [25440] = 1,
    ACTIONS(2106), 1,
      sym__newline,
  [25444] = 1,
    ACTIONS(2108), 1,
      sym__indent,
  [25448] = 1,
    ACTIONS(2110), 1,
      sym__newline,
  [25452] = 1,
    ACTIONS(2112), 1,
      sym__newline,
  [25456] = 1,
    ACTIONS(2114), 1,
      anon_sym_SQUOTE,
  [25460] = 1,
    ACTIONS(2114), 1,
      anon_sym_DQUOTE,
  [25464] = 1,
    ACTIONS(2116), 1,
      aux_sym_mixin_attributes_token1,
  [25468] = 1,
    ACTIONS(2118), 1,
      sym__newline,
  [25472] = 1,
    ACTIONS(2120), 1,
      sym__newline,
  [25476] = 1,
    ACTIONS(2122), 1,
      sym__newline,
  [25480] = 1,
    ACTIONS(2124), 1,
      sym__newline,
  [25484] = 1,
    ACTIONS(2126), 1,
      aux_sym_unbuffered_code_token1,
  [25488] = 1,
    ACTIONS(2128), 1,
      sym__newline,
  [25492] = 1,
    ACTIONS(2130), 1,
      sym__newline,
  [25496] = 1,
    ACTIONS(2132), 1,
      aux_sym_include_token1,
  [25500] = 1,
    ACTIONS(2134), 1,
      sym__indent,
  [25504] = 1,
    ACTIONS(2136), 1,
      sym__newline,
  [25508] = 1,
    ACTIONS(2138), 1,
      sym__delimited_javascript,
  [25512] = 1,
    ACTIONS(2140), 1,
      sym__indent,
  [25516] = 1,
    ACTIONS(2142), 1,
      sym__newline,
  [25520] = 1,
    ACTIONS(2144), 1,
      sym__newline,
  [25524] = 1,
    ACTIONS(2146), 1,
      aux_sym_include_token1,
  [25528] = 1,
    ACTIONS(2148), 1,
      sym__un_delimited_javascript_line,
  [25532] = 1,
    ACTIONS(2150), 1,
      aux_sym__when_keyword_token1,
  [25536] = 1,
    ACTIONS(2152), 1,
      sym__newline,
  [25540] = 1,
    ACTIONS(2154), 1,
      sym_filter_name,
  [25544] = 1,
    ACTIONS(2156), 1,
      sym__newline,
  [25548] = 1,
    ACTIONS(2158), 1,
      sym__newline,
  [25552] = 1,
    ACTIONS(2160), 1,
      aux_sym_include_token1,
  [25556] = 1,
    ACTIONS(2162), 1,
      aux_sym_unbuffered_code_token1,
  [25560] = 1,
    ACTIONS(2164), 1,
      sym__newline,
  [25564] = 1,
    ACTIONS(2166), 1,
      sym__newline,
  [25568] = 1,
    ACTIONS(2168), 1,
      sym__indent,
  [25572] = 1,
    ACTIONS(2170), 1,
      sym__indent,
  [25576] = 1,
    ACTIONS(2172), 1,
      aux_sym_filter_content_token2,
  [25580] = 1,
    ACTIONS(2174), 1,
      aux_sym_filter_content_token2,
  [25584] = 1,
    ACTIONS(2176), 1,
      sym__indent,
  [25588] = 1,
    ACTIONS(2178), 1,
      sym__indent,
  [25592] = 1,
    ACTIONS(2180), 1,
      sym__newline,
  [25596] = 1,
    ACTIONS(2182), 1,
      sym__indent,
  [25600] = 1,
    ACTIONS(2184), 1,
      sym__delimited_javascript,
  [25604] = 1,
    ACTIONS(2186), 1,
      ts_builtin_sym_end,
  [25608] = 1,
    ACTIONS(2188), 1,
      sym__newline,
  [25612] = 1,
    ACTIONS(2190), 1,
      sym_tag_name,
  [25616] = 1,
    ACTIONS(2192), 1,
      aux_sym_filter_content_token2,
  [25620] = 1,
    ACTIONS(2194), 1,
      sym__newline,
  [25624] = 1,
    ACTIONS(2196), 1,
      sym__newline,
  [25628] = 1,
    ACTIONS(2198), 1,
      aux_sym_include_token1,
  [25632] = 1,
    ACTIONS(2200), 1,
      aux_sym_unbuffered_code_token1,
  [25636] = 1,
    ACTIONS(2202), 1,
      sym__newline,
  [25640] = 1,
    ACTIONS(2204), 1,
      sym__newline,
  [25644] = 1,
    ACTIONS(2206), 1,
      sym_tag_name,
  [25648] = 1,
    ACTIONS(2208), 1,
      sym__indent,
  [25652] = 1,
    ACTIONS(2210), 1,
      sym_filter_name,
  [25656] = 1,
    ACTIONS(2212), 1,
      anon_sym_RBRACE_RBRACE,
  [25660] = 1,
    ACTIONS(2042), 1,
      anon_sym_COMMA,
  [25664] = 1,
    ACTIONS(2214), 1,
      sym__indent,
  [25668] = 1,
    ACTIONS(2216), 1,
      sym__indent,
  [25672] = 1,
    ACTIONS(2218), 1,
      sym__newline,
  [25676] = 1,
    ACTIONS(2220), 1,
      aux_sym_include_token1,
  [25680] = 1,
    ACTIONS(2017), 1,
      anon_sym_COMMA,
  [25684] = 1,
    ACTIONS(2212), 1,
      anon_sym_RBRACE,
  [25688] = 1,
    ACTIONS(2222), 1,
      sym__newline,
  [25692] = 1,
    ACTIONS(2224), 1,
      sym__newline,
  [25696] = 1,
    ACTIONS(2226), 1,
      sym__newline,
  [25700] = 1,
    ACTIONS(2228), 1,
      sym__newline,
  [25704] = 1,
    ACTIONS(2230), 1,
      sym__indent,
  [25708] = 1,
    ACTIONS(2232), 1,
      sym__indent,
  [25712] = 1,
    ACTIONS(2234), 1,
      anon_sym_SQUOTE,
  [25716] = 1,
    ACTIONS(2234), 1,
      anon_sym_DQUOTE,
  [25720] = 1,
    ACTIONS(2236), 1,
      sym__newline,
  [25724] = 1,
    ACTIONS(2238), 1,
      sym_filter_name,
  [25728] = 1,
    ACTIONS(2240), 1,
      sym__indent,
  [25732] = 1,
    ACTIONS(2242), 1,
      sym__newline,
  [25736] = 1,
    ACTIONS(859), 1,
      aux_sym_include_token1,
  [25740] = 1,
    ACTIONS(921), 1,
      aux_sym_include_token1,
  [25744] = 1,
    ACTIONS(967), 1,
      aux_sym_include_token1,
  [25748] = 1,
    ACTIONS(2244), 1,
      sym__newline,
  [25752] = 1,
    ACTIONS(963), 1,
      aux_sym_include_token1,
  [25756] = 1,
    ACTIONS(2246), 1,
      sym__newline,
  [25760] = 1,
    ACTIONS(917), 1,
      aux_sym_include_token1,
  [25764] = 1,
    ACTIONS(2248), 1,
      sym__newline,
  [25768] = 1,
    ACTIONS(2250), 1,
      sym__newline,
  [25772] = 1,
    ACTIONS(2252), 1,
      sym__newline,
  [25776] = 1,
    ACTIONS(2254), 1,
      sym__indent,
  [25780] = 1,
    ACTIONS(2256), 1,
      sym__indent,
  [25784] = 1,
    ACTIONS(2258), 1,
      sym__newline,
  [25788] = 1,
    ACTIONS(2260), 1,
      sym__indent,
  [25792] = 1,
    ACTIONS(2262), 1,
      sym__indent,
  [25796] = 1,
    ACTIONS(2264), 1,
      aux_sym_include_token1,
  [25800] = 1,
    ACTIONS(2266), 1,
      sym_filter_name,
  [25804] = 1,
    ACTIONS(2268), 1,
      sym__newline,
  [25808] = 1,
    ACTIONS(2270), 1,
      sym__indent,
  [25812] = 1,
    ACTIONS(2272), 1,
      sym__indent,
  [25816] = 1,
    ACTIONS(2274), 1,
      anon_sym_in,
  [25820] = 1,
    ACTIONS(2276), 1,
      sym__indent,
  [25824] = 1,
    ACTIONS(2278), 1,
      sym__indent,
  [25828] = 1,
    ACTIONS(2280), 1,
      sym__newline,
  [25832] = 1,
    ACTIONS(2282), 1,
      aux_sym_include_token1,
  [25836] = 1,
    ACTIONS(2284), 1,
      sym__indent,
  [25840] = 1,
    ACTIONS(2286), 1,
      sym__indent,
  [25844] = 1,
    ACTIONS(2288), 1,
      sym__newline,
  [25848] = 1,
    ACTIONS(2290), 1,
      sym__indent,
  [25852] = 1,
    ACTIONS(2292), 1,
      sym__indent,
  [25856] = 1,
    ACTIONS(2294), 1,
      aux_sym_include_token1,
  [25860] = 1,
    ACTIONS(2296), 1,
      aux_sym_filter_content_token2,
  [25864] = 1,
    ACTIONS(2298), 1,
      sym__indent,
  [25868] = 1,
    ACTIONS(2300), 1,
      sym__indent,
  [25872] = 1,
    ACTIONS(2302), 1,
      sym__newline,
  [25876] = 1,
    ACTIONS(2304), 1,
      sym__indent,
  [25880] = 1,
    ACTIONS(2306), 1,
      sym__indent,
  [25884] = 1,
    ACTIONS(2308), 1,
      sym__indent,
  [25888] = 1,
    ACTIONS(2310), 1,
      sym__indent,
  [25892] = 1,
    ACTIONS(2312), 1,
      sym__indent,
  [25896] = 1,
    ACTIONS(2314), 1,
      sym__indent,
  [25900] = 1,
    ACTIONS(2316), 1,
      sym__un_delimited_javascript_line,
  [25904] = 1,
    ACTIONS(2318), 1,
      sym__newline,
  [25908] = 1,
    ACTIONS(2320), 1,
      anon_sym_in,
  [25912] = 1,
    ACTIONS(2322), 1,
      sym__newline,
  [25916] = 1,
    ACTIONS(2324), 1,
      sym__newline,
  [25920] = 1,
    ACTIONS(2326), 1,
      sym__un_delimited_javascript_line,
  [25924] = 1,
    ACTIONS(2328), 1,
      sym__newline,
  [25928] = 1,
    ACTIONS(2330), 1,
      anon_sym_in,
  [25932] = 1,
    ACTIONS(2332), 1,
      sym__newline,
  [25936] = 1,
    ACTIONS(2334), 1,
      sym__newline,
  [25940] = 1,
    ACTIONS(2336), 1,
      sym__newline,
  [25944] = 1,
    ACTIONS(2338), 1,
      anon_sym_in,
  [25948] = 1,
    ACTIONS(2340), 1,
      sym__newline,
  [25952] = 1,
    ACTIONS(2342), 1,
      sym__newline,
  [25956] = 1,
    ACTIONS(2344), 1,
      sym__newline,
  [25960] = 1,
    ACTIONS(2346), 1,
      anon_sym_in,
  [25964] = 1,
    ACTIONS(2348), 1,
      sym__newline,
  [25968] = 1,
    ACTIONS(2350), 1,
      sym__newline,
  [25972] = 1,
    ACTIONS(2352), 1,
      sym__newline,
  [25976] = 1,
    ACTIONS(2354), 1,
      sym__newline,
  [25980] = 1,
    ACTIONS(2356), 1,
      sym__newline,
  [25984] = 1,
    ACTIONS(2358), 1,
      sym__newline,
  [25988] = 1,
    ACTIONS(2360), 1,
      aux_sym_include_token1,
  [25992] = 1,
    ACTIONS(2362), 1,
      sym_filter_name,
  [25996] = 1,
    ACTIONS(2364), 1,
      sym_filter_name,
  [26000] = 1,
    ACTIONS(2366), 1,
      aux_sym_filter_content_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 111,
  [SMALL_STATE(4)] = 220,
  [SMALL_STATE(5)] = 331,
  [SMALL_STATE(6)] = 440,
  [SMALL_STATE(7)] = 547,
  [SMALL_STATE(8)] = 656,
  [SMALL_STATE(9)] = 762,
  [SMALL_STATE(10)] = 868,
  [SMALL_STATE(11)] = 974,
  [SMALL_STATE(12)] = 1080,
  [SMALL_STATE(13)] = 1182,
  [SMALL_STATE(14)] = 1284,
  [SMALL_STATE(15)] = 1386,
  [SMALL_STATE(16)] = 1488,
  [SMALL_STATE(17)] = 1590,
  [SMALL_STATE(18)] = 1692,
  [SMALL_STATE(19)] = 1794,
  [SMALL_STATE(20)] = 1896,
  [SMALL_STATE(21)] = 1998,
  [SMALL_STATE(22)] = 2100,
  [SMALL_STATE(23)] = 2202,
  [SMALL_STATE(24)] = 2304,
  [SMALL_STATE(25)] = 2406,
  [SMALL_STATE(26)] = 2508,
  [SMALL_STATE(27)] = 2610,
  [SMALL_STATE(28)] = 2712,
  [SMALL_STATE(29)] = 2814,
  [SMALL_STATE(30)] = 2916,
  [SMALL_STATE(31)] = 3018,
  [SMALL_STATE(32)] = 3120,
  [SMALL_STATE(33)] = 3222,
  [SMALL_STATE(34)] = 3324,
  [SMALL_STATE(35)] = 3426,
  [SMALL_STATE(36)] = 3528,
  [SMALL_STATE(37)] = 3630,
  [SMALL_STATE(38)] = 3732,
  [SMALL_STATE(39)] = 3834,
  [SMALL_STATE(40)] = 3936,
  [SMALL_STATE(41)] = 4038,
  [SMALL_STATE(42)] = 4140,
  [SMALL_STATE(43)] = 4242,
  [SMALL_STATE(44)] = 4341,
  [SMALL_STATE(45)] = 4440,
  [SMALL_STATE(46)] = 4539,
  [SMALL_STATE(47)] = 4638,
  [SMALL_STATE(48)] = 4737,
  [SMALL_STATE(49)] = 4836,
  [SMALL_STATE(50)] = 4935,
  [SMALL_STATE(51)] = 4991,
  [SMALL_STATE(52)] = 5045,
  [SMALL_STATE(53)] = 5093,
  [SMALL_STATE(54)] = 5141,
  [SMALL_STATE(55)] = 5191,
  [SMALL_STATE(56)] = 5234,
  [SMALL_STATE(57)] = 5277,
  [SMALL_STATE(58)] = 5320,
  [SMALL_STATE(59)] = 5373,
  [SMALL_STATE(60)] = 5416,
  [SMALL_STATE(61)] = 5459,
  [SMALL_STATE(62)] = 5502,
  [SMALL_STATE(63)] = 5545,
  [SMALL_STATE(64)] = 5588,
  [SMALL_STATE(65)] = 5641,
  [SMALL_STATE(66)] = 5684,
  [SMALL_STATE(67)] = 5727,
  [SMALL_STATE(68)] = 5770,
  [SMALL_STATE(69)] = 5814,
  [SMALL_STATE(70)] = 5856,
  [SMALL_STATE(71)] = 5894,
  [SMALL_STATE(72)] = 5936,
  [SMALL_STATE(73)] = 5978,
  [SMALL_STATE(74)] = 6024,
  [SMALL_STATE(75)] = 6066,
  [SMALL_STATE(76)] = 6108,
  [SMALL_STATE(77)] = 6146,
  [SMALL_STATE(78)] = 6188,
  [SMALL_STATE(79)] = 6228,
  [SMALL_STATE(80)] = 6270,
  [SMALL_STATE(81)] = 6316,
  [SMALL_STATE(82)] = 6358,
  [SMALL_STATE(83)] = 6396,
  [SMALL_STATE(84)] = 6438,
  [SMALL_STATE(85)] = 6478,
  [SMALL_STATE(86)] = 6526,
  [SMALL_STATE(87)] = 6564,
  [SMALL_STATE(88)] = 6601,
  [SMALL_STATE(89)] = 6638,
  [SMALL_STATE(90)] = 6675,
  [SMALL_STATE(91)] = 6712,
  [SMALL_STATE(92)] = 6753,
  [SMALL_STATE(93)] = 6792,
  [SMALL_STATE(94)] = 6839,
  [SMALL_STATE(95)] = 6876,
  [SMALL_STATE(96)] = 6917,
  [SMALL_STATE(97)] = 6958,
  [SMALL_STATE(98)] = 6995,
  [SMALL_STATE(99)] = 7036,
  [SMALL_STATE(100)] = 7073,
  [SMALL_STATE(101)] = 7110,
  [SMALL_STATE(102)] = 7151,
  [SMALL_STATE(103)] = 7196,
  [SMALL_STATE(104)] = 7233,
  [SMALL_STATE(105)] = 7270,
  [SMALL_STATE(106)] = 7307,
  [SMALL_STATE(107)] = 7348,
  [SMALL_STATE(108)] = 7385,
  [SMALL_STATE(109)] = 7422,
  [SMALL_STATE(110)] = 7463,
  [SMALL_STATE(111)] = 7510,
  [SMALL_STATE(112)] = 7547,
  [SMALL_STATE(113)] = 7588,
  [SMALL_STATE(114)] = 7633,
  [SMALL_STATE(115)] = 7670,
  [SMALL_STATE(116)] = 7711,
  [SMALL_STATE(117)] = 7748,
  [SMALL_STATE(118)] = 7785,
  [SMALL_STATE(119)] = 7824,
  [SMALL_STATE(120)] = 7861,
  [SMALL_STATE(121)] = 7898,
  [SMALL_STATE(122)] = 7935,
  [SMALL_STATE(123)] = 7976,
  [SMALL_STATE(124)] = 8013,
  [SMALL_STATE(125)] = 8050,
  [SMALL_STATE(126)] = 8087,
  [SMALL_STATE(127)] = 8124,
  [SMALL_STATE(128)] = 8161,
  [SMALL_STATE(129)] = 8198,
  [SMALL_STATE(130)] = 8235,
  [SMALL_STATE(131)] = 8272,
  [SMALL_STATE(132)] = 8309,
  [SMALL_STATE(133)] = 8346,
  [SMALL_STATE(134)] = 8383,
  [SMALL_STATE(135)] = 8420,
  [SMALL_STATE(136)] = 8457,
  [SMALL_STATE(137)] = 8494,
  [SMALL_STATE(138)] = 8531,
  [SMALL_STATE(139)] = 8582,
  [SMALL_STATE(140)] = 8619,
  [SMALL_STATE(141)] = 8656,
  [SMALL_STATE(142)] = 8693,
  [SMALL_STATE(143)] = 8730,
  [SMALL_STATE(144)] = 8767,
  [SMALL_STATE(145)] = 8806,
  [SMALL_STATE(146)] = 8843,
  [SMALL_STATE(147)] = 8880,
  [SMALL_STATE(148)] = 8917,
  [SMALL_STATE(149)] = 8954,
  [SMALL_STATE(150)] = 8991,
  [SMALL_STATE(151)] = 9028,
  [SMALL_STATE(152)] = 9068,
  [SMALL_STATE(153)] = 9104,
  [SMALL_STATE(154)] = 9140,
  [SMALL_STATE(155)] = 9180,
  [SMALL_STATE(156)] = 9220,
  [SMALL_STATE(157)] = 9256,
  [SMALL_STATE(158)] = 9292,
  [SMALL_STATE(159)] = 9332,
  [SMALL_STATE(160)] = 9372,
  [SMALL_STATE(161)] = 9408,
  [SMALL_STATE(162)] = 9444,
  [SMALL_STATE(163)] = 9480,
  [SMALL_STATE(164)] = 9516,
  [SMALL_STATE(165)] = 9552,
  [SMALL_STATE(166)] = 9590,
  [SMALL_STATE(167)] = 9626,
  [SMALL_STATE(168)] = 9666,
  [SMALL_STATE(169)] = 9702,
  [SMALL_STATE(170)] = 9738,
  [SMALL_STATE(171)] = 9776,
  [SMALL_STATE(172)] = 9812,
  [SMALL_STATE(173)] = 9848,
  [SMALL_STATE(174)] = 9884,
  [SMALL_STATE(175)] = 9924,
  [SMALL_STATE(176)] = 9964,
  [SMALL_STATE(177)] = 10000,
  [SMALL_STATE(178)] = 10036,
  [SMALL_STATE(179)] = 10072,
  [SMALL_STATE(180)] = 10112,
  [SMALL_STATE(181)] = 10150,
  [SMALL_STATE(182)] = 10190,
  [SMALL_STATE(183)] = 10230,
  [SMALL_STATE(184)] = 10270,
  [SMALL_STATE(185)] = 10310,
  [SMALL_STATE(186)] = 10350,
  [SMALL_STATE(187)] = 10386,
  [SMALL_STATE(188)] = 10421,
  [SMALL_STATE(189)] = 10456,
  [SMALL_STATE(190)] = 10493,
  [SMALL_STATE(191)] = 10530,
  [SMALL_STATE(192)] = 10565,
  [SMALL_STATE(193)] = 10604,
  [SMALL_STATE(194)] = 10639,
  [SMALL_STATE(195)] = 10674,
  [SMALL_STATE(196)] = 10709,
  [SMALL_STATE(197)] = 10744,
  [SMALL_STATE(198)] = 10779,
  [SMALL_STATE(199)] = 10814,
  [SMALL_STATE(200)] = 10849,
  [SMALL_STATE(201)] = 10884,
  [SMALL_STATE(202)] = 10919,
  [SMALL_STATE(203)] = 10954,
  [SMALL_STATE(204)] = 10989,
  [SMALL_STATE(205)] = 11024,
  [SMALL_STATE(206)] = 11059,
  [SMALL_STATE(207)] = 11094,
  [SMALL_STATE(208)] = 11133,
  [SMALL_STATE(209)] = 11168,
  [SMALL_STATE(210)] = 11205,
  [SMALL_STATE(211)] = 11244,
  [SMALL_STATE(212)] = 11279,
  [SMALL_STATE(213)] = 11314,
  [SMALL_STATE(214)] = 11353,
  [SMALL_STATE(215)] = 11388,
  [SMALL_STATE(216)] = 11423,
  [SMALL_STATE(217)] = 11460,
  [SMALL_STATE(218)] = 11499,
  [SMALL_STATE(219)] = 11534,
  [SMALL_STATE(220)] = 11569,
  [SMALL_STATE(221)] = 11604,
  [SMALL_STATE(222)] = 11643,
  [SMALL_STATE(223)] = 11678,
  [SMALL_STATE(224)] = 11713,
  [SMALL_STATE(225)] = 11748,
  [SMALL_STATE(226)] = 11783,
  [SMALL_STATE(227)] = 11818,
  [SMALL_STATE(228)] = 11853,
  [SMALL_STATE(229)] = 11888,
  [SMALL_STATE(230)] = 11923,
  [SMALL_STATE(231)] = 11958,
  [SMALL_STATE(232)] = 11993,
  [SMALL_STATE(233)] = 12028,
  [SMALL_STATE(234)] = 12063,
  [SMALL_STATE(235)] = 12098,
  [SMALL_STATE(236)] = 12133,
  [SMALL_STATE(237)] = 12168,
  [SMALL_STATE(238)] = 12203,
  [SMALL_STATE(239)] = 12238,
  [SMALL_STATE(240)] = 12273,
  [SMALL_STATE(241)] = 12308,
  [SMALL_STATE(242)] = 12343,
  [SMALL_STATE(243)] = 12378,
  [SMALL_STATE(244)] = 12423,
  [SMALL_STATE(245)] = 12460,
  [SMALL_STATE(246)] = 12495,
  [SMALL_STATE(247)] = 12534,
  [SMALL_STATE(248)] = 12569,
  [SMALL_STATE(249)] = 12604,
  [SMALL_STATE(250)] = 12643,
  [SMALL_STATE(251)] = 12682,
  [SMALL_STATE(252)] = 12717,
  [SMALL_STATE(253)] = 12752,
  [SMALL_STATE(254)] = 12791,
  [SMALL_STATE(255)] = 12826,
  [SMALL_STATE(256)] = 12860,
  [SMALL_STATE(257)] = 12894,
  [SMALL_STATE(258)] = 12932,
  [SMALL_STATE(259)] = 12966,
  [SMALL_STATE(260)] = 13000,
  [SMALL_STATE(261)] = 13034,
  [SMALL_STATE(262)] = 13072,
  [SMALL_STATE(263)] = 13106,
  [SMALL_STATE(264)] = 13140,
  [SMALL_STATE(265)] = 13176,
  [SMALL_STATE(266)] = 13212,
  [SMALL_STATE(267)] = 13246,
  [SMALL_STATE(268)] = 13282,
  [SMALL_STATE(269)] = 13318,
  [SMALL_STATE(270)] = 13352,
  [SMALL_STATE(271)] = 13386,
  [SMALL_STATE(272)] = 13420,
  [SMALL_STATE(273)] = 13454,
  [SMALL_STATE(274)] = 13488,
  [SMALL_STATE(275)] = 13524,
  [SMALL_STATE(276)] = 13558,
  [SMALL_STATE(277)] = 13592,
  [SMALL_STATE(278)] = 13626,
  [SMALL_STATE(279)] = 13660,
  [SMALL_STATE(280)] = 13694,
  [SMALL_STATE(281)] = 13728,
  [SMALL_STATE(282)] = 13762,
  [SMALL_STATE(283)] = 13796,
  [SMALL_STATE(284)] = 13832,
  [SMALL_STATE(285)] = 13866,
  [SMALL_STATE(286)] = 13904,
  [SMALL_STATE(287)] = 13940,
  [SMALL_STATE(288)] = 13974,
  [SMALL_STATE(289)] = 14012,
  [SMALL_STATE(290)] = 14048,
  [SMALL_STATE(291)] = 14086,
  [SMALL_STATE(292)] = 14120,
  [SMALL_STATE(293)] = 14158,
  [SMALL_STATE(294)] = 14192,
  [SMALL_STATE(295)] = 14230,
  [SMALL_STATE(296)] = 14264,
  [SMALL_STATE(297)] = 14298,
  [SMALL_STATE(298)] = 14332,
  [SMALL_STATE(299)] = 14366,
  [SMALL_STATE(300)] = 14400,
  [SMALL_STATE(301)] = 14434,
  [SMALL_STATE(302)] = 14468,
  [SMALL_STATE(303)] = 14502,
  [SMALL_STATE(304)] = 14536,
  [SMALL_STATE(305)] = 14570,
  [SMALL_STATE(306)] = 14604,
  [SMALL_STATE(307)] = 14638,
  [SMALL_STATE(308)] = 14672,
  [SMALL_STATE(309)] = 14706,
  [SMALL_STATE(310)] = 14740,
  [SMALL_STATE(311)] = 14774,
  [SMALL_STATE(312)] = 14812,
  [SMALL_STATE(313)] = 14846,
  [SMALL_STATE(314)] = 14884,
  [SMALL_STATE(315)] = 14918,
  [SMALL_STATE(316)] = 14952,
  [SMALL_STATE(317)] = 14990,
  [SMALL_STATE(318)] = 15028,
  [SMALL_STATE(319)] = 15062,
  [SMALL_STATE(320)] = 15096,
  [SMALL_STATE(321)] = 15130,
  [SMALL_STATE(322)] = 15163,
  [SMALL_STATE(323)] = 15200,
  [SMALL_STATE(324)] = 15233,
  [SMALL_STATE(325)] = 15266,
  [SMALL_STATE(326)] = 15299,
  [SMALL_STATE(327)] = 15332,
  [SMALL_STATE(328)] = 15365,
  [SMALL_STATE(329)] = 15398,
  [SMALL_STATE(330)] = 15431,
  [SMALL_STATE(331)] = 15464,
  [SMALL_STATE(332)] = 15497,
  [SMALL_STATE(333)] = 15530,
  [SMALL_STATE(334)] = 15563,
  [SMALL_STATE(335)] = 15596,
  [SMALL_STATE(336)] = 15629,
  [SMALL_STATE(337)] = 15662,
  [SMALL_STATE(338)] = 15695,
  [SMALL_STATE(339)] = 15728,
  [SMALL_STATE(340)] = 15763,
  [SMALL_STATE(341)] = 15796,
  [SMALL_STATE(342)] = 15829,
  [SMALL_STATE(343)] = 15862,
  [SMALL_STATE(344)] = 15895,
  [SMALL_STATE(345)] = 15928,
  [SMALL_STATE(346)] = 15963,
  [SMALL_STATE(347)] = 15996,
  [SMALL_STATE(348)] = 16029,
  [SMALL_STATE(349)] = 16062,
  [SMALL_STATE(350)] = 16095,
  [SMALL_STATE(351)] = 16128,
  [SMALL_STATE(352)] = 16161,
  [SMALL_STATE(353)] = 16194,
  [SMALL_STATE(354)] = 16227,
  [SMALL_STATE(355)] = 16260,
  [SMALL_STATE(356)] = 16293,
  [SMALL_STATE(357)] = 16326,
  [SMALL_STATE(358)] = 16359,
  [SMALL_STATE(359)] = 16392,
  [SMALL_STATE(360)] = 16425,
  [SMALL_STATE(361)] = 16458,
  [SMALL_STATE(362)] = 16491,
  [SMALL_STATE(363)] = 16524,
  [SMALL_STATE(364)] = 16557,
  [SMALL_STATE(365)] = 16590,
  [SMALL_STATE(366)] = 16623,
  [SMALL_STATE(367)] = 16656,
  [SMALL_STATE(368)] = 16689,
  [SMALL_STATE(369)] = 16722,
  [SMALL_STATE(370)] = 16755,
  [SMALL_STATE(371)] = 16788,
  [SMALL_STATE(372)] = 16821,
  [SMALL_STATE(373)] = 16854,
  [SMALL_STATE(374)] = 16887,
  [SMALL_STATE(375)] = 16920,
  [SMALL_STATE(376)] = 16953,
  [SMALL_STATE(377)] = 16987,
  [SMALL_STATE(378)] = 17019,
  [SMALL_STATE(379)] = 17051,
  [SMALL_STATE(380)] = 17083,
  [SMALL_STATE(381)] = 17115,
  [SMALL_STATE(382)] = 17147,
  [SMALL_STATE(383)] = 17181,
  [SMALL_STATE(384)] = 17213,
  [SMALL_STATE(385)] = 17245,
  [SMALL_STATE(386)] = 17277,
  [SMALL_STATE(387)] = 17309,
  [SMALL_STATE(388)] = 17341,
  [SMALL_STATE(389)] = 17373,
  [SMALL_STATE(390)] = 17405,
  [SMALL_STATE(391)] = 17437,
  [SMALL_STATE(392)] = 17469,
  [SMALL_STATE(393)] = 17501,
  [SMALL_STATE(394)] = 17533,
  [SMALL_STATE(395)] = 17565,
  [SMALL_STATE(396)] = 17597,
  [SMALL_STATE(397)] = 17629,
  [SMALL_STATE(398)] = 17661,
  [SMALL_STATE(399)] = 17693,
  [SMALL_STATE(400)] = 17725,
  [SMALL_STATE(401)] = 17757,
  [SMALL_STATE(402)] = 17789,
  [SMALL_STATE(403)] = 17821,
  [SMALL_STATE(404)] = 17853,
  [SMALL_STATE(405)] = 17885,
  [SMALL_STATE(406)] = 17917,
  [SMALL_STATE(407)] = 17949,
  [SMALL_STATE(408)] = 17981,
  [SMALL_STATE(409)] = 18013,
  [SMALL_STATE(410)] = 18045,
  [SMALL_STATE(411)] = 18077,
  [SMALL_STATE(412)] = 18109,
  [SMALL_STATE(413)] = 18141,
  [SMALL_STATE(414)] = 18173,
  [SMALL_STATE(415)] = 18205,
  [SMALL_STATE(416)] = 18237,
  [SMALL_STATE(417)] = 18269,
  [SMALL_STATE(418)] = 18301,
  [SMALL_STATE(419)] = 18333,
  [SMALL_STATE(420)] = 18365,
  [SMALL_STATE(421)] = 18397,
  [SMALL_STATE(422)] = 18429,
  [SMALL_STATE(423)] = 18458,
  [SMALL_STATE(424)] = 18487,
  [SMALL_STATE(425)] = 18527,
  [SMALL_STATE(426)] = 18567,
  [SMALL_STATE(427)] = 18607,
  [SMALL_STATE(428)] = 18647,
  [SMALL_STATE(429)] = 18687,
  [SMALL_STATE(430)] = 18727,
  [SMALL_STATE(431)] = 18767,
  [SMALL_STATE(432)] = 18807,
  [SMALL_STATE(433)] = 18847,
  [SMALL_STATE(434)] = 18887,
  [SMALL_STATE(435)] = 18913,
  [SMALL_STATE(436)] = 18953,
  [SMALL_STATE(437)] = 18993,
  [SMALL_STATE(438)] = 19033,
  [SMALL_STATE(439)] = 19059,
  [SMALL_STATE(440)] = 19099,
  [SMALL_STATE(441)] = 19119,
  [SMALL_STATE(442)] = 19146,
  [SMALL_STATE(443)] = 19171,
  [SMALL_STATE(444)] = 19196,
  [SMALL_STATE(445)] = 19223,
  [SMALL_STATE(446)] = 19250,
  [SMALL_STATE(447)] = 19275,
  [SMALL_STATE(448)] = 19302,
  [SMALL_STATE(449)] = 19327,
  [SMALL_STATE(450)] = 19352,
  [SMALL_STATE(451)] = 19377,
  [SMALL_STATE(452)] = 19404,
  [SMALL_STATE(453)] = 19429,
  [SMALL_STATE(454)] = 19454,
  [SMALL_STATE(455)] = 19481,
  [SMALL_STATE(456)] = 19508,
  [SMALL_STATE(457)] = 19535,
  [SMALL_STATE(458)] = 19560,
  [SMALL_STATE(459)] = 19585,
  [SMALL_STATE(460)] = 19610,
  [SMALL_STATE(461)] = 19637,
  [SMALL_STATE(462)] = 19662,
  [SMALL_STATE(463)] = 19689,
  [SMALL_STATE(464)] = 19714,
  [SMALL_STATE(465)] = 19739,
  [SMALL_STATE(466)] = 19766,
  [SMALL_STATE(467)] = 19791,
  [SMALL_STATE(468)] = 19818,
  [SMALL_STATE(469)] = 19845,
  [SMALL_STATE(470)] = 19872,
  [SMALL_STATE(471)] = 19896,
  [SMALL_STATE(472)] = 19920,
  [SMALL_STATE(473)] = 19946,
  [SMALL_STATE(474)] = 19972,
  [SMALL_STATE(475)] = 19996,
  [SMALL_STATE(476)] = 20022,
  [SMALL_STATE(477)] = 20046,
  [SMALL_STATE(478)] = 20070,
  [SMALL_STATE(479)] = 20094,
  [SMALL_STATE(480)] = 20118,
  [SMALL_STATE(481)] = 20142,
  [SMALL_STATE(482)] = 20166,
  [SMALL_STATE(483)] = 20192,
  [SMALL_STATE(484)] = 20216,
  [SMALL_STATE(485)] = 20240,
  [SMALL_STATE(486)] = 20264,
  [SMALL_STATE(487)] = 20290,
  [SMALL_STATE(488)] = 20316,
  [SMALL_STATE(489)] = 20342,
  [SMALL_STATE(490)] = 20366,
  [SMALL_STATE(491)] = 20390,
  [SMALL_STATE(492)] = 20416,
  [SMALL_STATE(493)] = 20442,
  [SMALL_STATE(494)] = 20466,
  [SMALL_STATE(495)] = 20490,
  [SMALL_STATE(496)] = 20514,
  [SMALL_STATE(497)] = 20538,
  [SMALL_STATE(498)] = 20564,
  [SMALL_STATE(499)] = 20588,
  [SMALL_STATE(500)] = 20614,
  [SMALL_STATE(501)] = 20640,
  [SMALL_STATE(502)] = 20666,
  [SMALL_STATE(503)] = 20690,
  [SMALL_STATE(504)] = 20716,
  [SMALL_STATE(505)] = 20740,
  [SMALL_STATE(506)] = 20766,
  [SMALL_STATE(507)] = 20789,
  [SMALL_STATE(508)] = 20812,
  [SMALL_STATE(509)] = 20835,
  [SMALL_STATE(510)] = 20858,
  [SMALL_STATE(511)] = 20883,
  [SMALL_STATE(512)] = 20906,
  [SMALL_STATE(513)] = 20929,
  [SMALL_STATE(514)] = 20952,
  [SMALL_STATE(515)] = 20975,
  [SMALL_STATE(516)] = 20998,
  [SMALL_STATE(517)] = 21021,
  [SMALL_STATE(518)] = 21044,
  [SMALL_STATE(519)] = 21067,
  [SMALL_STATE(520)] = 21090,
  [SMALL_STATE(521)] = 21113,
  [SMALL_STATE(522)] = 21133,
  [SMALL_STATE(523)] = 21149,
  [SMALL_STATE(524)] = 21169,
  [SMALL_STATE(525)] = 21189,
  [SMALL_STATE(526)] = 21209,
  [SMALL_STATE(527)] = 21225,
  [SMALL_STATE(528)] = 21245,
  [SMALL_STATE(529)] = 21265,
  [SMALL_STATE(530)] = 21285,
  [SMALL_STATE(531)] = 21297,
  [SMALL_STATE(532)] = 21317,
  [SMALL_STATE(533)] = 21337,
  [SMALL_STATE(534)] = 21353,
  [SMALL_STATE(535)] = 21369,
  [SMALL_STATE(536)] = 21389,
  [SMALL_STATE(537)] = 21409,
  [SMALL_STATE(538)] = 21429,
  [SMALL_STATE(539)] = 21449,
  [SMALL_STATE(540)] = 21465,
  [SMALL_STATE(541)] = 21485,
  [SMALL_STATE(542)] = 21499,
  [SMALL_STATE(543)] = 21519,
  [SMALL_STATE(544)] = 21539,
  [SMALL_STATE(545)] = 21555,
  [SMALL_STATE(546)] = 21575,
  [SMALL_STATE(547)] = 21595,
  [SMALL_STATE(548)] = 21615,
  [SMALL_STATE(549)] = 21635,
  [SMALL_STATE(550)] = 21649,
  [SMALL_STATE(551)] = 21669,
  [SMALL_STATE(552)] = 21681,
  [SMALL_STATE(553)] = 21701,
  [SMALL_STATE(554)] = 21721,
  [SMALL_STATE(555)] = 21741,
  [SMALL_STATE(556)] = 21761,
  [SMALL_STATE(557)] = 21777,
  [SMALL_STATE(558)] = 21797,
  [SMALL_STATE(559)] = 21817,
  [SMALL_STATE(560)] = 21837,
  [SMALL_STATE(561)] = 21857,
  [SMALL_STATE(562)] = 21873,
  [SMALL_STATE(563)] = 21893,
  [SMALL_STATE(564)] = 21913,
  [SMALL_STATE(565)] = 21927,
  [SMALL_STATE(566)] = 21947,
  [SMALL_STATE(567)] = 21961,
  [SMALL_STATE(568)] = 21981,
  [SMALL_STATE(569)] = 21993,
  [SMALL_STATE(570)] = 22013,
  [SMALL_STATE(571)] = 22033,
  [SMALL_STATE(572)] = 22047,
  [SMALL_STATE(573)] = 22057,
  [SMALL_STATE(574)] = 22071,
  [SMALL_STATE(575)] = 22091,
  [SMALL_STATE(576)] = 22105,
  [SMALL_STATE(577)] = 22125,
  [SMALL_STATE(578)] = 22145,
  [SMALL_STATE(579)] = 22165,
  [SMALL_STATE(580)] = 22181,
  [SMALL_STATE(581)] = 22195,
  [SMALL_STATE(582)] = 22215,
  [SMALL_STATE(583)] = 22228,
  [SMALL_STATE(584)] = 22239,
  [SMALL_STATE(585)] = 22252,
  [SMALL_STATE(586)] = 22269,
  [SMALL_STATE(587)] = 22286,
  [SMALL_STATE(588)] = 22303,
  [SMALL_STATE(589)] = 22320,
  [SMALL_STATE(590)] = 22335,
  [SMALL_STATE(591)] = 22352,
  [SMALL_STATE(592)] = 22369,
  [SMALL_STATE(593)] = 22386,
  [SMALL_STATE(594)] = 22403,
  [SMALL_STATE(595)] = 22416,
  [SMALL_STATE(596)] = 22433,
  [SMALL_STATE(597)] = 22450,
  [SMALL_STATE(598)] = 22467,
  [SMALL_STATE(599)] = 22484,
  [SMALL_STATE(600)] = 22501,
  [SMALL_STATE(601)] = 22518,
  [SMALL_STATE(602)] = 22531,
  [SMALL_STATE(603)] = 22548,
  [SMALL_STATE(604)] = 22567,
  [SMALL_STATE(605)] = 22584,
  [SMALL_STATE(606)] = 22601,
  [SMALL_STATE(607)] = 22618,
  [SMALL_STATE(608)] = 22635,
  [SMALL_STATE(609)] = 22652,
  [SMALL_STATE(610)] = 22665,
  [SMALL_STATE(611)] = 22682,
  [SMALL_STATE(612)] = 22699,
  [SMALL_STATE(613)] = 22716,
  [SMALL_STATE(614)] = 22733,
  [SMALL_STATE(615)] = 22750,
  [SMALL_STATE(616)] = 22763,
  [SMALL_STATE(617)] = 22780,
  [SMALL_STATE(618)] = 22797,
  [SMALL_STATE(619)] = 22812,
  [SMALL_STATE(620)] = 22825,
  [SMALL_STATE(621)] = 22838,
  [SMALL_STATE(622)] = 22855,
  [SMALL_STATE(623)] = 22872,
  [SMALL_STATE(624)] = 22889,
  [SMALL_STATE(625)] = 22901,
  [SMALL_STATE(626)] = 22909,
  [SMALL_STATE(627)] = 22919,
  [SMALL_STATE(628)] = 22933,
  [SMALL_STATE(629)] = 22943,
  [SMALL_STATE(630)] = 22951,
  [SMALL_STATE(631)] = 22959,
  [SMALL_STATE(632)] = 22973,
  [SMALL_STATE(633)] = 22981,
  [SMALL_STATE(634)] = 22991,
  [SMALL_STATE(635)] = 22999,
  [SMALL_STATE(636)] = 23011,
  [SMALL_STATE(637)] = 23019,
  [SMALL_STATE(638)] = 23031,
  [SMALL_STATE(639)] = 23039,
  [SMALL_STATE(640)] = 23047,
  [SMALL_STATE(641)] = 23059,
  [SMALL_STATE(642)] = 23073,
  [SMALL_STATE(643)] = 23081,
  [SMALL_STATE(644)] = 23089,
  [SMALL_STATE(645)] = 23097,
  [SMALL_STATE(646)] = 23111,
  [SMALL_STATE(647)] = 23119,
  [SMALL_STATE(648)] = 23127,
  [SMALL_STATE(649)] = 23135,
  [SMALL_STATE(650)] = 23149,
  [SMALL_STATE(651)] = 23162,
  [SMALL_STATE(652)] = 23175,
  [SMALL_STATE(653)] = 23188,
  [SMALL_STATE(654)] = 23201,
  [SMALL_STATE(655)] = 23210,
  [SMALL_STATE(656)] = 23219,
  [SMALL_STATE(657)] = 23228,
  [SMALL_STATE(658)] = 23237,
  [SMALL_STATE(659)] = 23250,
  [SMALL_STATE(660)] = 23259,
  [SMALL_STATE(661)] = 23268,
  [SMALL_STATE(662)] = 23277,
  [SMALL_STATE(663)] = 23286,
  [SMALL_STATE(664)] = 23295,
  [SMALL_STATE(665)] = 23304,
  [SMALL_STATE(666)] = 23317,
  [SMALL_STATE(667)] = 23330,
  [SMALL_STATE(668)] = 23339,
  [SMALL_STATE(669)] = 23352,
  [SMALL_STATE(670)] = 23361,
  [SMALL_STATE(671)] = 23370,
  [SMALL_STATE(672)] = 23379,
  [SMALL_STATE(673)] = 23388,
  [SMALL_STATE(674)] = 23397,
  [SMALL_STATE(675)] = 23410,
  [SMALL_STATE(676)] = 23423,
  [SMALL_STATE(677)] = 23432,
  [SMALL_STATE(678)] = 23441,
  [SMALL_STATE(679)] = 23450,
  [SMALL_STATE(680)] = 23459,
  [SMALL_STATE(681)] = 23472,
  [SMALL_STATE(682)] = 23481,
  [SMALL_STATE(683)] = 23494,
  [SMALL_STATE(684)] = 23507,
  [SMALL_STATE(685)] = 23516,
  [SMALL_STATE(686)] = 23525,
  [SMALL_STATE(687)] = 23538,
  [SMALL_STATE(688)] = 23547,
  [SMALL_STATE(689)] = 23560,
  [SMALL_STATE(690)] = 23569,
  [SMALL_STATE(691)] = 23578,
  [SMALL_STATE(692)] = 23591,
  [SMALL_STATE(693)] = 23604,
  [SMALL_STATE(694)] = 23613,
  [SMALL_STATE(695)] = 23622,
  [SMALL_STATE(696)] = 23635,
  [SMALL_STATE(697)] = 23644,
  [SMALL_STATE(698)] = 23657,
  [SMALL_STATE(699)] = 23666,
  [SMALL_STATE(700)] = 23675,
  [SMALL_STATE(701)] = 23688,
  [SMALL_STATE(702)] = 23701,
  [SMALL_STATE(703)] = 23710,
  [SMALL_STATE(704)] = 23723,
  [SMALL_STATE(705)] = 23732,
  [SMALL_STATE(706)] = 23745,
  [SMALL_STATE(707)] = 23758,
  [SMALL_STATE(708)] = 23771,
  [SMALL_STATE(709)] = 23780,
  [SMALL_STATE(710)] = 23791,
  [SMALL_STATE(711)] = 23804,
  [SMALL_STATE(712)] = 23817,
  [SMALL_STATE(713)] = 23826,
  [SMALL_STATE(714)] = 23836,
  [SMALL_STATE(715)] = 23846,
  [SMALL_STATE(716)] = 23856,
  [SMALL_STATE(717)] = 23866,
  [SMALL_STATE(718)] = 23876,
  [SMALL_STATE(719)] = 23886,
  [SMALL_STATE(720)] = 23896,
  [SMALL_STATE(721)] = 23906,
  [SMALL_STATE(722)] = 23912,
  [SMALL_STATE(723)] = 23922,
  [SMALL_STATE(724)] = 23930,
  [SMALL_STATE(725)] = 23938,
  [SMALL_STATE(726)] = 23946,
  [SMALL_STATE(727)] = 23956,
  [SMALL_STATE(728)] = 23964,
  [SMALL_STATE(729)] = 23974,
  [SMALL_STATE(730)] = 23984,
  [SMALL_STATE(731)] = 23992,
  [SMALL_STATE(732)] = 24002,
  [SMALL_STATE(733)] = 24012,
  [SMALL_STATE(734)] = 24022,
  [SMALL_STATE(735)] = 24030,
  [SMALL_STATE(736)] = 24040,
  [SMALL_STATE(737)] = 24050,
  [SMALL_STATE(738)] = 24058,
  [SMALL_STATE(739)] = 24068,
  [SMALL_STATE(740)] = 24074,
  [SMALL_STATE(741)] = 24082,
  [SMALL_STATE(742)] = 24092,
  [SMALL_STATE(743)] = 24102,
  [SMALL_STATE(744)] = 24112,
  [SMALL_STATE(745)] = 24122,
  [SMALL_STATE(746)] = 24132,
  [SMALL_STATE(747)] = 24138,
  [SMALL_STATE(748)] = 24148,
  [SMALL_STATE(749)] = 24158,
  [SMALL_STATE(750)] = 24168,
  [SMALL_STATE(751)] = 24178,
  [SMALL_STATE(752)] = 24188,
  [SMALL_STATE(753)] = 24198,
  [SMALL_STATE(754)] = 24208,
  [SMALL_STATE(755)] = 24218,
  [SMALL_STATE(756)] = 24228,
  [SMALL_STATE(757)] = 24238,
  [SMALL_STATE(758)] = 24248,
  [SMALL_STATE(759)] = 24258,
  [SMALL_STATE(760)] = 24268,
  [SMALL_STATE(761)] = 24278,
  [SMALL_STATE(762)] = 24288,
  [SMALL_STATE(763)] = 24298,
  [SMALL_STATE(764)] = 24308,
  [SMALL_STATE(765)] = 24318,
  [SMALL_STATE(766)] = 24328,
  [SMALL_STATE(767)] = 24338,
  [SMALL_STATE(768)] = 24344,
  [SMALL_STATE(769)] = 24354,
  [SMALL_STATE(770)] = 24364,
  [SMALL_STATE(771)] = 24374,
  [SMALL_STATE(772)] = 24384,
  [SMALL_STATE(773)] = 24394,
  [SMALL_STATE(774)] = 24404,
  [SMALL_STATE(775)] = 24414,
  [SMALL_STATE(776)] = 24424,
  [SMALL_STATE(777)] = 24434,
  [SMALL_STATE(778)] = 24444,
  [SMALL_STATE(779)] = 24454,
  [SMALL_STATE(780)] = 24464,
  [SMALL_STATE(781)] = 24474,
  [SMALL_STATE(782)] = 24484,
  [SMALL_STATE(783)] = 24492,
  [SMALL_STATE(784)] = 24502,
  [SMALL_STATE(785)] = 24512,
  [SMALL_STATE(786)] = 24522,
  [SMALL_STATE(787)] = 24532,
  [SMALL_STATE(788)] = 24542,
  [SMALL_STATE(789)] = 24552,
  [SMALL_STATE(790)] = 24562,
  [SMALL_STATE(791)] = 24572,
  [SMALL_STATE(792)] = 24582,
  [SMALL_STATE(793)] = 24588,
  [SMALL_STATE(794)] = 24598,
  [SMALL_STATE(795)] = 24608,
  [SMALL_STATE(796)] = 24618,
  [SMALL_STATE(797)] = 24628,
  [SMALL_STATE(798)] = 24638,
  [SMALL_STATE(799)] = 24648,
  [SMALL_STATE(800)] = 24658,
  [SMALL_STATE(801)] = 24668,
  [SMALL_STATE(802)] = 24678,
  [SMALL_STATE(803)] = 24688,
  [SMALL_STATE(804)] = 24698,
  [SMALL_STATE(805)] = 24708,
  [SMALL_STATE(806)] = 24714,
  [SMALL_STATE(807)] = 24724,
  [SMALL_STATE(808)] = 24734,
  [SMALL_STATE(809)] = 24740,
  [SMALL_STATE(810)] = 24750,
  [SMALL_STATE(811)] = 24760,
  [SMALL_STATE(812)] = 24767,
  [SMALL_STATE(813)] = 24774,
  [SMALL_STATE(814)] = 24781,
  [SMALL_STATE(815)] = 24788,
  [SMALL_STATE(816)] = 24795,
  [SMALL_STATE(817)] = 24802,
  [SMALL_STATE(818)] = 24809,
  [SMALL_STATE(819)] = 24816,
  [SMALL_STATE(820)] = 24823,
  [SMALL_STATE(821)] = 24830,
  [SMALL_STATE(822)] = 24837,
  [SMALL_STATE(823)] = 24844,
  [SMALL_STATE(824)] = 24851,
  [SMALL_STATE(825)] = 24858,
  [SMALL_STATE(826)] = 24865,
  [SMALL_STATE(827)] = 24872,
  [SMALL_STATE(828)] = 24879,
  [SMALL_STATE(829)] = 24886,
  [SMALL_STATE(830)] = 24893,
  [SMALL_STATE(831)] = 24900,
  [SMALL_STATE(832)] = 24907,
  [SMALL_STATE(833)] = 24914,
  [SMALL_STATE(834)] = 24921,
  [SMALL_STATE(835)] = 24928,
  [SMALL_STATE(836)] = 24935,
  [SMALL_STATE(837)] = 24942,
  [SMALL_STATE(838)] = 24949,
  [SMALL_STATE(839)] = 24956,
  [SMALL_STATE(840)] = 24963,
  [SMALL_STATE(841)] = 24970,
  [SMALL_STATE(842)] = 24977,
  [SMALL_STATE(843)] = 24984,
  [SMALL_STATE(844)] = 24991,
  [SMALL_STATE(845)] = 24998,
  [SMALL_STATE(846)] = 25005,
  [SMALL_STATE(847)] = 25012,
  [SMALL_STATE(848)] = 25019,
  [SMALL_STATE(849)] = 25026,
  [SMALL_STATE(850)] = 25031,
  [SMALL_STATE(851)] = 25038,
  [SMALL_STATE(852)] = 25043,
  [SMALL_STATE(853)] = 25050,
  [SMALL_STATE(854)] = 25055,
  [SMALL_STATE(855)] = 25062,
  [SMALL_STATE(856)] = 25069,
  [SMALL_STATE(857)] = 25076,
  [SMALL_STATE(858)] = 25083,
  [SMALL_STATE(859)] = 25090,
  [SMALL_STATE(860)] = 25097,
  [SMALL_STATE(861)] = 25104,
  [SMALL_STATE(862)] = 25111,
  [SMALL_STATE(863)] = 25118,
  [SMALL_STATE(864)] = 25125,
  [SMALL_STATE(865)] = 25132,
  [SMALL_STATE(866)] = 25139,
  [SMALL_STATE(867)] = 25146,
  [SMALL_STATE(868)] = 25153,
  [SMALL_STATE(869)] = 25160,
  [SMALL_STATE(870)] = 25165,
  [SMALL_STATE(871)] = 25172,
  [SMALL_STATE(872)] = 25179,
  [SMALL_STATE(873)] = 25186,
  [SMALL_STATE(874)] = 25193,
  [SMALL_STATE(875)] = 25200,
  [SMALL_STATE(876)] = 25207,
  [SMALL_STATE(877)] = 25214,
  [SMALL_STATE(878)] = 25221,
  [SMALL_STATE(879)] = 25228,
  [SMALL_STATE(880)] = 25235,
  [SMALL_STATE(881)] = 25242,
  [SMALL_STATE(882)] = 25249,
  [SMALL_STATE(883)] = 25256,
  [SMALL_STATE(884)] = 25263,
  [SMALL_STATE(885)] = 25270,
  [SMALL_STATE(886)] = 25277,
  [SMALL_STATE(887)] = 25282,
  [SMALL_STATE(888)] = 25287,
  [SMALL_STATE(889)] = 25294,
  [SMALL_STATE(890)] = 25301,
  [SMALL_STATE(891)] = 25308,
  [SMALL_STATE(892)] = 25315,
  [SMALL_STATE(893)] = 25322,
  [SMALL_STATE(894)] = 25329,
  [SMALL_STATE(895)] = 25336,
  [SMALL_STATE(896)] = 25340,
  [SMALL_STATE(897)] = 25344,
  [SMALL_STATE(898)] = 25348,
  [SMALL_STATE(899)] = 25352,
  [SMALL_STATE(900)] = 25356,
  [SMALL_STATE(901)] = 25360,
  [SMALL_STATE(902)] = 25364,
  [SMALL_STATE(903)] = 25368,
  [SMALL_STATE(904)] = 25372,
  [SMALL_STATE(905)] = 25376,
  [SMALL_STATE(906)] = 25380,
  [SMALL_STATE(907)] = 25384,
  [SMALL_STATE(908)] = 25388,
  [SMALL_STATE(909)] = 25392,
  [SMALL_STATE(910)] = 25396,
  [SMALL_STATE(911)] = 25400,
  [SMALL_STATE(912)] = 25404,
  [SMALL_STATE(913)] = 25408,
  [SMALL_STATE(914)] = 25412,
  [SMALL_STATE(915)] = 25416,
  [SMALL_STATE(916)] = 25420,
  [SMALL_STATE(917)] = 25424,
  [SMALL_STATE(918)] = 25428,
  [SMALL_STATE(919)] = 25432,
  [SMALL_STATE(920)] = 25436,
  [SMALL_STATE(921)] = 25440,
  [SMALL_STATE(922)] = 25444,
  [SMALL_STATE(923)] = 25448,
  [SMALL_STATE(924)] = 25452,
  [SMALL_STATE(925)] = 25456,
  [SMALL_STATE(926)] = 25460,
  [SMALL_STATE(927)] = 25464,
  [SMALL_STATE(928)] = 25468,
  [SMALL_STATE(929)] = 25472,
  [SMALL_STATE(930)] = 25476,
  [SMALL_STATE(931)] = 25480,
  [SMALL_STATE(932)] = 25484,
  [SMALL_STATE(933)] = 25488,
  [SMALL_STATE(934)] = 25492,
  [SMALL_STATE(935)] = 25496,
  [SMALL_STATE(936)] = 25500,
  [SMALL_STATE(937)] = 25504,
  [SMALL_STATE(938)] = 25508,
  [SMALL_STATE(939)] = 25512,
  [SMALL_STATE(940)] = 25516,
  [SMALL_STATE(941)] = 25520,
  [SMALL_STATE(942)] = 25524,
  [SMALL_STATE(943)] = 25528,
  [SMALL_STATE(944)] = 25532,
  [SMALL_STATE(945)] = 25536,
  [SMALL_STATE(946)] = 25540,
  [SMALL_STATE(947)] = 25544,
  [SMALL_STATE(948)] = 25548,
  [SMALL_STATE(949)] = 25552,
  [SMALL_STATE(950)] = 25556,
  [SMALL_STATE(951)] = 25560,
  [SMALL_STATE(952)] = 25564,
  [SMALL_STATE(953)] = 25568,
  [SMALL_STATE(954)] = 25572,
  [SMALL_STATE(955)] = 25576,
  [SMALL_STATE(956)] = 25580,
  [SMALL_STATE(957)] = 25584,
  [SMALL_STATE(958)] = 25588,
  [SMALL_STATE(959)] = 25592,
  [SMALL_STATE(960)] = 25596,
  [SMALL_STATE(961)] = 25600,
  [SMALL_STATE(962)] = 25604,
  [SMALL_STATE(963)] = 25608,
  [SMALL_STATE(964)] = 25612,
  [SMALL_STATE(965)] = 25616,
  [SMALL_STATE(966)] = 25620,
  [SMALL_STATE(967)] = 25624,
  [SMALL_STATE(968)] = 25628,
  [SMALL_STATE(969)] = 25632,
  [SMALL_STATE(970)] = 25636,
  [SMALL_STATE(971)] = 25640,
  [SMALL_STATE(972)] = 25644,
  [SMALL_STATE(973)] = 25648,
  [SMALL_STATE(974)] = 25652,
  [SMALL_STATE(975)] = 25656,
  [SMALL_STATE(976)] = 25660,
  [SMALL_STATE(977)] = 25664,
  [SMALL_STATE(978)] = 25668,
  [SMALL_STATE(979)] = 25672,
  [SMALL_STATE(980)] = 25676,
  [SMALL_STATE(981)] = 25680,
  [SMALL_STATE(982)] = 25684,
  [SMALL_STATE(983)] = 25688,
  [SMALL_STATE(984)] = 25692,
  [SMALL_STATE(985)] = 25696,
  [SMALL_STATE(986)] = 25700,
  [SMALL_STATE(987)] = 25704,
  [SMALL_STATE(988)] = 25708,
  [SMALL_STATE(989)] = 25712,
  [SMALL_STATE(990)] = 25716,
  [SMALL_STATE(991)] = 25720,
  [SMALL_STATE(992)] = 25724,
  [SMALL_STATE(993)] = 25728,
  [SMALL_STATE(994)] = 25732,
  [SMALL_STATE(995)] = 25736,
  [SMALL_STATE(996)] = 25740,
  [SMALL_STATE(997)] = 25744,
  [SMALL_STATE(998)] = 25748,
  [SMALL_STATE(999)] = 25752,
  [SMALL_STATE(1000)] = 25756,
  [SMALL_STATE(1001)] = 25760,
  [SMALL_STATE(1002)] = 25764,
  [SMALL_STATE(1003)] = 25768,
  [SMALL_STATE(1004)] = 25772,
  [SMALL_STATE(1005)] = 25776,
  [SMALL_STATE(1006)] = 25780,
  [SMALL_STATE(1007)] = 25784,
  [SMALL_STATE(1008)] = 25788,
  [SMALL_STATE(1009)] = 25792,
  [SMALL_STATE(1010)] = 25796,
  [SMALL_STATE(1011)] = 25800,
  [SMALL_STATE(1012)] = 25804,
  [SMALL_STATE(1013)] = 25808,
  [SMALL_STATE(1014)] = 25812,
  [SMALL_STATE(1015)] = 25816,
  [SMALL_STATE(1016)] = 25820,
  [SMALL_STATE(1017)] = 25824,
  [SMALL_STATE(1018)] = 25828,
  [SMALL_STATE(1019)] = 25832,
  [SMALL_STATE(1020)] = 25836,
  [SMALL_STATE(1021)] = 25840,
  [SMALL_STATE(1022)] = 25844,
  [SMALL_STATE(1023)] = 25848,
  [SMALL_STATE(1024)] = 25852,
  [SMALL_STATE(1025)] = 25856,
  [SMALL_STATE(1026)] = 25860,
  [SMALL_STATE(1027)] = 25864,
  [SMALL_STATE(1028)] = 25868,
  [SMALL_STATE(1029)] = 25872,
  [SMALL_STATE(1030)] = 25876,
  [SMALL_STATE(1031)] = 25880,
  [SMALL_STATE(1032)] = 25884,
  [SMALL_STATE(1033)] = 25888,
  [SMALL_STATE(1034)] = 25892,
  [SMALL_STATE(1035)] = 25896,
  [SMALL_STATE(1036)] = 25900,
  [SMALL_STATE(1037)] = 25904,
  [SMALL_STATE(1038)] = 25908,
  [SMALL_STATE(1039)] = 25912,
  [SMALL_STATE(1040)] = 25916,
  [SMALL_STATE(1041)] = 25920,
  [SMALL_STATE(1042)] = 25924,
  [SMALL_STATE(1043)] = 25928,
  [SMALL_STATE(1044)] = 25932,
  [SMALL_STATE(1045)] = 25936,
  [SMALL_STATE(1046)] = 25940,
  [SMALL_STATE(1047)] = 25944,
  [SMALL_STATE(1048)] = 25948,
  [SMALL_STATE(1049)] = 25952,
  [SMALL_STATE(1050)] = 25956,
  [SMALL_STATE(1051)] = 25960,
  [SMALL_STATE(1052)] = 25964,
  [SMALL_STATE(1053)] = 25968,
  [SMALL_STATE(1054)] = 25972,
  [SMALL_STATE(1055)] = 25976,
  [SMALL_STATE(1056)] = 25980,
  [SMALL_STATE(1057)] = 25984,
  [SMALL_STATE(1058)] = 25988,
  [SMALL_STATE(1059)] = 25992,
  [SMALL_STATE(1060)] = 25996,
  [SMALL_STATE(1061)] = 26000,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(972),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(968),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1036),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(721),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(537),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(742),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(834),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(931),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(717),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(686),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(865),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(856),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(968),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(946),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(832),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(832),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1036),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(747),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(748),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1042),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(754),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(754),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(437),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(437),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(932),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1058),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(805),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(521),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(806),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(840),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(912),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(720),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(692),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(822),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(820),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1058),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(974),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(839),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(839),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(809),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(810),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1037),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(763),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(763),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(436),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(436),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(913),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(808),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(576),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(755),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(811),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(921),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(762),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(964),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(972),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(650),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(882),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(894),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(911),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1059),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(852),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(852),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(943),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(757),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(758),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(920),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(760),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(760),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(919),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(792),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(565),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(794),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(818),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(967),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(715),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(680),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(847),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(846),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1010),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(992),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(817),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(817),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1041),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(780),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(775),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1050),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(736),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(736),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(429),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(429),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(969),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(967),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1041),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1045),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1053),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1055),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1057),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1040),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(739),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(535),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(741),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(827),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(948),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(716),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(683),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(867),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(868),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(949),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1011),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(826),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(826),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(797),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(796),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1046),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(745),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(745),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(427),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(427),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(950),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(37),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(974),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(944),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(770),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 8),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 8),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(944),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(82),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(992),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1059),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(749),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each, 6),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each, 6),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each, 7),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each, 7),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__each_else, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__each_else, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 13),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 13),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 12),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 12),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(729),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(186),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 9),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 9),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 1, .production_id = 4),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 1, .production_id = 4),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_definition, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2, .production_id = 1),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 2, .production_id = 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 6),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 6),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 4),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1011),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 5),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, .production_id = 5),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 3),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 4),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 4),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 4),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 3),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 3, .production_id = 4),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 3, .production_id = 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(188),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(229),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 2, .production_id = 3),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 2, .production_id = 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(374),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 5, .production_id = 7),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 5, .production_id = 7),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 5, .production_id = 3),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 5, .production_id = 3),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 4, .production_id = 3),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 4, .production_id = 3),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 4, .production_id = 3),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 4, .production_id = 3),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 6, .production_id = 11),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 6, .production_id = 11),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(886),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(884),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(886),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(883),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(884),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1054),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1048),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1052),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1039),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(440),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(693),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(612),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(961),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(589),
  [1475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(938),
  [1478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(961),
  [1481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(633),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1060),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(955),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(426),
  [1553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(539),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(589),
  [1593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(938),
  [1596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(961),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2, .production_id = 6),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [1653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(908),
  [1669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(908),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 1),
  [1702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 1),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(589),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(848),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(906),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [1810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(905),
  [1819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(767),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 10),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 10),
  [1846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [1870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2), SHIFT_REPEAT(941),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2),
  [1875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pug_attributes, 1),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pug_attributes, 1),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_variable, 1),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [2023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2), SHIFT_REPEAT(981),
  [2036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_variable, 3),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 2),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 3),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 4),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_iterator, 1, .production_id = 2),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
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
