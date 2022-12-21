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
#define STATE_COUNT 1061
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
  [anon_sym_include] = "include",
  [aux_sym_include_token1] = "include_token1",
  [anon_sym_while] = "while",
  [aux_sym__each_js_token1] = "javascript",
  [anon_sym_COMMA] = ",",
  [anon_sym_else] = "else",
  [anon_sym_each] = "each",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_mixin] = "mixin",
  [aux_sym_mixin_attributes_token1] = "attribute_name",
  [anon_sym_block] = "block",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_extends] = "extends",
  [anon_sym_COLON] = ":",
  [sym_filter_name] = "filter_name",
  [aux_sym_filter_content_token1] = "filter_content_token1",
  [aux_sym_filter_content_token2] = "filter_content_token2",
  [anon_sym_unless] = "unless",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_case] = "case",
  [anon_sym_when] = "when",
  [aux_sym__when_keyword_token1] = "javascript",
  [anon_sym_default] = "default",
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
  [anon_sym_while] = anon_sym_while,
  [aux_sym__each_js_token1] = aux_sym__each_js_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_mixin] = anon_sym_mixin,
  [aux_sym_mixin_attributes_token1] = sym_attribute_name,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_filter_name] = sym_filter_name,
  [aux_sym_filter_content_token1] = aux_sym_filter_content_token1,
  [aux_sym_filter_content_token2] = aux_sym_filter_content_token2,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_when] = anon_sym_when,
  [aux_sym__when_keyword_token1] = aux_sym__each_js_token1,
  [anon_sym_default] = anon_sym_default,
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
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
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
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
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
          lookahead == ' ') ADVANCE(782);
      if (lookahead != 0) ADVANCE(785);
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
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
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
  [40] = {.lex_state = 63, .external_lex_state = 3},
  [41] = {.lex_state = 63, .external_lex_state = 2},
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
  [158] = {.lex_state = 196, .external_lex_state = 5},
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
  [170] = {.lex_state = 64, .external_lex_state = 1},
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
  [188] = {.lex_state = 195, .external_lex_state = 4},
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
  [201] = {.lex_state = 195, .external_lex_state = 2},
  [202] = {.lex_state = 197, .external_lex_state = 3},
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
  [213] = {.lex_state = 195, .external_lex_state = 2},
  [214] = {.lex_state = 64, .external_lex_state = 2},
  [215] = {.lex_state = 197, .external_lex_state = 3},
  [216] = {.lex_state = 195, .external_lex_state = 6},
  [217] = {.lex_state = 195, .external_lex_state = 2},
  [218] = {.lex_state = 195, .external_lex_state = 6},
  [219] = {.lex_state = 194, .external_lex_state = 5},
  [220] = {.lex_state = 195, .external_lex_state = 2},
  [221] = {.lex_state = 195, .external_lex_state = 2},
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
  [232] = {.lex_state = 176, .external_lex_state = 2},
  [233] = {.lex_state = 195, .external_lex_state = 2},
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
  [245] = {.lex_state = 195, .external_lex_state = 4},
  [246] = {.lex_state = 195, .external_lex_state = 6},
  [247] = {.lex_state = 195, .external_lex_state = 2},
  [248] = {.lex_state = 195, .external_lex_state = 6},
  [249] = {.lex_state = 195, .external_lex_state = 2},
  [250] = {.lex_state = 195, .external_lex_state = 2},
  [251] = {.lex_state = 195, .external_lex_state = 6},
  [252] = {.lex_state = 195, .external_lex_state = 2},
  [253] = {.lex_state = 196},
  [254] = {.lex_state = 195, .external_lex_state = 2},
  [255] = {.lex_state = 55, .external_lex_state = 2},
  [256] = {.lex_state = 64, .external_lex_state = 2},
  [257] = {.lex_state = 64, .external_lex_state = 2},
  [258] = {.lex_state = 64, .external_lex_state = 2},
  [259] = {.lex_state = 64, .external_lex_state = 2},
  [260] = {.lex_state = 195},
  [261] = {.lex_state = 63, .external_lex_state = 1},
  [262] = {.lex_state = 64, .external_lex_state = 2},
  [263] = {.lex_state = 64, .external_lex_state = 2},
  [264] = {.lex_state = 195, .external_lex_state = 6},
  [265] = {.lex_state = 64, .external_lex_state = 2},
  [266] = {.lex_state = 195, .external_lex_state = 5},
  [267] = {.lex_state = 64, .external_lex_state = 2},
  [268] = {.lex_state = 64, .external_lex_state = 2},
  [269] = {.lex_state = 64, .external_lex_state = 2},
  [270] = {.lex_state = 64, .external_lex_state = 2},
  [271] = {.lex_state = 64, .external_lex_state = 2},
  [272] = {.lex_state = 64, .external_lex_state = 2},
  [273] = {.lex_state = 195, .external_lex_state = 5},
  [274] = {.lex_state = 64, .external_lex_state = 2},
  [275] = {.lex_state = 64, .external_lex_state = 2},
  [276] = {.lex_state = 55, .external_lex_state = 2},
  [277] = {.lex_state = 64, .external_lex_state = 2},
  [278] = {.lex_state = 64, .external_lex_state = 2},
  [279] = {.lex_state = 64, .external_lex_state = 2},
  [280] = {.lex_state = 64, .external_lex_state = 2},
  [281] = {.lex_state = 195, .external_lex_state = 3},
  [282] = {.lex_state = 64, .external_lex_state = 2},
  [283] = {.lex_state = 64, .external_lex_state = 2},
  [284] = {.lex_state = 195},
  [285] = {.lex_state = 195, .external_lex_state = 5},
  [286] = {.lex_state = 64, .external_lex_state = 2},
  [287] = {.lex_state = 64, .external_lex_state = 2},
  [288] = {.lex_state = 64, .external_lex_state = 2},
  [289] = {.lex_state = 64, .external_lex_state = 2},
  [290] = {.lex_state = 64, .external_lex_state = 2},
  [291] = {.lex_state = 63, .external_lex_state = 1},
  [292] = {.lex_state = 64, .external_lex_state = 2},
  [293] = {.lex_state = 63, .external_lex_state = 1},
  [294] = {.lex_state = 64, .external_lex_state = 2},
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
  [306] = {.lex_state = 64, .external_lex_state = 2},
  [307] = {.lex_state = 64, .external_lex_state = 2},
  [308] = {.lex_state = 63, .external_lex_state = 1},
  [309] = {.lex_state = 64, .external_lex_state = 2},
  [310] = {.lex_state = 63, .external_lex_state = 1},
  [311] = {.lex_state = 64, .external_lex_state = 2},
  [312] = {.lex_state = 63, .external_lex_state = 1},
  [313] = {.lex_state = 64, .external_lex_state = 2},
  [314] = {.lex_state = 64, .external_lex_state = 2},
  [315] = {.lex_state = 64, .external_lex_state = 2},
  [316] = {.lex_state = 63, .external_lex_state = 1},
  [317] = {.lex_state = 64, .external_lex_state = 2},
  [318] = {.lex_state = 64, .external_lex_state = 2},
  [319] = {.lex_state = 63, .external_lex_state = 1},
  [320] = {.lex_state = 195, .external_lex_state = 5},
  [321] = {.lex_state = 195},
  [322] = {.lex_state = 195},
  [323] = {.lex_state = 195},
  [324] = {.lex_state = 195},
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
  [339] = {.lex_state = 195},
  [340] = {.lex_state = 195},
  [341] = {.lex_state = 195},
  [342] = {.lex_state = 195},
  [343] = {.lex_state = 195},
  [344] = {.lex_state = 195},
  [345] = {.lex_state = 63, .external_lex_state = 2},
  [346] = {.lex_state = 195},
  [347] = {.lex_state = 55, .external_lex_state = 2},
  [348] = {.lex_state = 195},
  [349] = {.lex_state = 175, .external_lex_state = 2},
  [350] = {.lex_state = 175, .external_lex_state = 2},
  [351] = {.lex_state = 195},
  [352] = {.lex_state = 175, .external_lex_state = 2},
  [353] = {.lex_state = 195},
  [354] = {.lex_state = 195},
  [355] = {.lex_state = 195},
  [356] = {.lex_state = 195},
  [357] = {.lex_state = 63, .external_lex_state = 1},
  [358] = {.lex_state = 195},
  [359] = {.lex_state = 195},
  [360] = {.lex_state = 63, .external_lex_state = 1},
  [361] = {.lex_state = 195},
  [362] = {.lex_state = 195},
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
  [374] = {.lex_state = 195},
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
  [429] = {.lex_state = 65},
  [430] = {.lex_state = 59, .external_lex_state = 3},
  [431] = {.lex_state = 59, .external_lex_state = 3},
  [432] = {.lex_state = 59, .external_lex_state = 3},
  [433] = {.lex_state = 59, .external_lex_state = 3},
  [434] = {.lex_state = 59, .external_lex_state = 3},
  [435] = {.lex_state = 65},
  [436] = {.lex_state = 59, .external_lex_state = 3},
  [437] = {.lex_state = 59, .external_lex_state = 3},
  [438] = {.lex_state = 59, .external_lex_state = 3},
  [439] = {.lex_state = 59, .external_lex_state = 3},
  [440] = {.lex_state = 59, .external_lex_state = 3},
  [441] = {.lex_state = 69},
  [442] = {.lex_state = 69},
  [443] = {.lex_state = 60, .external_lex_state = 3},
  [444] = {.lex_state = 60, .external_lex_state = 3},
  [445] = {.lex_state = 69},
  [446] = {.lex_state = 69},
  [447] = {.lex_state = 69},
  [448] = {.lex_state = 69},
  [449] = {.lex_state = 60, .external_lex_state = 3},
  [450] = {.lex_state = 60, .external_lex_state = 3},
  [451] = {.lex_state = 69},
  [452] = {.lex_state = 69},
  [453] = {.lex_state = 60, .external_lex_state = 3},
  [454] = {.lex_state = 60, .external_lex_state = 3},
  [455] = {.lex_state = 69},
  [456] = {.lex_state = 69},
  [457] = {.lex_state = 60, .external_lex_state = 3},
  [458] = {.lex_state = 69},
  [459] = {.lex_state = 60, .external_lex_state = 3},
  [460] = {.lex_state = 60, .external_lex_state = 3},
  [461] = {.lex_state = 69},
  [462] = {.lex_state = 69},
  [463] = {.lex_state = 60, .external_lex_state = 3},
  [464] = {.lex_state = 60, .external_lex_state = 3},
  [465] = {.lex_state = 60, .external_lex_state = 3},
  [466] = {.lex_state = 69},
  [467] = {.lex_state = 69},
  [468] = {.lex_state = 60, .external_lex_state = 3},
  [469] = {.lex_state = 60, .external_lex_state = 3},
  [470] = {.lex_state = 60, .external_lex_state = 3},
  [471] = {.lex_state = 60, .external_lex_state = 3},
  [472] = {.lex_state = 60, .external_lex_state = 3},
  [473] = {.lex_state = 60, .external_lex_state = 3},
  [474] = {.lex_state = 60, .external_lex_state = 3},
  [475] = {.lex_state = 60, .external_lex_state = 3},
  [476] = {.lex_state = 60, .external_lex_state = 3},
  [477] = {.lex_state = 60, .external_lex_state = 3},
  [478] = {.lex_state = 60, .external_lex_state = 3},
  [479] = {.lex_state = 60, .external_lex_state = 3},
  [480] = {.lex_state = 60, .external_lex_state = 3},
  [481] = {.lex_state = 60, .external_lex_state = 3},
  [482] = {.lex_state = 60, .external_lex_state = 3},
  [483] = {.lex_state = 60, .external_lex_state = 3},
  [484] = {.lex_state = 60, .external_lex_state = 3},
  [485] = {.lex_state = 60, .external_lex_state = 3},
  [486] = {.lex_state = 60, .external_lex_state = 3},
  [487] = {.lex_state = 60, .external_lex_state = 3},
  [488] = {.lex_state = 60, .external_lex_state = 3},
  [489] = {.lex_state = 60, .external_lex_state = 3},
  [490] = {.lex_state = 60, .external_lex_state = 3},
  [491] = {.lex_state = 50, .external_lex_state = 5},
  [492] = {.lex_state = 50, .external_lex_state = 5},
  [493] = {.lex_state = 50, .external_lex_state = 5},
  [494] = {.lex_state = 50, .external_lex_state = 5},
  [495] = {.lex_state = 50, .external_lex_state = 5},
  [496] = {.lex_state = 50, .external_lex_state = 5},
  [497] = {.lex_state = 177, .external_lex_state = 3},
  [498] = {.lex_state = 50, .external_lex_state = 5},
  [499] = {.lex_state = 50, .external_lex_state = 5},
  [500] = {.lex_state = 50, .external_lex_state = 5},
  [501] = {.lex_state = 50, .external_lex_state = 5},
  [502] = {.lex_state = 50, .external_lex_state = 5},
  [503] = {.lex_state = 50, .external_lex_state = 5},
  [504] = {.lex_state = 50, .external_lex_state = 5},
  [505] = {.lex_state = 50, .external_lex_state = 5},
  [506] = {.lex_state = 50, .external_lex_state = 5},
  [507] = {.lex_state = 50, .external_lex_state = 3},
  [508] = {.lex_state = 50, .external_lex_state = 3},
  [509] = {.lex_state = 50, .external_lex_state = 3},
  [510] = {.lex_state = 50},
  [511] = {.lex_state = 50, .external_lex_state = 3},
  [512] = {.lex_state = 68, .external_lex_state = 2},
  [513] = {.lex_state = 50},
  [514] = {.lex_state = 50, .external_lex_state = 3},
  [515] = {.lex_state = 68, .external_lex_state = 2},
  [516] = {.lex_state = 50, .external_lex_state = 3},
  [517] = {.lex_state = 50},
  [518] = {.lex_state = 68, .external_lex_state = 1},
  [519] = {.lex_state = 50, .external_lex_state = 3},
  [520] = {.lex_state = 50, .external_lex_state = 3},
  [521] = {.lex_state = 68, .external_lex_state = 1},
  [522] = {.lex_state = 50},
  [523] = {.lex_state = 68, .external_lex_state = 1},
  [524] = {.lex_state = 50, .external_lex_state = 3},
  [525] = {.lex_state = 50, .external_lex_state = 3},
  [526] = {.lex_state = 50},
  [527] = {.lex_state = 68, .external_lex_state = 2},
  [528] = {.lex_state = 50, .external_lex_state = 3},
  [529] = {.lex_state = 60, .external_lex_state = 3},
  [530] = {.lex_state = 50, .external_lex_state = 3},
  [531] = {.lex_state = 50},
  [532] = {.lex_state = 60, .external_lex_state = 3},
  [533] = {.lex_state = 50, .external_lex_state = 3},
  [534] = {.lex_state = 50, .external_lex_state = 3},
  [535] = {.lex_state = 50},
  [536] = {.lex_state = 68, .external_lex_state = 1},
  [537] = {.lex_state = 50, .external_lex_state = 3},
  [538] = {.lex_state = 68, .external_lex_state = 1},
  [539] = {.lex_state = 50},
  [540] = {.lex_state = 50, .external_lex_state = 3},
  [541] = {.lex_state = 50, .external_lex_state = 3},
  [542] = {.lex_state = 50, .external_lex_state = 3},
  [543] = {.lex_state = 50, .external_lex_state = 3},
  [544] = {.lex_state = 50},
  [545] = {.lex_state = 50, .external_lex_state = 3},
  [546] = {.lex_state = 50, .external_lex_state = 3},
  [547] = {.lex_state = 50},
  [548] = {.lex_state = 68, .external_lex_state = 2},
  [549] = {.lex_state = 50, .external_lex_state = 3},
  [550] = {.lex_state = 50, .external_lex_state = 3},
  [551] = {.lex_state = 50, .external_lex_state = 3},
  [552] = {.lex_state = 50},
  [553] = {.lex_state = 68, .external_lex_state = 1},
  [554] = {.lex_state = 50, .external_lex_state = 3},
  [555] = {.lex_state = 50, .external_lex_state = 3},
  [556] = {.lex_state = 50, .external_lex_state = 3},
  [557] = {.lex_state = 68, .external_lex_state = 1},
  [558] = {.lex_state = 50},
  [559] = {.lex_state = 50, .external_lex_state = 3},
  [560] = {.lex_state = 50, .external_lex_state = 3},
  [561] = {.lex_state = 68, .external_lex_state = 2},
  [562] = {.lex_state = 68, .external_lex_state = 2},
  [563] = {.lex_state = 50, .external_lex_state = 3},
  [564] = {.lex_state = 50, .external_lex_state = 3},
  [565] = {.lex_state = 60, .external_lex_state = 3},
  [566] = {.lex_state = 68, .external_lex_state = 2},
  [567] = {.lex_state = 50, .external_lex_state = 3},
  [568] = {.lex_state = 50, .external_lex_state = 3},
  [569] = {.lex_state = 68, .external_lex_state = 1},
  [570] = {.lex_state = 50, .external_lex_state = 3},
  [571] = {.lex_state = 50},
  [572] = {.lex_state = 68, .external_lex_state = 2},
  [573] = {.lex_state = 50, .external_lex_state = 3},
  [574] = {.lex_state = 65},
  [575] = {.lex_state = 50},
  [576] = {.lex_state = 50, .external_lex_state = 3},
  [577] = {.lex_state = 50, .external_lex_state = 3},
  [578] = {.lex_state = 50, .external_lex_state = 3},
  [579] = {.lex_state = 50, .external_lex_state = 3},
  [580] = {.lex_state = 50, .external_lex_state = 3},
  [581] = {.lex_state = 68, .external_lex_state = 2},
  [582] = {.lex_state = 68, .external_lex_state = 3},
  [583] = {.lex_state = 68, .external_lex_state = 3},
  [584] = {.lex_state = 50},
  [585] = {.lex_state = 50},
  [586] = {.lex_state = 50},
  [587] = {.lex_state = 50},
  [588] = {.lex_state = 60},
  [589] = {.lex_state = 68, .external_lex_state = 3},
  [590] = {.lex_state = 68, .external_lex_state = 3},
  [591] = {.lex_state = 50},
  [592] = {.lex_state = 50},
  [593] = {.lex_state = 68, .external_lex_state = 3},
  [594] = {.lex_state = 50},
  [595] = {.lex_state = 68, .external_lex_state = 1},
  [596] = {.lex_state = 50, .external_lex_state = 3},
  [597] = {.lex_state = 50},
  [598] = {.lex_state = 50},
  [599] = {.lex_state = 50},
  [600] = {.lex_state = 50},
  [601] = {.lex_state = 178, .external_lex_state = 3},
  [602] = {.lex_state = 50},
  [603] = {.lex_state = 50},
  [604] = {.lex_state = 50},
  [605] = {.lex_state = 50},
  [606] = {.lex_state = 68, .external_lex_state = 3},
  [607] = {.lex_state = 60},
  [608] = {.lex_state = 50},
  [609] = {.lex_state = 50},
  [610] = {.lex_state = 50},
  [611] = {.lex_state = 50},
  [612] = {.lex_state = 50},
  [613] = {.lex_state = 50},
  [614] = {.lex_state = 60},
  [615] = {.lex_state = 68, .external_lex_state = 3},
  [616] = {.lex_state = 50},
  [617] = {.lex_state = 50},
  [618] = {.lex_state = 50},
  [619] = {.lex_state = 50},
  [620] = {.lex_state = 50},
  [621] = {.lex_state = 50},
  [622] = {.lex_state = 68, .external_lex_state = 3},
  [623] = {.lex_state = 50},
  [624] = {.lex_state = 68},
  [625] = {.lex_state = 68, .external_lex_state = 2},
  [626] = {.lex_state = 50, .external_lex_state = 3},
  [627] = {.lex_state = 68, .external_lex_state = 2},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 68, .external_lex_state = 2},
  [630] = {.lex_state = 68, .external_lex_state = 2},
  [631] = {.lex_state = 60},
  [632] = {.lex_state = 68, .external_lex_state = 2},
  [633] = {.lex_state = 50, .external_lex_state = 3},
  [634] = {.lex_state = 68, .external_lex_state = 2},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 50, .external_lex_state = 3},
  [638] = {.lex_state = 68, .external_lex_state = 2},
  [639] = {.lex_state = 68, .external_lex_state = 2},
  [640] = {.lex_state = 68},
  [641] = {.lex_state = 68, .external_lex_state = 2},
  [642] = {.lex_state = 69},
  [643] = {.lex_state = 68, .external_lex_state = 2},
  [644] = {.lex_state = 68, .external_lex_state = 2},
  [645] = {.lex_state = 68, .external_lex_state = 2},
  [646] = {.lex_state = 68},
  [647] = {.lex_state = 68, .external_lex_state = 2},
  [648] = {.lex_state = 258, .external_lex_state = 5},
  [649] = {.lex_state = 51, .external_lex_state = 3},
  [650] = {.lex_state = 56, .external_lex_state = 2},
  [651] = {.lex_state = 258, .external_lex_state = 5},
  [652] = {.lex_state = 56, .external_lex_state = 2},
  [653] = {.lex_state = 68},
  [654] = {.lex_state = 103},
  [655] = {.lex_state = 68},
  [656] = {.lex_state = 51, .external_lex_state = 3},
  [657] = {.lex_state = 68},
  [658] = {.lex_state = 178, .external_lex_state = 3},
  [659] = {.lex_state = 103},
  [660] = {.lex_state = 68},
  [661] = {.lex_state = 68},
  [662] = {.lex_state = 103},
  [663] = {.lex_state = 68},
  [664] = {.lex_state = 258, .external_lex_state = 5},
  [665] = {.lex_state = 56, .external_lex_state = 2},
  [666] = {.lex_state = 68},
  [667] = {.lex_state = 258, .external_lex_state = 5},
  [668] = {.lex_state = 68},
  [669] = {.lex_state = 56, .external_lex_state = 2},
  [670] = {.lex_state = 258, .external_lex_state = 5},
  [671] = {.lex_state = 68},
  [672] = {.lex_state = 258, .external_lex_state = 5},
  [673] = {.lex_state = 68},
  [674] = {.lex_state = 68},
  [675] = {.lex_state = 258, .external_lex_state = 5},
  [676] = {.lex_state = 68},
  [677] = {.lex_state = 51, .external_lex_state = 3},
  [678] = {.lex_state = 178, .external_lex_state = 3},
  [679] = {.lex_state = 56, .external_lex_state = 2},
  [680] = {.lex_state = 68},
  [681] = {.lex_state = 59},
  [682] = {.lex_state = 68},
  [683] = {.lex_state = 59},
  [684] = {.lex_state = 68},
  [685] = {.lex_state = 103},
  [686] = {.lex_state = 68},
  [687] = {.lex_state = 103},
  [688] = {.lex_state = 68},
  [689] = {.lex_state = 258, .external_lex_state = 5},
  [690] = {.lex_state = 258, .external_lex_state = 5},
  [691] = {.lex_state = 68},
  [692] = {.lex_state = 68},
  [693] = {.lex_state = 68},
  [694] = {.lex_state = 68},
  [695] = {.lex_state = 68},
  [696] = {.lex_state = 68},
  [697] = {.lex_state = 50, .external_lex_state = 3},
  [698] = {.lex_state = 68},
  [699] = {.lex_state = 50, .external_lex_state = 5},
  [700] = {.lex_state = 68},
  [701] = {.lex_state = 68},
  [702] = {.lex_state = 68},
  [703] = {.lex_state = 258, .external_lex_state = 5},
  [704] = {.lex_state = 178, .external_lex_state = 3},
  [705] = {.lex_state = 51, .external_lex_state = 3},
  [706] = {.lex_state = 68},
  [707] = {.lex_state = 56, .external_lex_state = 2},
  [708] = {.lex_state = 50, .external_lex_state = 3},
  [709] = {.lex_state = 51, .external_lex_state = 3},
  [710] = {.lex_state = 258, .external_lex_state = 5},
  [711] = {.lex_state = 50, .external_lex_state = 3},
  [712] = {.lex_state = 51},
  [713] = {.lex_state = 59},
  [714] = {.lex_state = 56, .external_lex_state = 3},
  [715] = {.lex_state = 258, .external_lex_state = 5},
  [716] = {.lex_state = 59},
  [717] = {.lex_state = 258},
  [718] = {.lex_state = 59},
  [719] = {.lex_state = 258, .external_lex_state = 5},
  [720] = {.lex_state = 258},
  [721] = {.lex_state = 59},
  [722] = {.lex_state = 258},
  [723] = {.lex_state = 258, .external_lex_state = 5},
  [724] = {.lex_state = 258, .external_lex_state = 5},
  [725] = {.lex_state = 59},
  [726] = {.lex_state = 59},
  [727] = {.lex_state = 51},
  [728] = {.lex_state = 59},
  [729] = {.lex_state = 258, .external_lex_state = 5},
  [730] = {.lex_state = 0, .external_lex_state = 3},
  [731] = {.lex_state = 59},
  [732] = {.lex_state = 51},
  [733] = {.lex_state = 59},
  [734] = {.lex_state = 51},
  [735] = {.lex_state = 52},
  [736] = {.lex_state = 59},
  [737] = {.lex_state = 51},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 51},
  [740] = {.lex_state = 52},
  [741] = {.lex_state = 59},
  [742] = {.lex_state = 59},
  [743] = {.lex_state = 258, .external_lex_state = 3},
  [744] = {.lex_state = 52},
  [745] = {.lex_state = 59},
  [746] = {.lex_state = 51},
  [747] = {.lex_state = 51},
  [748] = {.lex_state = 258, .external_lex_state = 5},
  [749] = {.lex_state = 51},
  [750] = {.lex_state = 56, .external_lex_state = 3},
  [751] = {.lex_state = 258},
  [752] = {.lex_state = 51},
  [753] = {.lex_state = 51},
  [754] = {.lex_state = 59},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 51},
  [757] = {.lex_state = 59},
  [758] = {.lex_state = 51},
  [759] = {.lex_state = 258},
  [760] = {.lex_state = 51},
  [761] = {.lex_state = 258, .external_lex_state = 3},
  [762] = {.lex_state = 258, .external_lex_state = 3},
  [763] = {.lex_state = 258},
  [764] = {.lex_state = 56, .external_lex_state = 3},
  [765] = {.lex_state = 59},
  [766] = {.lex_state = 258, .external_lex_state = 5},
  [767] = {.lex_state = 59},
  [768] = {.lex_state = 258},
  [769] = {.lex_state = 183},
  [770] = {.lex_state = 51},
  [771] = {.lex_state = 183},
  [772] = {.lex_state = 59},
  [773] = {.lex_state = 258, .external_lex_state = 5},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 59},
  [776] = {.lex_state = 59},
  [777] = {.lex_state = 0, .external_lex_state = 3},
  [778] = {.lex_state = 0, .external_lex_state = 3},
  [779] = {.lex_state = 52},
  [780] = {.lex_state = 51},
  [781] = {.lex_state = 258, .external_lex_state = 5},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 258},
  [784] = {.lex_state = 258, .external_lex_state = 5},
  [785] = {.lex_state = 56, .external_lex_state = 3},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 52},
  [788] = {.lex_state = 183},
  [789] = {.lex_state = 258, .external_lex_state = 3},
  [790] = {.lex_state = 258, .external_lex_state = 5},
  [791] = {.lex_state = 51},
  [792] = {.lex_state = 51},
  [793] = {.lex_state = 183},
  [794] = {.lex_state = 258},
  [795] = {.lex_state = 56, .external_lex_state = 2},
  [796] = {.lex_state = 258},
  [797] = {.lex_state = 59},
  [798] = {.lex_state = 56, .external_lex_state = 3},
  [799] = {.lex_state = 72},
  [800] = {.lex_state = 258, .external_lex_state = 3},
  [801] = {.lex_state = 51},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 56, .external_lex_state = 2},
  [804] = {.lex_state = 59},
  [805] = {.lex_state = 59},
  [806] = {.lex_state = 0, .external_lex_state = 3},
  [807] = {.lex_state = 258, .external_lex_state = 5},
  [808] = {.lex_state = 258, .external_lex_state = 5},
  [809] = {.lex_state = 183},
  [810] = {.lex_state = 0, .external_lex_state = 6},
  [811] = {.lex_state = 0, .external_lex_state = 6},
  [812] = {.lex_state = 0, .external_lex_state = 6},
  [813] = {.lex_state = 0, .external_lex_state = 6},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0, .external_lex_state = 6},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0, .external_lex_state = 6},
  [818] = {.lex_state = 0, .external_lex_state = 6},
  [819] = {.lex_state = 0, .external_lex_state = 6},
  [820] = {.lex_state = 0, .external_lex_state = 6},
  [821] = {.lex_state = 258, .external_lex_state = 5},
  [822] = {.lex_state = 68},
  [823] = {.lex_state = 68},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0, .external_lex_state = 3},
  [826] = {.lex_state = 68},
  [827] = {.lex_state = 68},
  [828] = {.lex_state = 0, .external_lex_state = 6},
  [829] = {.lex_state = 0, .external_lex_state = 6},
  [830] = {.lex_state = 68},
  [831] = {.lex_state = 0, .external_lex_state = 6},
  [832] = {.lex_state = 68},
  [833] = {.lex_state = 68},
  [834] = {.lex_state = 0, .external_lex_state = 6},
  [835] = {.lex_state = 68},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 68},
  [838] = {.lex_state = 56},
  [839] = {.lex_state = 183},
  [840] = {.lex_state = 0, .external_lex_state = 6},
  [841] = {.lex_state = 0, .external_lex_state = 6},
  [842] = {.lex_state = 59},
  [843] = {.lex_state = 0, .external_lex_state = 6},
  [844] = {.lex_state = 0, .external_lex_state = 6},
  [845] = {.lex_state = 72},
  [846] = {.lex_state = 68},
  [847] = {.lex_state = 68},
  [848] = {.lex_state = 0, .external_lex_state = 6},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 68},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 68},
  [853] = {.lex_state = 0, .external_lex_state = 6},
  [854] = {.lex_state = 0, .external_lex_state = 6},
  [855] = {.lex_state = 68},
  [856] = {.lex_state = 56},
  [857] = {.lex_state = 68},
  [858] = {.lex_state = 0, .external_lex_state = 6},
  [859] = {.lex_state = 66},
  [860] = {.lex_state = 70},
  [861] = {.lex_state = 70},
  [862] = {.lex_state = 56},
  [863] = {.lex_state = 51},
  [864] = {.lex_state = 51},
  [865] = {.lex_state = 0, .external_lex_state = 6},
  [866] = {.lex_state = 0, .external_lex_state = 6},
  [867] = {.lex_state = 56},
  [868] = {.lex_state = 56},
  [869] = {.lex_state = 51},
  [870] = {.lex_state = 68},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 68},
  [873] = {.lex_state = 0, .external_lex_state = 6},
  [874] = {.lex_state = 56},
  [875] = {.lex_state = 56},
  [876] = {.lex_state = 72},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 51},
  [879] = {.lex_state = 56},
  [880] = {.lex_state = 68},
  [881] = {.lex_state = 0, .external_lex_state = 6},
  [882] = {.lex_state = 68},
  [883] = {.lex_state = 56},
  [884] = {.lex_state = 51},
  [885] = {.lex_state = 66},
  [886] = {.lex_state = 56},
  [887] = {.lex_state = 0, .external_lex_state = 6},
  [888] = {.lex_state = 68},
  [889] = {.lex_state = 0, .external_lex_state = 6},
  [890] = {.lex_state = 66},
  [891] = {.lex_state = 70},
  [892] = {.lex_state = 0, .external_lex_state = 6},
  [893] = {.lex_state = 258, .external_lex_state = 5},
  [894] = {.lex_state = 258},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 56},
  [897] = {.lex_state = 0, .external_lex_state = 3},
  [898] = {.lex_state = 0, .external_lex_state = 3},
  [899] = {.lex_state = 56},
  [900] = {.lex_state = 56},
  [901] = {.lex_state = 56},
  [902] = {.lex_state = 0, .external_lex_state = 3},
  [903] = {.lex_state = 56},
  [904] = {.lex_state = 0, .external_lex_state = 3},
  [905] = {.lex_state = 0, .external_lex_state = 3},
  [906] = {.lex_state = 788},
  [907] = {.lex_state = 0, .external_lex_state = 3},
  [908] = {.lex_state = 0, .external_lex_state = 3},
  [909] = {.lex_state = 0, .external_lex_state = 6},
  [910] = {.lex_state = 0, .external_lex_state = 6},
  [911] = {.lex_state = 72},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0, .external_lex_state = 3},
  [914] = {.lex_state = 0, .external_lex_state = 3},
  [915] = {.lex_state = 0, .external_lex_state = 6},
  [916] = {.lex_state = 0, .external_lex_state = 3},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 184},
  [920] = {.lex_state = 195},
  [921] = {.lex_state = 0, .external_lex_state = 3},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0, .external_lex_state = 3},
  [924] = {.lex_state = 0, .external_lex_state = 6},
  [925] = {.lex_state = 68},
  [926] = {.lex_state = 68},
  [927] = {.lex_state = 0, .external_lex_state = 3},
  [928] = {.lex_state = 0, .external_lex_state = 6},
  [929] = {.lex_state = 788},
  [930] = {.lex_state = 0, .external_lex_state = 3},
  [931] = {.lex_state = 0, .external_lex_state = 3},
  [932] = {.lex_state = 0, .external_lex_state = 3},
  [933] = {.lex_state = 0, .external_lex_state = 6},
  [934] = {.lex_state = 0, .external_lex_state = 6},
  [935] = {.lex_state = 56},
  [936] = {.lex_state = 0, .external_lex_state = 3},
  [937] = {.lex_state = 0, .external_lex_state = 3},
  [938] = {.lex_state = 0, .external_lex_state = 6},
  [939] = {.lex_state = 0, .external_lex_state = 3},
  [940] = {.lex_state = 185},
  [941] = {.lex_state = 0, .external_lex_state = 3},
  [942] = {.lex_state = 0, .external_lex_state = 3},
  [943] = {.lex_state = 0, .external_lex_state = 3},
  [944] = {.lex_state = 0, .external_lex_state = 3},
  [945] = {.lex_state = 0, .external_lex_state = 3},
  [946] = {.lex_state = 0, .external_lex_state = 3},
  [947] = {.lex_state = 0, .external_lex_state = 3},
  [948] = {.lex_state = 258},
  [949] = {.lex_state = 788},
  [950] = {.lex_state = 0, .external_lex_state = 3},
  [951] = {.lex_state = 0, .external_lex_state = 3},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0, .external_lex_state = 6},
  [954] = {.lex_state = 0, .external_lex_state = 3},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0, .external_lex_state = 6},
  [958] = {.lex_state = 0, .external_lex_state = 3},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0, .external_lex_state = 3},
  [961] = {.lex_state = 0, .external_lex_state = 3},
  [962] = {.lex_state = 0, .external_lex_state = 6},
  [963] = {.lex_state = 258},
  [964] = {.lex_state = 56},
  [965] = {.lex_state = 0, .external_lex_state = 3},
  [966] = {.lex_state = 0, .external_lex_state = 3},
  [967] = {.lex_state = 185},
  [968] = {.lex_state = 788},
  [969] = {.lex_state = 0, .external_lex_state = 3},
  [970] = {.lex_state = 0, .external_lex_state = 3},
  [971] = {.lex_state = 56},
  [972] = {.lex_state = 0, .external_lex_state = 6},
  [973] = {.lex_state = 0, .external_lex_state = 3},
  [974] = {.lex_state = 0, .external_lex_state = 3},
  [975] = {.lex_state = 53},
  [976] = {.lex_state = 0, .external_lex_state = 6},
  [977] = {.lex_state = 0, .external_lex_state = 3},
  [978] = {.lex_state = 0, .external_lex_state = 6},
  [979] = {.lex_state = 56},
  [980] = {.lex_state = 56},
  [981] = {.lex_state = 258},
  [982] = {.lex_state = 56},
  [983] = {.lex_state = 185},
  [984] = {.lex_state = 0, .external_lex_state = 3},
  [985] = {.lex_state = 0, .external_lex_state = 3},
  [986] = {.lex_state = 0, .external_lex_state = 6},
  [987] = {.lex_state = 0, .external_lex_state = 3},
  [988] = {.lex_state = 56},
  [989] = {.lex_state = 185},
  [990] = {.lex_state = 0, .external_lex_state = 3},
  [991] = {.lex_state = 56},
  [992] = {.lex_state = 0, .external_lex_state = 6},
  [993] = {.lex_state = 0, .external_lex_state = 3},
  [994] = {.lex_state = 56},
  [995] = {.lex_state = 0, .external_lex_state = 6},
  [996] = {.lex_state = 0, .external_lex_state = 3},
  [997] = {.lex_state = 0, .external_lex_state = 3},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0, .external_lex_state = 3},
  [1000] = {.lex_state = 0, .external_lex_state = 3},
  [1001] = {.lex_state = 54},
  [1002] = {.lex_state = 185},
  [1003] = {.lex_state = 0, .external_lex_state = 3},
  [1004] = {.lex_state = 0, .external_lex_state = 6},
  [1005] = {.lex_state = 0, .external_lex_state = 6},
  [1006] = {.lex_state = 258},
  [1007] = {.lex_state = 0, .external_lex_state = 6},
  [1008] = {.lex_state = 0, .external_lex_state = 6},
  [1009] = {.lex_state = 53},
  [1010] = {.lex_state = 0, .external_lex_state = 3},
  [1011] = {.lex_state = 0, .external_lex_state = 3},
  [1012] = {.lex_state = 0, .external_lex_state = 6},
  [1013] = {.lex_state = 0, .external_lex_state = 6},
  [1014] = {.lex_state = 0, .external_lex_state = 3},
  [1015] = {.lex_state = 0, .external_lex_state = 6},
  [1016] = {.lex_state = 0, .external_lex_state = 6},
  [1017] = {.lex_state = 56},
  [1018] = {.lex_state = 258},
  [1019] = {.lex_state = 0, .external_lex_state = 6},
  [1020] = {.lex_state = 0, .external_lex_state = 6},
  [1021] = {.lex_state = 185},
  [1022] = {.lex_state = 0, .external_lex_state = 6},
  [1023] = {.lex_state = 0, .external_lex_state = 6},
  [1024] = {.lex_state = 56},
  [1025] = {.lex_state = 51},
  [1026] = {.lex_state = 0, .external_lex_state = 6},
  [1027] = {.lex_state = 0, .external_lex_state = 6},
  [1028] = {.lex_state = 0, .external_lex_state = 3},
  [1029] = {.lex_state = 0, .external_lex_state = 6},
  [1030] = {.lex_state = 0, .external_lex_state = 6},
  [1031] = {.lex_state = 0, .external_lex_state = 6},
  [1032] = {.lex_state = 0, .external_lex_state = 6},
  [1033] = {.lex_state = 0, .external_lex_state = 6},
  [1034] = {.lex_state = 0, .external_lex_state = 6},
  [1035] = {.lex_state = 51},
  [1036] = {.lex_state = 0, .external_lex_state = 3},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0, .external_lex_state = 3},
  [1039] = {.lex_state = 0, .external_lex_state = 3},
  [1040] = {.lex_state = 51},
  [1041] = {.lex_state = 0, .external_lex_state = 3},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0, .external_lex_state = 3},
  [1044] = {.lex_state = 0, .external_lex_state = 3},
  [1045] = {.lex_state = 0, .external_lex_state = 3},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0, .external_lex_state = 3},
  [1048] = {.lex_state = 0, .external_lex_state = 3},
  [1049] = {.lex_state = 0, .external_lex_state = 3},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0, .external_lex_state = 3},
  [1052] = {.lex_state = 0, .external_lex_state = 3},
  [1053] = {.lex_state = 0, .external_lex_state = 3},
  [1054] = {.lex_state = 0, .external_lex_state = 3},
  [1055] = {.lex_state = 0, .external_lex_state = 3},
  [1056] = {.lex_state = 0, .external_lex_state = 3},
  [1057] = {.lex_state = 0, .external_lex_state = 6},
  [1058] = {.lex_state = 788},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
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
    [sym_source_file] = STATE(956),
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
    [sym__comment] = STATE(375),
    [sym__comment_not_first_line] = STATE(375),
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
    STATE(375), 2,
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
    STATE(286), 2,
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
    STATE(286), 2,
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
    STATE(375), 2,
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
    STATE(41), 20,
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
    STATE(286), 2,
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
    STATE(286), 2,
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
    STATE(286), 2,
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
    STATE(41), 20,
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
    STATE(41), 20,
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
    STATE(286), 2,
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
    STATE(41), 20,
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
  [4038] = 26,
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
    STATE(41), 20,
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
    STATE(286), 2,
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
    STATE(119), 1,
      sym_filter,
    STATE(120), 1,
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
    STATE(778), 1,
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
    STATE(778), 1,
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
    STATE(119), 1,
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
    STATE(313), 1,
      sym_filter,
    STATE(314), 1,
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
    STATE(328), 1,
      sym_filter_content,
    STATE(333), 1,
      sym_filter,
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
    STATE(777), 1,
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
    STATE(777), 1,
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
    STATE(296), 1,
      sym_filter_content,
    STATE(313), 1,
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
    STATE(220), 1,
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
    STATE(220), 1,
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
    STATE(730), 1,
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
    STATE(201), 1,
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
    STATE(217), 1,
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
    STATE(330), 1,
      sym_filter_content,
    STATE(333), 1,
      sym_filter,
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
    STATE(730), 1,
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
  [7861] = 2,
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
    STATE(250), 1,
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
    STATE(378), 1,
      sym_filter_content,
    STATE(379), 1,
      sym_filter,
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
    STATE(272), 1,
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
  [9292] = 3,
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
  [9330] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(272), 1,
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
  [9370] = 2,
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
  [9406] = 2,
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
  [9442] = 2,
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
  [9478] = 2,
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
  [9514] = 2,
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
  [9550] = 3,
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
  [9588] = 2,
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
  [9624] = 4,
    ACTIONS(993), 1,
      anon_sym_else,
    STATE(249), 1,
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
  [9664] = 2,
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
  [9700] = 2,
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
  [9736] = 4,
    ACTIONS(989), 1,
      sym__indent,
    STATE(265), 1,
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
    STATE(297), 1,
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
    ACTIONS(859), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
  [10072] = 4,
    ACTIONS(1000), 1,
      sym__indent,
    STATE(265), 1,
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
    STATE(304), 1,
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
    STATE(306), 1,
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
    STATE(295), 1,
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
    STATE(317), 1,
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
  [10421] = 3,
    ACTIONS(1009), 1,
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
  [10458] = 3,
    ACTIONS(1011), 1,
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
  [10495] = 3,
    ACTIONS(1013), 1,
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
  [10532] = 2,
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
  [10567] = 4,
    ACTIONS(1015), 1,
      sym__indent,
    STATE(326), 1,
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
  [10606] = 2,
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
  [10641] = 2,
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
  [10676] = 2,
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
  [10711] = 2,
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
  [10746] = 2,
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
  [10781] = 2,
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
  [10816] = 2,
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
  [10851] = 2,
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
  [10886] = 2,
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
  [10921] = 2,
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
  [10956] = 2,
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
  [10991] = 2,
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
  [11026] = 2,
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
  [11061] = 2,
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
  [11096] = 4,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(370), 1,
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
  [11135] = 2,
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
  [11170] = 2,
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
  [11205] = 4,
    ACTIONS(1017), 1,
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
  [11314] = 3,
    ACTIONS(1019), 1,
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
  [11351] = 4,
    ACTIONS(1021), 1,
      anon_sym_else,
    STATE(301), 1,
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
  [11390] = 2,
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
  [11425] = 4,
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
  [11464] = 2,
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
  [11499] = 4,
    ACTIONS(1025), 1,
      sym__indent,
    STATE(370), 1,
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
  [11538] = 2,
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
  [11573] = 2,
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
  [11608] = 2,
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
    ACTIONS(871), 16,
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
  [12028] = 2,
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
    STATE(379), 1,
      sym_filter,
    STATE(381), 1,
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
    ACTIONS(1027), 1,
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
  [12460] = 4,
    ACTIONS(1029), 1,
      sym__indent,
    ACTIONS(1031), 1,
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
  [12499] = 4,
    ACTIONS(1017), 1,
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
  [12538] = 2,
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
  [12573] = 4,
    ACTIONS(1017), 1,
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
  [12612] = 2,
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
  [12647] = 2,
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
  [12682] = 4,
    ACTIONS(1033), 1,
      sym__indent,
    STATE(351), 1,
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
  [12721] = 2,
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
  [12756] = 2,
    ACTIONS(1035), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1037), 18,
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
  [12826] = 4,
    ACTIONS(1039), 1,
      sym__un_delimited_javascript_line,
    STATE(255), 1,
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
  [12864] = 3,
    ACTIONS(1042), 1,
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
  [12900] = 2,
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
  [12934] = 2,
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
  [12968] = 2,
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
  [13002] = 3,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    ACTIONS(1044), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1046), 16,
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
  [13038] = 4,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(396), 1,
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
  [13076] = 3,
    ACTIONS(1052), 1,
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
  [13112] = 2,
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
  [13146] = 3,
    ACTIONS(1054), 1,
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
  [13182] = 2,
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
  [13216] = 3,
    ACTIONS(1056), 1,
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
  [13252] = 2,
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
  [13286] = 2,
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
  [13320] = 2,
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
  [13354] = 2,
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
  [13388] = 2,
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
  [13422] = 2,
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
  [13456] = 3,
    ACTIONS(1058), 1,
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
  [13492] = 2,
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
  [13526] = 2,
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
  [13560] = 4,
    ACTIONS(1060), 1,
      sym__un_delimited_javascript_line,
    STATE(255), 1,
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
  [13598] = 2,
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
  [13632] = 2,
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
  [13666] = 2,
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
  [13700] = 2,
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
  [13734] = 3,
    ACTIONS(1062), 1,
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
  [13770] = 2,
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
  [13804] = 2,
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
  [13838] = 4,
    ACTIONS(1064), 1,
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
  [13876] = 3,
    ACTIONS(1066), 1,
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
  [13912] = 2,
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
  [13946] = 2,
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
  [13980] = 2,
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
  [14014] = 2,
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
  [14048] = 2,
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
  [14082] = 4,
    ACTIONS(1068), 1,
      sym__indent,
    STATE(396), 1,
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
  [14120] = 2,
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
  [14154] = 4,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(401), 1,
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
  [14192] = 2,
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
  [14226] = 2,
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
  [14260] = 2,
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
  [14294] = 2,
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
  [14328] = 2,
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
  [14362] = 2,
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
  [14396] = 2,
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
  [14430] = 2,
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
  [14464] = 2,
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
  [14498] = 2,
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
  [14532] = 2,
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
  [14566] = 2,
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
  [14600] = 2,
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
  [14634] = 2,
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
  [14668] = 4,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(405), 1,
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
  [14706] = 2,
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
  [14740] = 4,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(403), 1,
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
  [14778] = 2,
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
  [14812] = 4,
    ACTIONS(1070), 1,
      sym__indent,
    STATE(391), 1,
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
  [14850] = 2,
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
  [14884] = 2,
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
  [14918] = 2,
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
  [14952] = 4,
    ACTIONS(1072), 1,
      sym__indent,
    STATE(392), 1,
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
  [14990] = 2,
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
  [15024] = 2,
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
  [15058] = 4,
    ACTIONS(1074), 1,
      sym__indent,
    STATE(401), 1,
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
  [15096] = 2,
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
  [15163] = 2,
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
  [15196] = 2,
    ACTIONS(1076), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1078), 16,
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
  [15229] = 2,
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
  [15262] = 2,
    ACTIONS(1080), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1082), 16,
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
  [15295] = 2,
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
  [15328] = 2,
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
  [15361] = 2,
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
  [15394] = 2,
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
  [15427] = 2,
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
  [15460] = 2,
    ACTIONS(1084), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1086), 16,
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
  [15493] = 2,
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
  [15526] = 2,
    ACTIONS(869), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(871), 16,
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
  [15559] = 2,
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
  [15592] = 2,
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
  [15625] = 2,
    ACTIONS(1088), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1090), 16,
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
  [15658] = 2,
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
  [15691] = 2,
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
  [15724] = 2,
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
  [15757] = 2,
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
  [15790] = 2,
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
  [15823] = 2,
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
  [15856] = 2,
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
  [15889] = 2,
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
  [15922] = 4,
    ACTIONS(1092), 1,
      anon_sym_else,
    STATE(385), 1,
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
  [15959] = 2,
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
  [15992] = 2,
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
  [16025] = 2,
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
  [16058] = 2,
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
  [16091] = 2,
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
  [16124] = 2,
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
  [16157] = 2,
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
  [16190] = 2,
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
  [16223] = 2,
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
  [16256] = 2,
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
  [16289] = 2,
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
  [16322] = 3,
    ACTIONS(1094), 1,
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
  [16357] = 2,
    ACTIONS(1096), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1098), 16,
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
  [16390] = 2,
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
  [16423] = 3,
    ACTIONS(1100), 1,
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
  [16458] = 2,
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
  [16491] = 2,
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
  [16590] = 2,
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
  [16623] = 2,
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
  [16656] = 2,
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
  [16755] = 2,
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
  [16788] = 2,
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
  [16821] = 2,
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
  [16854] = 2,
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
  [16887] = 2,
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
  [16920] = 2,
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
  [16953] = 2,
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
  [16985] = 2,
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
  [17017] = 2,
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
  [17049] = 2,
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
    ACTIONS(871), 15,
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
  [17081] = 2,
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
  [17113] = 2,
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
  [17145] = 2,
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
  [17177] = 2,
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
  [17209] = 2,
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
  [17241] = 2,
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
  [17273] = 2,
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
  [17305] = 2,
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
  [17337] = 2,
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
  [17369] = 2,
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
  [17401] = 3,
    ACTIONS(1110), 1,
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
  [17435] = 2,
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
  [17467] = 2,
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
  [17499] = 2,
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
  [17531] = 2,
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
  [17563] = 2,
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
  [17595] = 2,
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
  [17627] = 2,
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
  [17659] = 2,
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
  [17691] = 2,
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
  [17723] = 3,
    ACTIONS(1112), 1,
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
  [17757] = 2,
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
  [17789] = 2,
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
  [17821] = 2,
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
  [17853] = 2,
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
  [17885] = 2,
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
  [17917] = 2,
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
  [17949] = 2,
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
  [17981] = 2,
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
  [18013] = 2,
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
  [18045] = 2,
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
  [18077] = 2,
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
  [18109] = 2,
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
  [18141] = 2,
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
  [18173] = 2,
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
  [18205] = 2,
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
  [18237] = 2,
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
  [18269] = 2,
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
  [18301] = 2,
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
  [18333] = 2,
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
    STATE(836), 1,
      sym__pug_attributes,
    ACTIONS(1116), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(814), 7,
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
    STATE(955), 1,
      sym__pug_attributes,
    ACTIONS(1122), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(814), 7,
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
    STATE(851), 1,
      sym__pug_attributes,
    ACTIONS(1116), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(814), 7,
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
    STATE(436), 1,
      aux_sym_tag_repeat1,
    STATE(450), 1,
      sym_attributes,
    ACTIONS(1145), 2,
      sym_class,
      sym_id,
    STATE(643), 3,
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
    ACTIONS(1163), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(443), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(297), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18567] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1165), 1,
      anon_sym_COLON,
    ACTIONS(1167), 1,
      anon_sym_SLASH,
    ACTIONS(1169), 1,
      anon_sym_,
    ACTIONS(1173), 1,
      sym__newline,
    STATE(425), 1,
      aux_sym_tag_repeat1,
    STATE(449), 1,
      sym_attributes,
    ACTIONS(1171), 2,
      sym_class,
      sym_id,
    STATE(290), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18607] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1175), 1,
      anon_sym_COLON,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1181), 1,
      anon_sym_SLASH,
    ACTIONS(1183), 1,
      anon_sym_,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1189), 1,
      sym__newline,
    STATE(434), 1,
      aux_sym_tag_repeat1,
    STATE(464), 1,
      sym_attributes,
    ACTIONS(1187), 2,
      sym_class,
      sym_id,
    STATE(228), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18647] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1191), 1,
      anon_sym_COLON,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1197), 1,
      anon_sym_SLASH,
    ACTIONS(1199), 1,
      anon_sym_,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1203), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(444), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18687] = 5,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1209), 1,
      anon_sym_DQUOTE,
    STATE(716), 1,
      sym__pug_attributes,
    ACTIONS(1205), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(713), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18713] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1211), 1,
      anon_sym_COLON,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1217), 1,
      anon_sym_SLASH,
    ACTIONS(1219), 1,
      anon_sym_,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1225), 1,
      sym__newline,
    STATE(437), 1,
      aux_sym_tag_repeat1,
    STATE(453), 1,
      sym_attributes,
    ACTIONS(1223), 2,
      sym_class,
      sym_id,
    STATE(135), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18753] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1227), 1,
      anon_sym_COLON,
    ACTIONS(1229), 1,
      anon_sym_SLASH,
    ACTIONS(1231), 1,
      anon_sym_,
    ACTIONS(1235), 1,
      sym__newline,
    STATE(428), 1,
      aux_sym_tag_repeat1,
    STATE(465), 1,
      sym_attributes,
    ACTIONS(1233), 2,
      sym_class,
      sym_id,
    STATE(177), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18793] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1237), 1,
      anon_sym_COLON,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1243), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      anon_sym_,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1249), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(468), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(391), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18833] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1251), 1,
      anon_sym_COLON,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1257), 1,
      anon_sym_SLASH,
    ACTIONS(1259), 1,
      anon_sym_,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(459), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(326), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18873] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1265), 1,
      anon_sym_COLON,
    ACTIONS(1267), 1,
      anon_sym_SLASH,
    ACTIONS(1269), 1,
      anon_sym_,
    ACTIONS(1271), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(454), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(217), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18913] = 5,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1209), 1,
      anon_sym_DQUOTE,
    STATE(736), 1,
      sym__pug_attributes,
    ACTIONS(1205), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(713), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18939] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      anon_sym_COLON,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    ACTIONS(1277), 1,
      anon_sym_,
    ACTIONS(1279), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(463), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(627), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18979] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      anon_sym_COLON,
    ACTIONS(1283), 1,
      anon_sym_SLASH,
    ACTIONS(1285), 1,
      anon_sym_,
    ACTIONS(1287), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(469), 1,
      sym_attributes,
    ACTIONS(1161), 2,
      sym_class,
      sym_id,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19019] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1289), 1,
      anon_sym_COLON,
    ACTIONS(1291), 1,
      anon_sym_SLASH,
    ACTIONS(1293), 1,
      anon_sym_,
    ACTIONS(1297), 1,
      sym__newline,
    STATE(432), 1,
      aux_sym_tag_repeat1,
    STATE(460), 1,
      sym_attributes,
    ACTIONS(1295), 2,
      sym_class,
      sym_id,
    STATE(389), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19059] = 12,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    ACTIONS(1301), 1,
      anon_sym_SLASH,
    ACTIONS(1303), 1,
      anon_sym_,
    ACTIONS(1307), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_tag_repeat1,
    STATE(457), 1,
      sym_attributes,
    ACTIONS(1305), 2,
      sym_class,
      sym_id,
    STATE(353), 3,
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
  [19119] = 7,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(1320), 1,
      sym_attribute_name,
    STATE(467), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(728), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19144] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(804), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19169] = 8,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1324), 1,
      anon_sym_COLON,
    ACTIONS(1326), 1,
      anon_sym_SLASH,
    ACTIONS(1328), 1,
      anon_sym_,
    ACTIONS(1330), 1,
      sym__newline,
    STATE(295), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19196] = 8,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1332), 1,
      anon_sym_COLON,
    ACTIONS(1334), 1,
      anon_sym_SLASH,
    ACTIONS(1336), 1,
      anon_sym_,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(164), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19223] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(754), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19248] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(741), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19273] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(775), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19298] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(721), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19323] = 8,
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
    ACTIONS(1163), 1,
      sym__newline,
    STATE(297), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19350] = 8,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      anon_sym_COLON,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    ACTIONS(1277), 1,
      anon_sym_,
    ACTIONS(1279), 1,
      sym__newline,
    STATE(627), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19377] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(776), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19402] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(765), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19427] = 8,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      anon_sym_COLON,
    ACTIONS(1283), 1,
      anon_sym_SLASH,
    ACTIONS(1285), 1,
      anon_sym_,
    ACTIONS(1287), 1,
      sym__newline,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19454] = 8,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    ACTIONS(1354), 1,
      anon_sym_SLASH,
    ACTIONS(1356), 1,
      anon_sym_,
    ACTIONS(1358), 1,
      sym__newline,
    STATE(201), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19481] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(733), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19506] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(772), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19531] = 8,
    ACTIONS(1251), 1,
      anon_sym_COLON,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1257), 1,
      anon_sym_SLASH,
    ACTIONS(1259), 1,
      anon_sym_,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(326), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19558] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(725), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19583] = 8,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1366), 1,
      anon_sym_COLON,
    ACTIONS(1368), 1,
      anon_sym_SLASH,
    ACTIONS(1370), 1,
      anon_sym_,
    ACTIONS(1372), 1,
      sym__newline,
    STATE(351), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19610] = 8,
    ACTIONS(1237), 1,
      anon_sym_COLON,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1243), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      anon_sym_,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1249), 1,
      sym__newline,
    STATE(391), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19637] = 7,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    ACTIONS(1379), 1,
      sym_attribute_name,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(842), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1376), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19662] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(805), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19687] = 8,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1384), 1,
      anon_sym_COLON,
    ACTIONS(1386), 1,
      anon_sym_SLASH,
    ACTIONS(1388), 1,
      anon_sym_,
    ACTIONS(1390), 1,
      sym__newline,
    STATE(630), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19714] = 8,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1265), 1,
      anon_sym_COLON,
    ACTIONS(1267), 1,
      anon_sym_SLASH,
    ACTIONS(1269), 1,
      anon_sym_,
    ACTIONS(1271), 1,
      sym__newline,
    STATE(217), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19741] = 8,
    ACTIONS(1191), 1,
      anon_sym_COLON,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1197), 1,
      anon_sym_SLASH,
    ACTIONS(1199), 1,
      anon_sym_,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1203), 1,
      sym__newline,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19768] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(767), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19793] = 7,
    ACTIONS(1320), 1,
      sym_attribute_name,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(683), 1,
      sym_angular_attribute_name,
    STATE(718), 1,
      sym_attribute,
    STATE(745), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1318), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19818] = 8,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1400), 1,
      anon_sym_,
    ACTIONS(1402), 1,
      sym__newline,
    STATE(392), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19845] = 8,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1404), 1,
      anon_sym_COLON,
    ACTIONS(1406), 1,
      anon_sym_SLASH,
    ACTIONS(1408), 1,
      anon_sym_,
    ACTIONS(1410), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19872] = 7,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    ACTIONS(1356), 1,
      anon_sym_,
    ACTIONS(1358), 1,
      sym__newline,
    STATE(201), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19896] = 7,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1404), 1,
      anon_sym_COLON,
    ACTIONS(1408), 1,
      anon_sym_,
    ACTIONS(1410), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19920] = 7,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1400), 1,
      anon_sym_,
    ACTIONS(1402), 1,
      sym__newline,
    STATE(392), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19944] = 7,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1412), 1,
      anon_sym_COLON,
    ACTIONS(1414), 1,
      anon_sym_,
    ACTIONS(1416), 1,
      sym__newline,
    STATE(396), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19968] = 7,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1418), 1,
      anon_sym_COLON,
    ACTIONS(1420), 1,
      anon_sym_,
    ACTIONS(1422), 1,
      sym__newline,
    STATE(191), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19992] = 7,
    ACTIONS(1191), 1,
      anon_sym_COLON,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1199), 1,
      anon_sym_,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1203), 1,
      sym__newline,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20016] = 7,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(1426), 1,
      anon_sym_,
    ACTIONS(1428), 1,
      sym__newline,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20040] = 7,
    ACTIONS(1177), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(1265), 1,
      anon_sym_COLON,
    ACTIONS(1269), 1,
      anon_sym_,
    ACTIONS(1271), 1,
      sym__newline,
    STATE(217), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20064] = 7,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1430), 1,
      anon_sym_COLON,
    ACTIONS(1432), 1,
      anon_sym_,
    ACTIONS(1434), 1,
      sym__newline,
    STATE(645), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20088] = 7,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1384), 1,
      anon_sym_COLON,
    ACTIONS(1388), 1,
      anon_sym_,
    ACTIONS(1390), 1,
      sym__newline,
    STATE(630), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20112] = 7,
    ACTIONS(1237), 1,
      anon_sym_COLON,
    ACTIONS(1239), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(1245), 1,
      anon_sym_,
    ACTIONS(1247), 1,
      anon_sym_DOT,
    ACTIONS(1249), 1,
      sym__newline,
    STATE(391), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20136] = 7,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1436), 1,
      anon_sym_COLON,
    ACTIONS(1438), 1,
      anon_sym_,
    ACTIONS(1440), 1,
      sym__newline,
    STATE(370), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20160] = 7,
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
    ACTIONS(1163), 1,
      sym__newline,
    STATE(297), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20184] = 7,
    ACTIONS(1251), 1,
      anon_sym_COLON,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1259), 1,
      anon_sym_,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(326), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20208] = 7,
    ACTIONS(1213), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      anon_sym_COLON,
    ACTIONS(1285), 1,
      anon_sym_,
    ACTIONS(1287), 1,
      sym__newline,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20232] = 7,
    ACTIONS(1135), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1137), 1,
      anon_sym_EQ,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      anon_sym_COLON,
    ACTIONS(1277), 1,
      anon_sym_,
    ACTIONS(1279), 1,
      sym__newline,
    STATE(627), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20256] = 7,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1324), 1,
      anon_sym_COLON,
    ACTIONS(1328), 1,
      anon_sym_,
    ACTIONS(1330), 1,
      sym__newline,
    STATE(295), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20280] = 7,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1332), 1,
      anon_sym_COLON,
    ACTIONS(1336), 1,
      anon_sym_,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(164), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20304] = 7,
    ACTIONS(1193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1195), 1,
      anon_sym_EQ,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    ACTIONS(1442), 1,
      anon_sym_COLON,
    ACTIONS(1444), 1,
      anon_sym_,
    ACTIONS(1446), 1,
      sym__newline,
    STATE(156), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20328] = 7,
    ACTIONS(1253), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    ACTIONS(1261), 1,
      anon_sym_DOT,
    ACTIONS(1366), 1,
      anon_sym_COLON,
    ACTIONS(1370), 1,
      anon_sym_,
    ACTIONS(1372), 1,
      sym__newline,
    STATE(351), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20352] = 7,
    ACTIONS(1151), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    ACTIONS(1448), 1,
      anon_sym_COLON,
    ACTIONS(1450), 1,
      anon_sym_,
    ACTIONS(1452), 1,
      sym__newline,
    STATE(272), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [20376] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1460), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20399] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1462), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20422] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1464), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20445] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1466), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20468] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1468), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20491] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1470), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20514] = 8,
    ACTIONS(631), 1,
      aux_sym_include_token1,
    ACTIONS(1472), 1,
      anon_sym_LPAREN,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1476), 1,
      aux_sym_filter_content_token1,
    ACTIONS(1478), 1,
      sym__newline,
    STATE(601), 1,
      sym_attributes,
    STATE(896), 1,
      sym_filter_content,
    STATE(899), 1,
      sym_filter,
  [20539] = 7,
    ACTIONS(1480), 1,
      aux_sym_content_token1,
    ACTIONS(1483), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1489), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20562] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1491), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20585] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1493), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20608] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1495), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20631] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1497), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20654] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1499), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20677] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1501), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20700] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1503), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20723] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1505), 1,
      sym__dedent,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20746] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1507), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20766] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1509), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20786] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1511), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20806] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20826] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1513), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20846] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1519), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20862] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(504), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20882] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1521), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20902] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1523), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20918] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1525), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20938] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(499), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20958] = 3,
    ACTIONS(1527), 1,
      sym__indent,
    STATE(639), 1,
      sym_children,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20972] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1529), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20992] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1531), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21012] = 3,
    ACTIONS(1533), 1,
      sym__indent,
    STATE(639), 1,
      sym_children,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21026] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(496), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21046] = 3,
    ACTIONS(1533), 1,
      sym__indent,
    STATE(629), 1,
      sym_children,
    ACTIONS(684), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21060] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1535), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21080] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1537), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21100] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(501), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21120] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1539), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21136] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1541), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21156] = 2,
    ACTIONS(744), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(746), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [21168] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1543), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21188] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(502), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21208] = 2,
    ACTIONS(785), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(787), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [21220] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1545), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21240] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1547), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(537), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21260] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(506), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21280] = 3,
    ACTIONS(1549), 1,
      sym__indent,
    STATE(645), 1,
      sym_children,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21294] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1551), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21314] = 3,
    ACTIONS(1533), 1,
      sym__indent,
    STATE(645), 1,
      sym_children,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21328] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(505), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21348] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1553), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21368] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1555), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21388] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1557), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(520), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21408] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1559), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21428] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(494), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21448] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1561), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(533), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21468] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1563), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21488] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(495), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21508] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1565), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21524] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1567), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21544] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1569), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21564] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1571), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(546), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21584] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(491), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21604] = 3,
    ACTIONS(1573), 1,
      sym__indent,
    STATE(630), 1,
      sym_children,
    ACTIONS(726), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21618] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1575), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(555), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21638] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1577), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21658] = 6,
    ACTIONS(1579), 1,
      aux_sym_content_token1,
    ACTIONS(1582), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1585), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1588), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21678] = 3,
    ACTIONS(1533), 1,
      sym__indent,
    STATE(638), 1,
      sym_children,
    ACTIONS(696), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21692] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(503), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21712] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1590), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21732] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1592), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21752] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1594), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21768] = 4,
    ACTIONS(1599), 1,
      sym__newline,
    ACTIONS(1602), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1596), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21784] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1604), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21804] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1606), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21824] = 2,
    ACTIONS(753), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(755), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [21836] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1608), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21852] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1610), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21872] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1612), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21892] = 3,
    ACTIONS(1614), 1,
      sym__indent,
    STATE(627), 1,
      sym_children,
    ACTIONS(732), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21906] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1616), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21926] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21946] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1618), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21962] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1620), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21982] = 1,
    ACTIONS(1622), 7,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [21992] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(492), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22012] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1624), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22032] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1626), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22052] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1628), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22072] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1630), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22092] = 6,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1632), 1,
      sym__newline,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22112] = 4,
    ACTIONS(1517), 1,
      sym__newline,
    ACTIONS(1634), 1,
      sym__dedent,
    STATE(562), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22128] = 3,
    ACTIONS(1636), 1,
      sym__newline,
    STATE(515), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22141] = 3,
    ACTIONS(1638), 1,
      sym__newline,
    STATE(581), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22154] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(508), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22171] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(519), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22188] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(516), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22205] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(514), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22222] = 5,
    ACTIONS(1642), 1,
      anon_sym_EQ,
    ACTIONS(1644), 1,
      anon_sym_,
    ACTIONS(1646), 1,
      anon_sym_DOT,
    STATE(607), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1640), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22239] = 3,
    ACTIONS(1648), 1,
      sym__newline,
    STATE(548), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22252] = 3,
    ACTIONS(1650), 1,
      sym__newline,
    STATE(566), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22265] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(567), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22282] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(568), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22299] = 3,
    ACTIONS(1652), 1,
      sym__newline,
    STATE(572), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22312] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(573), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22329] = 2,
    ACTIONS(1654), 1,
      sym__indent,
    ACTIONS(759), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22340] = 4,
    ACTIONS(1658), 1,
      anon_sym_POUND,
    ACTIONS(1660), 1,
      anon_sym_LBRACE,
    ACTIONS(1656), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1662), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22355] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(576), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22372] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(507), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22389] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(570), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22406] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(578), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22423] = 6,
    ACTIONS(669), 1,
      aux_sym_include_token1,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1476), 1,
      aux_sym_filter_content_token1,
    ACTIONS(1478), 1,
      sym__newline,
    STATE(899), 1,
      sym_filter,
    STATE(900), 1,
      sym_filter_content,
  [22442] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(511), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22459] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(580), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22476] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(524), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22493] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(525), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22510] = 3,
    ACTIONS(1664), 1,
      sym__newline,
    STATE(527), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22523] = 4,
    ACTIONS(1668), 1,
      anon_sym_,
    ACTIONS(1670), 1,
      anon_sym_DOT,
    STATE(607), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1666), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [22538] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(577), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22555] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(528), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22572] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(579), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22589] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(530), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22606] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(541), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22623] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(543), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22640] = 5,
    ACTIONS(1646), 1,
      anon_sym_DOT,
    ACTIONS(1675), 1,
      anon_sym_EQ,
    ACTIONS(1677), 1,
      anon_sym_,
    STATE(588), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1673), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22657] = 3,
    ACTIONS(1679), 1,
      sym__newline,
    STATE(512), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22670] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(509), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22687] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(549), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22704] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(564), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22721] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(550), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22738] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(559), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22755] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(560), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22772] = 3,
    ACTIONS(1681), 1,
      sym__newline,
    STATE(561), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22785] = 5,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1456), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1458), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(633), 1,
      aux_sym_content_repeat1,
    STATE(563), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22802] = 3,
    STATE(306), 1,
      sym__dummy_tag,
    STATE(307), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22814] = 1,
    ACTIONS(835), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22822] = 3,
    ACTIONS(1685), 1,
      anon_sym_LBRACE,
    ACTIONS(1683), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1687), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22834] = 1,
    ACTIONS(726), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22842] = 4,
    ACTIONS(1689), 1,
      anon_sym_when,
    ACTIONS(1691), 1,
      anon_sym_default,
    STATE(730), 1,
      sym__when_keyword,
    STATE(102), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22856] = 1,
    ACTIONS(696), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22864] = 1,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22872] = 2,
    ACTIONS(1668), 1,
      anon_sym_,
    ACTIONS(1666), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [22882] = 1,
    ACTIONS(829), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22890] = 4,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1695), 1,
      sym__newline,
    STATE(637), 1,
      aux_sym_content_repeat1,
    ACTIONS(1693), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22904] = 1,
    ACTIONS(839), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22912] = 4,
    ACTIONS(1689), 1,
      anon_sym_when,
    ACTIONS(1697), 1,
      anon_sym_default,
    STATE(777), 1,
      sym__when_keyword,
    STATE(80), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22926] = 4,
    ACTIONS(1689), 1,
      anon_sym_when,
    ACTIONS(1699), 1,
      anon_sym_default,
    STATE(778), 1,
      sym__when_keyword,
    STATE(53), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22940] = 4,
    ACTIONS(1683), 1,
      sym__newline,
    ACTIONS(1701), 1,
      aux_sym_content_token1,
    STATE(637), 1,
      aux_sym_content_repeat1,
    ACTIONS(1687), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22954] = 1,
    ACTIONS(789), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22962] = 1,
    ACTIONS(684), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22970] = 3,
    STATE(176), 1,
      sym__dummy_tag,
    STATE(178), 1,
      sym_tag,
    ACTIONS(1704), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22982] = 1,
    ACTIONS(819), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22990] = 1,
    ACTIONS(1374), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [22998] = 1,
    ACTIONS(732), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23006] = 1,
    ACTIONS(793), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23014] = 1,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23022] = 3,
    STATE(116), 1,
      sym__dummy_tag,
    STATE(117), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23034] = 1,
    ACTIONS(825), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [23042] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1708), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23055] = 4,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1712), 1,
      sym__newline,
    STATE(213), 1,
      sym__single_line_buf_code,
    STATE(1014), 1,
      sym__un_delimited_javascript,
  [23068] = 4,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1718), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [23081] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1720), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23094] = 4,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1722), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [23107] = 2,
    STATE(121), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23116] = 4,
    ACTIONS(1724), 1,
      anon_sym_append,
    ACTIONS(1726), 1,
      anon_sym_prepend,
    ACTIONS(1728), 1,
      sym_tag_name,
    STATE(366), 1,
      sym__block_content,
  [23129] = 2,
    STATE(191), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23138] = 4,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1730), 1,
      sym__newline,
    STATE(256), 1,
      sym__single_line_buf_code,
    STATE(904), 1,
      sym__un_delimited_javascript,
  [23151] = 2,
    STATE(127), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23160] = 2,
    ACTIONS(744), 1,
      sym__newline,
    ACTIONS(746), 3,
      aux_sym_include_token1,
      anon_sym_COLON,
      aux_sym_filter_content_token1,
  [23169] = 4,
    ACTIONS(1732), 1,
      anon_sym_append,
    ACTIONS(1734), 1,
      anon_sym_prepend,
    ACTIONS(1736), 1,
      sym_tag_name,
    STATE(277), 1,
      sym__block_content,
  [23182] = 2,
    STATE(153), 1,
      sym_tag,
    ACTIONS(1704), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23191] = 2,
    STATE(156), 1,
      sym_tag,
    ACTIONS(1704), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23200] = 4,
    ACTIONS(1738), 1,
      anon_sym_append,
    ACTIONS(1740), 1,
      anon_sym_prepend,
    ACTIONS(1742), 1,
      sym_tag_name,
    STATE(237), 1,
      sym__block_content,
  [23213] = 2,
    STATE(348), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23222] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1744), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23235] = 4,
    ACTIONS(1746), 1,
      aux_sym_include_token1,
    ACTIONS(1749), 1,
      sym__newline,
    ACTIONS(1752), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [23248] = 2,
    STATE(272), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23257] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1754), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23270] = 2,
    STATE(220), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23279] = 4,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1756), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [23292] = 4,
    ACTIONS(1758), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1761), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23305] = 2,
    STATE(114), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23314] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1763), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23327] = 2,
    STATE(164), 1,
      sym_tag,
    ACTIONS(1704), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23336] = 2,
    STATE(295), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23345] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1765), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23358] = 2,
    STATE(105), 1,
      sym_tag,
    ACTIONS(97), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23367] = 4,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1767), 1,
      sym__newline,
    STATE(400), 1,
      sym__single_line_buf_code,
    STATE(898), 1,
      sym__un_delimited_javascript,
  [23380] = 2,
    ACTIONS(753), 1,
      sym__newline,
    ACTIONS(755), 3,
      aux_sym_include_token1,
      anon_sym_COLON,
      aux_sym_filter_content_token1,
  [23389] = 4,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1769), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [23402] = 2,
    STATE(173), 1,
      sym_tag,
    ACTIONS(1704), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23411] = 2,
    ACTIONS(1773), 1,
      anon_sym_,
    ACTIONS(1771), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [23420] = 2,
    STATE(326), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23429] = 3,
    ACTIONS(1777), 1,
      anon_sym_EQ,
    ACTIONS(1779), 1,
      anon_sym_,
    ACTIONS(1775), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23440] = 2,
    STATE(391), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23449] = 4,
    ACTIONS(1781), 1,
      anon_sym_append,
    ACTIONS(1783), 1,
      anon_sym_prepend,
    ACTIONS(1785), 1,
      sym_tag_name,
    STATE(130), 1,
      sym__block_content,
  [23462] = 2,
    STATE(297), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23471] = 4,
    ACTIONS(1787), 1,
      anon_sym_append,
    ACTIONS(1789), 1,
      anon_sym_prepend,
    ACTIONS(1791), 1,
      sym_tag_name,
    STATE(414), 1,
      sym__block_content,
  [23484] = 2,
    STATE(351), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23493] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1793), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23506] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1795), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23519] = 2,
    STATE(201), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23528] = 2,
    STATE(639), 1,
      sym_tag,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23537] = 2,
    STATE(265), 1,
      sym_tag,
    ACTIONS(477), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23546] = 2,
    STATE(370), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23555] = 2,
    STATE(401), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23564] = 2,
    STATE(630), 1,
      sym_tag,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23573] = 2,
    ACTIONS(1797), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1799), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23582] = 2,
    STATE(645), 1,
      sym_tag,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23591] = 2,
    ACTIONS(1489), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1801), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23600] = 2,
    STATE(392), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23609] = 2,
    STATE(627), 1,
      sym_tag,
    ACTIONS(1515), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23618] = 2,
    STATE(396), 1,
      sym_tag,
    ACTIONS(527), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23627] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1803), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23640] = 2,
    ACTIONS(785), 1,
      sym__newline,
    ACTIONS(787), 3,
      aux_sym_include_token1,
      anon_sym_COLON,
      aux_sym_filter_content_token1,
  [23649] = 4,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1805), 1,
      sym__newline,
    STATE(144), 1,
      sym__single_line_buf_code,
    STATE(961), 1,
      sym__un_delimited_javascript,
  [23662] = 2,
    STATE(217), 1,
      sym_tag,
    ACTIONS(218), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23671] = 4,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1807), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_script_block_repeat1,
  [23684] = 2,
    ACTIONS(1683), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1687), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23693] = 4,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1809), 1,
      sym__newline,
    STATE(266), 1,
      sym__single_line_buf_code,
    STATE(996), 1,
      sym__un_delimited_javascript,
  [23706] = 4,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1811), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23719] = 2,
    ACTIONS(1813), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1815), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [23728] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(303), 1,
      sym__single_line_buf_code,
    STATE(904), 1,
      sym__un_delimited_javascript,
  [23738] = 2,
    ACTIONS(1819), 1,
      anon_sym_,
    ACTIONS(1817), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23746] = 3,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [23756] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1823), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [23766] = 2,
    ACTIONS(1827), 1,
      anon_sym_,
    ACTIONS(1825), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23774] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(651), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23784] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1831), 1,
      anon_sym_RPAREN,
    ACTIONS(1833), 1,
      anon_sym_,
  [23794] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1835), 1,
      sym__dedent,
    STATE(715), 1,
      aux_sym_filter_content_repeat1,
  [23804] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23814] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1837), 1,
      anon_sym_RPAREN,
  [23824] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(672), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [23834] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1839), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [23844] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1841), 1,
      sym__dedent,
    STATE(729), 1,
      aux_sym_filter_content_repeat1,
  [23854] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1843), 1,
      anon_sym_RPAREN,
  [23864] = 2,
    ACTIONS(1847), 1,
      anon_sym_,
    ACTIONS(1845), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23872] = 3,
    ACTIONS(1849), 1,
      sym__un_delimited_javascript_line,
    STATE(62), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(118), 1,
      sym__multi_line_buf_code,
  [23882] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1851), 1,
      anon_sym_RPAREN,
  [23892] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1853), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [23902] = 3,
    ACTIONS(1855), 1,
      anon_sym_COLON,
    ACTIONS(1857), 1,
      sym__newline,
    STATE(302), 1,
      sym__when_content,
  [23912] = 2,
    ACTIONS(1861), 1,
      anon_sym_,
    ACTIONS(1859), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23920] = 3,
    ACTIONS(1863), 1,
      sym__un_delimited_javascript_line,
    STATE(154), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(285), 1,
      sym__multi_line_buf_code,
  [23930] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1865), 1,
      anon_sym_RPAREN,
  [23940] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(305), 1,
      sym__single_line_buf_code,
    STATE(904), 1,
      sym__un_delimited_javascript,
  [23950] = 3,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1867), 1,
      aux_sym_include_token1,
    STATE(935), 1,
      sym_filter,
  [23960] = 2,
    ACTIONS(1871), 1,
      anon_sym_,
    ACTIONS(1869), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23968] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(634), 1,
      sym__single_line_buf_code,
    STATE(987), 1,
      sym__un_delimited_javascript,
  [23978] = 1,
    ACTIONS(1873), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23984] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(647), 1,
      sym__single_line_buf_code,
    STATE(987), 1,
      sym__un_delimited_javascript,
  [23994] = 3,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1875), 1,
      aux_sym_include_token1,
    STATE(988), 1,
      sym_filter,
  [24004] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1877), 1,
      anon_sym_RPAREN,
  [24014] = 2,
    ACTIONS(1881), 1,
      anon_sym_,
    ACTIONS(1879), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24022] = 3,
    ACTIONS(1883), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1885), 1,
      sym__newline,
    STATE(1010), 1,
      sym__comment_content,
  [24032] = 3,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1887), 1,
      aux_sym_include_token1,
    STATE(1017), 1,
      sym_filter,
  [24042] = 2,
    ACTIONS(1891), 1,
      anon_sym_,
    ACTIONS(1889), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24050] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(103), 1,
      sym__single_line_buf_code,
    STATE(961), 1,
      sym__un_delimited_javascript,
  [24060] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(108), 1,
      sym__single_line_buf_code,
    STATE(961), 1,
      sym__un_delimited_javascript,
  [24070] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1893), 1,
      sym__dedent,
    STATE(784), 1,
      aux_sym_filter_content_repeat1,
  [24080] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(230), 1,
      sym__single_line_buf_code,
    STATE(1014), 1,
      sym__un_delimited_javascript,
  [24090] = 3,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    STATE(707), 1,
      aux_sym_script_block_repeat1,
  [24100] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(710), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24110] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(388), 1,
      sym__single_line_buf_code,
    STATE(898), 1,
      sym__un_delimited_javascript,
  [24120] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(387), 1,
      sym__single_line_buf_code,
    STATE(898), 1,
      sym__un_delimited_javascript,
  [24130] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1895), 1,
      anon_sym_RPAREN,
  [24140] = 1,
    ACTIONS(1897), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24146] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(1014), 1,
      sym__un_delimited_javascript,
  [24156] = 2,
    ACTIONS(1901), 1,
      anon_sym_,
    ACTIONS(1899), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24164] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(361), 1,
      sym__single_line_buf_code,
    STATE(937), 1,
      sym__un_delimited_javascript,
  [24174] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(703), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24184] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(359), 1,
      sym__single_line_buf_code,
    STATE(937), 1,
      sym__un_delimited_javascript,
  [24194] = 3,
    ACTIONS(1903), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1905), 1,
      sym__newline,
    STATE(997), 1,
      sym__comment_content,
  [24204] = 3,
    ACTIONS(1907), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1909), 1,
      sym__newline,
    STATE(914), 1,
      sym__comment_content,
  [24214] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(690), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24224] = 3,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    STATE(679), 1,
      aux_sym_script_block_repeat1,
  [24234] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1911), 1,
      anon_sym_RPAREN,
  [24244] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1913), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [24254] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1915), 1,
      anon_sym_RPAREN,
  [24264] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(675), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24274] = 3,
    ACTIONS(1917), 1,
      aux_sym__each_js_token1,
    STATE(816), 1,
      sym__each_js,
    STATE(1037), 1,
      sym_iteration_variable,
  [24284] = 3,
    ACTIONS(1919), 1,
      sym__un_delimited_javascript_line,
    STATE(151), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(262), 1,
      sym__multi_line_buf_code,
  [24294] = 3,
    ACTIONS(1917), 1,
      aux_sym__each_js_token1,
    STATE(816), 1,
      sym__each_js,
    STATE(959), 1,
      sym_iteration_variable,
  [24304] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1921), 1,
      anon_sym_RPAREN,
  [24314] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1923), 1,
      sym__dedent,
    STATE(781), 1,
      aux_sym_filter_content_repeat1,
  [24324] = 3,
    ACTIONS(1925), 1,
      anon_sym_SQUOTE,
    ACTIONS(1927), 1,
      anon_sym_DQUOTE,
    STATE(731), 1,
      sym_quoted_javascript,
  [24334] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1929), 1,
      anon_sym_RPAREN,
  [24344] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1931), 1,
      anon_sym_RPAREN,
  [24354] = 3,
    ACTIONS(1933), 1,
      anon_sym_COLON,
    ACTIONS(1935), 1,
      sym__newline,
    STATE(158), 1,
      sym__when_content,
  [24364] = 3,
    ACTIONS(1937), 1,
      anon_sym_COLON,
    ACTIONS(1939), 1,
      sym__newline,
    STATE(89), 1,
      sym__when_content,
  [24374] = 3,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1941), 1,
      aux_sym_include_token1,
    STATE(994), 1,
      sym_filter,
  [24384] = 3,
    ACTIONS(1943), 1,
      sym__un_delimited_javascript_line,
    STATE(276), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(390), 1,
      sym__multi_line_buf_code,
  [24394] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1945), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [24404] = 1,
    ACTIONS(1947), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24410] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(689), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24420] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1949), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [24430] = 3,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    STATE(652), 1,
      aux_sym_script_block_repeat1,
  [24440] = 1,
    ACTIONS(1951), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24446] = 3,
    ACTIONS(1474), 1,
      anon_sym_COLON,
    ACTIONS(1953), 1,
      aux_sym_include_token1,
    STATE(964), 1,
      sym_filter,
  [24456] = 3,
    ACTIONS(1917), 1,
      aux_sym__each_js_token1,
    STATE(816), 1,
      sym__each_js,
    STATE(1042), 1,
      sym_iteration_variable,
  [24466] = 3,
    ACTIONS(1955), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1957), 1,
      sym__newline,
    STATE(960), 1,
      sym__comment_content,
  [24476] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1959), 1,
      sym__dedent,
    STATE(723), 1,
      aux_sym_filter_content_repeat1,
  [24486] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(168), 1,
      sym__single_line_buf_code,
    STATE(936), 1,
      sym__un_delimited_javascript,
  [24496] = 3,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(169), 1,
      sym__single_line_buf_code,
    STATE(936), 1,
      sym__un_delimited_javascript,
  [24506] = 3,
    ACTIONS(1917), 1,
      aux_sym__each_js_token1,
    STATE(816), 1,
      sym__each_js,
    STATE(1046), 1,
      sym_iteration_variable,
  [24516] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(648), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24526] = 1,
    ACTIONS(1961), 3,
      sym__newline,
      sym__dedent,
      aux_sym_include_token1,
  [24532] = 3,
    ACTIONS(1706), 1,
      aux_sym_filter_content_token2,
    STATE(667), 1,
      aux_sym__comment_repeat1,
    STATE(932), 1,
      sym__comment_content,
  [24542] = 2,
    ACTIONS(1965), 1,
      anon_sym_,
    ACTIONS(1963), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24550] = 3,
    ACTIONS(1714), 1,
      aux_sym_include_token1,
    ACTIONS(1716), 1,
      sym__newline,
    STATE(669), 1,
      aux_sym_script_block_repeat1,
  [24560] = 3,
    ACTIONS(1967), 1,
      anon_sym_RPAREN,
    ACTIONS(1969), 1,
      aux_sym_mixin_attributes_token1,
    STATE(845), 1,
      aux_sym_mixin_attributes_repeat1,
  [24570] = 3,
    ACTIONS(1971), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1973), 1,
      sym__newline,
    STATE(985), 1,
      sym__comment_content,
  [24580] = 3,
    ACTIONS(1975), 1,
      sym__un_delimited_javascript_line,
    STATE(91), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(190), 1,
      sym__multi_line_buf_code,
  [24590] = 1,
    ACTIONS(1977), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [24596] = 1,
    ACTIONS(1752), 3,
      sym__newline,
      sym__dedent,
      aux_sym_include_token1,
  [24602] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1979), 1,
      anon_sym_RPAREN,
  [24612] = 3,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
    ACTIONS(1981), 1,
      anon_sym_RPAREN,
  [24622] = 3,
    ACTIONS(1983), 1,
      anon_sym_LPAREN,
    ACTIONS(1985), 1,
      sym__newline,
    STATE(993), 1,
      sym_mixin_attributes,
  [24632] = 3,
    ACTIONS(1987), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1990), 1,
      sym__dedent,
    STATE(807), 1,
      aux_sym_filter_content_repeat1,
  [24642] = 3,
    ACTIONS(1821), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1992), 1,
      sym__dedent,
    STATE(766), 1,
      aux_sym_filter_content_repeat1,
  [24652] = 3,
    ACTIONS(1917), 1,
      aux_sym__each_js_token1,
    STATE(816), 1,
      sym__each_js,
    STATE(1050), 1,
      sym_iteration_variable,
  [24662] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(149), 1,
      sym_children,
  [24669] = 2,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(384), 1,
      sym_children,
  [24676] = 2,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(345), 1,
      sym_children,
  [24683] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(340), 1,
      sym_children,
  [24690] = 1,
    ACTIONS(1819), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24695] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(257), 1,
      sym_children,
  [24702] = 2,
    ACTIONS(1994), 1,
      anon_sym_COMMA,
    ACTIONS(1996), 1,
      anon_sym_in,
  [24709] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(325), 1,
      sym_children,
  [24716] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(288), 1,
      sym_children,
  [24723] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(327), 1,
      sym_children,
  [24730] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(269), 1,
      sym_children,
  [24737] = 1,
    ACTIONS(1990), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [24742] = 2,
    ACTIONS(1998), 1,
      sym_tag_name,
    STATE(287), 1,
      sym__block_content,
  [24749] = 2,
    ACTIONS(1998), 1,
      sym_tag_name,
    STATE(267), 1,
      sym__block_content,
  [24756] = 1,
    ACTIONS(1901), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24761] = 1,
    ACTIONS(2000), 2,
      sym__newline,
      anon_sym_COLON,
  [24766] = 2,
    ACTIONS(1998), 1,
      sym_tag_name,
    STATE(289), 1,
      sym__block_content,
  [24773] = 2,
    ACTIONS(1998), 1,
      sym_tag_name,
    STATE(275), 1,
      sym__block_content,
  [24780] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(372), 1,
      sym_children,
  [24787] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(167), 1,
      sym_children,
  [24794] = 2,
    ACTIONS(2002), 1,
      sym_tag_name,
    STATE(339), 1,
      sym__block_content,
  [24801] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(332), 1,
      sym_children,
  [24808] = 2,
    ACTIONS(2002), 1,
      sym_tag_name,
    STATE(338), 1,
      sym__block_content,
  [24815] = 2,
    ACTIONS(2004), 1,
      sym_tag_name,
    STATE(236), 1,
      sym__block_content,
  [24822] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(214), 1,
      sym_children,
  [24829] = 2,
    ACTIONS(2004), 1,
      sym_tag_name,
    STATE(235), 1,
      sym__block_content,
  [24836] = 2,
    ACTIONS(2006), 1,
      anon_sym_COMMA,
    ACTIONS(2008), 1,
      anon_sym_RPAREN,
  [24843] = 2,
    ACTIONS(2002), 1,
      sym_tag_name,
    STATE(364), 1,
      sym__block_content,
  [24850] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(999), 1,
      sym_iteration_iterator,
  [24857] = 2,
    ACTIONS(2012), 1,
      aux_sym__each_js_token1,
    STATE(998), 1,
      sym__each_js,
  [24864] = 2,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(397), 1,
      sym_children,
  [24871] = 2,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(399), 1,
      sym_children,
  [24878] = 2,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_,
  [24885] = 2,
    ACTIONS(989), 1,
      sym__indent,
    STATE(309), 1,
      sym_children,
  [24892] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(324), 1,
      sym_children,
  [24899] = 2,
    ACTIONS(2014), 1,
      aux_sym_mixin_attributes_token1,
    STATE(876), 1,
      aux_sym_mixin_attributes_repeat1,
  [24906] = 2,
    ACTIONS(2016), 1,
      sym_tag_name,
    STATE(406), 1,
      sym__block_content,
  [24913] = 2,
    ACTIONS(2016), 1,
      sym_tag_name,
    STATE(407), 1,
      sym__block_content,
  [24920] = 2,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(408), 1,
      sym_children,
  [24927] = 2,
    ACTIONS(2018), 1,
      anon_sym_COMMA,
    ACTIONS(2020), 1,
      anon_sym_RPAREN,
  [24934] = 2,
    ACTIONS(2016), 1,
      sym_tag_name,
    STATE(412), 1,
      sym__block_content,
  [24941] = 2,
    ACTIONS(2006), 1,
      anon_sym_COMMA,
    ACTIONS(2022), 1,
      anon_sym_RPAREN,
  [24948] = 2,
    ACTIONS(2016), 1,
      sym_tag_name,
    STATE(413), 1,
      sym__block_content,
  [24955] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
  [24962] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(223), 1,
      sym_children,
  [24969] = 2,
    ACTIONS(2004), 1,
      sym_tag_name,
    STATE(222), 1,
      sym__block_content,
  [24976] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(973), 1,
      sym_iteration_iterator,
  [24983] = 2,
    ACTIONS(2004), 1,
      sym_tag_name,
    STATE(221), 1,
      sym__block_content,
  [24990] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(81), 1,
      sym_children,
  [24997] = 2,
    ACTIONS(2024), 1,
      anon_sym_DQUOTE,
    ACTIONS(2026), 1,
      aux_sym_quoted_javascript_token2,
  [25004] = 2,
    ACTIONS(2024), 1,
      anon_sym_SQUOTE,
    ACTIONS(2028), 1,
      aux_sym_quoted_javascript_token1,
  [25011] = 2,
    ACTIONS(2030), 1,
      anon_sym_SQUOTE,
    ACTIONS(2032), 1,
      aux_sym_quoted_javascript_token1,
  [25018] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(907), 1,
      sym_iteration_iterator,
  [25025] = 2,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(908), 1,
      sym__un_delimited_javascript,
  [25032] = 2,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(942), 1,
      sym__un_delimited_javascript,
  [25039] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(145), 1,
      sym_children,
  [25046] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(209), 1,
      sym_children,
  [25053] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(916), 1,
      sym_iteration_iterator,
  [25060] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(930), 1,
      sym_iteration_iterator,
  [25067] = 2,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(931), 1,
      sym__un_delimited_javascript,
  [25074] = 2,
    ACTIONS(2034), 1,
      sym_tag_name,
    STATE(143), 1,
      sym__block_content,
  [25081] = 1,
    ACTIONS(1965), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [25086] = 2,
    ACTIONS(2034), 1,
      sym_tag_name,
    STATE(142), 1,
      sym__block_content,
  [25093] = 2,
    ACTIONS(675), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
  [25100] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(939), 1,
      sym_iteration_iterator,
  [25107] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(950), 1,
      sym_iteration_iterator,
  [25114] = 2,
    ACTIONS(2036), 1,
      aux_sym_mixin_attributes_token1,
    STATE(876), 1,
      aux_sym_mixin_attributes_repeat1,
  [25121] = 2,
    ACTIONS(2018), 1,
      anon_sym_COMMA,
    ACTIONS(2039), 1,
      anon_sym_RPAREN,
  [25128] = 2,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(951), 1,
      sym__un_delimited_javascript,
  [25135] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(958), 1,
      sym_iteration_iterator,
  [25142] = 2,
    ACTIONS(2034), 1,
      sym_tag_name,
    STATE(132), 1,
      sym__block_content,
  [25149] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(334), 1,
      sym_children,
  [25156] = 2,
    ACTIONS(2034), 1,
      sym_tag_name,
    STATE(131), 1,
      sym__block_content,
  [25163] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(969), 1,
      sym_iteration_iterator,
  [25170] = 2,
    ACTIONS(1710), 1,
      sym__un_delimited_javascript_line,
    STATE(970), 1,
      sym__un_delimited_javascript,
  [25177] = 2,
    ACTIONS(2030), 1,
      anon_sym_DQUOTE,
    ACTIONS(2041), 1,
      aux_sym_quoted_javascript_token2,
  [25184] = 2,
    ACTIONS(2010), 1,
      aux_sym_include_token1,
    STATE(977), 1,
      sym_iteration_iterator,
  [25191] = 2,
    ACTIONS(1017), 1,
      sym__indent,
    STATE(284), 1,
      sym_children,
  [25198] = 2,
    ACTIONS(2002), 1,
      sym_tag_name,
    STATE(365), 1,
      sym__block_content,
  [25205] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(247), 1,
      sym_children,
  [25212] = 2,
    ACTIONS(2043), 1,
      anon_sym_DQUOTE,
    ACTIONS(2045), 1,
      aux_sym_quoted_javascript_token2,
  [25219] = 2,
    ACTIONS(2043), 1,
      anon_sym_SQUOTE,
    ACTIONS(2047), 1,
      aux_sym_quoted_javascript_token1,
  [25226] = 2,
    ACTIONS(811), 1,
      sym__indent,
    STATE(206), 1,
      sym_children,
  [25233] = 1,
    ACTIONS(1761), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [25238] = 1,
    ACTIONS(2049), 1,
      aux_sym_filter_content_token2,
  [25242] = 1,
    ACTIONS(2051), 1,
      anon_sym_SQUOTE,
  [25246] = 1,
    ACTIONS(667), 1,
      aux_sym_include_token1,
  [25250] = 1,
    ACTIONS(2053), 1,
      sym__newline,
  [25254] = 1,
    ACTIONS(2055), 1,
      sym__newline,
  [25258] = 1,
    ACTIONS(869), 1,
      aux_sym_include_token1,
  [25262] = 1,
    ACTIONS(921), 1,
      aux_sym_include_token1,
  [25266] = 1,
    ACTIONS(967), 1,
      aux_sym_include_token1,
  [25270] = 1,
    ACTIONS(2057), 1,
      sym__newline,
  [25274] = 1,
    ACTIONS(963), 1,
      aux_sym_include_token1,
  [25278] = 1,
    ACTIONS(2059), 1,
      sym__newline,
  [25282] = 1,
    ACTIONS(2061), 1,
      sym__newline,
  [25286] = 1,
    ACTIONS(2063), 1,
      aux_sym_unbuffered_code_token1,
  [25290] = 1,
    ACTIONS(2065), 1,
      sym__newline,
  [25294] = 1,
    ACTIONS(2067), 1,
      sym__newline,
  [25298] = 1,
    ACTIONS(2069), 1,
      sym__indent,
  [25302] = 1,
    ACTIONS(2071), 1,
      sym__indent,
  [25306] = 1,
    ACTIONS(2073), 1,
      aux_sym_mixin_attributes_token1,
  [25310] = 1,
    ACTIONS(2051), 1,
      anon_sym_DQUOTE,
  [25314] = 1,
    ACTIONS(2075), 1,
      sym__newline,
  [25318] = 1,
    ACTIONS(2077), 1,
      sym__newline,
  [25322] = 1,
    ACTIONS(2079), 1,
      sym__indent,
  [25326] = 1,
    ACTIONS(2081), 1,
      sym__newline,
  [25330] = 1,
    ACTIONS(2083), 1,
      anon_sym_RBRACE,
  [25334] = 1,
    ACTIONS(2085), 1,
      anon_sym_DQUOTE,
  [25338] = 1,
    ACTIONS(2087), 1,
      aux_sym__attribute_token1,
  [25342] = 1,
    ACTIONS(2083), 1,
      anon_sym_RBRACE_RBRACE,
  [25346] = 1,
    ACTIONS(2089), 1,
      sym__newline,
  [25350] = 1,
    ACTIONS(2085), 1,
      anon_sym_SQUOTE,
  [25354] = 1,
    ACTIONS(2091), 1,
      sym__newline,
  [25358] = 1,
    ACTIONS(2093), 1,
      sym__indent,
  [25362] = 1,
    ACTIONS(2095), 1,
      sym_tag_name,
  [25366] = 1,
    ACTIONS(2097), 1,
      sym_tag_name,
  [25370] = 1,
    ACTIONS(2099), 1,
      sym__newline,
  [25374] = 1,
    ACTIONS(2101), 1,
      sym__indent,
  [25378] = 1,
    ACTIONS(2103), 1,
      aux_sym_unbuffered_code_token1,
  [25382] = 1,
    ACTIONS(2105), 1,
      sym__newline,
  [25386] = 1,
    ACTIONS(2107), 1,
      sym__newline,
  [25390] = 1,
    ACTIONS(2109), 1,
      sym__newline,
  [25394] = 1,
    ACTIONS(2111), 1,
      sym__indent,
  [25398] = 1,
    ACTIONS(2113), 1,
      sym__indent,
  [25402] = 1,
    ACTIONS(2115), 1,
      aux_sym_include_token1,
  [25406] = 1,
    ACTIONS(2117), 1,
      sym__newline,
  [25410] = 1,
    ACTIONS(2119), 1,
      sym__newline,
  [25414] = 1,
    ACTIONS(2121), 1,
      sym__indent,
  [25418] = 1,
    ACTIONS(2123), 1,
      sym__newline,
  [25422] = 1,
    ACTIONS(2125), 1,
      sym_filter_name,
  [25426] = 1,
    ACTIONS(2127), 1,
      sym__newline,
  [25430] = 1,
    ACTIONS(2129), 1,
      sym__newline,
  [25434] = 1,
    ACTIONS(2131), 1,
      sym__newline,
  [25438] = 1,
    ACTIONS(2133), 1,
      sym__newline,
  [25442] = 1,
    ACTIONS(2135), 1,
      sym__newline,
  [25446] = 1,
    ACTIONS(2137), 1,
      sym__newline,
  [25450] = 1,
    ACTIONS(2139), 1,
      sym__newline,
  [25454] = 1,
    ACTIONS(2141), 1,
      aux_sym_filter_content_token2,
  [25458] = 1,
    ACTIONS(2143), 1,
      aux_sym_unbuffered_code_token1,
  [25462] = 1,
    ACTIONS(2145), 1,
      sym__newline,
  [25466] = 1,
    ACTIONS(2147), 1,
      sym__newline,
  [25470] = 1,
    ACTIONS(2018), 1,
      anon_sym_COMMA,
  [25474] = 1,
    ACTIONS(2149), 1,
      sym__indent,
  [25478] = 1,
    ACTIONS(2151), 1,
      sym__newline,
  [25482] = 1,
    ACTIONS(2006), 1,
      anon_sym_COMMA,
  [25486] = 1,
    ACTIONS(2153), 1,
      ts_builtin_sym_end,
  [25490] = 1,
    ACTIONS(2155), 1,
      sym__indent,
  [25494] = 1,
    ACTIONS(2157), 1,
      sym__newline,
  [25498] = 1,
    ACTIONS(2159), 1,
      anon_sym_in,
  [25502] = 1,
    ACTIONS(2161), 1,
      sym__newline,
  [25506] = 1,
    ACTIONS(2163), 1,
      sym__newline,
  [25510] = 1,
    ACTIONS(2165), 1,
      sym__indent,
  [25514] = 1,
    ACTIONS(2167), 1,
      aux_sym_filter_content_token2,
  [25518] = 1,
    ACTIONS(2169), 1,
      aux_sym_include_token1,
  [25522] = 1,
    ACTIONS(2171), 1,
      sym__newline,
  [25526] = 1,
    ACTIONS(2173), 1,
      sym__newline,
  [25530] = 1,
    ACTIONS(2175), 1,
      sym_filter_name,
  [25534] = 1,
    ACTIONS(2177), 1,
      aux_sym_unbuffered_code_token1,
  [25538] = 1,
    ACTIONS(2179), 1,
      sym__newline,
  [25542] = 1,
    ACTIONS(2181), 1,
      sym__newline,
  [25546] = 1,
    ACTIONS(2183), 1,
      aux_sym_include_token1,
  [25550] = 1,
    ACTIONS(2185), 1,
      sym__indent,
  [25554] = 1,
    ACTIONS(2187), 1,
      sym__newline,
  [25558] = 1,
    ACTIONS(2189), 1,
      sym__newline,
  [25562] = 1,
    ACTIONS(2191), 1,
      sym__delimited_javascript,
  [25566] = 1,
    ACTIONS(2193), 1,
      sym__indent,
  [25570] = 1,
    ACTIONS(2195), 1,
      sym__newline,
  [25574] = 1,
    ACTIONS(2197), 1,
      sym__indent,
  [25578] = 1,
    ACTIONS(917), 1,
      aux_sym_include_token1,
  [25582] = 1,
    ACTIONS(2199), 1,
      aux_sym_include_token1,
  [25586] = 1,
    ACTIONS(2201), 1,
      aux_sym_filter_content_token2,
  [25590] = 1,
    ACTIONS(2203), 1,
      aux_sym_include_token1,
  [25594] = 1,
    ACTIONS(2205), 1,
      sym_filter_name,
  [25598] = 1,
    ACTIONS(2207), 1,
      sym__newline,
  [25602] = 1,
    ACTIONS(2209), 1,
      sym__newline,
  [25606] = 1,
    ACTIONS(2211), 1,
      sym__indent,
  [25610] = 1,
    ACTIONS(2213), 1,
      sym__newline,
  [25614] = 1,
    ACTIONS(2215), 1,
      aux_sym_include_token1,
  [25618] = 1,
    ACTIONS(2217), 1,
      sym_filter_name,
  [25622] = 1,
    ACTIONS(2219), 1,
      sym__newline,
  [25626] = 1,
    ACTIONS(2221), 1,
      aux_sym_include_token1,
  [25630] = 1,
    ACTIONS(2223), 1,
      sym__indent,
  [25634] = 1,
    ACTIONS(2225), 1,
      sym__newline,
  [25638] = 1,
    ACTIONS(2227), 1,
      aux_sym_include_token1,
  [25642] = 1,
    ACTIONS(2229), 1,
      sym__indent,
  [25646] = 1,
    ACTIONS(2231), 1,
      sym__newline,
  [25650] = 1,
    ACTIONS(2233), 1,
      sym__newline,
  [25654] = 1,
    ACTIONS(2235), 1,
      anon_sym_in,
  [25658] = 1,
    ACTIONS(2237), 1,
      sym__newline,
  [25662] = 1,
    ACTIONS(2239), 1,
      sym__newline,
  [25666] = 1,
    ACTIONS(2241), 1,
      aux_sym__when_keyword_token1,
  [25670] = 1,
    ACTIONS(2243), 1,
      sym_filter_name,
  [25674] = 1,
    ACTIONS(2245), 1,
      sym__newline,
  [25678] = 1,
    ACTIONS(2247), 1,
      sym__indent,
  [25682] = 1,
    ACTIONS(2249), 1,
      sym__indent,
  [25686] = 1,
    ACTIONS(2251), 1,
      aux_sym_filter_content_token2,
  [25690] = 1,
    ACTIONS(2253), 1,
      sym__indent,
  [25694] = 1,
    ACTIONS(2255), 1,
      sym__indent,
  [25698] = 1,
    ACTIONS(2257), 1,
      sym__delimited_javascript,
  [25702] = 1,
    ACTIONS(2259), 1,
      sym__newline,
  [25706] = 1,
    ACTIONS(2261), 1,
      sym__newline,
  [25710] = 1,
    ACTIONS(2263), 1,
      sym__indent,
  [25714] = 1,
    ACTIONS(2265), 1,
      sym__indent,
  [25718] = 1,
    ACTIONS(2267), 1,
      sym__newline,
  [25722] = 1,
    ACTIONS(2269), 1,
      sym__indent,
  [25726] = 1,
    ACTIONS(2271), 1,
      sym__indent,
  [25730] = 1,
    ACTIONS(2273), 1,
      aux_sym_include_token1,
  [25734] = 1,
    ACTIONS(2275), 1,
      aux_sym_filter_content_token2,
  [25738] = 1,
    ACTIONS(2277), 1,
      sym__indent,
  [25742] = 1,
    ACTIONS(2279), 1,
      sym__indent,
  [25746] = 1,
    ACTIONS(2281), 1,
      sym_filter_name,
  [25750] = 1,
    ACTIONS(2283), 1,
      sym__indent,
  [25754] = 1,
    ACTIONS(2285), 1,
      sym__indent,
  [25758] = 1,
    ACTIONS(2287), 1,
      aux_sym_include_token1,
  [25762] = 1,
    ACTIONS(2289), 1,
      sym__un_delimited_javascript_line,
  [25766] = 1,
    ACTIONS(2291), 1,
      sym__indent,
  [25770] = 1,
    ACTIONS(2293), 1,
      sym__indent,
  [25774] = 1,
    ACTIONS(2295), 1,
      sym__newline,
  [25778] = 1,
    ACTIONS(2297), 1,
      sym__indent,
  [25782] = 1,
    ACTIONS(2299), 1,
      sym__indent,
  [25786] = 1,
    ACTIONS(2301), 1,
      sym__indent,
  [25790] = 1,
    ACTIONS(2303), 1,
      sym__indent,
  [25794] = 1,
    ACTIONS(2305), 1,
      sym__indent,
  [25798] = 1,
    ACTIONS(2307), 1,
      sym__indent,
  [25802] = 1,
    ACTIONS(2309), 1,
      sym__un_delimited_javascript_line,
  [25806] = 1,
    ACTIONS(2311), 1,
      sym__newline,
  [25810] = 1,
    ACTIONS(2313), 1,
      anon_sym_in,
  [25814] = 1,
    ACTIONS(2315), 1,
      sym__newline,
  [25818] = 1,
    ACTIONS(2317), 1,
      sym__newline,
  [25822] = 1,
    ACTIONS(2319), 1,
      sym__un_delimited_javascript_line,
  [25826] = 1,
    ACTIONS(2321), 1,
      sym__newline,
  [25830] = 1,
    ACTIONS(2323), 1,
      anon_sym_in,
  [25834] = 1,
    ACTIONS(2325), 1,
      sym__newline,
  [25838] = 1,
    ACTIONS(2327), 1,
      sym__newline,
  [25842] = 1,
    ACTIONS(2329), 1,
      sym__newline,
  [25846] = 1,
    ACTIONS(2331), 1,
      anon_sym_in,
  [25850] = 1,
    ACTIONS(2333), 1,
      sym__newline,
  [25854] = 1,
    ACTIONS(2335), 1,
      sym__newline,
  [25858] = 1,
    ACTIONS(2337), 1,
      sym__newline,
  [25862] = 1,
    ACTIONS(2339), 1,
      anon_sym_in,
  [25866] = 1,
    ACTIONS(2341), 1,
      sym__newline,
  [25870] = 1,
    ACTIONS(2343), 1,
      sym__newline,
  [25874] = 1,
    ACTIONS(2345), 1,
      sym__newline,
  [25878] = 1,
    ACTIONS(2347), 1,
      sym__newline,
  [25882] = 1,
    ACTIONS(2349), 1,
      sym__newline,
  [25886] = 1,
    ACTIONS(2351), 1,
      sym__newline,
  [25890] = 1,
    ACTIONS(2353), 1,
      sym__indent,
  [25894] = 1,
    ACTIONS(2355), 1,
      aux_sym_unbuffered_code_token1,
  [25898] = 1,
    ACTIONS(2357), 1,
      anon_sym_DQUOTE,
  [25902] = 1,
    ACTIONS(2357), 1,
      anon_sym_SQUOTE,
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
  [SMALL_STATE(159)] = 9330,
  [SMALL_STATE(160)] = 9370,
  [SMALL_STATE(161)] = 9406,
  [SMALL_STATE(162)] = 9442,
  [SMALL_STATE(163)] = 9478,
  [SMALL_STATE(164)] = 9514,
  [SMALL_STATE(165)] = 9550,
  [SMALL_STATE(166)] = 9588,
  [SMALL_STATE(167)] = 9624,
  [SMALL_STATE(168)] = 9664,
  [SMALL_STATE(169)] = 9700,
  [SMALL_STATE(170)] = 9736,
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
  [SMALL_STATE(189)] = 10458,
  [SMALL_STATE(190)] = 10495,
  [SMALL_STATE(191)] = 10532,
  [SMALL_STATE(192)] = 10567,
  [SMALL_STATE(193)] = 10606,
  [SMALL_STATE(194)] = 10641,
  [SMALL_STATE(195)] = 10676,
  [SMALL_STATE(196)] = 10711,
  [SMALL_STATE(197)] = 10746,
  [SMALL_STATE(198)] = 10781,
  [SMALL_STATE(199)] = 10816,
  [SMALL_STATE(200)] = 10851,
  [SMALL_STATE(201)] = 10886,
  [SMALL_STATE(202)] = 10921,
  [SMALL_STATE(203)] = 10956,
  [SMALL_STATE(204)] = 10991,
  [SMALL_STATE(205)] = 11026,
  [SMALL_STATE(206)] = 11061,
  [SMALL_STATE(207)] = 11096,
  [SMALL_STATE(208)] = 11135,
  [SMALL_STATE(209)] = 11170,
  [SMALL_STATE(210)] = 11205,
  [SMALL_STATE(211)] = 11244,
  [SMALL_STATE(212)] = 11279,
  [SMALL_STATE(213)] = 11314,
  [SMALL_STATE(214)] = 11351,
  [SMALL_STATE(215)] = 11390,
  [SMALL_STATE(216)] = 11425,
  [SMALL_STATE(217)] = 11464,
  [SMALL_STATE(218)] = 11499,
  [SMALL_STATE(219)] = 11538,
  [SMALL_STATE(220)] = 11573,
  [SMALL_STATE(221)] = 11608,
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
  [SMALL_STATE(246)] = 12499,
  [SMALL_STATE(247)] = 12538,
  [SMALL_STATE(248)] = 12573,
  [SMALL_STATE(249)] = 12612,
  [SMALL_STATE(250)] = 12647,
  [SMALL_STATE(251)] = 12682,
  [SMALL_STATE(252)] = 12721,
  [SMALL_STATE(253)] = 12756,
  [SMALL_STATE(254)] = 12791,
  [SMALL_STATE(255)] = 12826,
  [SMALL_STATE(256)] = 12864,
  [SMALL_STATE(257)] = 12900,
  [SMALL_STATE(258)] = 12934,
  [SMALL_STATE(259)] = 12968,
  [SMALL_STATE(260)] = 13002,
  [SMALL_STATE(261)] = 13038,
  [SMALL_STATE(262)] = 13076,
  [SMALL_STATE(263)] = 13112,
  [SMALL_STATE(264)] = 13146,
  [SMALL_STATE(265)] = 13182,
  [SMALL_STATE(266)] = 13216,
  [SMALL_STATE(267)] = 13252,
  [SMALL_STATE(268)] = 13286,
  [SMALL_STATE(269)] = 13320,
  [SMALL_STATE(270)] = 13354,
  [SMALL_STATE(271)] = 13388,
  [SMALL_STATE(272)] = 13422,
  [SMALL_STATE(273)] = 13456,
  [SMALL_STATE(274)] = 13492,
  [SMALL_STATE(275)] = 13526,
  [SMALL_STATE(276)] = 13560,
  [SMALL_STATE(277)] = 13598,
  [SMALL_STATE(278)] = 13632,
  [SMALL_STATE(279)] = 13666,
  [SMALL_STATE(280)] = 13700,
  [SMALL_STATE(281)] = 13734,
  [SMALL_STATE(282)] = 13770,
  [SMALL_STATE(283)] = 13804,
  [SMALL_STATE(284)] = 13838,
  [SMALL_STATE(285)] = 13876,
  [SMALL_STATE(286)] = 13912,
  [SMALL_STATE(287)] = 13946,
  [SMALL_STATE(288)] = 13980,
  [SMALL_STATE(289)] = 14014,
  [SMALL_STATE(290)] = 14048,
  [SMALL_STATE(291)] = 14082,
  [SMALL_STATE(292)] = 14120,
  [SMALL_STATE(293)] = 14154,
  [SMALL_STATE(294)] = 14192,
  [SMALL_STATE(295)] = 14226,
  [SMALL_STATE(296)] = 14260,
  [SMALL_STATE(297)] = 14294,
  [SMALL_STATE(298)] = 14328,
  [SMALL_STATE(299)] = 14362,
  [SMALL_STATE(300)] = 14396,
  [SMALL_STATE(301)] = 14430,
  [SMALL_STATE(302)] = 14464,
  [SMALL_STATE(303)] = 14498,
  [SMALL_STATE(304)] = 14532,
  [SMALL_STATE(305)] = 14566,
  [SMALL_STATE(306)] = 14600,
  [SMALL_STATE(307)] = 14634,
  [SMALL_STATE(308)] = 14668,
  [SMALL_STATE(309)] = 14706,
  [SMALL_STATE(310)] = 14740,
  [SMALL_STATE(311)] = 14778,
  [SMALL_STATE(312)] = 14812,
  [SMALL_STATE(313)] = 14850,
  [SMALL_STATE(314)] = 14884,
  [SMALL_STATE(315)] = 14918,
  [SMALL_STATE(316)] = 14952,
  [SMALL_STATE(317)] = 14990,
  [SMALL_STATE(318)] = 15024,
  [SMALL_STATE(319)] = 15058,
  [SMALL_STATE(320)] = 15096,
  [SMALL_STATE(321)] = 15130,
  [SMALL_STATE(322)] = 15163,
  [SMALL_STATE(323)] = 15196,
  [SMALL_STATE(324)] = 15229,
  [SMALL_STATE(325)] = 15262,
  [SMALL_STATE(326)] = 15295,
  [SMALL_STATE(327)] = 15328,
  [SMALL_STATE(328)] = 15361,
  [SMALL_STATE(329)] = 15394,
  [SMALL_STATE(330)] = 15427,
  [SMALL_STATE(331)] = 15460,
  [SMALL_STATE(332)] = 15493,
  [SMALL_STATE(333)] = 15526,
  [SMALL_STATE(334)] = 15559,
  [SMALL_STATE(335)] = 15592,
  [SMALL_STATE(336)] = 15625,
  [SMALL_STATE(337)] = 15658,
  [SMALL_STATE(338)] = 15691,
  [SMALL_STATE(339)] = 15724,
  [SMALL_STATE(340)] = 15757,
  [SMALL_STATE(341)] = 15790,
  [SMALL_STATE(342)] = 15823,
  [SMALL_STATE(343)] = 15856,
  [SMALL_STATE(344)] = 15889,
  [SMALL_STATE(345)] = 15922,
  [SMALL_STATE(346)] = 15959,
  [SMALL_STATE(347)] = 15992,
  [SMALL_STATE(348)] = 16025,
  [SMALL_STATE(349)] = 16058,
  [SMALL_STATE(350)] = 16091,
  [SMALL_STATE(351)] = 16124,
  [SMALL_STATE(352)] = 16157,
  [SMALL_STATE(353)] = 16190,
  [SMALL_STATE(354)] = 16223,
  [SMALL_STATE(355)] = 16256,
  [SMALL_STATE(356)] = 16289,
  [SMALL_STATE(357)] = 16322,
  [SMALL_STATE(358)] = 16357,
  [SMALL_STATE(359)] = 16390,
  [SMALL_STATE(360)] = 16423,
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
  [SMALL_STATE(377)] = 16985,
  [SMALL_STATE(378)] = 17017,
  [SMALL_STATE(379)] = 17049,
  [SMALL_STATE(380)] = 17081,
  [SMALL_STATE(381)] = 17113,
  [SMALL_STATE(382)] = 17145,
  [SMALL_STATE(383)] = 17177,
  [SMALL_STATE(384)] = 17209,
  [SMALL_STATE(385)] = 17241,
  [SMALL_STATE(386)] = 17273,
  [SMALL_STATE(387)] = 17305,
  [SMALL_STATE(388)] = 17337,
  [SMALL_STATE(389)] = 17369,
  [SMALL_STATE(390)] = 17401,
  [SMALL_STATE(391)] = 17435,
  [SMALL_STATE(392)] = 17467,
  [SMALL_STATE(393)] = 17499,
  [SMALL_STATE(394)] = 17531,
  [SMALL_STATE(395)] = 17563,
  [SMALL_STATE(396)] = 17595,
  [SMALL_STATE(397)] = 17627,
  [SMALL_STATE(398)] = 17659,
  [SMALL_STATE(399)] = 17691,
  [SMALL_STATE(400)] = 17723,
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
  [SMALL_STATE(430)] = 18713,
  [SMALL_STATE(431)] = 18753,
  [SMALL_STATE(432)] = 18793,
  [SMALL_STATE(433)] = 18833,
  [SMALL_STATE(434)] = 18873,
  [SMALL_STATE(435)] = 18913,
  [SMALL_STATE(436)] = 18939,
  [SMALL_STATE(437)] = 18979,
  [SMALL_STATE(438)] = 19019,
  [SMALL_STATE(439)] = 19059,
  [SMALL_STATE(440)] = 19099,
  [SMALL_STATE(441)] = 19119,
  [SMALL_STATE(442)] = 19144,
  [SMALL_STATE(443)] = 19169,
  [SMALL_STATE(444)] = 19196,
  [SMALL_STATE(445)] = 19223,
  [SMALL_STATE(446)] = 19248,
  [SMALL_STATE(447)] = 19273,
  [SMALL_STATE(448)] = 19298,
  [SMALL_STATE(449)] = 19323,
  [SMALL_STATE(450)] = 19350,
  [SMALL_STATE(451)] = 19377,
  [SMALL_STATE(452)] = 19402,
  [SMALL_STATE(453)] = 19427,
  [SMALL_STATE(454)] = 19454,
  [SMALL_STATE(455)] = 19481,
  [SMALL_STATE(456)] = 19506,
  [SMALL_STATE(457)] = 19531,
  [SMALL_STATE(458)] = 19558,
  [SMALL_STATE(459)] = 19583,
  [SMALL_STATE(460)] = 19610,
  [SMALL_STATE(461)] = 19637,
  [SMALL_STATE(462)] = 19662,
  [SMALL_STATE(463)] = 19687,
  [SMALL_STATE(464)] = 19714,
  [SMALL_STATE(465)] = 19741,
  [SMALL_STATE(466)] = 19768,
  [SMALL_STATE(467)] = 19793,
  [SMALL_STATE(468)] = 19818,
  [SMALL_STATE(469)] = 19845,
  [SMALL_STATE(470)] = 19872,
  [SMALL_STATE(471)] = 19896,
  [SMALL_STATE(472)] = 19920,
  [SMALL_STATE(473)] = 19944,
  [SMALL_STATE(474)] = 19968,
  [SMALL_STATE(475)] = 19992,
  [SMALL_STATE(476)] = 20016,
  [SMALL_STATE(477)] = 20040,
  [SMALL_STATE(478)] = 20064,
  [SMALL_STATE(479)] = 20088,
  [SMALL_STATE(480)] = 20112,
  [SMALL_STATE(481)] = 20136,
  [SMALL_STATE(482)] = 20160,
  [SMALL_STATE(483)] = 20184,
  [SMALL_STATE(484)] = 20208,
  [SMALL_STATE(485)] = 20232,
  [SMALL_STATE(486)] = 20256,
  [SMALL_STATE(487)] = 20280,
  [SMALL_STATE(488)] = 20304,
  [SMALL_STATE(489)] = 20328,
  [SMALL_STATE(490)] = 20352,
  [SMALL_STATE(491)] = 20376,
  [SMALL_STATE(492)] = 20399,
  [SMALL_STATE(493)] = 20422,
  [SMALL_STATE(494)] = 20445,
  [SMALL_STATE(495)] = 20468,
  [SMALL_STATE(496)] = 20491,
  [SMALL_STATE(497)] = 20514,
  [SMALL_STATE(498)] = 20539,
  [SMALL_STATE(499)] = 20562,
  [SMALL_STATE(500)] = 20585,
  [SMALL_STATE(501)] = 20608,
  [SMALL_STATE(502)] = 20631,
  [SMALL_STATE(503)] = 20654,
  [SMALL_STATE(504)] = 20677,
  [SMALL_STATE(505)] = 20700,
  [SMALL_STATE(506)] = 20723,
  [SMALL_STATE(507)] = 20746,
  [SMALL_STATE(508)] = 20766,
  [SMALL_STATE(509)] = 20786,
  [SMALL_STATE(510)] = 20806,
  [SMALL_STATE(511)] = 20826,
  [SMALL_STATE(512)] = 20846,
  [SMALL_STATE(513)] = 20862,
  [SMALL_STATE(514)] = 20882,
  [SMALL_STATE(515)] = 20902,
  [SMALL_STATE(516)] = 20918,
  [SMALL_STATE(517)] = 20938,
  [SMALL_STATE(518)] = 20958,
  [SMALL_STATE(519)] = 20972,
  [SMALL_STATE(520)] = 20992,
  [SMALL_STATE(521)] = 21012,
  [SMALL_STATE(522)] = 21026,
  [SMALL_STATE(523)] = 21046,
  [SMALL_STATE(524)] = 21060,
  [SMALL_STATE(525)] = 21080,
  [SMALL_STATE(526)] = 21100,
  [SMALL_STATE(527)] = 21120,
  [SMALL_STATE(528)] = 21136,
  [SMALL_STATE(529)] = 21156,
  [SMALL_STATE(530)] = 21168,
  [SMALL_STATE(531)] = 21188,
  [SMALL_STATE(532)] = 21208,
  [SMALL_STATE(533)] = 21220,
  [SMALL_STATE(534)] = 21240,
  [SMALL_STATE(535)] = 21260,
  [SMALL_STATE(536)] = 21280,
  [SMALL_STATE(537)] = 21294,
  [SMALL_STATE(538)] = 21314,
  [SMALL_STATE(539)] = 21328,
  [SMALL_STATE(540)] = 21348,
  [SMALL_STATE(541)] = 21368,
  [SMALL_STATE(542)] = 21388,
  [SMALL_STATE(543)] = 21408,
  [SMALL_STATE(544)] = 21428,
  [SMALL_STATE(545)] = 21448,
  [SMALL_STATE(546)] = 21468,
  [SMALL_STATE(547)] = 21488,
  [SMALL_STATE(548)] = 21508,
  [SMALL_STATE(549)] = 21524,
  [SMALL_STATE(550)] = 21544,
  [SMALL_STATE(551)] = 21564,
  [SMALL_STATE(552)] = 21584,
  [SMALL_STATE(553)] = 21604,
  [SMALL_STATE(554)] = 21618,
  [SMALL_STATE(555)] = 21638,
  [SMALL_STATE(556)] = 21658,
  [SMALL_STATE(557)] = 21678,
  [SMALL_STATE(558)] = 21692,
  [SMALL_STATE(559)] = 21712,
  [SMALL_STATE(560)] = 21732,
  [SMALL_STATE(561)] = 21752,
  [SMALL_STATE(562)] = 21768,
  [SMALL_STATE(563)] = 21784,
  [SMALL_STATE(564)] = 21804,
  [SMALL_STATE(565)] = 21824,
  [SMALL_STATE(566)] = 21836,
  [SMALL_STATE(567)] = 21852,
  [SMALL_STATE(568)] = 21872,
  [SMALL_STATE(569)] = 21892,
  [SMALL_STATE(570)] = 21906,
  [SMALL_STATE(571)] = 21926,
  [SMALL_STATE(572)] = 21946,
  [SMALL_STATE(573)] = 21962,
  [SMALL_STATE(574)] = 21982,
  [SMALL_STATE(575)] = 21992,
  [SMALL_STATE(576)] = 22012,
  [SMALL_STATE(577)] = 22032,
  [SMALL_STATE(578)] = 22052,
  [SMALL_STATE(579)] = 22072,
  [SMALL_STATE(580)] = 22092,
  [SMALL_STATE(581)] = 22112,
  [SMALL_STATE(582)] = 22128,
  [SMALL_STATE(583)] = 22141,
  [SMALL_STATE(584)] = 22154,
  [SMALL_STATE(585)] = 22171,
  [SMALL_STATE(586)] = 22188,
  [SMALL_STATE(587)] = 22205,
  [SMALL_STATE(588)] = 22222,
  [SMALL_STATE(589)] = 22239,
  [SMALL_STATE(590)] = 22252,
  [SMALL_STATE(591)] = 22265,
  [SMALL_STATE(592)] = 22282,
  [SMALL_STATE(593)] = 22299,
  [SMALL_STATE(594)] = 22312,
  [SMALL_STATE(595)] = 22329,
  [SMALL_STATE(596)] = 22340,
  [SMALL_STATE(597)] = 22355,
  [SMALL_STATE(598)] = 22372,
  [SMALL_STATE(599)] = 22389,
  [SMALL_STATE(600)] = 22406,
  [SMALL_STATE(601)] = 22423,
  [SMALL_STATE(602)] = 22442,
  [SMALL_STATE(603)] = 22459,
  [SMALL_STATE(604)] = 22476,
  [SMALL_STATE(605)] = 22493,
  [SMALL_STATE(606)] = 22510,
  [SMALL_STATE(607)] = 22523,
  [SMALL_STATE(608)] = 22538,
  [SMALL_STATE(609)] = 22555,
  [SMALL_STATE(610)] = 22572,
  [SMALL_STATE(611)] = 22589,
  [SMALL_STATE(612)] = 22606,
  [SMALL_STATE(613)] = 22623,
  [SMALL_STATE(614)] = 22640,
  [SMALL_STATE(615)] = 22657,
  [SMALL_STATE(616)] = 22670,
  [SMALL_STATE(617)] = 22687,
  [SMALL_STATE(618)] = 22704,
  [SMALL_STATE(619)] = 22721,
  [SMALL_STATE(620)] = 22738,
  [SMALL_STATE(621)] = 22755,
  [SMALL_STATE(622)] = 22772,
  [SMALL_STATE(623)] = 22785,
  [SMALL_STATE(624)] = 22802,
  [SMALL_STATE(625)] = 22814,
  [SMALL_STATE(626)] = 22822,
  [SMALL_STATE(627)] = 22834,
  [SMALL_STATE(628)] = 22842,
  [SMALL_STATE(629)] = 22856,
  [SMALL_STATE(630)] = 22864,
  [SMALL_STATE(631)] = 22872,
  [SMALL_STATE(632)] = 22882,
  [SMALL_STATE(633)] = 22890,
  [SMALL_STATE(634)] = 22904,
  [SMALL_STATE(635)] = 22912,
  [SMALL_STATE(636)] = 22926,
  [SMALL_STATE(637)] = 22940,
  [SMALL_STATE(638)] = 22954,
  [SMALL_STATE(639)] = 22962,
  [SMALL_STATE(640)] = 22970,
  [SMALL_STATE(641)] = 22982,
  [SMALL_STATE(642)] = 22990,
  [SMALL_STATE(643)] = 22998,
  [SMALL_STATE(644)] = 23006,
  [SMALL_STATE(645)] = 23014,
  [SMALL_STATE(646)] = 23022,
  [SMALL_STATE(647)] = 23034,
  [SMALL_STATE(648)] = 23042,
  [SMALL_STATE(649)] = 23055,
  [SMALL_STATE(650)] = 23068,
  [SMALL_STATE(651)] = 23081,
  [SMALL_STATE(652)] = 23094,
  [SMALL_STATE(653)] = 23107,
  [SMALL_STATE(654)] = 23116,
  [SMALL_STATE(655)] = 23129,
  [SMALL_STATE(656)] = 23138,
  [SMALL_STATE(657)] = 23151,
  [SMALL_STATE(658)] = 23160,
  [SMALL_STATE(659)] = 23169,
  [SMALL_STATE(660)] = 23182,
  [SMALL_STATE(661)] = 23191,
  [SMALL_STATE(662)] = 23200,
  [SMALL_STATE(663)] = 23213,
  [SMALL_STATE(664)] = 23222,
  [SMALL_STATE(665)] = 23235,
  [SMALL_STATE(666)] = 23248,
  [SMALL_STATE(667)] = 23257,
  [SMALL_STATE(668)] = 23270,
  [SMALL_STATE(669)] = 23279,
  [SMALL_STATE(670)] = 23292,
  [SMALL_STATE(671)] = 23305,
  [SMALL_STATE(672)] = 23314,
  [SMALL_STATE(673)] = 23327,
  [SMALL_STATE(674)] = 23336,
  [SMALL_STATE(675)] = 23345,
  [SMALL_STATE(676)] = 23358,
  [SMALL_STATE(677)] = 23367,
  [SMALL_STATE(678)] = 23380,
  [SMALL_STATE(679)] = 23389,
  [SMALL_STATE(680)] = 23402,
  [SMALL_STATE(681)] = 23411,
  [SMALL_STATE(682)] = 23420,
  [SMALL_STATE(683)] = 23429,
  [SMALL_STATE(684)] = 23440,
  [SMALL_STATE(685)] = 23449,
  [SMALL_STATE(686)] = 23462,
  [SMALL_STATE(687)] = 23471,
  [SMALL_STATE(688)] = 23484,
  [SMALL_STATE(689)] = 23493,
  [SMALL_STATE(690)] = 23506,
  [SMALL_STATE(691)] = 23519,
  [SMALL_STATE(692)] = 23528,
  [SMALL_STATE(693)] = 23537,
  [SMALL_STATE(694)] = 23546,
  [SMALL_STATE(695)] = 23555,
  [SMALL_STATE(696)] = 23564,
  [SMALL_STATE(697)] = 23573,
  [SMALL_STATE(698)] = 23582,
  [SMALL_STATE(699)] = 23591,
  [SMALL_STATE(700)] = 23600,
  [SMALL_STATE(701)] = 23609,
  [SMALL_STATE(702)] = 23618,
  [SMALL_STATE(703)] = 23627,
  [SMALL_STATE(704)] = 23640,
  [SMALL_STATE(705)] = 23649,
  [SMALL_STATE(706)] = 23662,
  [SMALL_STATE(707)] = 23671,
  [SMALL_STATE(708)] = 23684,
  [SMALL_STATE(709)] = 23693,
  [SMALL_STATE(710)] = 23706,
  [SMALL_STATE(711)] = 23719,
  [SMALL_STATE(712)] = 23728,
  [SMALL_STATE(713)] = 23738,
  [SMALL_STATE(714)] = 23746,
  [SMALL_STATE(715)] = 23756,
  [SMALL_STATE(716)] = 23766,
  [SMALL_STATE(717)] = 23774,
  [SMALL_STATE(718)] = 23784,
  [SMALL_STATE(719)] = 23794,
  [SMALL_STATE(720)] = 23804,
  [SMALL_STATE(721)] = 23814,
  [SMALL_STATE(722)] = 23824,
  [SMALL_STATE(723)] = 23834,
  [SMALL_STATE(724)] = 23844,
  [SMALL_STATE(725)] = 23854,
  [SMALL_STATE(726)] = 23864,
  [SMALL_STATE(727)] = 23872,
  [SMALL_STATE(728)] = 23882,
  [SMALL_STATE(729)] = 23892,
  [SMALL_STATE(730)] = 23902,
  [SMALL_STATE(731)] = 23912,
  [SMALL_STATE(732)] = 23920,
  [SMALL_STATE(733)] = 23930,
  [SMALL_STATE(734)] = 23940,
  [SMALL_STATE(735)] = 23950,
  [SMALL_STATE(736)] = 23960,
  [SMALL_STATE(737)] = 23968,
  [SMALL_STATE(738)] = 23978,
  [SMALL_STATE(739)] = 23984,
  [SMALL_STATE(740)] = 23994,
  [SMALL_STATE(741)] = 24004,
  [SMALL_STATE(742)] = 24014,
  [SMALL_STATE(743)] = 24022,
  [SMALL_STATE(744)] = 24032,
  [SMALL_STATE(745)] = 24042,
  [SMALL_STATE(746)] = 24050,
  [SMALL_STATE(747)] = 24060,
  [SMALL_STATE(748)] = 24070,
  [SMALL_STATE(749)] = 24080,
  [SMALL_STATE(750)] = 24090,
  [SMALL_STATE(751)] = 24100,
  [SMALL_STATE(752)] = 24110,
  [SMALL_STATE(753)] = 24120,
  [SMALL_STATE(754)] = 24130,
  [SMALL_STATE(755)] = 24140,
  [SMALL_STATE(756)] = 24146,
  [SMALL_STATE(757)] = 24156,
  [SMALL_STATE(758)] = 24164,
  [SMALL_STATE(759)] = 24174,
  [SMALL_STATE(760)] = 24184,
  [SMALL_STATE(761)] = 24194,
  [SMALL_STATE(762)] = 24204,
  [SMALL_STATE(763)] = 24214,
  [SMALL_STATE(764)] = 24224,
  [SMALL_STATE(765)] = 24234,
  [SMALL_STATE(766)] = 24244,
  [SMALL_STATE(767)] = 24254,
  [SMALL_STATE(768)] = 24264,
  [SMALL_STATE(769)] = 24274,
  [SMALL_STATE(770)] = 24284,
  [SMALL_STATE(771)] = 24294,
  [SMALL_STATE(772)] = 24304,
  [SMALL_STATE(773)] = 24314,
  [SMALL_STATE(774)] = 24324,
  [SMALL_STATE(775)] = 24334,
  [SMALL_STATE(776)] = 24344,
  [SMALL_STATE(777)] = 24354,
  [SMALL_STATE(778)] = 24364,
  [SMALL_STATE(779)] = 24374,
  [SMALL_STATE(780)] = 24384,
  [SMALL_STATE(781)] = 24394,
  [SMALL_STATE(782)] = 24404,
  [SMALL_STATE(783)] = 24410,
  [SMALL_STATE(784)] = 24420,
  [SMALL_STATE(785)] = 24430,
  [SMALL_STATE(786)] = 24440,
  [SMALL_STATE(787)] = 24446,
  [SMALL_STATE(788)] = 24456,
  [SMALL_STATE(789)] = 24466,
  [SMALL_STATE(790)] = 24476,
  [SMALL_STATE(791)] = 24486,
  [SMALL_STATE(792)] = 24496,
  [SMALL_STATE(793)] = 24506,
  [SMALL_STATE(794)] = 24516,
  [SMALL_STATE(795)] = 24526,
  [SMALL_STATE(796)] = 24532,
  [SMALL_STATE(797)] = 24542,
  [SMALL_STATE(798)] = 24550,
  [SMALL_STATE(799)] = 24560,
  [SMALL_STATE(800)] = 24570,
  [SMALL_STATE(801)] = 24580,
  [SMALL_STATE(802)] = 24590,
  [SMALL_STATE(803)] = 24596,
  [SMALL_STATE(804)] = 24602,
  [SMALL_STATE(805)] = 24612,
  [SMALL_STATE(806)] = 24622,
  [SMALL_STATE(807)] = 24632,
  [SMALL_STATE(808)] = 24642,
  [SMALL_STATE(809)] = 24652,
  [SMALL_STATE(810)] = 24662,
  [SMALL_STATE(811)] = 24669,
  [SMALL_STATE(812)] = 24676,
  [SMALL_STATE(813)] = 24683,
  [SMALL_STATE(814)] = 24690,
  [SMALL_STATE(815)] = 24695,
  [SMALL_STATE(816)] = 24702,
  [SMALL_STATE(817)] = 24709,
  [SMALL_STATE(818)] = 24716,
  [SMALL_STATE(819)] = 24723,
  [SMALL_STATE(820)] = 24730,
  [SMALL_STATE(821)] = 24737,
  [SMALL_STATE(822)] = 24742,
  [SMALL_STATE(823)] = 24749,
  [SMALL_STATE(824)] = 24756,
  [SMALL_STATE(825)] = 24761,
  [SMALL_STATE(826)] = 24766,
  [SMALL_STATE(827)] = 24773,
  [SMALL_STATE(828)] = 24780,
  [SMALL_STATE(829)] = 24787,
  [SMALL_STATE(830)] = 24794,
  [SMALL_STATE(831)] = 24801,
  [SMALL_STATE(832)] = 24808,
  [SMALL_STATE(833)] = 24815,
  [SMALL_STATE(834)] = 24822,
  [SMALL_STATE(835)] = 24829,
  [SMALL_STATE(836)] = 24836,
  [SMALL_STATE(837)] = 24843,
  [SMALL_STATE(838)] = 24850,
  [SMALL_STATE(839)] = 24857,
  [SMALL_STATE(840)] = 24864,
  [SMALL_STATE(841)] = 24871,
  [SMALL_STATE(842)] = 24878,
  [SMALL_STATE(843)] = 24885,
  [SMALL_STATE(844)] = 24892,
  [SMALL_STATE(845)] = 24899,
  [SMALL_STATE(846)] = 24906,
  [SMALL_STATE(847)] = 24913,
  [SMALL_STATE(848)] = 24920,
  [SMALL_STATE(849)] = 24927,
  [SMALL_STATE(850)] = 24934,
  [SMALL_STATE(851)] = 24941,
  [SMALL_STATE(852)] = 24948,
  [SMALL_STATE(853)] = 24955,
  [SMALL_STATE(854)] = 24962,
  [SMALL_STATE(855)] = 24969,
  [SMALL_STATE(856)] = 24976,
  [SMALL_STATE(857)] = 24983,
  [SMALL_STATE(858)] = 24990,
  [SMALL_STATE(859)] = 24997,
  [SMALL_STATE(860)] = 25004,
  [SMALL_STATE(861)] = 25011,
  [SMALL_STATE(862)] = 25018,
  [SMALL_STATE(863)] = 25025,
  [SMALL_STATE(864)] = 25032,
  [SMALL_STATE(865)] = 25039,
  [SMALL_STATE(866)] = 25046,
  [SMALL_STATE(867)] = 25053,
  [SMALL_STATE(868)] = 25060,
  [SMALL_STATE(869)] = 25067,
  [SMALL_STATE(870)] = 25074,
  [SMALL_STATE(871)] = 25081,
  [SMALL_STATE(872)] = 25086,
  [SMALL_STATE(873)] = 25093,
  [SMALL_STATE(874)] = 25100,
  [SMALL_STATE(875)] = 25107,
  [SMALL_STATE(876)] = 25114,
  [SMALL_STATE(877)] = 25121,
  [SMALL_STATE(878)] = 25128,
  [SMALL_STATE(879)] = 25135,
  [SMALL_STATE(880)] = 25142,
  [SMALL_STATE(881)] = 25149,
  [SMALL_STATE(882)] = 25156,
  [SMALL_STATE(883)] = 25163,
  [SMALL_STATE(884)] = 25170,
  [SMALL_STATE(885)] = 25177,
  [SMALL_STATE(886)] = 25184,
  [SMALL_STATE(887)] = 25191,
  [SMALL_STATE(888)] = 25198,
  [SMALL_STATE(889)] = 25205,
  [SMALL_STATE(890)] = 25212,
  [SMALL_STATE(891)] = 25219,
  [SMALL_STATE(892)] = 25226,
  [SMALL_STATE(893)] = 25233,
  [SMALL_STATE(894)] = 25238,
  [SMALL_STATE(895)] = 25242,
  [SMALL_STATE(896)] = 25246,
  [SMALL_STATE(897)] = 25250,
  [SMALL_STATE(898)] = 25254,
  [SMALL_STATE(899)] = 25258,
  [SMALL_STATE(900)] = 25262,
  [SMALL_STATE(901)] = 25266,
  [SMALL_STATE(902)] = 25270,
  [SMALL_STATE(903)] = 25274,
  [SMALL_STATE(904)] = 25278,
  [SMALL_STATE(905)] = 25282,
  [SMALL_STATE(906)] = 25286,
  [SMALL_STATE(907)] = 25290,
  [SMALL_STATE(908)] = 25294,
  [SMALL_STATE(909)] = 25298,
  [SMALL_STATE(910)] = 25302,
  [SMALL_STATE(911)] = 25306,
  [SMALL_STATE(912)] = 25310,
  [SMALL_STATE(913)] = 25314,
  [SMALL_STATE(914)] = 25318,
  [SMALL_STATE(915)] = 25322,
  [SMALL_STATE(916)] = 25326,
  [SMALL_STATE(917)] = 25330,
  [SMALL_STATE(918)] = 25334,
  [SMALL_STATE(919)] = 25338,
  [SMALL_STATE(920)] = 25342,
  [SMALL_STATE(921)] = 25346,
  [SMALL_STATE(922)] = 25350,
  [SMALL_STATE(923)] = 25354,
  [SMALL_STATE(924)] = 25358,
  [SMALL_STATE(925)] = 25362,
  [SMALL_STATE(926)] = 25366,
  [SMALL_STATE(927)] = 25370,
  [SMALL_STATE(928)] = 25374,
  [SMALL_STATE(929)] = 25378,
  [SMALL_STATE(930)] = 25382,
  [SMALL_STATE(931)] = 25386,
  [SMALL_STATE(932)] = 25390,
  [SMALL_STATE(933)] = 25394,
  [SMALL_STATE(934)] = 25398,
  [SMALL_STATE(935)] = 25402,
  [SMALL_STATE(936)] = 25406,
  [SMALL_STATE(937)] = 25410,
  [SMALL_STATE(938)] = 25414,
  [SMALL_STATE(939)] = 25418,
  [SMALL_STATE(940)] = 25422,
  [SMALL_STATE(941)] = 25426,
  [SMALL_STATE(942)] = 25430,
  [SMALL_STATE(943)] = 25434,
  [SMALL_STATE(944)] = 25438,
  [SMALL_STATE(945)] = 25442,
  [SMALL_STATE(946)] = 25446,
  [SMALL_STATE(947)] = 25450,
  [SMALL_STATE(948)] = 25454,
  [SMALL_STATE(949)] = 25458,
  [SMALL_STATE(950)] = 25462,
  [SMALL_STATE(951)] = 25466,
  [SMALL_STATE(952)] = 25470,
  [SMALL_STATE(953)] = 25474,
  [SMALL_STATE(954)] = 25478,
  [SMALL_STATE(955)] = 25482,
  [SMALL_STATE(956)] = 25486,
  [SMALL_STATE(957)] = 25490,
  [SMALL_STATE(958)] = 25494,
  [SMALL_STATE(959)] = 25498,
  [SMALL_STATE(960)] = 25502,
  [SMALL_STATE(961)] = 25506,
  [SMALL_STATE(962)] = 25510,
  [SMALL_STATE(963)] = 25514,
  [SMALL_STATE(964)] = 25518,
  [SMALL_STATE(965)] = 25522,
  [SMALL_STATE(966)] = 25526,
  [SMALL_STATE(967)] = 25530,
  [SMALL_STATE(968)] = 25534,
  [SMALL_STATE(969)] = 25538,
  [SMALL_STATE(970)] = 25542,
  [SMALL_STATE(971)] = 25546,
  [SMALL_STATE(972)] = 25550,
  [SMALL_STATE(973)] = 25554,
  [SMALL_STATE(974)] = 25558,
  [SMALL_STATE(975)] = 25562,
  [SMALL_STATE(976)] = 25566,
  [SMALL_STATE(977)] = 25570,
  [SMALL_STATE(978)] = 25574,
  [SMALL_STATE(979)] = 25578,
  [SMALL_STATE(980)] = 25582,
  [SMALL_STATE(981)] = 25586,
  [SMALL_STATE(982)] = 25590,
  [SMALL_STATE(983)] = 25594,
  [SMALL_STATE(984)] = 25598,
  [SMALL_STATE(985)] = 25602,
  [SMALL_STATE(986)] = 25606,
  [SMALL_STATE(987)] = 25610,
  [SMALL_STATE(988)] = 25614,
  [SMALL_STATE(989)] = 25618,
  [SMALL_STATE(990)] = 25622,
  [SMALL_STATE(991)] = 25626,
  [SMALL_STATE(992)] = 25630,
  [SMALL_STATE(993)] = 25634,
  [SMALL_STATE(994)] = 25638,
  [SMALL_STATE(995)] = 25642,
  [SMALL_STATE(996)] = 25646,
  [SMALL_STATE(997)] = 25650,
  [SMALL_STATE(998)] = 25654,
  [SMALL_STATE(999)] = 25658,
  [SMALL_STATE(1000)] = 25662,
  [SMALL_STATE(1001)] = 25666,
  [SMALL_STATE(1002)] = 25670,
  [SMALL_STATE(1003)] = 25674,
  [SMALL_STATE(1004)] = 25678,
  [SMALL_STATE(1005)] = 25682,
  [SMALL_STATE(1006)] = 25686,
  [SMALL_STATE(1007)] = 25690,
  [SMALL_STATE(1008)] = 25694,
  [SMALL_STATE(1009)] = 25698,
  [SMALL_STATE(1010)] = 25702,
  [SMALL_STATE(1011)] = 25706,
  [SMALL_STATE(1012)] = 25710,
  [SMALL_STATE(1013)] = 25714,
  [SMALL_STATE(1014)] = 25718,
  [SMALL_STATE(1015)] = 25722,
  [SMALL_STATE(1016)] = 25726,
  [SMALL_STATE(1017)] = 25730,
  [SMALL_STATE(1018)] = 25734,
  [SMALL_STATE(1019)] = 25738,
  [SMALL_STATE(1020)] = 25742,
  [SMALL_STATE(1021)] = 25746,
  [SMALL_STATE(1022)] = 25750,
  [SMALL_STATE(1023)] = 25754,
  [SMALL_STATE(1024)] = 25758,
  [SMALL_STATE(1025)] = 25762,
  [SMALL_STATE(1026)] = 25766,
  [SMALL_STATE(1027)] = 25770,
  [SMALL_STATE(1028)] = 25774,
  [SMALL_STATE(1029)] = 25778,
  [SMALL_STATE(1030)] = 25782,
  [SMALL_STATE(1031)] = 25786,
  [SMALL_STATE(1032)] = 25790,
  [SMALL_STATE(1033)] = 25794,
  [SMALL_STATE(1034)] = 25798,
  [SMALL_STATE(1035)] = 25802,
  [SMALL_STATE(1036)] = 25806,
  [SMALL_STATE(1037)] = 25810,
  [SMALL_STATE(1038)] = 25814,
  [SMALL_STATE(1039)] = 25818,
  [SMALL_STATE(1040)] = 25822,
  [SMALL_STATE(1041)] = 25826,
  [SMALL_STATE(1042)] = 25830,
  [SMALL_STATE(1043)] = 25834,
  [SMALL_STATE(1044)] = 25838,
  [SMALL_STATE(1045)] = 25842,
  [SMALL_STATE(1046)] = 25846,
  [SMALL_STATE(1047)] = 25850,
  [SMALL_STATE(1048)] = 25854,
  [SMALL_STATE(1049)] = 25858,
  [SMALL_STATE(1050)] = 25862,
  [SMALL_STATE(1051)] = 25866,
  [SMALL_STATE(1052)] = 25870,
  [SMALL_STATE(1053)] = 25874,
  [SMALL_STATE(1054)] = 25878,
  [SMALL_STATE(1055)] = 25882,
  [SMALL_STATE(1056)] = 25886,
  [SMALL_STATE(1057)] = 25890,
  [SMALL_STATE(1058)] = 25894,
  [SMALL_STATE(1059)] = 25898,
  [SMALL_STATE(1060)] = 25902,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(982),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(880),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1024),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1035),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(755),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(542),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(744),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(868),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(927),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(788),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(685),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(882),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(880),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1024),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(989),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(869),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(869),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1035),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(746),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(747),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1041),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(743),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(743),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(430),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(430),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(929),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(782),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(545),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(779),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(862),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(905),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(769),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(662),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(833),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(835),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(980),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1021),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(863),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(863),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(756),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(749),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1036),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(427),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(427),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(906),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(802),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(551),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(735),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(856),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(913),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(771),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(925),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(926),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(654),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(888),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(837),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(982),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1002),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(864),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(864),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1025),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(758),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(760),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1028),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(762),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(762),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(439),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(439),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1058),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(786),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(554),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(787),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(883),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(966),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(809),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(659),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(826),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(827),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(971),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(940),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(884),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(884),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1040),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(734),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(712),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1049),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(789),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(789),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(426),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(426),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(968),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(884),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1040),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1052),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1054),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1048),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1039),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(738),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(534),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(740),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(875),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(947),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(793),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(687),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(852),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(850),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(991),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(967),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(878),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(878),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(753),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(752),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1045),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(800),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(800),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(438),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(438),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(949),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(37),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(989),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1021),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(1001),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(778),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 8),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 8),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
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
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
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
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1002),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(777),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each, 6),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each, 6),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each, 7),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each, 7),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__each_else, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__each_else, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 13),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 13),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
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
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(730),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(186),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 1),
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
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(967),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
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
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(219),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(229),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(347),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 2, .production_id = 3),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 2, .production_id = 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 4, .production_id = 3),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 4, .production_id = 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 4, .production_id = 3),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 4, .production_id = 3),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 5, .production_id = 7),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 5, .production_id = 7),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 6, .production_id = 11),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 6, .production_id = 11),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 5, .production_id = 3),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 5, .production_id = 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(814),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(861),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(885),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1043),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1055),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1038),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1047),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1051),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1053),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(440),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(681),
  [1379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(614),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(596),
  [1483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(975),
  [1486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(1009),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(596),
  [1582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(975),
  [1585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(1009),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(424),
  [1599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(562),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2, .production_id = 6),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(919),
  [1673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(596),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(944),
  [1749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(795),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(932),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [1785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pug_attributes, 1),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pug_attributes, 1),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 10),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 10),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2), SHIFT_REPEAT(1000),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_variable, 1),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2), SHIFT_REPEAT(952),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 3),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 4),
  [2153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_iterator, 1, .production_id = 2),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 2),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_variable, 3),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
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
