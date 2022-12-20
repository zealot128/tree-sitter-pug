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
#define STATE_COUNT 1031
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 3
#define TOKEN_COUNT 74
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
  anon_sym_while = 6,
  aux_sym__each_js_token1 = 7,
  anon_sym_COMMA = 8,
  aux_sym_iteration_iterator_token1 = 9,
  anon_sym_else = 10,
  anon_sym_each = 11,
  anon_sym_for = 12,
  anon_sym_in = 13,
  anon_sym_PLUS = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_mixin = 17,
  aux_sym_mixin_attributes_token1 = 18,
  anon_sym_block = 19,
  anon_sym_append = 20,
  anon_sym_prepend = 21,
  anon_sym_extends = 22,
  aux_sym_extends_token1 = 23,
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
  sym_while = 77,
  sym__each_js = 78,
  sym_iteration_variable = 79,
  sym_iteration_iterator = 80,
  sym__each_else = 81,
  sym_each = 82,
  sym_mixin_use = 83,
  sym_mixin_definition = 84,
  sym_mixin_attributes = 85,
  sym__block_content = 86,
  sym_block_definition = 87,
  sym_block_append = 88,
  sym_block_prepend = 89,
  sym_extends = 90,
  sym_filter = 91,
  sym_filter_content = 92,
  sym_conditional = 93,
  sym_case = 94,
  sym__when_content = 95,
  sym__dummy_tag = 96,
  sym__when_keyword = 97,
  sym_when = 98,
  sym_unescaped_buffered_code = 99,
  sym_buffered_code = 100,
  sym_script_block = 101,
  sym_tag = 102,
  sym__content_after_dot = 103,
  sym_attributes = 104,
  sym_attribute = 105,
  sym__ternary_attribute_value = 106,
  sym__string_attribute_value = 107,
  sym__variable_attribute_value = 108,
  sym__object_attribute_value = 109,
  sym__template_attribute_value = 110,
  sym__array_attribute_value = 111,
  sym__pug_attributes = 112,
  sym__attribute = 113,
  sym__angular_attribute = 114,
  sym_children = 115,
  sym__children_choice = 116,
  sym_comment = 117,
  sym__comment = 118,
  sym__comment_not_first_line = 119,
  sym_angular_attribute_name = 120,
  sym_quoted_javascript = 121,
  sym_quoted_attribute_value = 122,
  sym_content = 123,
  sym__comment_content = 124,
  aux_sym__content_or_javascript = 125,
  sym__un_delimited_javascript = 126,
  aux_sym__un_delimited_javascript_multiline = 127,
  sym__single_line_buf_code = 128,
  sym__multi_line_buf_code = 129,
  sym_unbuffered_code = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_mixin_use_repeat1 = 132,
  aux_sym_mixin_attributes_repeat1 = 133,
  aux_sym_filter_content_repeat1 = 134,
  aux_sym_case_repeat1 = 135,
  aux_sym_script_block_repeat1 = 136,
  aux_sym_tag_repeat1 = 137,
  aux_sym__content_after_dot_repeat1 = 138,
  aux_sym_attributes_repeat1 = 139,
  aux_sym__attribute_repeat1 = 140,
  aux_sym_children_repeat1 = 141,
  aux_sym__comment_repeat1 = 142,
  aux_sym_content_repeat1 = 143,
  aux_sym__single_line_buf_code_repeat1 = 144,
  alias_sym_attribute_value = 145,
  alias_sym_block_name = 146,
  alias_sym_mixin_name = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_while] = "while",
  [aux_sym__each_js_token1] = "javascript",
  [anon_sym_COMMA] = ",",
  [aux_sym_iteration_iterator_token1] = "iteration_iterator_token1",
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
  [aux_sym_extends_token1] = "filename",
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
  [alias_sym_mixin_name] = "mixin_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_while] = anon_sym_while,
  [aux_sym__each_js_token1] = aux_sym__each_js_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_iteration_iterator_token1] = aux_sym_iteration_iterator_token1,
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
  [aux_sym_extends_token1] = aux_sym_extends_token1,
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
  [aux_sym_iteration_iterator_token1] = {
    .visible = false,
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
  [alias_sym_mixin_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = aux_sym__each_js_token1,
  },
  [2] = {
    [1] = alias_sym_mixin_name,
  },
  [3] = {
    [0] = alias_sym_block_name,
  },
  [4] = {
    [0] = sym_attribute,
  },
  [5] = {
    [1] = alias_sym_mixin_name,
    [3] = sym_attribute,
  },
  [6] = {
    [1] = aux_sym__each_js_token1,
  },
  [7] = {
    [3] = aux_sym__each_js_token1,
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
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '"') ADVANCE(843);
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '\'') ADVANCE(839);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '`') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(139);
      if (lookahead == '{') ADVANCE(850);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(852);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '`') ADVANCE(675);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '`') ADVANCE(676);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(384);
      if (lookahead == '`') ADVANCE(680);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == ']') ADVANCE(682);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ']') ADVANCE(683);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(70);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ']') ADVANCE(685);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(98);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(388);
      if (lookahead == ']') ADVANCE(686);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(175);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(389);
      if (lookahead == ']') ADVANCE(687);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(176);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(390);
      if (lookahead == ']') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(177);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(391);
      if (lookahead == ']') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(179);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(747);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == '}') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(395);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(175);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(396);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(176);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(397);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(177);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(398);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(668);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == '}') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(395);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(175);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(396);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(176);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(397);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(177);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(398);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(668);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(402);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(403);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(404);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(405);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(410);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(411);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(412);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == ')') ADVANCE(624);
      if (lookahead == '`') ADVANCE(672);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '`') ADVANCE(673);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(415);
      if (lookahead == ')') ADVANCE(626);
      if (lookahead == '`') ADVANCE(674);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(70);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(98);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(422);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(424);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(176);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(426);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(177);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(428);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == '{') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0) ADVANCE(848);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(363);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(856);
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(750);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(866);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(669);
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
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(379);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(379);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(844);
      if (lookahead == '\'') ADVANCE(840);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '?') ADVANCE(653);
      if (lookahead == '[') ADVANCE(643);
      if (lookahead == '`') ADVANCE(648);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ',') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(844);
      if (lookahead == '\'') ADVANCE(840);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '?') ADVANCE(645);
      if (lookahead == '[') ADVANCE(643);
      if (lookahead == '`') ADVANCE(648);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ',') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(748);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(746);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(843);
      if (lookahead == '\'') ADVANCE(839);
      if (lookahead == ')') ADVANCE(234);
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
      if (lookahead == '"') ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(846);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 69:
      if (lookahead == '\'') ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0) ADVANCE(842);
      END_STATE();
    case 70:
      if (lookahead == '\'') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(623);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(654);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ')') ADVANCE(654);
      if (lookahead == '?') ADVANCE(649);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',') ADVANCE(74);
      if (lookahead != 0) ADVANCE(644);
      END_STATE();
    case 76:
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '`') ADVANCE(599);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == '`') ADVANCE(677);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ')') ADVANCE(655);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '`') ADVANCE(678);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == ')') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(604);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '}') ADVANCE(604);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(604);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(374);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(691);
      END_STATE();
    case 85:
      if (lookahead == '=') ADVANCE(368);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(94);
      if (lookahead == ']') ADVANCE(595);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(602);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 88:
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 89:
      if (lookahead == '?') ADVANCE(190);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '?') ADVANCE(650);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 91:
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '`') ADVANCE(679);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == ']') ADVANCE(684);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(89);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(681);
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
      if (lookahead == ']') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '`') ADVANCE(671);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '`') ADVANCE(595);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(96);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 98:
      if (lookahead == '`') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 172:
      if (lookahead == '}') ADVANCE(854);
      END_STATE();
    case 173:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(748);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(173)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 174:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(746);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(174)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 175:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 176:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 179:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 181:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 182:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(182)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 183:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 184:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(831);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 190:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(595);
      END_STATE();
    case 191:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(191)
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(747);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 192:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(192)
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(750);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 193:
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(748);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 194:
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(746);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 195:
      if (eof) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(748);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(773);
      if (lookahead == 'w') ADVANCE(746);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__each_js_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_iteration_iterator_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_iteration_iterator_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '?') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '?') ADVANCE(650);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
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
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_extends_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_filter_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_filter_content_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(269);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(269);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(269);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(269);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '/') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '=') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == 'x') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'k') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'u') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'x') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(339);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(269);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(269);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(691);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(831);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '`') ADVANCE(675);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '`') ADVANCE(676);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(384);
      if (lookahead == '`') ADVANCE(680);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == ']') ADVANCE(682);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ']') ADVANCE(683);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(70);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ']') ADVANCE(685);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(98);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(388);
      if (lookahead == ']') ADVANCE(686);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(175);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(389);
      if (lookahead == ']') ADVANCE(687);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(176);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(390);
      if (lookahead == ']') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(177);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(391);
      if (lookahead == ']') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(179);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == '}') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(395);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(175);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(396);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(176);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(397);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(177);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(398);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(668);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(402);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(403);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(404);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(405);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(410);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(411);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(412);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == ')') ADVANCE(624);
      if (lookahead == '`') ADVANCE(672);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '`') ADVANCE(673);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(415);
      if (lookahead == ')') ADVANCE(626);
      if (lookahead == '`') ADVANCE(674);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(422);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(489);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(489);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '"') ADVANCE(424);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(422);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == '?') ADVANCE(492);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(422);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == '?') ADVANCE(492);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(424);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '?') ADVANCE(493);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(424);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '?') ADVANCE(493);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '?') ADVANCE(494);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(426);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '?') ADVANCE(494);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '?') ADVANCE(495);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(428);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '?') ADVANCE(495);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == '`') ADVANCE(438);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead == '`') ADVANCE(442);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == '`') ADVANCE(438);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead == '?') ADVANCE(501);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(440);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead == '?') ADVANCE(501);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(442);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead == '?') ADVANCE(502);
      if (lookahead == '`') ADVANCE(442);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(442);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead == '?') ADVANCE(502);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(416);
      if (lookahead == '?') ADVANCE(503);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(416);
      if (lookahead == '?') ADVANCE(503);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '"') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(446);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '?') ADVANCE(504);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(446);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '?') ADVANCE(504);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '?') ADVANCE(505);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '?') ADVANCE(505);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(506);
      if (lookahead == '`') ADVANCE(456);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(450);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(506);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(424);
      if (lookahead == '?') ADVANCE(507);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(452);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(424);
      if (lookahead == '?') ADVANCE(507);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '?') ADVANCE(508);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(454);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '?') ADVANCE(508);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == '`') ADVANCE(456);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(456);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == ',') ADVANCE(554);
      if (lookahead == '?') ADVANCE(516);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(565);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == ',') ADVANCE(555);
      if (lookahead == '?') ADVANCE(517);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(566);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ',') ADVANCE(556);
      if (lookahead == '?') ADVANCE(518);
      if (lookahead == '`') ADVANCE(456);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(461);
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(519);
      if (lookahead == ']') ADVANCE(416);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(416);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(462);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == '`') ADVANCE(466);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(418);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(466);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '?') ADVANCE(521);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead == '`') ADVANCE(463);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(420);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == '?') ADVANCE(522);
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '`') ADVANCE(467);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(422);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '?') ADVANCE(523);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(424);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(466);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '?') ADVANCE(524);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '`') ADVANCE(466);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(426);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(602);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '?') ADVANCE(525);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == '`') ADVANCE(467);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(428);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(461);
      if (lookahead == '"') ADVANCE(468);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '?') ADVANCE(526);
      if (lookahead == '[') ADVANCE(444);
      if (lookahead == ']') ADVANCE(444);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(462);
      if (lookahead == '?') ADVANCE(527);
      if (lookahead == '[') ADVANCE(446);
      if (lookahead == ']') ADVANCE(446);
      if (lookahead == '`') ADVANCE(473);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '?') ADVANCE(528);
      if (lookahead == '[') ADVANCE(448);
      if (lookahead == ']') ADVANCE(448);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '?') ADVANCE(529);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == ']') ADVANCE(450);
      if (lookahead == '`') ADVANCE(474);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '?') ADVANCE(530);
      if (lookahead == '[') ADVANCE(452);
      if (lookahead == ']') ADVANCE(452);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '?') ADVANCE(531);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == ']') ADVANCE(454);
      if (lookahead == '`') ADVANCE(473);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '?') ADVANCE(532);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == ']') ADVANCE(456);
      if (lookahead == '`') ADVANCE(474);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '?') ADVANCE(533);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(416);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(476);
      if (lookahead == '"') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(476);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(476);
      if (lookahead == '?') ADVANCE(534);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == '}') ADVANCE(476);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(418);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(477);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(477);
      if (lookahead == '?') ADVANCE(535);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead == '}') ADVANCE(477);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(420);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(478);
      if (lookahead == '"') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(478);
      if (lookahead == '?') ADVANCE(536);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == '}') ADVANCE(478);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(422);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(479);
      if (lookahead == '"') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(479);
      if (lookahead == '?') ADVANCE(537);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(424);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(480);
      if (lookahead == '?') ADVANCE(538);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(426);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '\'') ADVANCE(481);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(481);
      if (lookahead == '?') ADVANCE(539);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(428);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '?') ADVANCE(540);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(444);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(476);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(476);
      if (lookahead == '?') ADVANCE(541);
      if (lookahead == '`') ADVANCE(487);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(446);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(477);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(477);
      if (lookahead == '?') ADVANCE(542);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(448);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(478);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(478);
      if (lookahead == '?') ADVANCE(543);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(450);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(479);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(488);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(479);
      if (lookahead == '?') ADVANCE(544);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(452);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(480);
      if (lookahead == '?') ADVANCE(545);
      if (lookahead == '`') ADVANCE(487);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(454);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(605);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\'') ADVANCE(488);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(481);
      if (lookahead == '?') ADVANCE(546);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(456);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '\'') ADVANCE(490);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(70);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(98);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(492);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(175);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(493);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(176);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(494);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(177);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(495);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(179);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(496);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(497);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(499);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(500);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(501);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(502);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '"') ADVANCE(503);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ',') ADVANCE(489);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(70);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '(') ADVANCE(498);
      if (lookahead == ',') ADVANCE(491);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(98);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(506);
      if (lookahead == '(') ADVANCE(499);
      if (lookahead == ',') ADVANCE(492);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(175);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(507);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ',') ADVANCE(493);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(176);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(508);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ',') ADVANCE(494);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(177);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(614);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(509);
      if (lookahead == '(') ADVANCE(502);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(179);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(616);
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(616);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(616);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(512);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == ')') ADVANCE(624);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(514);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(626);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(615);
      if (lookahead == '"') ADVANCE(516);
      if (lookahead == '(') ADVANCE(513);
      if (lookahead == ',') ADVANCE(510);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(615);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '(') ADVANCE(514);
      if (lookahead == ',') ADVANCE(511);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(615);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(518);
      if (lookahead == '(') ADVANCE(515);
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(519);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(489);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(520);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ']') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(490);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ']') ADVANCE(491);
      if (lookahead == '`') ADVANCE(521);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(491);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(522);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(492);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(523);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ']') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(493);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(524);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ']') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(494);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(525);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(495);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(526);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(519);
      if (lookahead == '[') ADVANCE(503);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(527);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead != 0) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(498);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(521);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(529);
      if (lookahead == '(') ADVANCE(499);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(522);
      if (lookahead == '[') ADVANCE(506);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead != 0) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(530);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '[') ADVANCE(507);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead != 0) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(531);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(532);
      if (lookahead == '(') ADVANCE(502);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '[') ADVANCE(509);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead != 0) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(533);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(533);
      if (lookahead == '}') ADVANCE(533);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(489);
      if (lookahead != 0) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(534);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '}') ADVANCE(534);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(490);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(535);
      if (lookahead == '`') ADVANCE(535);
      if (lookahead == '}') ADVANCE(535);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(491);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(536);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(536);
      if (lookahead == '}') ADVANCE(536);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(492);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(537);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(537);
      if (lookahead == '}') ADVANCE(537);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(493);
      if (lookahead != 0) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(538);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '}') ADVANCE(538);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(494);
      if (lookahead != 0) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(539);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '}') ADVANCE(539);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(495);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(540);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(533);
      if (lookahead == '}') ADVANCE(540);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(503);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '}') ADVANCE(541);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(504);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(498);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(535);
      if (lookahead == '`') ADVANCE(542);
      if (lookahead == '}') ADVANCE(542);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(505);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(543);
      if (lookahead == '(') ADVANCE(499);
      if (lookahead == ')') ADVANCE(175);
      if (lookahead == ',') ADVANCE(536);
      if (lookahead == '}') ADVANCE(543);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(506);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(544);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == ',') ADVANCE(537);
      if (lookahead == '}') ADVANCE(544);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(507);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(545);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '}') ADVANCE(545);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(508);
      if (lookahead != 0) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(546);
      if (lookahead == '(') ADVANCE(502);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '}') ADVANCE(546);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(509);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '(') ADVANCE(498);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == ',') ADVANCE(498);
      if (lookahead == '`') ADVANCE(549);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(550);
      if (lookahead == '(') ADVANCE(499);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead == ',') ADVANCE(499);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(551);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead == ',') ADVANCE(500);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(552);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(553);
      if (lookahead == '(') ADVANCE(502);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '"') ADVANCE(554);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(510);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(512);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(581);
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '\'') ADVANCE(560);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(581);
      if (lookahead == '?') ADVANCE(445);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(582);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(558);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(582);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == '`') ADVANCE(562);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(583);
      if (lookahead == '"') ADVANCE(561);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(583);
      if (lookahead == '?') ADVANCE(449);
      if (lookahead == '`') ADVANCE(559);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(584);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(560);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(584);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '"') ADVANCE(561);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '(') ADVANCE(578);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(585);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(563);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '?') ADVANCE(455);
      if (lookahead == '`') ADVANCE(562);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '"') ADVANCE(563);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(587);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == ' ') ADVANCE(564);
      if (lookahead == '"') ADVANCE(564);
      if (lookahead == '\'') ADVANCE(566);
      if (lookahead == ')') ADVANCE(624);
      if (lookahead == '?') ADVANCE(513);
      if (lookahead == '`') ADVANCE(438);
      if (lookahead != 0) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == ' ') ADVANCE(565);
      if (lookahead == '"') ADVANCE(566);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '?') ADVANCE(514);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == ' ') ADVANCE(566);
      if (lookahead == '"') ADVANCE(566);
      if (lookahead == '\'') ADVANCE(566);
      if (lookahead == ')') ADVANCE(626);
      if (lookahead == '?') ADVANCE(515);
      if (lookahead == '`') ADVANCE(442);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(570);
      if (lookahead == '(') ADVANCE(430);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '?') ADVANCE(547);
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(570);
      if (lookahead == '\'') ADVANCE(568);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(548);
      if (lookahead == '`') ADVANCE(572);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(571);
      if (lookahead == '\'') ADVANCE(572);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '?') ADVANCE(549);
      if (lookahead == '`') ADVANCE(569);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(570);
      if (lookahead == '\'') ADVANCE(570);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '?') ADVANCE(550);
      if (lookahead == '`') ADVANCE(573);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(571);
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == '\'') ADVANCE(572);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(660);
      if (lookahead == ',') ADVANCE(440);
      if (lookahead == '?') ADVANCE(552);
      if (lookahead == '`') ADVANCE(572);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(661);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == '?') ADVANCE(553);
      if (lookahead == '`') ADVANCE(573);
      if (lookahead != 0) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(574);
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == ')') ADVANCE(627);
      if (lookahead == '?') ADVANCE(431);
      if (lookahead == '`') ADVANCE(578);
      if (lookahead != 0) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(575);
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(575);
      if (lookahead == ')') ADVANCE(628);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '`') ADVANCE(579);
      if (lookahead != 0) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == '?') ADVANCE(435);
      if (lookahead == '`') ADVANCE(576);
      if (lookahead != 0) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(577);
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(580);
      if (lookahead == ')') ADVANCE(631);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead == '`') ADVANCE(578);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '"') ADVANCE(580);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == ')') ADVANCE(632);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead == '`') ADVANCE(579);
      if (lookahead != 0) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '"') ADVANCE(580);
      if (lookahead == '\'') ADVANCE(580);
      if (lookahead == ')') ADVANCE(633);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(581);
      if (lookahead == '"') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '`') ADVANCE(585);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(582);
      if (lookahead == '"') ADVANCE(584);
      if (lookahead == '\'') ADVANCE(582);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(586);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(583);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '\'') ADVANCE(586);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(583);
      if (lookahead != 0) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(584);
      if (lookahead == '"') ADVANCE(584);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(587);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '\'') ADVANCE(587);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(425);
      if (lookahead == '`') ADVANCE(585);
      if (lookahead != 0) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '\'') ADVANCE(586);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == '`') ADVANCE(586);
      if (lookahead != 0) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '\'') ADVANCE(587);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == '`') ADVANCE(587);
      if (lookahead != 0) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '(') ADVANCE(593);
      if (lookahead == ',') ADVANCE(589);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(622);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '(') ADVANCE(593);
      if (lookahead == ',') ADVANCE(591);
      if (lookahead == '}') ADVANCE(590);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(591);
      if (lookahead == '}') ADVANCE(591);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '(') ADVANCE(593);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == ',') ADVANCE(593);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead != 0) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == '`') ADVANCE(593);
      if (lookahead != 0) ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(595);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '?') ADVANCE(622);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(595);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(446);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ',') ADVANCE(595);
      if (lookahead == '?') ADVANCE(614);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(595);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ',') ADVANCE(595);
      if (lookahead == '?') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(596);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(595);
      if (lookahead == '?') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(595);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(599);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == '?') ADVANCE(593);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(599);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(568);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '?') ADVANCE(592);
      if (lookahead == '`') ADVANCE(569);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(599);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == '?') ADVANCE(593);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '\'') ADVANCE(462);
      if (lookahead == '?') ADVANCE(589);
      if (lookahead == ']') ADVANCE(595);
      if (lookahead == '`') ADVANCE(463);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '"') ADVANCE(468);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ',') ADVANCE(602);
      if (lookahead == '?') ADVANCE(588);
      if (lookahead == '[') ADVANCE(596);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(476);
      if (lookahead == ',') ADVANCE(604);
      if (lookahead == '?') ADVANCE(591);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead == '}') ADVANCE(604);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ',') ADVANCE(604);
      if (lookahead == '?') ADVANCE(590);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == '}') ADVANCE(605);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(607);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(608);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(607);
      if (lookahead == '?') ADVANCE(615);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(607);
      if (lookahead == '"') ADVANCE(554);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '?') ADVANCE(616);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(608);
      if (lookahead == '"') ADVANCE(564);
      if (lookahead == '\'') ADVANCE(565);
      if (lookahead == ')') ADVANCE(656);
      if (lookahead == '?') ADVANCE(594);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(609);
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\'') ADVANCE(575);
      if (lookahead == ')') ADVANCE(654);
      if (lookahead == '?') ADVANCE(601);
      if (lookahead == '`') ADVANCE(576);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '\'') ADVANCE(558);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(611);
      if (lookahead == '?') ADVANCE(597);
      if (lookahead == '`') ADVANCE(559);
      if (lookahead != 0) ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '"') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(582);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '?') ADVANCE(598);
      if (lookahead == '`') ADVANCE(583);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(593);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(594);
      if (lookahead == ',') ADVANCE(616);
      if (lookahead == '`') ADVANCE(614);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(96);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(622);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(96);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '`') ADVANCE(675);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '`') ADVANCE(676);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(384);
      if (lookahead == '`') ADVANCE(680);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(402);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(403);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(404);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(405);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(634);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(636);
      if (lookahead == '}') ADVANCE(635);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(646);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ',') ADVANCE(604);
      if (lookahead == '?') ADVANCE(634);
      if (lookahead == '}') ADVANCE(605);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(605);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(844);
      if (lookahead == '\'') ADVANCE(840);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '?') ADVANCE(653);
      if (lookahead == '[') ADVANCE(643);
      if (lookahead == '`') ADVANCE(648);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(73);
      if (lookahead != 0) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '?') ADVANCE(651);
      if (lookahead == '[') ADVANCE(646);
      if (lookahead == ']') ADVANCE(646);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(92);
      if (lookahead != 0) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(654);
      if (lookahead == '?') ADVANCE(649);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(74);
      if (lookahead != 0) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(650);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '`') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(96);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '?') ADVANCE(652);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(91);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == '?') ADVANCE(640);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(599);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == '?') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(596);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(599);
      if (lookahead == '?') ADVANCE(641);
      if (lookahead == '[') ADVANCE(596);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(603);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(608);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '`') ADVANCE(596);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(607);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '?') ADVANCE(642);
      if (lookahead == ' ' ||
          lookahead == ',') ADVANCE(611);
      if (lookahead != 0) ADVANCE(610);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(190);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '`') ADVANCE(679);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(671);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == '}') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(395);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(175);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(396);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(176);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(397);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(177);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(398);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(668);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(179);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '}') ADVANCE(670);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == ')') ADVANCE(638);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(639);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(623);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(654);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(190);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(190);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(694);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead == 'l') ADVANCE(811);
      if (lookahead == 'x') ADVANCE(819);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(812);
      if (lookahead == 'x') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(737);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(770);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(818);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(785);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(817);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(826);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(831);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(832);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(831);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(650);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(842);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(842);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '?') ADVANCE(650);
      if (lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(89);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(848);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(851);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(853);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(856);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(747);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '+') ADVANCE(231);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(750);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(747);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(862);
      if (lookahead == '#') ADVANCE(868);
      if (lookahead == '-') ADVANCE(872);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(799);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(750);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(867);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(832);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(869);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(873);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 193},
  [2] = {.lex_state = 194, .external_lex_state = 2},
  [3] = {.lex_state = 194, .external_lex_state = 2},
  [4] = {.lex_state = 194, .external_lex_state = 2},
  [5] = {.lex_state = 193, .external_lex_state = 2},
  [6] = {.lex_state = 193, .external_lex_state = 2},
  [7] = {.lex_state = 193, .external_lex_state = 2},
  [8] = {.lex_state = 193},
  [9] = {.lex_state = 193},
  [10] = {.lex_state = 63, .external_lex_state = 2},
  [11] = {.lex_state = 63, .external_lex_state = 2},
  [12] = {.lex_state = 62, .external_lex_state = 3},
  [13] = {.lex_state = 62, .external_lex_state = 3},
  [14] = {.lex_state = 62, .external_lex_state = 3},
  [15] = {.lex_state = 62, .external_lex_state = 3},
  [16] = {.lex_state = 62, .external_lex_state = 3},
  [17] = {.lex_state = 62, .external_lex_state = 3},
  [18] = {.lex_state = 62, .external_lex_state = 3},
  [19] = {.lex_state = 62, .external_lex_state = 3},
  [20] = {.lex_state = 62, .external_lex_state = 3},
  [21] = {.lex_state = 62, .external_lex_state = 2},
  [22] = {.lex_state = 62, .external_lex_state = 3},
  [23] = {.lex_state = 62, .external_lex_state = 3},
  [24] = {.lex_state = 62, .external_lex_state = 3},
  [25] = {.lex_state = 62, .external_lex_state = 3},
  [26] = {.lex_state = 62, .external_lex_state = 3},
  [27] = {.lex_state = 62, .external_lex_state = 3},
  [28] = {.lex_state = 62, .external_lex_state = 3},
  [29] = {.lex_state = 62, .external_lex_state = 3},
  [30] = {.lex_state = 62, .external_lex_state = 3},
  [31] = {.lex_state = 62, .external_lex_state = 2},
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
  [42] = {.lex_state = 62, .external_lex_state = 2},
  [43] = {.lex_state = 62, .external_lex_state = 3},
  [44] = {.lex_state = 62, .external_lex_state = 3},
  [45] = {.lex_state = 62, .external_lex_state = 3},
  [46] = {.lex_state = 62, .external_lex_state = 3},
  [47] = {.lex_state = 62, .external_lex_state = 3},
  [48] = {.lex_state = 62, .external_lex_state = 3},
  [49] = {.lex_state = 62, .external_lex_state = 3},
  [50] = {.lex_state = 196, .external_lex_state = 2},
  [51] = {.lex_state = 341, .external_lex_state = 2},
  [52] = {.lex_state = 196, .external_lex_state = 2},
  [53] = {.lex_state = 195, .external_lex_state = 2},
  [54] = {.lex_state = 194, .external_lex_state = 2},
  [55] = {.lex_state = 194, .external_lex_state = 2},
  [56] = {.lex_state = 341, .external_lex_state = 2},
  [57] = {.lex_state = 195, .external_lex_state = 3},
  [58] = {.lex_state = 194, .external_lex_state = 1},
  [59] = {.lex_state = 194, .external_lex_state = 1},
  [60] = {.lex_state = 194, .external_lex_state = 1},
  [61] = {.lex_state = 191, .external_lex_state = 2},
  [62] = {.lex_state = 174, .external_lex_state = 2},
  [63] = {.lex_state = 191, .external_lex_state = 2},
  [64] = {.lex_state = 194, .external_lex_state = 1},
  [65] = {.lex_state = 194, .external_lex_state = 1},
  [66] = {.lex_state = 194, .external_lex_state = 1},
  [67] = {.lex_state = 194, .external_lex_state = 1},
  [68] = {.lex_state = 194, .external_lex_state = 1},
  [69] = {.lex_state = 194, .external_lex_state = 1},
  [70] = {.lex_state = 196, .external_lex_state = 2},
  [71] = {.lex_state = 342, .external_lex_state = 2},
  [72] = {.lex_state = 194, .external_lex_state = 4},
  [73] = {.lex_state = 194, .external_lex_state = 1},
  [74] = {.lex_state = 194, .external_lex_state = 2},
  [75] = {.lex_state = 194, .external_lex_state = 4},
  [76] = {.lex_state = 194},
  [77] = {.lex_state = 194},
  [78] = {.lex_state = 194, .external_lex_state = 4},
  [79] = {.lex_state = 196, .external_lex_state = 2},
  [80] = {.lex_state = 341, .external_lex_state = 2},
  [81] = {.lex_state = 194, .external_lex_state = 4},
  [82] = {.lex_state = 194, .external_lex_state = 4},
  [83] = {.lex_state = 194, .external_lex_state = 1},
  [84] = {.lex_state = 195, .external_lex_state = 2},
  [85] = {.lex_state = 191, .external_lex_state = 2},
  [86] = {.lex_state = 194, .external_lex_state = 4},
  [87] = {.lex_state = 196, .external_lex_state = 2},
  [88] = {.lex_state = 342, .external_lex_state = 2},
  [89] = {.lex_state = 194, .external_lex_state = 4},
  [90] = {.lex_state = 194, .external_lex_state = 4},
  [91] = {.lex_state = 194, .external_lex_state = 4},
  [92] = {.lex_state = 194, .external_lex_state = 2},
  [93] = {.lex_state = 194, .external_lex_state = 2},
  [94] = {.lex_state = 193, .external_lex_state = 1},
  [95] = {.lex_state = 194, .external_lex_state = 2},
  [96] = {.lex_state = 194, .external_lex_state = 2},
  [97] = {.lex_state = 194, .external_lex_state = 2},
  [98] = {.lex_state = 194, .external_lex_state = 2},
  [99] = {.lex_state = 192, .external_lex_state = 2},
  [100] = {.lex_state = 193, .external_lex_state = 1},
  [101] = {.lex_state = 194, .external_lex_state = 2},
  [102] = {.lex_state = 194, .external_lex_state = 2},
  [103] = {.lex_state = 194, .external_lex_state = 2},
  [104] = {.lex_state = 193, .external_lex_state = 1},
  [105] = {.lex_state = 193, .external_lex_state = 1},
  [106] = {.lex_state = 193, .external_lex_state = 1},
  [107] = {.lex_state = 193, .external_lex_state = 1},
  [108] = {.lex_state = 193, .external_lex_state = 1},
  [109] = {.lex_state = 195, .external_lex_state = 3},
  [110] = {.lex_state = 194, .external_lex_state = 2},
  [111] = {.lex_state = 194, .external_lex_state = 2},
  [112] = {.lex_state = 265, .external_lex_state = 2},
  [113] = {.lex_state = 194, .external_lex_state = 2},
  [114] = {.lex_state = 193, .external_lex_state = 1},
  [115] = {.lex_state = 194, .external_lex_state = 2},
  [116] = {.lex_state = 192, .external_lex_state = 2},
  [117] = {.lex_state = 194, .external_lex_state = 2},
  [118] = {.lex_state = 194, .external_lex_state = 2},
  [119] = {.lex_state = 194, .external_lex_state = 2},
  [120] = {.lex_state = 194, .external_lex_state = 2},
  [121] = {.lex_state = 194, .external_lex_state = 2},
  [122] = {.lex_state = 194, .external_lex_state = 2},
  [123] = {.lex_state = 194, .external_lex_state = 2},
  [124] = {.lex_state = 194, .external_lex_state = 2},
  [125] = {.lex_state = 194, .external_lex_state = 2},
  [126] = {.lex_state = 194, .external_lex_state = 2},
  [127] = {.lex_state = 194, .external_lex_state = 2},
  [128] = {.lex_state = 194, .external_lex_state = 2},
  [129] = {.lex_state = 194, .external_lex_state = 2},
  [130] = {.lex_state = 194, .external_lex_state = 2},
  [131] = {.lex_state = 174, .external_lex_state = 2},
  [132] = {.lex_state = 194, .external_lex_state = 2},
  [133] = {.lex_state = 194, .external_lex_state = 2},
  [134] = {.lex_state = 194, .external_lex_state = 2},
  [135] = {.lex_state = 194, .external_lex_state = 2},
  [136] = {.lex_state = 194, .external_lex_state = 2},
  [137] = {.lex_state = 194, .external_lex_state = 2},
  [138] = {.lex_state = 194, .external_lex_state = 2},
  [139] = {.lex_state = 194, .external_lex_state = 2},
  [140] = {.lex_state = 173, .external_lex_state = 2},
  [141] = {.lex_state = 194, .external_lex_state = 2},
  [142] = {.lex_state = 194, .external_lex_state = 2},
  [143] = {.lex_state = 194, .external_lex_state = 4},
  [144] = {.lex_state = 194, .external_lex_state = 2},
  [145] = {.lex_state = 194, .external_lex_state = 2},
  [146] = {.lex_state = 194, .external_lex_state = 2},
  [147] = {.lex_state = 265, .external_lex_state = 2},
  [148] = {.lex_state = 194, .external_lex_state = 2},
  [149] = {.lex_state = 194, .external_lex_state = 2},
  [150] = {.lex_state = 63, .external_lex_state = 2},
  [151] = {.lex_state = 194, .external_lex_state = 2},
  [152] = {.lex_state = 194, .external_lex_state = 2},
  [153] = {.lex_state = 194, .external_lex_state = 2},
  [154] = {.lex_state = 63, .external_lex_state = 2},
  [155] = {.lex_state = 194, .external_lex_state = 5},
  [156] = {.lex_state = 195, .external_lex_state = 2},
  [157] = {.lex_state = 194, .external_lex_state = 5},
  [158] = {.lex_state = 193, .external_lex_state = 2},
  [159] = {.lex_state = 11, .external_lex_state = 2},
  [160] = {.lex_state = 192, .external_lex_state = 2},
  [161] = {.lex_state = 63, .external_lex_state = 1},
  [162] = {.lex_state = 342},
  [163] = {.lex_state = 63, .external_lex_state = 1},
  [164] = {.lex_state = 11, .external_lex_state = 2},
  [165] = {.lex_state = 193, .external_lex_state = 1},
  [166] = {.lex_state = 194, .external_lex_state = 5},
  [167] = {.lex_state = 194, .external_lex_state = 5},
  [168] = {.lex_state = 194, .external_lex_state = 5},
  [169] = {.lex_state = 63, .external_lex_state = 1},
  [170] = {.lex_state = 194, .external_lex_state = 5},
  [171] = {.lex_state = 194, .external_lex_state = 5},
  [172] = {.lex_state = 194, .external_lex_state = 5},
  [173] = {.lex_state = 194, .external_lex_state = 5},
  [174] = {.lex_state = 194, .external_lex_state = 5},
  [175] = {.lex_state = 192, .external_lex_state = 5},
  [176] = {.lex_state = 63, .external_lex_state = 1},
  [177] = {.lex_state = 192, .external_lex_state = 5},
  [178] = {.lex_state = 194, .external_lex_state = 5},
  [179] = {.lex_state = 194, .external_lex_state = 5},
  [180] = {.lex_state = 193, .external_lex_state = 1},
  [181] = {.lex_state = 194, .external_lex_state = 5},
  [182] = {.lex_state = 195, .external_lex_state = 2},
  [183] = {.lex_state = 194, .external_lex_state = 5},
  [184] = {.lex_state = 63, .external_lex_state = 1},
  [185] = {.lex_state = 342},
  [186] = {.lex_state = 194, .external_lex_state = 5},
  [187] = {.lex_state = 63, .external_lex_state = 1},
  [188] = {.lex_state = 342, .external_lex_state = 2},
  [189] = {.lex_state = 195, .external_lex_state = 2},
  [190] = {.lex_state = 194, .external_lex_state = 5},
  [191] = {.lex_state = 63, .external_lex_state = 1},
  [192] = {.lex_state = 63, .external_lex_state = 1},
  [193] = {.lex_state = 63, .external_lex_state = 1},
  [194] = {.lex_state = 193, .external_lex_state = 4},
  [195] = {.lex_state = 193, .external_lex_state = 2},
  [196] = {.lex_state = 174, .external_lex_state = 2},
  [197] = {.lex_state = 63, .external_lex_state = 1},
  [198] = {.lex_state = 174, .external_lex_state = 2},
  [199] = {.lex_state = 193, .external_lex_state = 2},
  [200] = {.lex_state = 193, .external_lex_state = 2},
  [201] = {.lex_state = 173, .external_lex_state = 2},
  [202] = {.lex_state = 265, .external_lex_state = 2},
  [203] = {.lex_state = 193, .external_lex_state = 2},
  [204] = {.lex_state = 193, .external_lex_state = 2},
  [205] = {.lex_state = 174, .external_lex_state = 2},
  [206] = {.lex_state = 193, .external_lex_state = 2},
  [207] = {.lex_state = 193, .external_lex_state = 2},
  [208] = {.lex_state = 63, .external_lex_state = 2},
  [209] = {.lex_state = 195, .external_lex_state = 3},
  [210] = {.lex_state = 193, .external_lex_state = 2},
  [211] = {.lex_state = 193, .external_lex_state = 6},
  [212] = {.lex_state = 193, .external_lex_state = 2},
  [213] = {.lex_state = 193, .external_lex_state = 2},
  [214] = {.lex_state = 193, .external_lex_state = 2},
  [215] = {.lex_state = 193, .external_lex_state = 6},
  [216] = {.lex_state = 193, .external_lex_state = 2},
  [217] = {.lex_state = 193, .external_lex_state = 2},
  [218] = {.lex_state = 195, .external_lex_state = 3},
  [219] = {.lex_state = 193, .external_lex_state = 6},
  [220] = {.lex_state = 193, .external_lex_state = 2},
  [221] = {.lex_state = 193, .external_lex_state = 6},
  [222] = {.lex_state = 192, .external_lex_state = 5},
  [223] = {.lex_state = 193, .external_lex_state = 2},
  [224] = {.lex_state = 193, .external_lex_state = 2},
  [225] = {.lex_state = 193, .external_lex_state = 2},
  [226] = {.lex_state = 193, .external_lex_state = 2},
  [227] = {.lex_state = 11, .external_lex_state = 2},
  [228] = {.lex_state = 195, .external_lex_state = 3},
  [229] = {.lex_state = 193, .external_lex_state = 2},
  [230] = {.lex_state = 63, .external_lex_state = 1},
  [231] = {.lex_state = 193, .external_lex_state = 2},
  [232] = {.lex_state = 193, .external_lex_state = 2},
  [233] = {.lex_state = 193, .external_lex_state = 2},
  [234] = {.lex_state = 193, .external_lex_state = 2},
  [235] = {.lex_state = 193, .external_lex_state = 2},
  [236] = {.lex_state = 193, .external_lex_state = 2},
  [237] = {.lex_state = 193, .external_lex_state = 2},
  [238] = {.lex_state = 193, .external_lex_state = 4},
  [239] = {.lex_state = 193, .external_lex_state = 2},
  [240] = {.lex_state = 193, .external_lex_state = 6},
  [241] = {.lex_state = 193, .external_lex_state = 2},
  [242] = {.lex_state = 193, .external_lex_state = 2},
  [243] = {.lex_state = 193, .external_lex_state = 6},
  [244] = {.lex_state = 193, .external_lex_state = 2},
  [245] = {.lex_state = 193, .external_lex_state = 2},
  [246] = {.lex_state = 193, .external_lex_state = 6},
  [247] = {.lex_state = 193, .external_lex_state = 2},
  [248] = {.lex_state = 193, .external_lex_state = 2},
  [249] = {.lex_state = 193, .external_lex_state = 2},
  [250] = {.lex_state = 194},
  [251] = {.lex_state = 193, .external_lex_state = 2},
  [252] = {.lex_state = 266, .external_lex_state = 2},
  [253] = {.lex_state = 193, .external_lex_state = 2},
  [254] = {.lex_state = 193, .external_lex_state = 2},
  [255] = {.lex_state = 266, .external_lex_state = 2},
  [256] = {.lex_state = 193, .external_lex_state = 2},
  [257] = {.lex_state = 193, .external_lex_state = 6},
  [258] = {.lex_state = 193, .external_lex_state = 2},
  [259] = {.lex_state = 193, .external_lex_state = 2},
  [260] = {.lex_state = 193, .external_lex_state = 2},
  [261] = {.lex_state = 193, .external_lex_state = 2},
  [262] = {.lex_state = 63, .external_lex_state = 2},
  [263] = {.lex_state = 63, .external_lex_state = 2},
  [264] = {.lex_state = 63, .external_lex_state = 2},
  [265] = {.lex_state = 63, .external_lex_state = 2},
  [266] = {.lex_state = 63, .external_lex_state = 2},
  [267] = {.lex_state = 63, .external_lex_state = 2},
  [268] = {.lex_state = 193, .external_lex_state = 6},
  [269] = {.lex_state = 193, .external_lex_state = 3},
  [270] = {.lex_state = 63, .external_lex_state = 2},
  [271] = {.lex_state = 63, .external_lex_state = 2},
  [272] = {.lex_state = 63, .external_lex_state = 2},
  [273] = {.lex_state = 63, .external_lex_state = 2},
  [274] = {.lex_state = 63, .external_lex_state = 2},
  [275] = {.lex_state = 63, .external_lex_state = 2},
  [276] = {.lex_state = 63, .external_lex_state = 2},
  [277] = {.lex_state = 63, .external_lex_state = 2},
  [278] = {.lex_state = 193, .external_lex_state = 5},
  [279] = {.lex_state = 193, .external_lex_state = 5},
  [280] = {.lex_state = 54, .external_lex_state = 2},
  [281] = {.lex_state = 54, .external_lex_state = 2},
  [282] = {.lex_state = 62, .external_lex_state = 1},
  [283] = {.lex_state = 63, .external_lex_state = 2},
  [284] = {.lex_state = 63, .external_lex_state = 2},
  [285] = {.lex_state = 63, .external_lex_state = 2},
  [286] = {.lex_state = 63, .external_lex_state = 2},
  [287] = {.lex_state = 63, .external_lex_state = 2},
  [288] = {.lex_state = 63, .external_lex_state = 2},
  [289] = {.lex_state = 193},
  [290] = {.lex_state = 193, .external_lex_state = 5},
  [291] = {.lex_state = 63, .external_lex_state = 2},
  [292] = {.lex_state = 193, .external_lex_state = 5},
  [293] = {.lex_state = 63, .external_lex_state = 2},
  [294] = {.lex_state = 63, .external_lex_state = 2},
  [295] = {.lex_state = 63, .external_lex_state = 2},
  [296] = {.lex_state = 63, .external_lex_state = 2},
  [297] = {.lex_state = 63, .external_lex_state = 2},
  [298] = {.lex_state = 63, .external_lex_state = 2},
  [299] = {.lex_state = 63, .external_lex_state = 2},
  [300] = {.lex_state = 193},
  [301] = {.lex_state = 63, .external_lex_state = 2},
  [302] = {.lex_state = 63, .external_lex_state = 2},
  [303] = {.lex_state = 62, .external_lex_state = 1},
  [304] = {.lex_state = 342},
  [305] = {.lex_state = 62, .external_lex_state = 1},
  [306] = {.lex_state = 63, .external_lex_state = 2},
  [307] = {.lex_state = 63, .external_lex_state = 2},
  [308] = {.lex_state = 62, .external_lex_state = 1},
  [309] = {.lex_state = 62, .external_lex_state = 1},
  [310] = {.lex_state = 63, .external_lex_state = 2},
  [311] = {.lex_state = 63, .external_lex_state = 2},
  [312] = {.lex_state = 63, .external_lex_state = 2},
  [313] = {.lex_state = 63, .external_lex_state = 2},
  [314] = {.lex_state = 63, .external_lex_state = 2},
  [315] = {.lex_state = 63, .external_lex_state = 2},
  [316] = {.lex_state = 63, .external_lex_state = 2},
  [317] = {.lex_state = 63, .external_lex_state = 2},
  [318] = {.lex_state = 63, .external_lex_state = 2},
  [319] = {.lex_state = 63, .external_lex_state = 2},
  [320] = {.lex_state = 63, .external_lex_state = 2},
  [321] = {.lex_state = 63, .external_lex_state = 2},
  [322] = {.lex_state = 62, .external_lex_state = 1},
  [323] = {.lex_state = 62, .external_lex_state = 1},
  [324] = {.lex_state = 63, .external_lex_state = 2},
  [325] = {.lex_state = 62, .external_lex_state = 1},
  [326] = {.lex_state = 193},
  [327] = {.lex_state = 193},
  [328] = {.lex_state = 193},
  [329] = {.lex_state = 193},
  [330] = {.lex_state = 62, .external_lex_state = 1},
  [331] = {.lex_state = 193},
  [332] = {.lex_state = 193},
  [333] = {.lex_state = 193},
  [334] = {.lex_state = 193},
  [335] = {.lex_state = 193},
  [336] = {.lex_state = 193},
  [337] = {.lex_state = 193},
  [338] = {.lex_state = 193},
  [339] = {.lex_state = 193},
  [340] = {.lex_state = 193},
  [341] = {.lex_state = 54, .external_lex_state = 2},
  [342] = {.lex_state = 62, .external_lex_state = 2},
  [343] = {.lex_state = 193},
  [344] = {.lex_state = 193},
  [345] = {.lex_state = 193},
  [346] = {.lex_state = 193},
  [347] = {.lex_state = 193},
  [348] = {.lex_state = 193},
  [349] = {.lex_state = 193},
  [350] = {.lex_state = 193},
  [351] = {.lex_state = 193},
  [352] = {.lex_state = 193},
  [353] = {.lex_state = 193},
  [354] = {.lex_state = 62, .external_lex_state = 1},
  [355] = {.lex_state = 193},
  [356] = {.lex_state = 193},
  [357] = {.lex_state = 193},
  [358] = {.lex_state = 193},
  [359] = {.lex_state = 193},
  [360] = {.lex_state = 193},
  [361] = {.lex_state = 193},
  [362] = {.lex_state = 193},
  [363] = {.lex_state = 193},
  [364] = {.lex_state = 193},
  [365] = {.lex_state = 173, .external_lex_state = 2},
  [366] = {.lex_state = 193},
  [367] = {.lex_state = 173, .external_lex_state = 2},
  [368] = {.lex_state = 193},
  [369] = {.lex_state = 266, .external_lex_state = 2},
  [370] = {.lex_state = 193},
  [371] = {.lex_state = 193},
  [372] = {.lex_state = 173, .external_lex_state = 2},
  [373] = {.lex_state = 193},
  [374] = {.lex_state = 193},
  [375] = {.lex_state = 193},
  [376] = {.lex_state = 193},
  [377] = {.lex_state = 193},
  [378] = {.lex_state = 193},
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
  [401] = {.lex_state = 62, .external_lex_state = 2},
  [402] = {.lex_state = 62, .external_lex_state = 2},
  [403] = {.lex_state = 62, .external_lex_state = 2},
  [404] = {.lex_state = 62, .external_lex_state = 2},
  [405] = {.lex_state = 62, .external_lex_state = 2},
  [406] = {.lex_state = 62, .external_lex_state = 2},
  [407] = {.lex_state = 62, .external_lex_state = 2},
  [408] = {.lex_state = 62, .external_lex_state = 2},
  [409] = {.lex_state = 62, .external_lex_state = 2},
  [410] = {.lex_state = 62, .external_lex_state = 2},
  [411] = {.lex_state = 62, .external_lex_state = 2},
  [412] = {.lex_state = 62, .external_lex_state = 2},
  [413] = {.lex_state = 62, .external_lex_state = 2},
  [414] = {.lex_state = 62, .external_lex_state = 2},
  [415] = {.lex_state = 62, .external_lex_state = 2},
  [416] = {.lex_state = 62, .external_lex_state = 2},
  [417] = {.lex_state = 62, .external_lex_state = 2},
  [418] = {.lex_state = 62, .external_lex_state = 2},
  [419] = {.lex_state = 62, .external_lex_state = 2},
  [420] = {.lex_state = 62, .external_lex_state = 2},
  [421] = {.lex_state = 64},
  [422] = {.lex_state = 64},
  [423] = {.lex_state = 64},
  [424] = {.lex_state = 58, .external_lex_state = 3},
  [425] = {.lex_state = 58, .external_lex_state = 3},
  [426] = {.lex_state = 58, .external_lex_state = 3},
  [427] = {.lex_state = 58, .external_lex_state = 3},
  [428] = {.lex_state = 64},
  [429] = {.lex_state = 58, .external_lex_state = 3},
  [430] = {.lex_state = 58, .external_lex_state = 3},
  [431] = {.lex_state = 58, .external_lex_state = 3},
  [432] = {.lex_state = 58, .external_lex_state = 3},
  [433] = {.lex_state = 58, .external_lex_state = 3},
  [434] = {.lex_state = 58, .external_lex_state = 3},
  [435] = {.lex_state = 64},
  [436] = {.lex_state = 58, .external_lex_state = 3},
  [437] = {.lex_state = 58, .external_lex_state = 3},
  [438] = {.lex_state = 58, .external_lex_state = 3},
  [439] = {.lex_state = 58, .external_lex_state = 3},
  [440] = {.lex_state = 58, .external_lex_state = 3},
  [441] = {.lex_state = 68},
  [442] = {.lex_state = 59, .external_lex_state = 3},
  [443] = {.lex_state = 68},
  [444] = {.lex_state = 59, .external_lex_state = 3},
  [445] = {.lex_state = 59, .external_lex_state = 3},
  [446] = {.lex_state = 68},
  [447] = {.lex_state = 68},
  [448] = {.lex_state = 59, .external_lex_state = 3},
  [449] = {.lex_state = 68},
  [450] = {.lex_state = 59, .external_lex_state = 3},
  [451] = {.lex_state = 59, .external_lex_state = 3},
  [452] = {.lex_state = 68},
  [453] = {.lex_state = 59, .external_lex_state = 3},
  [454] = {.lex_state = 59, .external_lex_state = 3},
  [455] = {.lex_state = 68},
  [456] = {.lex_state = 68},
  [457] = {.lex_state = 59, .external_lex_state = 3},
  [458] = {.lex_state = 68},
  [459] = {.lex_state = 59, .external_lex_state = 3},
  [460] = {.lex_state = 68},
  [461] = {.lex_state = 68},
  [462] = {.lex_state = 68},
  [463] = {.lex_state = 59, .external_lex_state = 3},
  [464] = {.lex_state = 59, .external_lex_state = 3},
  [465] = {.lex_state = 59, .external_lex_state = 3},
  [466] = {.lex_state = 68},
  [467] = {.lex_state = 59, .external_lex_state = 3},
  [468] = {.lex_state = 59, .external_lex_state = 3},
  [469] = {.lex_state = 59, .external_lex_state = 3},
  [470] = {.lex_state = 59, .external_lex_state = 3},
  [471] = {.lex_state = 59, .external_lex_state = 3},
  [472] = {.lex_state = 59, .external_lex_state = 3},
  [473] = {.lex_state = 59, .external_lex_state = 3},
  [474] = {.lex_state = 59, .external_lex_state = 3},
  [475] = {.lex_state = 59, .external_lex_state = 3},
  [476] = {.lex_state = 59, .external_lex_state = 3},
  [477] = {.lex_state = 59, .external_lex_state = 3},
  [478] = {.lex_state = 59, .external_lex_state = 3},
  [479] = {.lex_state = 59, .external_lex_state = 3},
  [480] = {.lex_state = 59, .external_lex_state = 3},
  [481] = {.lex_state = 59, .external_lex_state = 3},
  [482] = {.lex_state = 59, .external_lex_state = 3},
  [483] = {.lex_state = 59, .external_lex_state = 3},
  [484] = {.lex_state = 59, .external_lex_state = 3},
  [485] = {.lex_state = 59, .external_lex_state = 3},
  [486] = {.lex_state = 59, .external_lex_state = 3},
  [487] = {.lex_state = 59, .external_lex_state = 3},
  [488] = {.lex_state = 59, .external_lex_state = 3},
  [489] = {.lex_state = 50, .external_lex_state = 5},
  [490] = {.lex_state = 50, .external_lex_state = 5},
  [491] = {.lex_state = 50, .external_lex_state = 5},
  [492] = {.lex_state = 50, .external_lex_state = 5},
  [493] = {.lex_state = 50, .external_lex_state = 5},
  [494] = {.lex_state = 50, .external_lex_state = 5},
  [495] = {.lex_state = 50, .external_lex_state = 5},
  [496] = {.lex_state = 50, .external_lex_state = 5},
  [497] = {.lex_state = 50, .external_lex_state = 5},
  [498] = {.lex_state = 50, .external_lex_state = 5},
  [499] = {.lex_state = 50, .external_lex_state = 5},
  [500] = {.lex_state = 50, .external_lex_state = 5},
  [501] = {.lex_state = 50, .external_lex_state = 5},
  [502] = {.lex_state = 50, .external_lex_state = 5},
  [503] = {.lex_state = 50, .external_lex_state = 5},
  [504] = {.lex_state = 59, .external_lex_state = 3},
  [505] = {.lex_state = 50},
  [506] = {.lex_state = 50, .external_lex_state = 3},
  [507] = {.lex_state = 67, .external_lex_state = 2},
  [508] = {.lex_state = 50, .external_lex_state = 3},
  [509] = {.lex_state = 50, .external_lex_state = 3},
  [510] = {.lex_state = 50},
  [511] = {.lex_state = 67, .external_lex_state = 2},
  [512] = {.lex_state = 50, .external_lex_state = 3},
  [513] = {.lex_state = 67, .external_lex_state = 1},
  [514] = {.lex_state = 50, .external_lex_state = 3},
  [515] = {.lex_state = 50, .external_lex_state = 3},
  [516] = {.lex_state = 67, .external_lex_state = 2},
  [517] = {.lex_state = 64},
  [518] = {.lex_state = 50, .external_lex_state = 3},
  [519] = {.lex_state = 67, .external_lex_state = 1},
  [520] = {.lex_state = 50, .external_lex_state = 3},
  [521] = {.lex_state = 50, .external_lex_state = 3},
  [522] = {.lex_state = 59, .external_lex_state = 3},
  [523] = {.lex_state = 50},
  [524] = {.lex_state = 50, .external_lex_state = 3},
  [525] = {.lex_state = 50, .external_lex_state = 3},
  [526] = {.lex_state = 50},
  [527] = {.lex_state = 50, .external_lex_state = 3},
  [528] = {.lex_state = 50, .external_lex_state = 3},
  [529] = {.lex_state = 50, .external_lex_state = 3},
  [530] = {.lex_state = 50, .external_lex_state = 3},
  [531] = {.lex_state = 50},
  [532] = {.lex_state = 50, .external_lex_state = 3},
  [533] = {.lex_state = 50, .external_lex_state = 3},
  [534] = {.lex_state = 50},
  [535] = {.lex_state = 59, .external_lex_state = 3},
  [536] = {.lex_state = 67, .external_lex_state = 2},
  [537] = {.lex_state = 50},
  [538] = {.lex_state = 50, .external_lex_state = 3},
  [539] = {.lex_state = 50, .external_lex_state = 3},
  [540] = {.lex_state = 50, .external_lex_state = 3},
  [541] = {.lex_state = 67, .external_lex_state = 2},
  [542] = {.lex_state = 67, .external_lex_state = 1},
  [543] = {.lex_state = 50, .external_lex_state = 3},
  [544] = {.lex_state = 67, .external_lex_state = 1},
  [545] = {.lex_state = 67, .external_lex_state = 1},
  [546] = {.lex_state = 50},
  [547] = {.lex_state = 50, .external_lex_state = 3},
  [548] = {.lex_state = 50, .external_lex_state = 3},
  [549] = {.lex_state = 50},
  [550] = {.lex_state = 50, .external_lex_state = 3},
  [551] = {.lex_state = 50, .external_lex_state = 3},
  [552] = {.lex_state = 50, .external_lex_state = 3},
  [553] = {.lex_state = 67, .external_lex_state = 2},
  [554] = {.lex_state = 50, .external_lex_state = 3},
  [555] = {.lex_state = 50, .external_lex_state = 3},
  [556] = {.lex_state = 50, .external_lex_state = 3},
  [557] = {.lex_state = 67, .external_lex_state = 2},
  [558] = {.lex_state = 50, .external_lex_state = 3},
  [559] = {.lex_state = 50, .external_lex_state = 3},
  [560] = {.lex_state = 50, .external_lex_state = 3},
  [561] = {.lex_state = 50, .external_lex_state = 3},
  [562] = {.lex_state = 67, .external_lex_state = 1},
  [563] = {.lex_state = 50, .external_lex_state = 3},
  [564] = {.lex_state = 50},
  [565] = {.lex_state = 50, .external_lex_state = 3},
  [566] = {.lex_state = 67, .external_lex_state = 2},
  [567] = {.lex_state = 50, .external_lex_state = 3},
  [568] = {.lex_state = 50, .external_lex_state = 3},
  [569] = {.lex_state = 67, .external_lex_state = 1},
  [570] = {.lex_state = 50, .external_lex_state = 3},
  [571] = {.lex_state = 50},
  [572] = {.lex_state = 50},
  [573] = {.lex_state = 67, .external_lex_state = 2},
  [574] = {.lex_state = 50},
  [575] = {.lex_state = 50, .external_lex_state = 3},
  [576] = {.lex_state = 50, .external_lex_state = 3},
  [577] = {.lex_state = 67, .external_lex_state = 1},
  [578] = {.lex_state = 50},
  [579] = {.lex_state = 50},
  [580] = {.lex_state = 67, .external_lex_state = 3},
  [581] = {.lex_state = 50},
  [582] = {.lex_state = 50},
  [583] = {.lex_state = 67, .external_lex_state = 1},
  [584] = {.lex_state = 50},
  [585] = {.lex_state = 50},
  [586] = {.lex_state = 50, .external_lex_state = 3},
  [587] = {.lex_state = 50},
  [588] = {.lex_state = 50},
  [589] = {.lex_state = 50},
  [590] = {.lex_state = 67, .external_lex_state = 3},
  [591] = {.lex_state = 50},
  [592] = {.lex_state = 50},
  [593] = {.lex_state = 50},
  [594] = {.lex_state = 50},
  [595] = {.lex_state = 67, .external_lex_state = 3},
  [596] = {.lex_state = 50},
  [597] = {.lex_state = 50},
  [598] = {.lex_state = 59},
  [599] = {.lex_state = 67, .external_lex_state = 3},
  [600] = {.lex_state = 50},
  [601] = {.lex_state = 67, .external_lex_state = 3},
  [602] = {.lex_state = 50},
  [603] = {.lex_state = 50},
  [604] = {.lex_state = 50},
  [605] = {.lex_state = 50},
  [606] = {.lex_state = 59},
  [607] = {.lex_state = 59},
  [608] = {.lex_state = 50},
  [609] = {.lex_state = 50},
  [610] = {.lex_state = 50},
  [611] = {.lex_state = 50},
  [612] = {.lex_state = 67, .external_lex_state = 3},
  [613] = {.lex_state = 67, .external_lex_state = 3},
  [614] = {.lex_state = 50},
  [615] = {.lex_state = 50},
  [616] = {.lex_state = 50},
  [617] = {.lex_state = 50},
  [618] = {.lex_state = 67, .external_lex_state = 3},
  [619] = {.lex_state = 50},
  [620] = {.lex_state = 67},
  [621] = {.lex_state = 67, .external_lex_state = 2},
  [622] = {.lex_state = 67, .external_lex_state = 2},
  [623] = {.lex_state = 50, .external_lex_state = 3},
  [624] = {.lex_state = 67, .external_lex_state = 2},
  [625] = {.lex_state = 67, .external_lex_state = 2},
  [626] = {.lex_state = 67, .external_lex_state = 2},
  [627] = {.lex_state = 59},
  [628] = {.lex_state = 50, .external_lex_state = 3},
  [629] = {.lex_state = 67, .external_lex_state = 2},
  [630] = {.lex_state = 68},
  [631] = {.lex_state = 67, .external_lex_state = 2},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 67, .external_lex_state = 2},
  [635] = {.lex_state = 67, .external_lex_state = 2},
  [636] = {.lex_state = 50, .external_lex_state = 3},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 67},
  [639] = {.lex_state = 67, .external_lex_state = 2},
  [640] = {.lex_state = 67},
  [641] = {.lex_state = 67, .external_lex_state = 2},
  [642] = {.lex_state = 67, .external_lex_state = 2},
  [643] = {.lex_state = 67, .external_lex_state = 2},
  [644] = {.lex_state = 67},
  [645] = {.lex_state = 50, .external_lex_state = 3},
  [646] = {.lex_state = 337, .external_lex_state = 5},
  [647] = {.lex_state = 51, .external_lex_state = 2},
  [648] = {.lex_state = 50, .external_lex_state = 3},
  [649] = {.lex_state = 67},
  [650] = {.lex_state = 51, .external_lex_state = 2},
  [651] = {.lex_state = 67},
  [652] = {.lex_state = 67},
  [653] = {.lex_state = 67},
  [654] = {.lex_state = 101},
  [655] = {.lex_state = 67},
  [656] = {.lex_state = 67},
  [657] = {.lex_state = 58},
  [658] = {.lex_state = 337, .external_lex_state = 5},
  [659] = {.lex_state = 67},
  [660] = {.lex_state = 67},
  [661] = {.lex_state = 51, .external_lex_state = 2},
  [662] = {.lex_state = 67},
  [663] = {.lex_state = 55, .external_lex_state = 3},
  [664] = {.lex_state = 337, .external_lex_state = 5},
  [665] = {.lex_state = 67},
  [666] = {.lex_state = 51, .external_lex_state = 2},
  [667] = {.lex_state = 67},
  [668] = {.lex_state = 58},
  [669] = {.lex_state = 101},
  [670] = {.lex_state = 67},
  [671] = {.lex_state = 337, .external_lex_state = 5},
  [672] = {.lex_state = 101},
  [673] = {.lex_state = 101},
  [674] = {.lex_state = 67},
  [675] = {.lex_state = 67},
  [676] = {.lex_state = 67},
  [677] = {.lex_state = 55, .external_lex_state = 3},
  [678] = {.lex_state = 50, .external_lex_state = 5},
  [679] = {.lex_state = 67},
  [680] = {.lex_state = 67},
  [681] = {.lex_state = 67},
  [682] = {.lex_state = 50, .external_lex_state = 3},
  [683] = {.lex_state = 55, .external_lex_state = 3},
  [684] = {.lex_state = 67},
  [685] = {.lex_state = 55, .external_lex_state = 3},
  [686] = {.lex_state = 67},
  [687] = {.lex_state = 51, .external_lex_state = 2},
  [688] = {.lex_state = 55, .external_lex_state = 3},
  [689] = {.lex_state = 337, .external_lex_state = 5},
  [690] = {.lex_state = 101},
  [691] = {.lex_state = 51, .external_lex_state = 2},
  [692] = {.lex_state = 67},
  [693] = {.lex_state = 337, .external_lex_state = 5},
  [694] = {.lex_state = 67},
  [695] = {.lex_state = 67},
  [696] = {.lex_state = 67},
  [697] = {.lex_state = 67},
  [698] = {.lex_state = 67},
  [699] = {.lex_state = 67},
  [700] = {.lex_state = 55},
  [701] = {.lex_state = 58},
  [702] = {.lex_state = 180},
  [703] = {.lex_state = 180},
  [704] = {.lex_state = 180},
  [705] = {.lex_state = 58},
  [706] = {.lex_state = 337, .external_lex_state = 5},
  [707] = {.lex_state = 180},
  [708] = {.lex_state = 337},
  [709] = {.lex_state = 58},
  [710] = {.lex_state = 55},
  [711] = {.lex_state = 58},
  [712] = {.lex_state = 337, .external_lex_state = 5},
  [713] = {.lex_state = 0, .external_lex_state = 3},
  [714] = {.lex_state = 58},
  [715] = {.lex_state = 58},
  [716] = {.lex_state = 58},
  [717] = {.lex_state = 58},
  [718] = {.lex_state = 337, .external_lex_state = 5},
  [719] = {.lex_state = 58},
  [720] = {.lex_state = 337},
  [721] = {.lex_state = 51, .external_lex_state = 3},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 55},
  [724] = {.lex_state = 55},
  [725] = {.lex_state = 337, .external_lex_state = 3},
  [726] = {.lex_state = 51, .external_lex_state = 2},
  [727] = {.lex_state = 0, .external_lex_state = 3},
  [728] = {.lex_state = 337, .external_lex_state = 5},
  [729] = {.lex_state = 55},
  [730] = {.lex_state = 55},
  [731] = {.lex_state = 337},
  [732] = {.lex_state = 51, .external_lex_state = 3},
  [733] = {.lex_state = 337, .external_lex_state = 3},
  [734] = {.lex_state = 337},
  [735] = {.lex_state = 51, .external_lex_state = 3},
  [736] = {.lex_state = 337, .external_lex_state = 3},
  [737] = {.lex_state = 55},
  [738] = {.lex_state = 58},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 55},
  [742] = {.lex_state = 55},
  [743] = {.lex_state = 180},
  [744] = {.lex_state = 337},
  [745] = {.lex_state = 51, .external_lex_state = 3},
  [746] = {.lex_state = 337},
  [747] = {.lex_state = 337, .external_lex_state = 3},
  [748] = {.lex_state = 51, .external_lex_state = 2},
  [749] = {.lex_state = 58},
  [750] = {.lex_state = 337, .external_lex_state = 3},
  [751] = {.lex_state = 337, .external_lex_state = 5},
  [752] = {.lex_state = 58},
  [753] = {.lex_state = 58},
  [754] = {.lex_state = 337},
  [755] = {.lex_state = 337, .external_lex_state = 5},
  [756] = {.lex_state = 0, .external_lex_state = 3},
  [757] = {.lex_state = 51, .external_lex_state = 3},
  [758] = {.lex_state = 337, .external_lex_state = 5},
  [759] = {.lex_state = 337},
  [760] = {.lex_state = 58},
  [761] = {.lex_state = 55},
  [762] = {.lex_state = 71},
  [763] = {.lex_state = 58},
  [764] = {.lex_state = 55},
  [765] = {.lex_state = 58},
  [766] = {.lex_state = 337, .external_lex_state = 5},
  [767] = {.lex_state = 55},
  [768] = {.lex_state = 58},
  [769] = {.lex_state = 337},
  [770] = {.lex_state = 58},
  [771] = {.lex_state = 337, .external_lex_state = 5},
  [772] = {.lex_state = 55},
  [773] = {.lex_state = 55},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0, .external_lex_state = 3},
  [776] = {.lex_state = 337, .external_lex_state = 5},
  [777] = {.lex_state = 55},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 58},
  [780] = {.lex_state = 337},
  [781] = {.lex_state = 55},
  [782] = {.lex_state = 55},
  [783] = {.lex_state = 58},
  [784] = {.lex_state = 337, .external_lex_state = 5},
  [785] = {.lex_state = 55},
  [786] = {.lex_state = 55},
  [787] = {.lex_state = 58},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0, .external_lex_state = 6},
  [790] = {.lex_state = 67},
  [791] = {.lex_state = 0, .external_lex_state = 6},
  [792] = {.lex_state = 0, .external_lex_state = 6},
  [793] = {.lex_state = 55},
  [794] = {.lex_state = 51},
  [795] = {.lex_state = 67},
  [796] = {.lex_state = 0, .external_lex_state = 6},
  [797] = {.lex_state = 55},
  [798] = {.lex_state = 51},
  [799] = {.lex_state = 0, .external_lex_state = 6},
  [800] = {.lex_state = 67},
  [801] = {.lex_state = 67},
  [802] = {.lex_state = 67},
  [803] = {.lex_state = 0, .external_lex_state = 6},
  [804] = {.lex_state = 67},
  [805] = {.lex_state = 0, .external_lex_state = 6},
  [806] = {.lex_state = 51},
  [807] = {.lex_state = 55},
  [808] = {.lex_state = 51},
  [809] = {.lex_state = 51},
  [810] = {.lex_state = 67},
  [811] = {.lex_state = 55},
  [812] = {.lex_state = 51},
  [813] = {.lex_state = 67},
  [814] = {.lex_state = 67},
  [815] = {.lex_state = 51},
  [816] = {.lex_state = 67},
  [817] = {.lex_state = 0, .external_lex_state = 6},
  [818] = {.lex_state = 55},
  [819] = {.lex_state = 51},
  [820] = {.lex_state = 0, .external_lex_state = 6},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 67},
  [823] = {.lex_state = 69},
  [824] = {.lex_state = 67},
  [825] = {.lex_state = 0, .external_lex_state = 6},
  [826] = {.lex_state = 0, .external_lex_state = 6},
  [827] = {.lex_state = 65},
  [828] = {.lex_state = 180},
  [829] = {.lex_state = 0, .external_lex_state = 6},
  [830] = {.lex_state = 0, .external_lex_state = 6},
  [831] = {.lex_state = 67},
  [832] = {.lex_state = 0, .external_lex_state = 3},
  [833] = {.lex_state = 67},
  [834] = {.lex_state = 337, .external_lex_state = 5},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 58},
  [837] = {.lex_state = 67},
  [838] = {.lex_state = 65},
  [839] = {.lex_state = 69},
  [840] = {.lex_state = 0, .external_lex_state = 6},
  [841] = {.lex_state = 0, .external_lex_state = 6},
  [842] = {.lex_state = 0, .external_lex_state = 6},
  [843] = {.lex_state = 67},
  [844] = {.lex_state = 0, .external_lex_state = 6},
  [845] = {.lex_state = 0, .external_lex_state = 6},
  [846] = {.lex_state = 51},
  [847] = {.lex_state = 0, .external_lex_state = 6},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0, .external_lex_state = 6},
  [850] = {.lex_state = 0, .external_lex_state = 6},
  [851] = {.lex_state = 337, .external_lex_state = 5},
  [852] = {.lex_state = 67},
  [853] = {.lex_state = 0, .external_lex_state = 6},
  [854] = {.lex_state = 0, .external_lex_state = 6},
  [855] = {.lex_state = 71},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 67},
  [859] = {.lex_state = 0, .external_lex_state = 6},
  [860] = {.lex_state = 51},
  [861] = {.lex_state = 0, .external_lex_state = 6},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 67},
  [864] = {.lex_state = 69},
  [865] = {.lex_state = 65},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0, .external_lex_state = 6},
  [869] = {.lex_state = 67},
  [870] = {.lex_state = 71},
  [871] = {.lex_state = 0, .external_lex_state = 6},
  [872] = {.lex_state = 0, .external_lex_state = 6},
  [873] = {.lex_state = 0, .external_lex_state = 3},
  [874] = {.lex_state = 0, .external_lex_state = 3},
  [875] = {.lex_state = 0, .external_lex_state = 6},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0, .external_lex_state = 3},
  [878] = {.lex_state = 0, .external_lex_state = 3},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 873},
  [881] = {.lex_state = 181},
  [882] = {.lex_state = 0, .external_lex_state = 3},
  [883] = {.lex_state = 0, .external_lex_state = 3},
  [884] = {.lex_state = 0, .external_lex_state = 3},
  [885] = {.lex_state = 0, .external_lex_state = 3},
  [886] = {.lex_state = 873},
  [887] = {.lex_state = 0, .external_lex_state = 3},
  [888] = {.lex_state = 0, .external_lex_state = 3},
  [889] = {.lex_state = 337},
  [890] = {.lex_state = 67},
  [891] = {.lex_state = 0, .external_lex_state = 6},
  [892] = {.lex_state = 0, .external_lex_state = 6},
  [893] = {.lex_state = 182},
  [894] = {.lex_state = 0, .external_lex_state = 3},
  [895] = {.lex_state = 0, .external_lex_state = 3},
  [896] = {.lex_state = 0, .external_lex_state = 6},
  [897] = {.lex_state = 0, .external_lex_state = 3},
  [898] = {.lex_state = 183},
  [899] = {.lex_state = 0, .external_lex_state = 3},
  [900] = {.lex_state = 0, .external_lex_state = 3},
  [901] = {.lex_state = 0, .external_lex_state = 3},
  [902] = {.lex_state = 0, .external_lex_state = 3},
  [903] = {.lex_state = 0, .external_lex_state = 3},
  [904] = {.lex_state = 873},
  [905] = {.lex_state = 0, .external_lex_state = 3},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0, .external_lex_state = 6},
  [908] = {.lex_state = 0, .external_lex_state = 6},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0, .external_lex_state = 3},
  [911] = {.lex_state = 0, .external_lex_state = 3},
  [912] = {.lex_state = 0, .external_lex_state = 6},
  [913] = {.lex_state = 0, .external_lex_state = 3},
  [914] = {.lex_state = 337},
  [915] = {.lex_state = 71},
  [916] = {.lex_state = 0, .external_lex_state = 3},
  [917] = {.lex_state = 0, .external_lex_state = 3},
  [918] = {.lex_state = 0, .external_lex_state = 3},
  [919] = {.lex_state = 0, .external_lex_state = 3},
  [920] = {.lex_state = 0, .external_lex_state = 3},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 873},
  [923] = {.lex_state = 0, .external_lex_state = 3},
  [924] = {.lex_state = 0, .external_lex_state = 3},
  [925] = {.lex_state = 0, .external_lex_state = 3},
  [926] = {.lex_state = 0, .external_lex_state = 6},
  [927] = {.lex_state = 181},
  [928] = {.lex_state = 182},
  [929] = {.lex_state = 182},
  [930] = {.lex_state = 0, .external_lex_state = 6},
  [931] = {.lex_state = 0, .external_lex_state = 3},
  [932] = {.lex_state = 52},
  [933] = {.lex_state = 181},
  [934] = {.lex_state = 0, .external_lex_state = 6},
  [935] = {.lex_state = 337},
  [936] = {.lex_state = 0, .external_lex_state = 6},
  [937] = {.lex_state = 0, .external_lex_state = 3},
  [938] = {.lex_state = 0, .external_lex_state = 3},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 873},
  [941] = {.lex_state = 0, .external_lex_state = 3},
  [942] = {.lex_state = 0, .external_lex_state = 3},
  [943] = {.lex_state = 0, .external_lex_state = 6},
  [944] = {.lex_state = 0, .external_lex_state = 6},
  [945] = {.lex_state = 0, .external_lex_state = 3},
  [946] = {.lex_state = 193},
  [947] = {.lex_state = 55},
  [948] = {.lex_state = 0, .external_lex_state = 6},
  [949] = {.lex_state = 0, .external_lex_state = 3},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0, .external_lex_state = 3},
  [952] = {.lex_state = 0, .external_lex_state = 6},
  [953] = {.lex_state = 0, .external_lex_state = 3},
  [954] = {.lex_state = 67},
  [955] = {.lex_state = 0, .external_lex_state = 3},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0, .external_lex_state = 3},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0, .external_lex_state = 6},
  [960] = {.lex_state = 0, .external_lex_state = 6},
  [961] = {.lex_state = 0, .external_lex_state = 3},
  [962] = {.lex_state = 0, .external_lex_state = 3},
  [963] = {.lex_state = 0, .external_lex_state = 3},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0, .external_lex_state = 3},
  [967] = {.lex_state = 0, .external_lex_state = 3},
  [968] = {.lex_state = 0, .external_lex_state = 3},
  [969] = {.lex_state = 0, .external_lex_state = 3},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0, .external_lex_state = 3},
  [972] = {.lex_state = 0, .external_lex_state = 3},
  [973] = {.lex_state = 0, .external_lex_state = 3},
  [974] = {.lex_state = 0, .external_lex_state = 6},
  [975] = {.lex_state = 0, .external_lex_state = 6},
  [976] = {.lex_state = 53},
  [977] = {.lex_state = 0, .external_lex_state = 6},
  [978] = {.lex_state = 0, .external_lex_state = 6},
  [979] = {.lex_state = 0, .external_lex_state = 3},
  [980] = {.lex_state = 181},
  [981] = {.lex_state = 0, .external_lex_state = 3},
  [982] = {.lex_state = 0, .external_lex_state = 6},
  [983] = {.lex_state = 0, .external_lex_state = 6},
  [984] = {.lex_state = 182},
  [985] = {.lex_state = 0, .external_lex_state = 6},
  [986] = {.lex_state = 0, .external_lex_state = 6},
  [987] = {.lex_state = 0, .external_lex_state = 3},
  [988] = {.lex_state = 181},
  [989] = {.lex_state = 0, .external_lex_state = 6},
  [990] = {.lex_state = 0, .external_lex_state = 6},
  [991] = {.lex_state = 53},
  [992] = {.lex_state = 0, .external_lex_state = 6},
  [993] = {.lex_state = 0, .external_lex_state = 6},
  [994] = {.lex_state = 182},
  [995] = {.lex_state = 337},
  [996] = {.lex_state = 0, .external_lex_state = 6},
  [997] = {.lex_state = 0, .external_lex_state = 6},
  [998] = {.lex_state = 0, .external_lex_state = 3},
  [999] = {.lex_state = 0, .external_lex_state = 6},
  [1000] = {.lex_state = 0, .external_lex_state = 6},
  [1001] = {.lex_state = 0, .external_lex_state = 6},
  [1002] = {.lex_state = 0, .external_lex_state = 6},
  [1003] = {.lex_state = 0, .external_lex_state = 6},
  [1004] = {.lex_state = 0, .external_lex_state = 6},
  [1005] = {.lex_state = 55},
  [1006] = {.lex_state = 0, .external_lex_state = 3},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0, .external_lex_state = 3},
  [1009] = {.lex_state = 0, .external_lex_state = 3},
  [1010] = {.lex_state = 55},
  [1011] = {.lex_state = 0, .external_lex_state = 3},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0, .external_lex_state = 3},
  [1014] = {.lex_state = 0, .external_lex_state = 3},
  [1015] = {.lex_state = 0, .external_lex_state = 3},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0, .external_lex_state = 3},
  [1018] = {.lex_state = 0, .external_lex_state = 3},
  [1019] = {.lex_state = 0, .external_lex_state = 3},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0, .external_lex_state = 3},
  [1022] = {.lex_state = 0, .external_lex_state = 3},
  [1023] = {.lex_state = 0, .external_lex_state = 3},
  [1024] = {.lex_state = 0, .external_lex_state = 3},
  [1025] = {.lex_state = 0, .external_lex_state = 3},
  [1026] = {.lex_state = 0, .external_lex_state = 3},
  [1027] = {.lex_state = 0, .external_lex_state = 3},
  [1028] = {.lex_state = 0, .external_lex_state = 3},
  [1029] = {.lex_state = 0, .external_lex_state = 3},
  [1030] = {.lex_state = 337},
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
    [sym_source_file] = STATE(879),
    [sym_doctype] = STATE(8),
    [sym_pipe] = STATE(8),
    [sym_while] = STATE(8),
    [sym_each] = STATE(8),
    [sym_mixin_use] = STATE(8),
    [sym_mixin_definition] = STATE(8),
    [sym_block_definition] = STATE(8),
    [sym_block_append] = STATE(8),
    [sym_block_prepend] = STATE(8),
    [sym_extends] = STATE(8),
    [sym_filter] = STATE(8),
    [sym_conditional] = STATE(8),
    [sym_case] = STATE(8),
    [sym_unescaped_buffered_code] = STATE(8),
    [sym_buffered_code] = STATE(8),
    [sym_script_block] = STATE(8),
    [sym_tag] = STATE(8),
    [sym_comment] = STATE(8),
    [sym__comment] = STATE(336),
    [sym__comment_not_first_line] = STATE(336),
    [sym_unbuffered_code] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_mixin] = ACTIONS(17),
    [anon_sym_block] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_extends] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_unless] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_elseif] = ACTIONS(31),
    [anon_sym_case] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_script_DOT] = ACTIONS(39),
    [anon_sym_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(43),
    [sym_tag_name] = ACTIONS(45),
    [sym_class] = ACTIONS(47),
    [sym_id] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(99), 1,
      sym__dedent,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(63), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
    STATE(3), 19,
      sym_doctype,
      sym_pipe,
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
  [107] = 26,
    ACTIONS(103), 1,
      anon_sym_doctype,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(109), 1,
      anon_sym_while,
    ACTIONS(112), 1,
      anon_sym_else,
    ACTIONS(120), 1,
      anon_sym_block,
    ACTIONS(123), 1,
      anon_sym_append,
    ACTIONS(126), 1,
      anon_sym_prepend,
    ACTIONS(129), 1,
      anon_sym_extends,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_elseif,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(144), 1,
      anon_sym_BANG_EQ,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      anon_sym_script_DOT,
    ACTIONS(153), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(159), 1,
      sym_tag_name,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(115), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(135), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(162), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(101), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(118), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
    STATE(3), 19,
      sym_doctype,
      sym_pipe,
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
  [212] = 27,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(171), 1,
      sym__dedent,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(63), 3,
      anon_sym_mixin,
      anon_sym_when,
      anon_sym_default,
    STATE(3), 19,
      sym_doctype,
      sym_pipe,
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
  [319] = 26,
    ACTIONS(118), 1,
      anon_sym_mixin,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      anon_sym_doctype,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(182), 1,
      anon_sym_else,
    ACTIONS(188), 1,
      anon_sym_block,
    ACTIONS(191), 1,
      anon_sym_append,
    ACTIONS(194), 1,
      anon_sym_prepend,
    ACTIONS(197), 1,
      anon_sym_extends,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      anon_sym_elseif,
    ACTIONS(209), 1,
      anon_sym_BANG_EQ,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(215), 1,
      anon_sym_script_DOT,
    ACTIONS(218), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(224), 1,
      sym_tag_name,
    ACTIONS(230), 1,
      anon_sym_DASH,
    ACTIONS(233), 1,
      sym__newline,
    ACTIONS(185), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(203), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(227), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    ACTIONS(101), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    STATE(5), 19,
      sym_doctype,
      sym_pipe,
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
  [422] = 27,
    ACTIONS(63), 1,
      anon_sym_mixin,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(278), 1,
      sym__dedent,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 19,
      sym_doctype,
      sym_pipe,
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
  [527] = 27,
    ACTIONS(63), 1,
      anon_sym_mixin,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(280), 1,
      sym__dedent,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 19,
      sym_doctype,
      sym_pipe,
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
  [632] = 26,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_else,
    ACTIONS(15), 1,
      anon_sym_PLUS,
    ACTIONS(17), 1,
      anon_sym_mixin,
    ACTIONS(19), 1,
      anon_sym_block,
    ACTIONS(21), 1,
      anon_sym_append,
    ACTIONS(23), 1,
      anon_sym_prepend,
    ACTIONS(25), 1,
      anon_sym_extends,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(31), 1,
      anon_sym_elseif,
    ACTIONS(33), 1,
      anon_sym_case,
    ACTIONS(35), 1,
      anon_sym_BANG_EQ,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(39), 1,
      anon_sym_script_DOT,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(45), 1,
      sym_tag_name,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(29), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(47), 2,
      sym_class,
      sym_id,
    STATE(336), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 20,
      sym_doctype,
      sym_pipe,
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
  [734] = 26,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_doctype,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_while,
    ACTIONS(295), 1,
      anon_sym_else,
    ACTIONS(301), 1,
      anon_sym_PLUS,
    ACTIONS(304), 1,
      anon_sym_mixin,
    ACTIONS(307), 1,
      anon_sym_block,
    ACTIONS(310), 1,
      anon_sym_append,
    ACTIONS(313), 1,
      anon_sym_prepend,
    ACTIONS(316), 1,
      anon_sym_extends,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(325), 1,
      anon_sym_elseif,
    ACTIONS(328), 1,
      anon_sym_case,
    ACTIONS(331), 1,
      anon_sym_BANG_EQ,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(337), 1,
      anon_sym_script_DOT,
    ACTIONS(340), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(346), 1,
      sym_tag_name,
    ACTIONS(352), 1,
      anon_sym_DASH,
    ACTIONS(298), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(322), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(349), 2,
      sym_class,
      sym_id,
    STATE(336), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 20,
      sym_doctype,
      sym_pipe,
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
  [836] = 26,
    ACTIONS(355), 1,
      anon_sym_doctype,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_while,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(365), 1,
      anon_sym_block,
    ACTIONS(367), 1,
      anon_sym_append,
    ACTIONS(369), 1,
      anon_sym_prepend,
    ACTIONS(371), 1,
      anon_sym_extends,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_elseif,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(381), 1,
      anon_sym_BANG_EQ,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_script_DOT,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(391), 1,
      sym_tag_name,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(397), 1,
      sym__newline,
    ACTIONS(399), 1,
      sym__dedent,
    ACTIONS(63), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(363), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(375), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(393), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(11), 19,
      sym_doctype,
      sym_pipe,
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
  [938] = 26,
    ACTIONS(101), 1,
      sym__dedent,
    ACTIONS(401), 1,
      anon_sym_doctype,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(407), 1,
      anon_sym_while,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(416), 1,
      anon_sym_block,
    ACTIONS(419), 1,
      anon_sym_append,
    ACTIONS(422), 1,
      anon_sym_prepend,
    ACTIONS(425), 1,
      anon_sym_extends,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(434), 1,
      anon_sym_elseif,
    ACTIONS(437), 1,
      anon_sym_case,
    ACTIONS(440), 1,
      anon_sym_BANG_EQ,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(446), 1,
      anon_sym_script_DOT,
    ACTIONS(449), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(452), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(455), 1,
      sym_tag_name,
    ACTIONS(461), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      sym__newline,
    ACTIONS(118), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(413), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(431), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(458), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(11), 19,
      sym_doctype,
      sym_pipe,
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
  [1040] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(42), 19,
      sym_doctype,
      sym_pipe,
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
  [1138] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 19,
      sym_doctype,
      sym_pipe,
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
  [1236] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(515), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 19,
      sym_doctype,
      sym_pipe,
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
  [1334] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 19,
      sym_doctype,
      sym_pipe,
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
  [1432] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 19,
      sym_doctype,
      sym_pipe,
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
  [1530] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 19,
      sym_doctype,
      sym_pipe,
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
  [1628] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(515), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 19,
      sym_doctype,
      sym_pipe,
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
  [1726] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(515), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 19,
      sym_doctype,
      sym_pipe,
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
  [1824] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(515), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 19,
      sym_doctype,
      sym_pipe,
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
  [1922] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(527), 1,
      sym__newline,
    ACTIONS(529), 1,
      sym__dedent,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(31), 19,
      sym_doctype,
      sym_pipe,
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
  [2020] = 25,
    ACTIONS(355), 1,
      anon_sym_doctype,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_while,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(365), 1,
      anon_sym_block,
    ACTIONS(367), 1,
      anon_sym_append,
    ACTIONS(369), 1,
      anon_sym_prepend,
    ACTIONS(371), 1,
      anon_sym_extends,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_elseif,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(381), 1,
      anon_sym_BANG_EQ,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_script_DOT,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(391), 1,
      sym_tag_name,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(363), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(375), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(393), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 19,
      sym_doctype,
      sym_pipe,
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
  [2118] = 25,
    ACTIONS(355), 1,
      anon_sym_doctype,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_while,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(365), 1,
      anon_sym_block,
    ACTIONS(367), 1,
      anon_sym_append,
    ACTIONS(369), 1,
      anon_sym_prepend,
    ACTIONS(371), 1,
      anon_sym_extends,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_elseif,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(381), 1,
      anon_sym_BANG_EQ,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_script_DOT,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(391), 1,
      sym_tag_name,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(363), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(375), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(393), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 19,
      sym_doctype,
      sym_pipe,
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
  [2216] = 25,
    ACTIONS(355), 1,
      anon_sym_doctype,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_while,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(365), 1,
      anon_sym_block,
    ACTIONS(367), 1,
      anon_sym_append,
    ACTIONS(369), 1,
      anon_sym_prepend,
    ACTIONS(371), 1,
      anon_sym_extends,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_elseif,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(381), 1,
      anon_sym_BANG_EQ,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_script_DOT,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(391), 1,
      sym_tag_name,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(363), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(375), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(393), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 19,
      sym_doctype,
      sym_pipe,
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
  [2314] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 19,
      sym_doctype,
      sym_pipe,
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
  [2412] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 19,
      sym_doctype,
      sym_pipe,
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
  [2510] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 19,
      sym_doctype,
      sym_pipe,
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
  [2608] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 19,
      sym_doctype,
      sym_pipe,
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
  [2706] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 19,
      sym_doctype,
      sym_pipe,
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
  [2804] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(42), 19,
      sym_doctype,
      sym_pipe,
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
  [2902] = 25,
    ACTIONS(101), 1,
      sym__dedent,
    ACTIONS(437), 1,
      anon_sym_case,
    ACTIONS(539), 1,
      anon_sym_doctype,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(545), 1,
      anon_sym_while,
    ACTIONS(548), 1,
      anon_sym_else,
    ACTIONS(554), 1,
      anon_sym_block,
    ACTIONS(557), 1,
      anon_sym_append,
    ACTIONS(560), 1,
      anon_sym_prepend,
    ACTIONS(563), 1,
      anon_sym_extends,
    ACTIONS(566), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_elseif,
    ACTIONS(575), 1,
      anon_sym_BANG_EQ,
    ACTIONS(578), 1,
      anon_sym_EQ,
    ACTIONS(581), 1,
      anon_sym_script_DOT,
    ACTIONS(584), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(587), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(590), 1,
      sym_tag_name,
    ACTIONS(596), 1,
      anon_sym_DASH,
    ACTIONS(599), 1,
      sym__newline,
    ACTIONS(551), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(569), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(593), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(31), 19,
      sym_doctype,
      sym_pipe,
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
  [3000] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 19,
      sym_doctype,
      sym_pipe,
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
  [3098] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(42), 19,
      sym_doctype,
      sym_pipe,
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
  [3196] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 19,
      sym_doctype,
      sym_pipe,
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
  [3294] = 25,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 19,
      sym_doctype,
      sym_pipe,
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
  [3392] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 19,
      sym_doctype,
      sym_pipe,
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
  [3490] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(42), 19,
      sym_doctype,
      sym_pipe,
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
  [3588] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 19,
      sym_doctype,
      sym_pipe,
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
  [3686] = 25,
    ACTIONS(355), 1,
      anon_sym_doctype,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_while,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(365), 1,
      anon_sym_block,
    ACTIONS(367), 1,
      anon_sym_append,
    ACTIONS(369), 1,
      anon_sym_prepend,
    ACTIONS(371), 1,
      anon_sym_extends,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_elseif,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(381), 1,
      anon_sym_BANG_EQ,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_script_DOT,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(391), 1,
      sym_tag_name,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(363), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(375), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(393), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 19,
      sym_doctype,
      sym_pipe,
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
  [3784] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 19,
      sym_doctype,
      sym_pipe,
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
  [3882] = 25,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 19,
      sym_doctype,
      sym_pipe,
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
  [3980] = 25,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(527), 1,
      sym__newline,
    ACTIONS(602), 1,
      sym__dedent,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(31), 19,
      sym_doctype,
      sym_pipe,
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
  [4078] = 24,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 19,
      sym_doctype,
      sym_pipe,
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
  [4173] = 24,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(236), 1,
      anon_sym_doctype,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_while,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(246), 1,
      anon_sym_block,
    ACTIONS(248), 1,
      anon_sym_append,
    ACTIONS(250), 1,
      anon_sym_prepend,
    ACTIONS(252), 1,
      anon_sym_extends,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_elseif,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_script_DOT,
    ACTIONS(266), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(274), 1,
      anon_sym_DASH,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(244), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(256), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(272), 2,
      sym_class,
      sym_id,
    STATE(261), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 19,
      sym_doctype,
      sym_pipe,
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
  [4268] = 24,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 19,
      sym_doctype,
      sym_pipe,
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
  [4363] = 24,
    ACTIONS(355), 1,
      anon_sym_doctype,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_while,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(365), 1,
      anon_sym_block,
    ACTIONS(367), 1,
      anon_sym_append,
    ACTIONS(369), 1,
      anon_sym_prepend,
    ACTIONS(371), 1,
      anon_sym_extends,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_elseif,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(381), 1,
      anon_sym_BANG_EQ,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_script_DOT,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(391), 1,
      sym_tag_name,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(363), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(375), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(393), 2,
      sym_class,
      sym_id,
    STATE(296), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 19,
      sym_doctype,
      sym_pipe,
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
  [4458] = 24,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 19,
      sym_doctype,
      sym_pipe,
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
  [4553] = 24,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_block,
    ACTIONS(67), 1,
      anon_sym_append,
    ACTIONS(69), 1,
      anon_sym_prepend,
    ACTIONS(71), 1,
      anon_sym_extends,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_elseif,
    ACTIONS(79), 1,
      anon_sym_case,
    ACTIONS(81), 1,
      anon_sym_BANG_EQ,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_script_DOT,
    ACTIONS(87), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(61), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(75), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(115), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 19,
      sym_doctype,
      sym_pipe,
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
  [4648] = 24,
    ACTIONS(379), 1,
      anon_sym_case,
    ACTIONS(467), 1,
      anon_sym_doctype,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_while,
    ACTIONS(473), 1,
      anon_sym_else,
    ACTIONS(477), 1,
      anon_sym_block,
    ACTIONS(479), 1,
      anon_sym_append,
    ACTIONS(481), 1,
      anon_sym_prepend,
    ACTIONS(483), 1,
      anon_sym_extends,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_script_DOT,
    ACTIONS(499), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(503), 1,
      sym_tag_name,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      sym__newline,
    ACTIONS(475), 2,
      anon_sym_each,
      anon_sym_for,
    ACTIONS(487), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(505), 2,
      sym_class,
      sym_id,
    STATE(415), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(42), 19,
      sym_doctype,
      sym_pipe,
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
  [4743] = 9,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(612), 1,
      aux_sym_filter_content_token1,
    ACTIONS(614), 1,
      sym__newline,
    STATE(52), 1,
      sym_attributes,
    STATE(130), 1,
      sym_filter,
    STATE(132), 1,
      sym_filter_content,
    ACTIONS(604), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(606), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [4798] = 5,
    ACTIONS(620), 1,
      aux_sym_filter_content_token2,
    STATE(51), 1,
      aux_sym__comment_repeat1,
    STATE(918), 1,
      sym__comment_content,
    ACTIONS(616), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(618), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [4843] = 7,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(612), 1,
      aux_sym_filter_content_token1,
    ACTIONS(614), 1,
      sym__newline,
    STATE(130), 1,
      sym_filter,
    STATE(137), 1,
      sym_filter_content,
    ACTIONS(623), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(625), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [4892] = 9,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(631), 1,
      aux_sym_filter_content_token1,
    ACTIONS(633), 1,
      sym__newline,
    STATE(84), 1,
      sym_attributes,
    STATE(231), 1,
      sym_filter_content,
    STATE(232), 1,
      sym_filter,
    ACTIONS(604), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(606), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [4945] = 6,
    ACTIONS(639), 1,
      anon_sym_when,
    ACTIONS(641), 1,
      anon_sym_default,
    STATE(756), 1,
      sym__when_keyword,
    STATE(55), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(635), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(637), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [4992] = 6,
    ACTIONS(647), 1,
      anon_sym_when,
    ACTIONS(650), 1,
      anon_sym_default,
    STATE(756), 1,
      sym__when_keyword,
    STATE(55), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(643), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(645), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5039] = 5,
    ACTIONS(657), 1,
      aux_sym_filter_content_token2,
    STATE(51), 1,
      aux_sym__comment_repeat1,
    STATE(918), 1,
      sym__comment_content,
    ACTIONS(653), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(655), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5084] = 9,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(663), 1,
      aux_sym_filter_content_token1,
    ACTIONS(665), 1,
      sym__newline,
    STATE(109), 1,
      sym_attributes,
    STATE(327), 1,
      sym_filter,
    STATE(374), 1,
      sym_filter_content,
    ACTIONS(606), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5136] = 4,
    ACTIONS(671), 1,
      sym__indent,
    STATE(102), 1,
      sym_children,
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
    ACTIONS(669), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5178] = 4,
    ACTIONS(673), 1,
      sym__indent,
    STATE(102), 1,
      sym_children,
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
    ACTIONS(669), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5220] = 4,
    ACTIONS(671), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(675), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(677), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5262] = 4,
    ACTIONS(683), 1,
      sym__un_delimited_javascript_line,
    STATE(61), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(679), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(681), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5304] = 9,
    ACTIONS(604), 1,
      sym__dedent,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(690), 1,
      aux_sym_filter_content_token1,
    ACTIONS(692), 1,
      sym__newline,
    STATE(131), 1,
      sym_attributes,
    STATE(283), 1,
      sym_filter_content,
    STATE(284), 1,
      sym_filter,
    ACTIONS(606), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5356] = 4,
    ACTIONS(698), 1,
      sym__un_delimited_javascript_line,
    STATE(61), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(694), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(696), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5398] = 4,
    ACTIONS(671), 1,
      sym__indent,
    STATE(110), 1,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5440] = 4,
    ACTIONS(704), 1,
      sym__indent,
    STATE(110), 1,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5482] = 4,
    ACTIONS(671), 1,
      sym__indent,
    STATE(97), 1,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5524] = 4,
    ACTIONS(714), 1,
      sym__indent,
    STATE(129), 1,
      sym_children,
    ACTIONS(710), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5566] = 4,
    ACTIONS(720), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(716), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5608] = 4,
    ACTIONS(671), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
    ACTIONS(722), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5650] = 2,
    ACTIONS(726), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(728), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5687] = 5,
    ACTIONS(730), 1,
      aux_sym_filter_content_token2,
    STATE(71), 1,
      aux_sym__comment_repeat1,
    STATE(1027), 1,
      sym__comment_content,
    ACTIONS(616), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(618), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [5730] = 4,
    ACTIONS(733), 1,
      sym__indent,
    STATE(155), 1,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5771] = 3,
    ACTIONS(739), 1,
      sym__indent,
    ACTIONS(735), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(737), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5810] = 4,
    ACTIONS(745), 1,
      anon_sym_else,
    STATE(145), 1,
      sym__each_else,
    ACTIONS(741), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(743), 16,
      anon_sym_doctype,
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
  [5851] = 5,
    ACTIONS(733), 1,
      sym__indent,
    ACTIONS(747), 1,
      sym__dedent,
    STATE(174), 1,
      sym_children,
    ACTIONS(675), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(677), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5894] = 6,
    ACTIONS(639), 1,
      anon_sym_when,
    ACTIONS(749), 1,
      anon_sym_default,
    STATE(727), 1,
      sym__when_keyword,
    STATE(77), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(635), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(637), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5939] = 6,
    ACTIONS(647), 1,
      anon_sym_when,
    ACTIONS(751), 1,
      anon_sym_default,
    STATE(727), 1,
      sym__when_keyword,
    STATE(77), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(643), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(645), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [5984] = 4,
    ACTIONS(733), 1,
      sym__indent,
    STATE(173), 1,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6025] = 2,
    ACTIONS(754), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(756), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [6062] = 2,
    ACTIONS(616), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(618), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
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
      aux_sym_filter_content_token2,
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
  [6099] = 4,
    ACTIONS(758), 1,
      sym__indent,
    STATE(173), 1,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6140] = 4,
    ACTIONS(760), 1,
      sym__indent,
    STATE(171), 1,
      sym_children,
    ACTIONS(667), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6181] = 3,
    ACTIONS(766), 1,
      sym__indent,
    ACTIONS(762), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6220] = 7,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(631), 1,
      aux_sym_filter_content_token1,
    ACTIONS(633), 1,
      sym__newline,
    STATE(195), 1,
      sym_filter_content,
    STATE(232), 1,
      sym_filter,
    ACTIONS(623), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(625), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [6267] = 2,
    ACTIONS(768), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(770), 29,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [6304] = 4,
    ACTIONS(772), 1,
      sym__indent,
    STATE(178), 1,
      sym_children,
    ACTIONS(716), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6345] = 2,
    ACTIONS(774), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(776), 28,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [6382] = 5,
    ACTIONS(778), 1,
      aux_sym_filter_content_token2,
    STATE(71), 1,
      aux_sym__comment_repeat1,
    STATE(1027), 1,
      sym__comment_content,
    ACTIONS(653), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(655), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [6425] = 4,
    ACTIONS(733), 1,
      sym__indent,
    STATE(166), 1,
      sym_children,
    ACTIONS(722), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6466] = 4,
    ACTIONS(733), 1,
      sym__indent,
    STATE(171), 1,
      sym_children,
    ACTIONS(667), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6507] = 4,
    ACTIONS(780), 1,
      sym__indent,
    STATE(183), 1,
      sym_children,
    ACTIONS(710), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6548] = 2,
    ACTIONS(782), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(784), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6584] = 2,
    ACTIONS(786), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6620] = 4,
    ACTIONS(790), 1,
      sym__indent,
    STATE(254), 1,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6660] = 2,
    ACTIONS(792), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(794), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6696] = 2,
    ACTIONS(796), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(798), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6732] = 2,
    ACTIONS(722), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6768] = 2,
    ACTIONS(675), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(677), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6804] = 4,
    ACTIONS(800), 1,
      sym__un_delimited_javascript_line,
    STATE(116), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(694), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(696), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [6844] = 4,
    ACTIONS(802), 1,
      sym__indent,
    STATE(200), 1,
      sym_children,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6884] = 2,
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
    ACTIONS(806), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6920] = 2,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6956] = 2,
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
    ACTIONS(810), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [6992] = 4,
    ACTIONS(790), 1,
      sym__indent,
    STATE(200), 1,
      sym_children,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7032] = 4,
    ACTIONS(812), 1,
      sym__indent,
    STATE(207), 1,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7072] = 4,
    ACTIONS(790), 1,
      sym__indent,
    STATE(207), 1,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7112] = 4,
    ACTIONS(814), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(716), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7152] = 4,
    ACTIONS(816), 1,
      sym__indent,
    STATE(229), 1,
      sym_children,
    ACTIONS(710), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7192] = 7,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(663), 1,
      aux_sym_filter_content_token1,
    ACTIONS(665), 1,
      sym__newline,
    STATE(327), 1,
      sym_filter,
    STATE(356), 1,
      sym_filter_content,
    ACTIONS(625), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [7238] = 2,
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
    ACTIONS(669), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7274] = 2,
    ACTIONS(818), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(820), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7310] = 5,
    ACTIONS(822), 1,
      aux_sym_filter_content_token2,
    STATE(147), 1,
      aux_sym__comment_repeat1,
    STATE(945), 1,
      sym__comment_content,
    ACTIONS(653), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(655), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [7352] = 2,
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
    ACTIONS(826), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7388] = 4,
    ACTIONS(790), 1,
      sym__indent,
    STATE(248), 1,
      sym_children,
    ACTIONS(722), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7428] = 2,
    ACTIONS(828), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(830), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7464] = 4,
    ACTIONS(832), 1,
      sym__un_delimited_javascript_line,
    STATE(116), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(679), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(681), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [7504] = 2,
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
    ACTIONS(837), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7540] = 2,
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
    ACTIONS(841), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7576] = 2,
    ACTIONS(843), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(845), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7612] = 2,
    ACTIONS(847), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(849), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7648] = 2,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7684] = 2,
    ACTIONS(851), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(853), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7720] = 2,
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
    ACTIONS(857), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7756] = 2,
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
    ACTIONS(861), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7792] = 2,
    ACTIONS(863), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7828] = 2,
    ACTIONS(867), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(869), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7864] = 2,
    ACTIONS(871), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7900] = 2,
    ACTIONS(875), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(877), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7936] = 2,
    ACTIONS(716), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [7972] = 2,
    ACTIONS(879), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(881), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8008] = 7,
    ACTIONS(623), 1,
      sym__dedent,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(690), 1,
      aux_sym_filter_content_token1,
    ACTIONS(692), 1,
      sym__newline,
    STATE(272), 1,
      sym_filter_content,
    STATE(284), 1,
      sym_filter,
    ACTIONS(625), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [8054] = 2,
    ACTIONS(623), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(625), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8090] = 3,
    ACTIONS(887), 1,
      sym__dedent,
    ACTIONS(883), 13,
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
    ACTIONS(885), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8128] = 2,
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
    ACTIONS(891), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8164] = 2,
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
    ACTIONS(895), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8200] = 2,
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
    ACTIONS(899), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8236] = 2,
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
    ACTIONS(903), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
    ACTIONS(710), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8308] = 2,
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
    ACTIONS(907), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8344] = 9,
    ACTIONS(604), 1,
      sym__dedent,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    ACTIONS(911), 1,
      anon_sym_COLON,
    ACTIONS(913), 1,
      aux_sym_filter_content_token1,
    ACTIONS(915), 1,
      sym__newline,
    STATE(201), 1,
      sym_attributes,
    STATE(389), 1,
      sym_filter_content,
    STATE(391), 1,
      sym_filter,
    ACTIONS(606), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [8394] = 2,
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
    ACTIONS(919), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8430] = 2,
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
    ACTIONS(923), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8466] = 3,
    ACTIONS(925), 1,
      sym__indent,
    ACTIONS(762), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8504] = 3,
    ACTIONS(931), 1,
      sym__dedent,
    ACTIONS(927), 13,
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
    ACTIONS(929), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8542] = 2,
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
    ACTIONS(935), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8578] = 2,
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
    ACTIONS(939), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8614] = 5,
    ACTIONS(941), 1,
      aux_sym_filter_content_token2,
    STATE(147), 1,
      aux_sym__comment_repeat1,
    STATE(945), 1,
      sym__comment_content,
    ACTIONS(616), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(618), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [8656] = 2,
    ACTIONS(944), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(946), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8692] = 2,
    ACTIONS(948), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(950), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8728] = 6,
    ACTIONS(647), 1,
      anon_sym_when,
    ACTIONS(952), 1,
      anon_sym_default,
    STATE(713), 1,
      sym__when_keyword,
    STATE(150), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(643), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(645), 14,
      anon_sym_doctype,
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
  [8772] = 2,
    ACTIONS(955), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(957), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8808] = 2,
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
    ACTIONS(961), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8844] = 2,
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
    ACTIONS(965), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8880] = 6,
    ACTIONS(639), 1,
      anon_sym_when,
    ACTIONS(967), 1,
      anon_sym_default,
    STATE(713), 1,
      sym__when_keyword,
    STATE(150), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(635), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(637), 14,
      anon_sym_doctype,
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
  [8924] = 2,
    ACTIONS(722), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [8959] = 2,
    ACTIONS(754), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(756), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [8994] = 2,
    ACTIONS(905), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9029] = 4,
    ACTIONS(969), 1,
      anon_sym_else,
    STATE(259), 1,
      sym__each_else,
    ACTIONS(741), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(743), 14,
      anon_sym_doctype,
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
  [9068] = 4,
    ACTIONS(971), 1,
      sym__un_delimited_javascript_line,
    STATE(159), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(679), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(681), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9107] = 2,
    ACTIONS(768), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(770), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9142] = 4,
    ACTIONS(974), 1,
      sym__indent,
    STATE(320), 1,
      sym_children,
    ACTIONS(722), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 16,
      anon_sym_doctype,
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
  [9181] = 5,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(976), 1,
      aux_sym_filter_content_token2,
    STATE(162), 1,
      aux_sym__comment_repeat1,
    STATE(953), 1,
      sym__comment_content,
    ACTIONS(618), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9222] = 4,
    ACTIONS(974), 1,
      sym__indent,
    STATE(307), 1,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
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
  [9261] = 4,
    ACTIONS(979), 1,
      sym__un_delimited_javascript_line,
    STATE(159), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(694), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(696), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9300] = 3,
    ACTIONS(981), 1,
      sym__indent,
    ACTIONS(735), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(737), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9337] = 2,
    ACTIONS(792), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(794), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9372] = 2,
    ACTIONS(796), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(798), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9407] = 2,
    ACTIONS(786), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9442] = 4,
    ACTIONS(983), 1,
      sym__indent,
    STATE(263), 1,
      sym_children,
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
    ACTIONS(669), 16,
      anon_sym_doctype,
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
  [9481] = 2,
    ACTIONS(804), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(806), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
    ACTIONS(708), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9551] = 2,
    ACTIONS(824), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(826), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9586] = 2,
    ACTIONS(667), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9621] = 2,
    ACTIONS(818), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(820), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9656] = 4,
    ACTIONS(985), 1,
      sym__un_delimited_javascript_line,
    STATE(175), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(679), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(681), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9695] = 4,
    ACTIONS(974), 1,
      sym__indent,
    STATE(263), 1,
      sym_children,
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
    ACTIONS(669), 16,
      anon_sym_doctype,
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
  [9734] = 4,
    ACTIONS(988), 1,
      sym__un_delimited_javascript_line,
    STATE(175), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(694), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(696), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9773] = 2,
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
    ACTIONS(702), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9808] = 2,
    ACTIONS(808), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(810), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9843] = 3,
    ACTIONS(990), 1,
      sym__indent,
    ACTIONS(762), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9880] = 3,
    ACTIONS(747), 1,
      sym__dedent,
    ACTIONS(675), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(677), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9917] = 2,
    ACTIONS(726), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(728), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [9952] = 2,
    ACTIONS(716), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [9987] = 4,
    ACTIONS(974), 1,
      sym__indent,
    STATE(293), 1,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
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
  [10026] = 5,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    ACTIONS(992), 1,
      aux_sym_filter_content_token2,
    STATE(162), 1,
      aux_sym__comment_repeat1,
    STATE(953), 1,
      sym__comment_content,
    ACTIONS(655), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10067] = 2,
    ACTIONS(710), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10102] = 4,
    ACTIONS(994), 1,
      sym__indent,
    STATE(293), 1,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
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
  [10141] = 2,
    ACTIONS(616), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(618), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
      aux_sym_filter_content_token2,
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
  [10176] = 2,
    ACTIONS(774), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(776), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10211] = 2,
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
    ACTIONS(841), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10246] = 4,
    ACTIONS(996), 1,
      sym__indent,
    STATE(291), 1,
      sym_children,
    ACTIONS(710), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 16,
      anon_sym_doctype,
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
  [10285] = 4,
    ACTIONS(998), 1,
      sym__indent,
    STATE(285), 1,
      sym_children,
    ACTIONS(716), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 16,
      anon_sym_doctype,
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
  [10324] = 4,
    ACTIONS(974), 1,
      sym__indent,
    STATE(315), 1,
      sym_children,
    ACTIONS(675), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(677), 16,
      anon_sym_doctype,
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
  [10363] = 3,
    ACTIONS(1000), 1,
      sym__indent,
    ACTIONS(762), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10399] = 2,
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
    ACTIONS(903), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10433] = 2,
    ACTIONS(774), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(776), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10467] = 3,
    ACTIONS(1002), 1,
      sym__indent,
    ACTIONS(762), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 16,
      anon_sym_doctype,
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
  [10503] = 2,
    ACTIONS(754), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(756), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10537] = 2,
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
    ACTIONS(806), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10571] = 2,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10605] = 7,
    ACTIONS(623), 1,
      sym__dedent,
    ACTIONS(911), 1,
      anon_sym_COLON,
    ACTIONS(913), 1,
      aux_sym_filter_content_token1,
    ACTIONS(915), 1,
      sym__newline,
    STATE(391), 1,
      sym_filter,
    STATE(405), 1,
      sym_filter_content,
    ACTIONS(625), 23,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10649] = 2,
    ACTIONS(616), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(618), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [10683] = 2,
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
    ACTIONS(965), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10717] = 3,
    ACTIONS(1004), 1,
      sym__dedent,
    ACTIONS(927), 13,
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
    ACTIONS(929), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10753] = 2,
    ACTIONS(726), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(728), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10787] = 2,
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
    ACTIONS(810), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10821] = 2,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10855] = 4,
    ACTIONS(1006), 1,
      anon_sym_else,
    STATE(324), 1,
      sym__each_else,
    ACTIONS(741), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(743), 15,
      anon_sym_doctype,
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
  [10893] = 2,
    ACTIONS(726), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(728), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [10927] = 2,
    ACTIONS(948), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(950), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10961] = 4,
    ACTIONS(1008), 1,
      sym__indent,
    STATE(371), 1,
      sym_children,
    ACTIONS(710), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [10999] = 2,
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
    ACTIONS(961), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11033] = 2,
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
    ACTIONS(923), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11067] = 2,
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
    ACTIONS(841), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11101] = 4,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(345), 1,
      sym_children,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11139] = 2,
    ACTIONS(944), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(946), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11173] = 2,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11207] = 2,
    ACTIONS(754), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(756), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [11241] = 4,
    ACTIONS(1012), 1,
      sym__indent,
    STATE(345), 1,
      sym_children,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
    ACTIONS(955), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(957), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11313] = 4,
    ACTIONS(1014), 1,
      sym__indent,
    STATE(373), 1,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11351] = 2,
    ACTIONS(768), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(770), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [11385] = 2,
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
    ACTIONS(899), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11419] = 2,
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
    ACTIONS(895), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11453] = 2,
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
    ACTIONS(891), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11487] = 3,
    ACTIONS(1016), 1,
      sym__dedent,
    ACTIONS(883), 13,
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
    ACTIONS(885), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11523] = 2,
    ACTIONS(768), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(770), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [11557] = 2,
    ACTIONS(774), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(776), 26,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [11591] = 2,
    ACTIONS(716), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11625] = 3,
    ACTIONS(1018), 1,
      sym__indent,
    ACTIONS(735), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(737), 16,
      anon_sym_doctype,
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
  [11661] = 2,
    ACTIONS(623), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(625), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11695] = 2,
    ACTIONS(879), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(881), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11729] = 2,
    ACTIONS(875), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(877), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11763] = 2,
    ACTIONS(871), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11797] = 2,
    ACTIONS(867), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(869), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11831] = 2,
    ACTIONS(863), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
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
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11865] = 2,
    ACTIONS(710), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11899] = 4,
    ACTIONS(1020), 1,
      sym__indent,
    ACTIONS(1022), 1,
      sym__dedent,
    ACTIONS(762), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11937] = 2,
    ACTIONS(786), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [11971] = 4,
    ACTIONS(1024), 1,
      sym__indent,
    STATE(335), 1,
      sym_children,
    ACTIONS(716), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12009] = 2,
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
    ACTIONS(907), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12043] = 2,
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
    ACTIONS(861), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12077] = 4,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(326), 1,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12115] = 2,
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
    ACTIONS(857), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12149] = 2,
    ACTIONS(851), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(853), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12183] = 4,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(373), 1,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12221] = 2,
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
    ACTIONS(919), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12255] = 2,
    ACTIONS(792), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(794), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12289] = 2,
    ACTIONS(796), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(798), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12323] = 2,
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
    ACTIONS(1028), 17,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12357] = 2,
    ACTIONS(847), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(849), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12391] = 5,
    ACTIONS(1030), 1,
      aux_sym_filter_content_token2,
    STATE(255), 1,
      aux_sym__comment_repeat1,
    STATE(987), 1,
      sym__comment_content,
    ACTIONS(653), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(655), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [12431] = 2,
    ACTIONS(843), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(845), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12465] = 2,
    ACTIONS(722), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12499] = 5,
    ACTIONS(1032), 1,
      aux_sym_filter_content_token2,
    STATE(255), 1,
      aux_sym__comment_repeat1,
    STATE(987), 1,
      sym__comment_content,
    ACTIONS(616), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(618), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [12539] = 2,
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
    ACTIONS(837), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
    ACTIONS(1010), 1,
      sym__indent,
    STATE(332), 1,
      sym_children,
    ACTIONS(722), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12611] = 2,
    ACTIONS(782), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(784), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12645] = 2,
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
    ACTIONS(935), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12679] = 2,
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
    ACTIONS(939), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12713] = 2,
    ACTIONS(828), 14,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(830), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12747] = 2,
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
    ACTIONS(806), 16,
      anon_sym_doctype,
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
  [12780] = 2,
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
    ACTIONS(708), 16,
      anon_sym_doctype,
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
  [12813] = 2,
    ACTIONS(948), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(950), 16,
      anon_sym_doctype,
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
  [12846] = 2,
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
    ACTIONS(788), 16,
      anon_sym_doctype,
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
  [12879] = 2,
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
    ACTIONS(961), 16,
      anon_sym_doctype,
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
  [12912] = 2,
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
    ACTIONS(861), 16,
      anon_sym_doctype,
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
  [12945] = 3,
    ACTIONS(1035), 1,
      sym__indent,
    ACTIONS(735), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(737), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [12980] = 3,
    ACTIONS(1037), 1,
      sym__newline,
    ACTIONS(843), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(845), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [13015] = 2,
    ACTIONS(944), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(946), 16,
      anon_sym_doctype,
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
  [13048] = 2,
    ACTIONS(955), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(957), 16,
      anon_sym_doctype,
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
  [13081] = 2,
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
    ACTIONS(903), 16,
      anon_sym_doctype,
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
  [13114] = 2,
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
    ACTIONS(899), 16,
      anon_sym_doctype,
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
  [13147] = 2,
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
    ACTIONS(895), 16,
      anon_sym_doctype,
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
  [13180] = 2,
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
    ACTIONS(841), 16,
      anon_sym_doctype,
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
  [13213] = 2,
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
    ACTIONS(891), 16,
      anon_sym_doctype,
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
    ACTIONS(1039), 1,
      sym__dedent,
    ACTIONS(883), 11,
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
    ACTIONS(885), 16,
      anon_sym_doctype,
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
  [13281] = 3,
    ACTIONS(1041), 1,
      sym__dedent,
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
    ACTIONS(810), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [13316] = 3,
    ACTIONS(1043), 1,
      sym__dedent,
    ACTIONS(883), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(885), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [13351] = 4,
    ACTIONS(1045), 1,
      sym__un_delimited_javascript_line,
    STATE(281), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(694), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(696), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [13388] = 4,
    ACTIONS(1047), 1,
      sym__un_delimited_javascript_line,
    STATE(281), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(679), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(681), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [13425] = 4,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(387), 1,
      sym_children,
    ACTIONS(710), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 14,
      anon_sym_doctype,
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
  [13462] = 2,
    ACTIONS(623), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(625), 16,
      anon_sym_doctype,
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
  [13495] = 2,
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
    ACTIONS(881), 16,
      anon_sym_doctype,
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
  [13528] = 2,
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
    ACTIONS(702), 16,
      anon_sym_doctype,
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
  [13561] = 2,
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
    ACTIONS(877), 16,
      anon_sym_doctype,
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
  [13594] = 2,
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
    ACTIONS(873), 16,
      anon_sym_doctype,
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
  [13627] = 2,
    ACTIONS(863), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
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
  [13660] = 4,
    ACTIONS(1052), 1,
      anon_sym_else,
    STATE(338), 1,
      sym__each_else,
    ACTIONS(741), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(743), 14,
      anon_sym_doctype,
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
  [13697] = 3,
    ACTIONS(1054), 1,
      sym__dedent,
    ACTIONS(927), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(929), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [13732] = 2,
    ACTIONS(716), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 16,
      anon_sym_doctype,
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
  [13765] = 2,
    ACTIONS(808), 13,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(810), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [13798] = 2,
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
    ACTIONS(669), 16,
      anon_sym_doctype,
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
  [13831] = 2,
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
    ACTIONS(923), 16,
      anon_sym_doctype,
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
  [13864] = 2,
    ACTIONS(710), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 16,
      anon_sym_doctype,
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
  [13897] = 2,
    ACTIONS(828), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(830), 16,
      anon_sym_doctype,
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
  [13930] = 3,
    ACTIONS(1056), 1,
      sym__dedent,
    ACTIONS(927), 11,
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
    ACTIONS(929), 16,
      anon_sym_doctype,
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
  [13965] = 2,
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
    ACTIONS(919), 16,
      anon_sym_doctype,
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
  [13998] = 2,
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
    ACTIONS(810), 16,
      anon_sym_doctype,
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
  [14031] = 3,
    ACTIONS(1062), 1,
      anon_sym_LPAREN,
    ACTIONS(1058), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1060), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [14066] = 2,
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
    ACTIONS(907), 16,
      anon_sym_doctype,
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
  [14099] = 2,
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
    ACTIONS(784), 16,
      anon_sym_doctype,
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
  [14132] = 4,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(399), 1,
      sym_children,
    ACTIONS(722), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 14,
      anon_sym_doctype,
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
  [14169] = 2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(618), 27,
      anon_sym_doctype,
      anon_sym_PIPE,
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
      aux_sym_filter_content_token2,
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
  [14202] = 4,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(397), 1,
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
    ACTIONS(708), 14,
      anon_sym_doctype,
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
  [14239] = 2,
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
    ACTIONS(837), 16,
      anon_sym_doctype,
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
  [14272] = 2,
    ACTIONS(722), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 16,
      anon_sym_doctype,
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
  [14305] = 4,
    ACTIONS(1066), 1,
      sym__indent,
    STATE(394), 1,
      sym_children,
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
    ACTIONS(669), 14,
      anon_sym_doctype,
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
  [14342] = 4,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(394), 1,
      sym_children,
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
    ACTIONS(669), 14,
      anon_sym_doctype,
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
  [14379] = 2,
    ACTIONS(675), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(677), 16,
      anon_sym_doctype,
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
  [14412] = 2,
    ACTIONS(843), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(845), 16,
      anon_sym_doctype,
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
  [14445] = 2,
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
    ACTIONS(965), 16,
      anon_sym_doctype,
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
  [14478] = 2,
    ACTIONS(847), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(849), 16,
      anon_sym_doctype,
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
  [14511] = 2,
    ACTIONS(851), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(853), 16,
      anon_sym_doctype,
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
  [14544] = 2,
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
    ACTIONS(820), 16,
      anon_sym_doctype,
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
  [14577] = 2,
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
    ACTIONS(857), 16,
      anon_sym_doctype,
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
  [14610] = 2,
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
    ACTIONS(826), 16,
      anon_sym_doctype,
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
  [14643] = 2,
    ACTIONS(796), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(798), 16,
      anon_sym_doctype,
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
  [14676] = 2,
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
    ACTIONS(939), 16,
      anon_sym_doctype,
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
  [14709] = 2,
    ACTIONS(792), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(794), 16,
      anon_sym_doctype,
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
  [14742] = 2,
    ACTIONS(867), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(869), 16,
      anon_sym_doctype,
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
  [14775] = 4,
    ACTIONS(1068), 1,
      sym__indent,
    STATE(393), 1,
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
    ACTIONS(702), 14,
      anon_sym_doctype,
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
  [14812] = 4,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(393), 1,
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
    ACTIONS(702), 14,
      anon_sym_doctype,
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
  [14849] = 2,
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
    ACTIONS(935), 16,
      anon_sym_doctype,
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
  [14882] = 4,
    ACTIONS(1070), 1,
      sym__indent,
    STATE(388), 1,
      sym_children,
    ACTIONS(716), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 14,
      anon_sym_doctype,
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
  [14919] = 2,
    ACTIONS(722), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [14951] = 2,
    ACTIONS(879), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(881), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [14983] = 2,
    ACTIONS(944), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(946), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15015] = 2,
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
    ACTIONS(841), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15047] = 3,
    ACTIONS(1072), 1,
      sym__indent,
    ACTIONS(735), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(737), 14,
      anon_sym_doctype,
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
  [15081] = 2,
    ACTIONS(1074), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(1076), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15113] = 2,
    ACTIONS(792), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(794), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15145] = 2,
    ACTIONS(796), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(798), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15177] = 2,
    ACTIONS(948), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(950), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15209] = 2,
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
    ACTIONS(702), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15241] = 2,
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
    ACTIONS(830), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15273] = 2,
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
    ACTIONS(1080), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15305] = 2,
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
    ACTIONS(935), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15337] = 2,
    ACTIONS(782), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(784), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15369] = 2,
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
    ACTIONS(939), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15401] = 2,
    ACTIONS(768), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(770), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [15433] = 4,
    ACTIONS(1082), 1,
      anon_sym_else,
    STATE(403), 1,
      sym__each_else,
    ACTIONS(741), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(743), 13,
      anon_sym_doctype,
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
  [15469] = 2,
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
    ACTIONS(806), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15501] = 2,
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
    ACTIONS(1086), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15533] = 2,
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
    ACTIONS(708), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15565] = 2,
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
    ACTIONS(923), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15597] = 2,
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
    ACTIONS(1090), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
    ACTIONS(847), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(849), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15661] = 2,
    ACTIONS(851), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(853), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15693] = 2,
    ACTIONS(855), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(857), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15725] = 2,
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
    ACTIONS(861), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
    ACTIONS(955), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(957), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15789] = 2,
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
    ACTIONS(907), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15821] = 3,
    ACTIONS(1092), 1,
      sym__indent,
    ACTIONS(762), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(764), 14,
      anon_sym_doctype,
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
  [15855] = 2,
    ACTIONS(786), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(788), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15887] = 2,
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
    ACTIONS(903), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15919] = 2,
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
    ACTIONS(899), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15951] = 2,
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
    ACTIONS(895), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [15983] = 2,
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
    ACTIONS(965), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16015] = 2,
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
    ACTIONS(1096), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16047] = 2,
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
    ACTIONS(961), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16079] = 2,
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
    ACTIONS(1100), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16111] = 2,
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
    ACTIONS(891), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16143] = 2,
    ACTIONS(710), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16175] = 2,
    ACTIONS(774), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(776), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [16207] = 2,
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
    ACTIONS(1104), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16239] = 2,
    ACTIONS(754), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(756), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [16271] = 2,
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
    ACTIONS(837), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16303] = 2,
    ACTIONS(616), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(618), 25,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
      anon_sym_for,
      anon_sym_block,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_extends,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
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
  [16335] = 2,
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
    ACTIONS(865), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16367] = 2,
    ACTIONS(716), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16399] = 2,
    ACTIONS(726), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(728), 24,
      anon_sym_doctype,
      anon_sym_PIPE,
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
  [16431] = 2,
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
    ACTIONS(669), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16463] = 2,
    ACTIONS(623), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(625), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16495] = 2,
    ACTIONS(867), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(869), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16527] = 2,
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
    ACTIONS(919), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16559] = 2,
    ACTIONS(871), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(873), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16591] = 2,
    ACTIONS(875), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(877), 15,
      anon_sym_doctype,
      anon_sym_while,
      anon_sym_else,
      anon_sym_each,
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
  [16623] = 3,
    ACTIONS(1106), 1,
      sym__dedent,
    ACTIONS(927), 11,
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
    ACTIONS(929), 14,
      anon_sym_doctype,
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
  [16656] = 2,
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
    ACTIONS(899), 14,
      anon_sym_doctype,
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
  [16687] = 3,
    ACTIONS(1108), 1,
      sym__dedent,
    ACTIONS(883), 11,
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
    ACTIONS(885), 14,
      anon_sym_doctype,
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
  [16720] = 2,
    ACTIONS(944), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(946), 14,
      anon_sym_doctype,
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
  [16751] = 2,
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
    ACTIONS(961), 14,
      anon_sym_doctype,
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
  [16782] = 2,
    ACTIONS(955), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(957), 14,
      anon_sym_doctype,
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
  [16813] = 2,
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
    ACTIONS(788), 14,
      anon_sym_doctype,
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
  [16844] = 2,
    ACTIONS(710), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(712), 14,
      anon_sym_doctype,
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
  [16875] = 2,
    ACTIONS(716), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(718), 14,
      anon_sym_doctype,
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
  [16906] = 2,
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
    ACTIONS(702), 14,
      anon_sym_doctype,
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
  [16937] = 2,
    ACTIONS(623), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(625), 14,
      anon_sym_doctype,
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
  [16968] = 2,
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
    ACTIONS(841), 14,
      anon_sym_doctype,
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
  [16999] = 2,
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
    ACTIONS(881), 14,
      anon_sym_doctype,
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
  [17030] = 2,
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
    ACTIONS(877), 14,
      anon_sym_doctype,
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
  [17061] = 2,
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
    ACTIONS(669), 14,
      anon_sym_doctype,
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
  [17092] = 2,
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
    ACTIONS(708), 14,
      anon_sym_doctype,
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
  [17123] = 2,
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
    ACTIONS(873), 14,
      anon_sym_doctype,
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
  [17154] = 2,
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
    ACTIONS(806), 14,
      anon_sym_doctype,
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
  [17185] = 2,
    ACTIONS(722), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(724), 14,
      anon_sym_doctype,
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
  [17216] = 2,
    ACTIONS(796), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(798), 14,
      anon_sym_doctype,
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
  [17247] = 2,
    ACTIONS(792), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(794), 14,
      anon_sym_doctype,
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
  [17278] = 2,
    ACTIONS(867), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(869), 14,
      anon_sym_doctype,
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
    ACTIONS(863), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(865), 14,
      anon_sym_doctype,
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
  [17340] = 2,
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
    ACTIONS(919), 14,
      anon_sym_doctype,
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
  [17371] = 2,
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
    ACTIONS(935), 14,
      anon_sym_doctype,
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
  [17402] = 2,
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
    ACTIONS(810), 14,
      anon_sym_doctype,
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
  [17433] = 2,
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
    ACTIONS(903), 14,
      anon_sym_doctype,
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
  [17464] = 2,
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
    ACTIONS(939), 14,
      anon_sym_doctype,
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
  [17495] = 2,
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
    ACTIONS(907), 14,
      anon_sym_doctype,
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
  [17526] = 2,
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
    ACTIONS(965), 14,
      anon_sym_doctype,
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
  [17557] = 2,
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
    ACTIONS(895), 14,
      anon_sym_doctype,
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
  [17588] = 2,
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
    ACTIONS(891), 14,
      anon_sym_doctype,
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
  [17619] = 2,
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
    ACTIONS(923), 14,
      anon_sym_doctype,
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
  [17650] = 2,
    ACTIONS(948), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(950), 14,
      anon_sym_doctype,
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
  [17681] = 2,
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
    ACTIONS(861), 14,
      anon_sym_doctype,
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
  [17712] = 2,
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
    ACTIONS(857), 14,
      anon_sym_doctype,
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
  [17743] = 2,
    ACTIONS(828), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
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
  [17774] = 2,
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
    ACTIONS(784), 14,
      anon_sym_doctype,
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
  [17805] = 2,
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
    ACTIONS(837), 14,
      anon_sym_doctype,
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
  [17836] = 2,
    ACTIONS(843), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(845), 14,
      anon_sym_doctype,
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
  [17867] = 2,
    ACTIONS(847), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(849), 14,
      anon_sym_doctype,
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
  [17898] = 2,
    ACTIONS(851), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(853), 14,
      anon_sym_doctype,
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
  [17929] = 7,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    ACTIONS(1114), 1,
      anon_sym_SQUOTE,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      aux_sym_mixin_use_repeat1,
    STATE(867), 1,
      sym__pug_attributes,
    ACTIONS(1112), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(866), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [17961] = 6,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1124), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_mixin_use_repeat1,
    STATE(956), 1,
      sym__pug_attributes,
    ACTIONS(1118), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(866), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [17990] = 6,
    ACTIONS(1114), 1,
      anon_sym_SQUOTE,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_mixin_use_repeat1,
    STATE(857), 1,
      sym__pug_attributes,
    ACTIONS(1112), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(866), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18019] = 12,
    ACTIONS(1127), 1,
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
    ACTIONS(1143), 1,
      sym__newline,
    STATE(427), 1,
      aux_sym_tag_repeat1,
    STATE(451), 1,
      sym_attributes,
    ACTIONS(1141), 2,
      sym_class,
      sym_id,
    STATE(138), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18059] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1145), 1,
      anon_sym_COLON,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1151), 1,
      anon_sym_SLASH,
    ACTIONS(1153), 1,
      anon_sym_,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(459), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18099] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1161), 1,
      anon_sym_COLON,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1167), 1,
      anon_sym_SLASH,
    ACTIONS(1169), 1,
      anon_sym_,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_tag_repeat1,
    STATE(448), 1,
      sym_attributes,
    ACTIONS(1173), 2,
      sym_class,
      sym_id,
    STATE(364), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18139] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    ACTIONS(1179), 1,
      anon_sym_SLASH,
    ACTIONS(1181), 1,
      anon_sym_,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(450), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(129), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18179] = 5,
    ACTIONS(1187), 1,
      anon_sym_SQUOTE,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    STATE(701), 1,
      sym__pug_attributes,
    ACTIONS(1185), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(711), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18205] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1191), 1,
      anon_sym_COLON,
    ACTIONS(1193), 1,
      anon_sym_SLASH,
    ACTIONS(1195), 1,
      anon_sym_,
    ACTIONS(1199), 1,
      sym__newline,
    STATE(425), 1,
      aux_sym_tag_repeat1,
    STATE(454), 1,
      sym_attributes,
    ACTIONS(1197), 2,
      sym_class,
      sym_id,
    STATE(237), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18245] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1201), 1,
      anon_sym_COLON,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1207), 1,
      anon_sym_SLASH,
    ACTIONS(1209), 1,
      anon_sym_,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1215), 1,
      sym__newline,
    STATE(431), 1,
      aux_sym_tag_repeat1,
    STATE(445), 1,
      sym_attributes,
    ACTIONS(1213), 2,
      sym_class,
      sym_id,
    STATE(386), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18285] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1217), 1,
      anon_sym_COLON,
    ACTIONS(1219), 1,
      anon_sym_SLASH,
    ACTIONS(1221), 1,
      anon_sym_,
    ACTIONS(1223), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(453), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(387), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18325] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1225), 1,
      anon_sym_COLON,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1231), 1,
      anon_sym_SLASH,
    ACTIONS(1233), 1,
      anon_sym_,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(465), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(291), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18365] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1171), 1,
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
    STATE(467), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(371), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18405] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1253), 1,
      anon_sym_SLASH,
    ACTIONS(1255), 1,
      anon_sym_,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1259), 1,
      sym__newline,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    STATE(444), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(639), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18445] = 5,
    ACTIONS(1187), 1,
      anon_sym_SQUOTE,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    STATE(717), 1,
      sym__pug_attributes,
    ACTIONS(1185), 5,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
    STATE(711), 7,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
      sym_quoted_attribute_value,
  [18471] = 12,
    ACTIONS(1127), 1,
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
    STATE(464), 1,
      sym_attributes,
    ACTIONS(1157), 2,
      sym_class,
      sym_id,
    STATE(183), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18511] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1275), 1,
      anon_sym_COLON,
    ACTIONS(1277), 1,
      anon_sym_SLASH,
    ACTIONS(1279), 1,
      anon_sym_,
    ACTIONS(1283), 1,
      sym__newline,
    STATE(432), 1,
      aux_sym_tag_repeat1,
    STATE(442), 1,
      sym_attributes,
    ACTIONS(1281), 2,
      sym_class,
      sym_id,
    STATE(295), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18551] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1285), 1,
      anon_sym_COLON,
    ACTIONS(1287), 1,
      anon_sym_SLASH,
    ACTIONS(1289), 1,
      anon_sym_,
    ACTIONS(1293), 1,
      sym__newline,
    STATE(436), 1,
      aux_sym_tag_repeat1,
    STATE(463), 1,
      sym_attributes,
    ACTIONS(1291), 2,
      sym_class,
      sym_id,
    STATE(186), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18591] = 12,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1295), 1,
      anon_sym_COLON,
    ACTIONS(1297), 1,
      anon_sym_SLASH,
    ACTIONS(1299), 1,
      anon_sym_,
    ACTIONS(1303), 1,
      sym__newline,
    STATE(434), 1,
      aux_sym_tag_repeat1,
    STATE(457), 1,
      sym_attributes,
    ACTIONS(1301), 2,
      sym_class,
      sym_id,
    STATE(625), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18631] = 4,
    STATE(440), 1,
      aux_sym_tag_repeat1,
    ACTIONS(1307), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1309), 2,
      sym_class,
      sym_id,
    ACTIONS(1305), 6,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [18651] = 7,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    ACTIONS(1316), 1,
      sym_attribute_name,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(779), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [18676] = 8,
    ACTIONS(1225), 1,
      anon_sym_COLON,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1231), 1,
      anon_sym_SLASH,
    ACTIONS(1233), 1,
      anon_sym_,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(291), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18703] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(770), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [18728] = 8,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1320), 1,
      anon_sym_COLON,
    ACTIONS(1322), 1,
      anon_sym_SLASH,
    ACTIONS(1324), 1,
      anon_sym_,
    ACTIONS(1326), 1,
      sym__newline,
    STATE(621), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18755] = 8,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1217), 1,
      anon_sym_COLON,
    ACTIONS(1219), 1,
      anon_sym_SLASH,
    ACTIONS(1221), 1,
      anon_sym_,
    ACTIONS(1223), 1,
      sym__newline,
    STATE(387), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18782] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(753), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [18807] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(765), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [18832] = 8,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(1241), 1,
      anon_sym_SLASH,
    ACTIONS(1243), 1,
      anon_sym_,
    ACTIONS(1245), 1,
      sym__newline,
    STATE(371), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18859] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(709), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [18884] = 8,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(1336), 1,
      anon_sym_SLASH,
    ACTIONS(1338), 1,
      anon_sym_,
    ACTIONS(1340), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18911] = 8,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    ACTIONS(1179), 1,
      anon_sym_SLASH,
    ACTIONS(1181), 1,
      anon_sym_,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(129), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18938] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(783), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [18963] = 8,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1344), 1,
      anon_sym_COLON,
    ACTIONS(1346), 1,
      anon_sym_SLASH,
    ACTIONS(1348), 1,
      anon_sym_,
    ACTIONS(1350), 1,
      sym__newline,
    STATE(388), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [18990] = 8,
    ACTIONS(1145), 1,
      anon_sym_COLON,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1151), 1,
      anon_sym_SLASH,
    ACTIONS(1153), 1,
      anon_sym_,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19017] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(787), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19042] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(768), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19067] = 8,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1253), 1,
      anon_sym_SLASH,
    ACTIONS(1255), 1,
      anon_sym_,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1259), 1,
      sym__newline,
    STATE(639), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19094] = 7,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    ACTIONS(1361), 1,
      sym_attribute_name,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(836), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1358), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19119] = 8,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    ACTIONS(1366), 1,
      anon_sym_SLASH,
    ACTIONS(1368), 1,
      anon_sym_,
    ACTIONS(1370), 1,
      sym__newline,
    STATE(217), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19146] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(763), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19171] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(760), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19196] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(705), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19221] = 8,
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
    STATE(183), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19248] = 8,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1378), 1,
      anon_sym_COLON,
    ACTIONS(1380), 1,
      anon_sym_SLASH,
    ACTIONS(1382), 1,
      anon_sym_,
    ACTIONS(1384), 1,
      sym__newline,
    STATE(178), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19275] = 8,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1386), 1,
      anon_sym_COLON,
    ACTIONS(1388), 1,
      anon_sym_SLASH,
    ACTIONS(1390), 1,
      anon_sym_,
    ACTIONS(1392), 1,
      sym__newline,
    STATE(285), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19302] = 7,
    ACTIONS(1316), 1,
      sym_attribute_name,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      aux_sym_attributes_repeat1,
    STATE(657), 1,
      sym_angular_attribute_name,
    STATE(749), 1,
      sym_attribute,
    STATE(752), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1314), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [19327] = 8,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1400), 1,
      anon_sym_,
    ACTIONS(1402), 1,
      sym__newline,
    STATE(335), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19354] = 7,
    ACTIONS(1225), 1,
      anon_sym_COLON,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1233), 1,
      anon_sym_,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(291), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19378] = 7,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1344), 1,
      anon_sym_COLON,
    ACTIONS(1348), 1,
      anon_sym_,
    ACTIONS(1350), 1,
      sym__newline,
    STATE(388), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19402] = 7,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1400), 1,
      anon_sym_,
    ACTIONS(1402), 1,
      sym__newline,
    STATE(335), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19426] = 7,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1217), 1,
      anon_sym_COLON,
    ACTIONS(1221), 1,
      anon_sym_,
    ACTIONS(1223), 1,
      sym__newline,
    STATE(387), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19450] = 7,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1320), 1,
      anon_sym_COLON,
    ACTIONS(1324), 1,
      anon_sym_,
    ACTIONS(1326), 1,
      sym__newline,
    STATE(621), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19474] = 7,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1386), 1,
      anon_sym_COLON,
    ACTIONS(1390), 1,
      anon_sym_,
    ACTIONS(1392), 1,
      sym__newline,
    STATE(285), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19498] = 7,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1404), 1,
      anon_sym_COLON,
    ACTIONS(1406), 1,
      anon_sym_,
    ACTIONS(1408), 1,
      sym__newline,
    STATE(110), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19522] = 7,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1410), 1,
      anon_sym_COLON,
    ACTIONS(1412), 1,
      anon_sym_,
    ACTIONS(1414), 1,
      sym__newline,
    STATE(207), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19546] = 7,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(1243), 1,
      anon_sym_,
    ACTIONS(1245), 1,
      sym__newline,
    STATE(371), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19570] = 7,
    ACTIONS(1163), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    ACTIONS(1416), 1,
      anon_sym_COLON,
    ACTIONS(1418), 1,
      anon_sym_,
    ACTIONS(1420), 1,
      sym__newline,
    STATE(373), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19594] = 7,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(1338), 1,
      anon_sym_,
    ACTIONS(1340), 1,
      sym__newline,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19618] = 7,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1422), 1,
      anon_sym_COLON,
    ACTIONS(1424), 1,
      anon_sym_,
    ACTIONS(1426), 1,
      sym__newline,
    STATE(641), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19642] = 7,
    ACTIONS(1131), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    ACTIONS(1181), 1,
      anon_sym_,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(129), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19666] = 7,
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
    STATE(183), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19690] = 7,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1428), 1,
      anon_sym_COLON,
    ACTIONS(1430), 1,
      anon_sym_,
    ACTIONS(1432), 1,
      sym__newline,
    STATE(173), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19714] = 7,
    ACTIONS(1263), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1378), 1,
      anon_sym_COLON,
    ACTIONS(1382), 1,
      anon_sym_,
    ACTIONS(1384), 1,
      sym__newline,
    STATE(178), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19738] = 7,
    ACTIONS(1145), 1,
      anon_sym_COLON,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1153), 1,
      anon_sym_,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19762] = 7,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    ACTIONS(1255), 1,
      anon_sym_,
    ACTIONS(1257), 1,
      anon_sym_DOT,
    ACTIONS(1259), 1,
      sym__newline,
    STATE(639), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19786] = 7,
    ACTIONS(1227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1229), 1,
      anon_sym_EQ,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(1434), 1,
      anon_sym_COLON,
    ACTIONS(1436), 1,
      anon_sym_,
    ACTIONS(1438), 1,
      sym__newline,
    STATE(293), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19810] = 7,
    ACTIONS(1203), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_DOT,
    ACTIONS(1440), 1,
      anon_sym_COLON,
    ACTIONS(1442), 1,
      anon_sym_,
    ACTIONS(1444), 1,
      sym__newline,
    STATE(393), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19834] = 7,
    ACTIONS(1147), 1,
      anon_sym_BANG_EQ,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    ACTIONS(1368), 1,
      anon_sym_,
    ACTIONS(1370), 1,
      sym__newline,
    STATE(217), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [19858] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1452), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19881] = 7,
    ACTIONS(1454), 1,
      aux_sym_content_token1,
    ACTIONS(1457), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1460), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1463), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19904] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1465), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19927] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1467), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19950] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1469), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19973] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1471), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [19996] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1473), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20019] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1475), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20042] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1477), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20065] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1479), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20088] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1481), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20111] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1483), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20134] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1485), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20157] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1487), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20180] = 7,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1489), 1,
      sym__dedent,
    STATE(490), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20203] = 2,
    ACTIONS(774), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(776), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [20215] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(498), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20235] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1491), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20255] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1497), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20271] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1499), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20291] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1501), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20311] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(496), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20331] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1503), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20347] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1505), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20367] = 3,
    ACTIONS(1507), 1,
      sym__indent,
    STATE(635), 1,
      sym_children,
    ACTIONS(667), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20381] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1509), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20401] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1511), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20421] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1513), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20437] = 1,
    ACTIONS(1515), 7,
      aux_sym__ternary_attribute_value_token1,
      aux_sym__variable_attribute_value_token1,
      aux_sym__object_attribute_value_token1,
      aux_sym__template_attribute_value_token1,
      aux_sym__array_attribute_value_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [20447] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1517), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20467] = 3,
    ACTIONS(1519), 1,
      sym__indent,
    STATE(635), 1,
      sym_children,
    ACTIONS(667), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20481] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1521), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20501] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1523), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(530), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20521] = 2,
    ACTIONS(754), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(756), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [20533] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(494), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20553] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1525), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20573] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1527), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20593] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(503), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20613] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1529), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20633] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1531), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20653] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1533), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20673] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1535), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20693] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(502), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20713] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1537), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20733] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1539), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20753] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(500), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20773] = 2,
    ACTIONS(726), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(728), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [20785] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1541), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20801] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(499), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20821] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1543), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20841] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1545), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20861] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1547), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20881] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1549), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [20897] = 3,
    ACTIONS(1551), 1,
      sym__indent,
    STATE(641), 1,
      sym_children,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20911] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1553), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20931] = 3,
    ACTIONS(1519), 1,
      sym__indent,
    STATE(624), 1,
      sym_children,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20945] = 3,
    ACTIONS(1519), 1,
      sym__indent,
    STATE(641), 1,
      sym_children,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [20959] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(497), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20979] = 6,
    ACTIONS(1555), 1,
      aux_sym_content_token1,
    ACTIONS(1558), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1561), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1564), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [20999] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1566), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21019] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(493), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21039] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1568), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21059] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1570), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21079] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1572), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21099] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1574), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21115] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1576), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(567), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21135] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1578), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21155] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1580), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21175] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1582), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21191] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1584), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21211] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1586), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21231] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1588), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(555), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21251] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1590), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21271] = 3,
    ACTIONS(1592), 1,
      sym__indent,
    STATE(621), 1,
      sym_children,
    ACTIONS(716), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21285] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1594), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21305] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(501), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21325] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1596), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(559), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21345] = 4,
    ACTIONS(1495), 1,
      sym__newline,
    ACTIONS(1598), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21361] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1600), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21381] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1602), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21401] = 3,
    ACTIONS(1519), 1,
      sym__indent,
    STATE(631), 1,
      sym_children,
    ACTIONS(722), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21415] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1604), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21435] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(489), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21455] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(492), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21475] = 4,
    ACTIONS(1609), 1,
      sym__newline,
    ACTIONS(1612), 1,
      sym__dedent,
    STATE(573), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1606), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21491] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(495), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21511] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1614), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(547), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21531] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1616), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(538), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21551] = 3,
    ACTIONS(1618), 1,
      sym__indent,
    STATE(639), 1,
      sym_children,
    ACTIONS(710), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21565] = 6,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(491), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(548), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21585] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(520), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21602] = 3,
    ACTIONS(1620), 1,
      sym__newline,
    STATE(511), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21615] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(528), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21632] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(518), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21649] = 2,
    ACTIONS(1622), 1,
      sym__indent,
    ACTIONS(762), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [21660] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(558), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21677] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(539), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21694] = 4,
    ACTIONS(1626), 1,
      anon_sym_POUND,
    ACTIONS(1628), 1,
      anon_sym_LBRACE,
    ACTIONS(1624), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1630), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [21709] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(533), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21726] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(561), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21743] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(506), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21760] = 3,
    ACTIONS(1632), 1,
      sym__newline,
    STATE(536), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21773] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(540), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21790] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(550), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21807] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(512), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21824] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(543), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21841] = 3,
    ACTIONS(1634), 1,
      sym__newline,
    STATE(541), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21854] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(551), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21871] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(514), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21888] = 5,
    ACTIONS(1638), 1,
      anon_sym_EQ,
    ACTIONS(1640), 1,
      anon_sym_,
    ACTIONS(1642), 1,
      anon_sym_DOT,
    STATE(606), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21905] = 3,
    ACTIONS(1644), 1,
      sym__newline,
    STATE(507), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21918] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(563), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21935] = 3,
    ACTIONS(1646), 1,
      sym__newline,
    STATE(557), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [21948] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(570), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21965] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(527), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21982] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(556), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [21999] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(509), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22016] = 5,
    ACTIONS(1642), 1,
      anon_sym_DOT,
    ACTIONS(1650), 1,
      anon_sym_EQ,
    ACTIONS(1652), 1,
      anon_sym_,
    STATE(607), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22033] = 4,
    ACTIONS(1656), 1,
      anon_sym_,
    ACTIONS(1658), 1,
      anon_sym_DOT,
    STATE(607), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1654), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [22048] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(575), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22065] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(508), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22082] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(532), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22099] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(515), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22116] = 3,
    ACTIONS(1661), 1,
      sym__newline,
    STATE(516), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22129] = 3,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(553), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22142] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(552), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22159] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(568), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22176] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(525), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22193] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(529), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22210] = 3,
    ACTIONS(1665), 1,
      sym__newline,
    STATE(566), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22223] = 5,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1448), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(636), 1,
      aux_sym_content_repeat1,
    STATE(524), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [22240] = 3,
    STATE(315), 1,
      sym__dummy_tag,
    STATE(317), 1,
      sym_tag,
    ACTIONS(393), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22252] = 1,
    ACTIONS(700), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22260] = 1,
    ACTIONS(808), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22268] = 4,
    ACTIONS(1667), 1,
      aux_sym_content_token1,
    ACTIONS(1672), 1,
      sym__newline,
    STATE(623), 1,
      aux_sym_content_repeat1,
    ACTIONS(1670), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22282] = 1,
    ACTIONS(722), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22290] = 1,
    ACTIONS(710), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22298] = 1,
    ACTIONS(796), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22306] = 2,
    ACTIONS(1656), 1,
      anon_sym_,
    ACTIONS(1654), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [22316] = 3,
    ACTIONS(1674), 1,
      anon_sym_LBRACE,
    ACTIONS(1670), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1672), 2,
      sym__newline,
      aux_sym_content_token1,
  [22328] = 1,
    ACTIONS(804), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22336] = 1,
    ACTIONS(1356), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [22344] = 1,
    ACTIONS(792), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22352] = 4,
    ACTIONS(1676), 1,
      anon_sym_when,
    ACTIONS(1678), 1,
      anon_sym_default,
    STATE(727), 1,
      sym__when_keyword,
    STATE(76), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22366] = 4,
    ACTIONS(1676), 1,
      anon_sym_when,
    ACTIONS(1680), 1,
      anon_sym_default,
    STATE(756), 1,
      sym__when_keyword,
    STATE(54), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22380] = 1,
    ACTIONS(839), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22388] = 1,
    ACTIONS(706), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22396] = 4,
    ACTIONS(1446), 1,
      aux_sym_content_token1,
    ACTIONS(1684), 1,
      sym__newline,
    STATE(623), 1,
      aux_sym_content_repeat1,
    ACTIONS(1682), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22410] = 4,
    ACTIONS(1676), 1,
      anon_sym_when,
    ACTIONS(1686), 1,
      anon_sym_default,
    STATE(713), 1,
      sym__when_keyword,
    STATE(154), 2,
      sym_when,
      aux_sym_case_repeat1,
  [22424] = 3,
    STATE(111), 1,
      sym__dummy_tag,
    STATE(113), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22436] = 1,
    ACTIONS(716), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22444] = 3,
    STATE(172), 1,
      sym_tag,
    STATE(174), 1,
      sym__dummy_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22456] = 1,
    ACTIONS(667), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22464] = 1,
    ACTIONS(905), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22472] = 1,
    ACTIONS(786), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [22480] = 2,
    STATE(345), 1,
      sym_tag,
    ACTIONS(47), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22489] = 2,
    ACTIONS(1690), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1692), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22498] = 4,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1696), 1,
      sym__dedent,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [22511] = 4,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    ACTIONS(1702), 1,
      sym__dedent,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [22524] = 2,
    ACTIONS(1704), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1706), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22533] = 2,
    STATE(207), 1,
      sym_tag,
    ACTIONS(272), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22542] = 4,
    ACTIONS(1708), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1711), 1,
      sym__newline,
    ACTIONS(1714), 1,
      sym__dedent,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [22555] = 2,
    STATE(285), 1,
      sym_tag,
    ACTIONS(393), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22564] = 2,
    STATE(173), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22573] = 2,
    STATE(200), 1,
      sym_tag,
    ACTIONS(272), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22582] = 4,
    ACTIONS(1716), 1,
      anon_sym_append,
    ACTIONS(1718), 1,
      anon_sym_prepend,
    ACTIONS(1720), 1,
      sym_tag_name,
    STATE(348), 1,
      sym__block_content,
  [22595] = 2,
    STATE(293), 1,
      sym_tag,
    ACTIONS(393), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22604] = 2,
    STATE(335), 1,
      sym_tag,
    ACTIONS(47), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22613] = 3,
    ACTIONS(1724), 1,
      anon_sym_EQ,
    ACTIONS(1726), 1,
      anon_sym_,
    ACTIONS(1722), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22624] = 4,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1728), 1,
      sym__dedent,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [22637] = 2,
    STATE(291), 1,
      sym_tag,
    ACTIONS(393), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22646] = 2,
    STATE(178), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22655] = 4,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    ACTIONS(1730), 1,
      sym__dedent,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [22668] = 2,
    STATE(171), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22677] = 4,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1734), 1,
      sym__newline,
    STATE(381), 1,
      sym__single_line_buf_code,
    STATE(917), 1,
      sym__un_delimited_javascript,
  [22690] = 4,
    ACTIONS(616), 1,
      sym__dedent,
    ACTIONS(1736), 1,
      aux_sym_filter_content_token2,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [22703] = 2,
    STATE(263), 1,
      sym_tag,
    ACTIONS(393), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22712] = 4,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    ACTIONS(1739), 1,
      sym__dedent,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [22725] = 2,
    STATE(183), 1,
      sym_tag,
    ACTIONS(1688), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22734] = 2,
    ACTIONS(1743), 1,
      anon_sym_,
    ACTIONS(1741), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [22743] = 4,
    ACTIONS(1745), 1,
      anon_sym_append,
    ACTIONS(1747), 1,
      anon_sym_prepend,
    ACTIONS(1749), 1,
      sym_tag_name,
    STATE(120), 1,
      sym__block_content,
  [22756] = 2,
    STATE(217), 1,
      sym_tag,
    ACTIONS(272), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22765] = 4,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1751), 1,
      sym__dedent,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [22778] = 4,
    ACTIONS(1753), 1,
      anon_sym_append,
    ACTIONS(1755), 1,
      anon_sym_prepend,
    ACTIONS(1757), 1,
      sym_tag_name,
    STATE(313), 1,
      sym__block_content,
  [22791] = 4,
    ACTIONS(1759), 1,
      anon_sym_append,
    ACTIONS(1761), 1,
      anon_sym_prepend,
    ACTIONS(1763), 1,
      sym_tag_name,
    STATE(419), 1,
      sym__block_content,
  [22804] = 2,
    STATE(394), 1,
      sym_tag,
    ACTIONS(505), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22813] = 2,
    STATE(393), 1,
      sym_tag,
    ACTIONS(505), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22822] = 2,
    STATE(129), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22831] = 4,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1765), 1,
      sym__newline,
    STATE(226), 1,
      sym__single_line_buf_code,
    STATE(962), 1,
      sym__un_delimited_javascript,
  [22844] = 2,
    ACTIONS(1463), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1767), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [22853] = 2,
    STATE(229), 1,
      sym_tag,
    ACTIONS(272), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22862] = 2,
    STATE(635), 1,
      sym_tag,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22871] = 2,
    STATE(388), 1,
      sym_tag,
    ACTIONS(505), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22880] = 2,
    ACTIONS(1670), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1672), 2,
      sym__newline,
      aux_sym_content_token1,
  [22889] = 4,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1769), 1,
      sym__newline,
    STATE(277), 1,
      sym__single_line_buf_code,
    STATE(883), 1,
      sym__un_delimited_javascript,
  [22902] = 2,
    STATE(639), 1,
      sym_tag,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22911] = 4,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1771), 1,
      sym__newline,
    STATE(279), 1,
      sym__single_line_buf_code,
    STATE(1028), 1,
      sym__un_delimited_javascript,
  [22924] = 2,
    STATE(121), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [22933] = 4,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    ACTIONS(1773), 1,
      sym__dedent,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [22946] = 4,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1775), 1,
      sym__newline,
    STATE(133), 1,
      sym__single_line_buf_code,
    STATE(998), 1,
      sym__un_delimited_javascript,
  [22959] = 4,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1777), 1,
      sym__dedent,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [22972] = 4,
    ACTIONS(1779), 1,
      anon_sym_append,
    ACTIONS(1781), 1,
      anon_sym_prepend,
    ACTIONS(1783), 1,
      sym_tag_name,
    STATE(251), 1,
      sym__block_content,
  [22985] = 4,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    ACTIONS(1785), 1,
      sym__dedent,
    STATE(650), 1,
      aux_sym_script_block_repeat1,
  [22998] = 2,
    STATE(373), 1,
      sym_tag,
    ACTIONS(47), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23007] = 4,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1787), 1,
      sym__dedent,
    STATE(664), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [23020] = 2,
    STATE(641), 1,
      sym_tag,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23029] = 2,
    STATE(110), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23038] = 2,
    STATE(621), 1,
      sym_tag,
    ACTIONS(1493), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23047] = 2,
    STATE(371), 1,
      sym_tag,
    ACTIONS(47), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23056] = 2,
    STATE(102), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23065] = 2,
    STATE(387), 1,
      sym_tag,
    ACTIONS(505), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [23074] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(301), 1,
      sym__single_line_buf_code,
    STATE(883), 1,
      sym__un_delimited_javascript,
  [23084] = 2,
    ACTIONS(1791), 1,
      anon_sym_,
    ACTIONS(1789), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23092] = 3,
    ACTIONS(1793), 1,
      aux_sym__each_js_token1,
    STATE(821), 1,
      sym__each_js,
    STATE(1020), 1,
      sym_iteration_variable,
  [23102] = 3,
    ACTIONS(1793), 1,
      aux_sym__each_js_token1,
    STATE(821), 1,
      sym__each_js,
    STATE(1016), 1,
      sym_iteration_variable,
  [23112] = 3,
    ACTIONS(1793), 1,
      aux_sym__each_js_token1,
    STATE(821), 1,
      sym__each_js,
    STATE(1012), 1,
      sym_iteration_variable,
  [23122] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1797), 1,
      anon_sym_RPAREN,
    ACTIONS(1799), 1,
      anon_sym_,
  [23132] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1803), 1,
      sym__dedent,
    STATE(712), 1,
      aux_sym_filter_content_repeat1,
  [23142] = 3,
    ACTIONS(1793), 1,
      aux_sym__each_js_token1,
    STATE(821), 1,
      sym__each_js,
    STATE(1007), 1,
      sym_iteration_variable,
  [23152] = 3,
    ACTIONS(1805), 1,
      aux_sym_filter_content_token2,
    STATE(56), 1,
      aux_sym__comment_repeat1,
    STATE(918), 1,
      sym__comment_content,
  [23162] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1807), 1,
      anon_sym_RPAREN,
  [23172] = 3,
    ACTIONS(1809), 1,
      sym__un_delimited_javascript_line,
    STATE(63), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(144), 1,
      sym__multi_line_buf_code,
  [23182] = 2,
    ACTIONS(1813), 1,
      anon_sym_,
    ACTIONS(1811), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23190] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1815), 1,
      sym__dedent,
    STATE(718), 1,
      aux_sym_filter_content_repeat1,
  [23200] = 3,
    ACTIONS(1817), 1,
      anon_sym_COLON,
    ACTIONS(1819), 1,
      sym__newline,
    STATE(310), 1,
      sym__when_content,
  [23210] = 2,
    ACTIONS(1823), 1,
      anon_sym_,
    ACTIONS(1821), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23218] = 2,
    ACTIONS(1827), 1,
      anon_sym_,
    ACTIONS(1825), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23226] = 2,
    ACTIONS(1831), 1,
      anon_sym_,
    ACTIONS(1829), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23234] = 2,
    ACTIONS(1835), 1,
      anon_sym_,
    ACTIONS(1833), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23242] = 3,
    ACTIONS(1837), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1840), 1,
      sym__dedent,
    STATE(718), 1,
      aux_sym_filter_content_repeat1,
  [23252] = 2,
    ACTIONS(1844), 1,
      anon_sym_,
    ACTIONS(1842), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23260] = 3,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    STATE(689), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [23270] = 3,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    STATE(687), 1,
      aux_sym_script_block_repeat1,
  [23280] = 1,
    ACTIONS(1846), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23286] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(643), 1,
      sym__single_line_buf_code,
    STATE(903), 1,
      sym__un_delimited_javascript,
  [23296] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(642), 1,
      sym__single_line_buf_code,
    STATE(903), 1,
      sym__un_delimited_javascript,
  [23306] = 3,
    ACTIONS(1848), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1850), 1,
      sym__newline,
    STATE(969), 1,
      sym__comment_content,
  [23316] = 1,
    ACTIONS(1714), 3,
      sym__newline,
      sym__dedent,
      aux_sym_iteration_iterator_token1,
  [23322] = 3,
    ACTIONS(1852), 1,
      anon_sym_COLON,
    ACTIONS(1854), 1,
      sym__newline,
    STATE(181), 1,
      sym__when_content,
  [23332] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1856), 1,
      sym__dedent,
    STATE(718), 1,
      aux_sym_filter_content_repeat1,
  [23342] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(139), 1,
      sym__single_line_buf_code,
    STATE(998), 1,
      sym__un_delimited_javascript,
  [23352] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(93), 1,
      sym__single_line_buf_code,
    STATE(998), 1,
      sym__un_delimited_javascript,
  [23362] = 3,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    STATE(646), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [23372] = 3,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    STATE(647), 1,
      aux_sym_script_block_repeat1,
  [23382] = 3,
    ACTIONS(1858), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1860), 1,
      sym__newline,
    STATE(899), 1,
      sym__comment_content,
  [23392] = 3,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    STATE(693), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [23402] = 3,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    STATE(691), 1,
      aux_sym_script_block_repeat1,
  [23412] = 3,
    ACTIONS(1862), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1864), 1,
      sym__newline,
    STATE(963), 1,
      sym__comment_content,
  [23422] = 3,
    ACTIONS(1866), 1,
      sym__un_delimited_javascript_line,
    STATE(177), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(290), 1,
      sym__multi_line_buf_code,
  [23432] = 2,
    ACTIONS(1870), 1,
      anon_sym_,
    ACTIONS(1868), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23440] = 3,
    ACTIONS(1872), 1,
      anon_sym_SQUOTE,
    ACTIONS(1874), 1,
      anon_sym_DQUOTE,
    STATE(719), 1,
      sym_quoted_javascript,
  [23450] = 1,
    ACTIONS(1876), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23456] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(353), 1,
      sym__single_line_buf_code,
    STATE(961), 1,
      sym__un_delimited_javascript,
  [23466] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(355), 1,
      sym__single_line_buf_code,
    STATE(961), 1,
      sym__un_delimited_javascript,
  [23476] = 3,
    ACTIONS(1793), 1,
      aux_sym__each_js_token1,
    STATE(821), 1,
      sym__each_js,
    STATE(909), 1,
      sym_iteration_variable,
  [23486] = 3,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    STATE(658), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [23496] = 3,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    STATE(661), 1,
      aux_sym_script_block_repeat1,
  [23506] = 3,
    ACTIONS(1878), 1,
      aux_sym_filter_content_token2,
    STATE(185), 1,
      aux_sym__comment_repeat1,
    STATE(953), 1,
      sym__comment_content,
  [23516] = 3,
    ACTIONS(1880), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1882), 1,
      sym__newline,
    STATE(1029), 1,
      sym__comment_content,
  [23526] = 1,
    ACTIONS(1884), 3,
      sym__newline,
      sym__dedent,
      aux_sym_iteration_iterator_token1,
  [23532] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
  [23542] = 3,
    ACTIONS(1888), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1890), 1,
      sym__newline,
    STATE(874), 1,
      sym__comment_content,
  [23552] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1892), 1,
      sym__dedent,
    STATE(728), 1,
      aux_sym_filter_content_repeat1,
  [23562] = 2,
    ACTIONS(1896), 1,
      anon_sym_,
    ACTIONS(1894), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [23570] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1898), 1,
      anon_sym_RPAREN,
  [23580] = 3,
    ACTIONS(1694), 1,
      aux_sym_filter_content_token2,
    STATE(671), 1,
      aux_sym__comment_repeat1,
    STATE(884), 1,
      sym__comment_content,
  [23590] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1900), 1,
      sym__dedent,
    STATE(766), 1,
      aux_sym_filter_content_repeat1,
  [23600] = 3,
    ACTIONS(1902), 1,
      anon_sym_COLON,
    ACTIONS(1904), 1,
      sym__newline,
    STATE(98), 1,
      sym__when_content,
  [23610] = 3,
    ACTIONS(1698), 1,
      aux_sym_iteration_iterator_token1,
    ACTIONS(1700), 1,
      sym__newline,
    STATE(666), 1,
      aux_sym_script_block_repeat1,
  [23620] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1906), 1,
      sym__dedent,
    STATE(718), 1,
      aux_sym_filter_content_repeat1,
  [23630] = 3,
    ACTIONS(1908), 1,
      aux_sym_filter_content_token2,
    STATE(252), 1,
      aux_sym__comment_repeat1,
    STATE(987), 1,
      sym__comment_content,
  [23640] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1910), 1,
      anon_sym_RPAREN,
  [23650] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(265), 1,
      sym__single_line_buf_code,
    STATE(883), 1,
      sym__un_delimited_javascript,
  [23660] = 3,
    ACTIONS(1912), 1,
      anon_sym_RPAREN,
    ACTIONS(1914), 1,
      aux_sym_mixin_attributes_token1,
    STATE(870), 1,
      aux_sym_mixin_attributes_repeat1,
  [23670] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1916), 1,
      anon_sym_RPAREN,
  [23680] = 3,
    ACTIONS(1918), 1,
      sym__un_delimited_javascript_line,
    STATE(280), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(379), 1,
      sym__multi_line_buf_code,
  [23690] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1920), 1,
      anon_sym_RPAREN,
  [23700] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1922), 1,
      sym__dedent,
    STATE(718), 1,
      aux_sym_filter_content_repeat1,
  [23710] = 3,
    ACTIONS(1924), 1,
      sym__un_delimited_javascript_line,
    STATE(99), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(204), 1,
      sym__multi_line_buf_code,
  [23720] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [23730] = 3,
    ACTIONS(1928), 1,
      aux_sym_filter_content_token2,
    STATE(88), 1,
      aux_sym__comment_repeat1,
    STATE(1027), 1,
      sym__comment_content,
  [23740] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [23750] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1932), 1,
      sym__dedent,
    STATE(758), 1,
      aux_sym_filter_content_repeat1,
  [23760] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(385), 1,
      sym__single_line_buf_code,
    STATE(917), 1,
      sym__un_delimited_javascript,
  [23770] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(407), 1,
      sym__single_line_buf_code,
    STATE(917), 1,
      sym__un_delimited_javascript,
  [23780] = 1,
    ACTIONS(1934), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23786] = 3,
    ACTIONS(1936), 1,
      anon_sym_LPAREN,
    ACTIONS(1938), 1,
      sym__newline,
    STATE(873), 1,
      sym_mixin_attributes,
  [23796] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1940), 1,
      sym__dedent,
    STATE(718), 1,
      aux_sym_filter_content_repeat1,
  [23806] = 3,
    ACTIONS(1942), 1,
      sym__un_delimited_javascript_line,
    STATE(164), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(297), 1,
      sym__multi_line_buf_code,
  [23816] = 1,
    ACTIONS(1944), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23822] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1946), 1,
      anon_sym_RPAREN,
  [23832] = 3,
    ACTIONS(1948), 1,
      aux_sym_filter_content_token2,
    STATE(112), 1,
      aux_sym__comment_repeat1,
    STATE(945), 1,
      sym__comment_content,
  [23842] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(157), 1,
      sym__single_line_buf_code,
    STATE(971), 1,
      sym__un_delimited_javascript,
  [23852] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(168), 1,
      sym__single_line_buf_code,
    STATE(971), 1,
      sym__un_delimited_javascript,
  [23862] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1950), 1,
      anon_sym_RPAREN,
  [23872] = 3,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1952), 1,
      sym__dedent,
    STATE(776), 1,
      aux_sym_filter_content_repeat1,
  [23882] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(241), 1,
      sym__single_line_buf_code,
    STATE(962), 1,
      sym__un_delimited_javascript,
  [23892] = 3,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(239), 1,
      sym__single_line_buf_code,
    STATE(962), 1,
      sym__un_delimited_javascript,
  [23902] = 3,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
    ACTIONS(1954), 1,
      anon_sym_RPAREN,
  [23912] = 1,
    ACTIONS(1956), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [23918] = 2,
    ACTIONS(671), 1,
      sym__indent,
    STATE(134), 1,
      sym_children,
  [23925] = 2,
    ACTIONS(1958), 1,
      sym_tag_name,
    STATE(123), 1,
      sym__block_content,
  [23932] = 2,
    ACTIONS(671), 1,
      sym__indent,
    STATE(151), 1,
      sym_children,
  [23939] = 2,
    ACTIONS(790), 1,
      sym__indent,
    STATE(225), 1,
      sym_children,
  [23946] = 2,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(968), 1,
      sym__un_delimited_javascript,
  [23953] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(949), 1,
      sym_iteration_iterator,
  [23960] = 2,
    ACTIONS(1962), 1,
      sym_tag_name,
    STATE(233), 1,
      sym__block_content,
  [23967] = 2,
    ACTIONS(974), 1,
      sym__indent,
    STATE(276), 1,
      sym_children,
  [23974] = 2,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(942), 1,
      sym__un_delimited_javascript,
  [23981] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(941), 1,
      sym_iteration_iterator,
  [23988] = 2,
    ACTIONS(974), 1,
      sym__indent,
    STATE(271), 1,
      sym_children,
  [23995] = 2,
    ACTIONS(1964), 1,
      sym_tag_name,
    STATE(349), 1,
      sym__block_content,
  [24002] = 2,
    ACTIONS(1966), 1,
      sym_tag_name,
    STATE(286), 1,
      sym__block_content,
  [24009] = 2,
    ACTIONS(1962), 1,
      sym_tag_name,
    STATE(234), 1,
      sym__block_content,
  [24016] = 2,
    ACTIONS(790), 1,
      sym__indent,
    STATE(235), 1,
      sym_children,
  [24023] = 2,
    ACTIONS(1966), 1,
      sym_tag_name,
    STATE(287), 1,
      sym__block_content,
  [24030] = 2,
    ACTIONS(974), 1,
      sym__indent,
    STATE(321), 1,
      sym_children,
  [24037] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(931), 1,
      sym_iteration_iterator,
  [24044] = 2,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(924), 1,
      sym__un_delimited_javascript,
  [24051] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(923), 1,
      sym_iteration_iterator,
  [24058] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(913), 1,
      sym_iteration_iterator,
  [24065] = 2,
    ACTIONS(1962), 1,
      sym_tag_name,
    STATE(244), 1,
      sym__block_content,
  [24072] = 2,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(905), 1,
      sym__un_delimited_javascript,
  [24079] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(910), 1,
      sym_iteration_iterator,
  [24086] = 2,
    ACTIONS(1962), 1,
      sym_tag_name,
    STATE(245), 1,
      sym__block_content,
  [24093] = 2,
    ACTIONS(1966), 1,
      sym_tag_name,
    STATE(316), 1,
      sym__block_content,
  [24100] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(897), 1,
      sym_iteration_iterator,
  [24107] = 2,
    ACTIONS(1966), 1,
      sym_tag_name,
    STATE(314), 1,
      sym__block_content,
  [24114] = 2,
    ACTIONS(974), 1,
      sym__indent,
    STATE(208), 1,
      sym_children,
  [24121] = 2,
    ACTIONS(1732), 1,
      sym__un_delimited_javascript_line,
    STATE(888), 1,
      sym__un_delimited_javascript,
  [24128] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(887), 1,
      sym_iteration_iterator,
  [24135] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(375), 1,
      sym_children,
  [24142] = 2,
    ACTIONS(1968), 1,
      anon_sym_COMMA,
    ACTIONS(1970), 1,
      anon_sym_in,
  [24149] = 2,
    ACTIONS(1972), 1,
      sym_tag_name,
    STATE(392), 1,
      sym__block_content,
  [24156] = 2,
    ACTIONS(1974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1976), 1,
      aux_sym_quoted_javascript_token1,
  [24163] = 2,
    ACTIONS(1964), 1,
      sym_tag_name,
    STATE(377), 1,
      sym__block_content,
  [24170] = 2,
    ACTIONS(974), 1,
      sym__indent,
    STATE(298), 1,
      sym_children,
  [24177] = 2,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(402), 1,
      sym_children,
  [24184] = 2,
    ACTIONS(1974), 1,
      anon_sym_DQUOTE,
    ACTIONS(1978), 1,
      aux_sym_quoted_javascript_token2,
  [24191] = 2,
    ACTIONS(1980), 1,
      aux_sym__each_js_token1,
    STATE(876), 1,
      sym__each_js,
  [24198] = 2,
    ACTIONS(671), 1,
      sym__indent,
    STATE(74), 1,
      sym_children,
  [24205] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(376), 1,
      sym_children,
  [24212] = 2,
    ACTIONS(1964), 1,
      sym_tag_name,
    STATE(378), 1,
      sym__block_content,
  [24219] = 1,
    ACTIONS(1982), 2,
      sym__newline,
      anon_sym_COLON,
  [24224] = 2,
    ACTIONS(1958), 1,
      sym_tag_name,
    STATE(128), 1,
      sym__block_content,
  [24231] = 1,
    ACTIONS(1840), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [24236] = 1,
    ACTIONS(1870), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24241] = 2,
    ACTIONS(1795), 1,
      anon_sym_COMMA,
    ACTIONS(1799), 1,
      anon_sym_,
  [24248] = 2,
    ACTIONS(1958), 1,
      sym_tag_name,
    STATE(127), 1,
      sym__block_content,
  [24255] = 2,
    ACTIONS(1984), 1,
      anon_sym_DQUOTE,
    ACTIONS(1986), 1,
      aux_sym_quoted_javascript_token2,
  [24262] = 2,
    ACTIONS(1984), 1,
      anon_sym_SQUOTE,
    ACTIONS(1988), 1,
      aux_sym_quoted_javascript_token1,
  [24269] = 2,
    ACTIONS(671), 1,
      sym__indent,
    STATE(126), 1,
      sym_children,
  [24276] = 2,
    ACTIONS(671), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
  [24283] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(363), 1,
      sym_children,
  [24290] = 2,
    ACTIONS(1972), 1,
      sym_tag_name,
    STATE(420), 1,
      sym__block_content,
  [24297] = 2,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(342), 1,
      sym_children,
  [24304] = 2,
    ACTIONS(790), 1,
      sym__indent,
    STATE(158), 1,
      sym_children,
  [24311] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(877), 1,
      sym_iteration_iterator,
  [24318] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(360), 1,
      sym_children,
  [24325] = 2,
    ACTIONS(1990), 1,
      anon_sym_COMMA,
    ACTIONS(1992), 1,
      anon_sym_RPAREN,
  [24332] = 2,
    ACTIONS(790), 1,
      sym__indent,
    STATE(220), 1,
      sym_children,
  [24339] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(358), 1,
      sym_children,
  [24346] = 1,
    ACTIONS(616), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [24351] = 2,
    ACTIONS(1972), 1,
      sym_tag_name,
    STATE(414), 1,
      sym__block_content,
  [24358] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(352), 1,
      sym_children,
  [24365] = 2,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(400), 1,
      sym_children,
  [24372] = 2,
    ACTIONS(1994), 1,
      aux_sym_mixin_attributes_token1,
    STATE(855), 1,
      aux_sym_mixin_attributes_repeat1,
  [24379] = 2,
    ACTIONS(1990), 1,
      anon_sym_COMMA,
    ACTIONS(1997), 1,
      anon_sym_RPAREN,
  [24386] = 2,
    ACTIONS(1999), 1,
      anon_sym_COMMA,
    ACTIONS(2001), 1,
      anon_sym_RPAREN,
  [24393] = 2,
    ACTIONS(1964), 1,
      sym_tag_name,
    STATE(350), 1,
      sym__block_content,
  [24400] = 2,
    ACTIONS(790), 1,
      sym__indent,
    STATE(247), 1,
      sym_children,
  [24407] = 2,
    ACTIONS(1960), 1,
      aux_sym_iteration_iterator_token1,
    STATE(972), 1,
      sym_iteration_iterator,
  [24414] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(289), 1,
      sym_children,
  [24421] = 1,
    ACTIONS(1823), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24426] = 2,
    ACTIONS(1972), 1,
      sym_tag_name,
    STATE(395), 1,
      sym__block_content,
  [24433] = 2,
    ACTIONS(2003), 1,
      anon_sym_SQUOTE,
    ACTIONS(2005), 1,
      aux_sym_quoted_javascript_token1,
  [24440] = 2,
    ACTIONS(2003), 1,
      anon_sym_DQUOTE,
    ACTIONS(2007), 1,
      aux_sym_quoted_javascript_token2,
  [24447] = 1,
    ACTIONS(1813), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24452] = 2,
    ACTIONS(1999), 1,
      anon_sym_COMMA,
    ACTIONS(2009), 1,
      anon_sym_RPAREN,
  [24459] = 2,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(384), 1,
      sym_children,
  [24466] = 2,
    ACTIONS(1958), 1,
      sym_tag_name,
    STATE(122), 1,
      sym__block_content,
  [24473] = 2,
    ACTIONS(2011), 1,
      aux_sym_mixin_attributes_token1,
    STATE(855), 1,
      aux_sym_mixin_attributes_repeat1,
  [24480] = 2,
    ACTIONS(1010), 1,
      sym__indent,
    STATE(344), 1,
      sym_children,
  [24487] = 2,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(410), 1,
      sym_children,
  [24494] = 1,
    ACTIONS(2013), 1,
      sym__newline,
  [24498] = 1,
    ACTIONS(2015), 1,
      sym__newline,
  [24502] = 1,
    ACTIONS(2017), 1,
      sym__indent,
  [24506] = 1,
    ACTIONS(2019), 1,
      anon_sym_in,
  [24510] = 1,
    ACTIONS(2021), 1,
      sym__newline,
  [24514] = 1,
    ACTIONS(2023), 1,
      sym__newline,
  [24518] = 1,
    ACTIONS(2025), 1,
      ts_builtin_sym_end,
  [24522] = 1,
    ACTIONS(2027), 1,
      aux_sym_unbuffered_code_token1,
  [24526] = 1,
    ACTIONS(2029), 1,
      aux_sym_extends_token1,
  [24530] = 1,
    ACTIONS(2031), 1,
      sym__newline,
  [24534] = 1,
    ACTIONS(2033), 1,
      sym__newline,
  [24538] = 1,
    ACTIONS(2035), 1,
      sym__newline,
  [24542] = 1,
    ACTIONS(2037), 1,
      sym__newline,
  [24546] = 1,
    ACTIONS(2039), 1,
      aux_sym_unbuffered_code_token1,
  [24550] = 1,
    ACTIONS(2041), 1,
      sym__newline,
  [24554] = 1,
    ACTIONS(2043), 1,
      sym__newline,
  [24558] = 1,
    ACTIONS(2045), 1,
      aux_sym_filter_content_token2,
  [24562] = 1,
    ACTIONS(2047), 1,
      sym_tag_name,
  [24566] = 1,
    ACTIONS(2049), 1,
      sym__indent,
  [24570] = 1,
    ACTIONS(2051), 1,
      sym__indent,
  [24574] = 1,
    ACTIONS(2053), 1,
      sym_filter_name,
  [24578] = 1,
    ACTIONS(2055), 1,
      sym__newline,
  [24582] = 1,
    ACTIONS(2057), 1,
      sym__newline,
  [24586] = 1,
    ACTIONS(2059), 1,
      sym__indent,
  [24590] = 1,
    ACTIONS(2061), 1,
      sym__newline,
  [24594] = 1,
    ACTIONS(2063), 1,
      aux_sym__attribute_token1,
  [24598] = 1,
    ACTIONS(2065), 1,
      sym__newline,
  [24602] = 1,
    ACTIONS(2067), 1,
      sym__newline,
  [24606] = 1,
    ACTIONS(2069), 1,
      sym__newline,
  [24610] = 1,
    ACTIONS(2071), 1,
      sym__newline,
  [24614] = 1,
    ACTIONS(2073), 1,
      sym__newline,
  [24618] = 1,
    ACTIONS(2075), 1,
      aux_sym_unbuffered_code_token1,
  [24622] = 1,
    ACTIONS(2077), 1,
      sym__newline,
  [24626] = 1,
    ACTIONS(2079), 1,
      anon_sym_SQUOTE,
  [24630] = 1,
    ACTIONS(2081), 1,
      sym__indent,
  [24634] = 1,
    ACTIONS(2083), 1,
      sym__indent,
  [24638] = 1,
    ACTIONS(2085), 1,
      anon_sym_in,
  [24642] = 1,
    ACTIONS(2087), 1,
      sym__newline,
  [24646] = 1,
    ACTIONS(2089), 1,
      sym__newline,
  [24650] = 1,
    ACTIONS(2091), 1,
      sym__indent,
  [24654] = 1,
    ACTIONS(2093), 1,
      sym__newline,
  [24658] = 1,
    ACTIONS(2095), 1,
      aux_sym_filter_content_token2,
  [24662] = 1,
    ACTIONS(2097), 1,
      aux_sym_mixin_attributes_token1,
  [24666] = 1,
    ACTIONS(2099), 1,
      sym__newline,
  [24670] = 1,
    ACTIONS(2101), 1,
      sym__newline,
  [24674] = 1,
    ACTIONS(2103), 1,
      sym__newline,
  [24678] = 1,
    ACTIONS(2105), 1,
      sym__newline,
  [24682] = 1,
    ACTIONS(2107), 1,
      sym__newline,
  [24686] = 1,
    ACTIONS(2109), 1,
      anon_sym_DQUOTE,
  [24690] = 1,
    ACTIONS(2111), 1,
      aux_sym_unbuffered_code_token1,
  [24694] = 1,
    ACTIONS(2113), 1,
      sym__newline,
  [24698] = 1,
    ACTIONS(2115), 1,
      sym__newline,
  [24702] = 1,
    ACTIONS(2117), 1,
      sym__newline,
  [24706] = 1,
    ACTIONS(2119), 1,
      sym__indent,
  [24710] = 1,
    ACTIONS(2121), 1,
      aux_sym_extends_token1,
  [24714] = 1,
    ACTIONS(2123), 1,
      sym_filter_name,
  [24718] = 1,
    ACTIONS(2125), 1,
      sym_filter_name,
  [24722] = 1,
    ACTIONS(2127), 1,
      sym__indent,
  [24726] = 1,
    ACTIONS(2129), 1,
      sym__newline,
  [24730] = 1,
    ACTIONS(2131), 1,
      aux_sym__when_keyword_token1,
  [24734] = 1,
    ACTIONS(2133), 1,
      aux_sym_extends_token1,
  [24738] = 1,
    ACTIONS(2135), 1,
      sym__indent,
  [24742] = 1,
    ACTIONS(2137), 1,
      aux_sym_filter_content_token2,
  [24746] = 1,
    ACTIONS(2139), 1,
      sym__indent,
  [24750] = 1,
    ACTIONS(2141), 1,
      sym__newline,
  [24754] = 1,
    ACTIONS(2143), 1,
      sym__newline,
  [24758] = 1,
    ACTIONS(2109), 1,
      anon_sym_SQUOTE,
  [24762] = 1,
    ACTIONS(2145), 1,
      aux_sym_unbuffered_code_token1,
  [24766] = 1,
    ACTIONS(2147), 1,
      sym__newline,
  [24770] = 1,
    ACTIONS(2149), 1,
      sym__newline,
  [24774] = 1,
    ACTIONS(2151), 1,
      sym__indent,
  [24778] = 1,
    ACTIONS(2153), 1,
      sym__indent,
  [24782] = 1,
    ACTIONS(2155), 1,
      sym__newline,
  [24786] = 1,
    ACTIONS(2157), 1,
      anon_sym_RBRACE_RBRACE,
  [24790] = 1,
    ACTIONS(2159), 1,
      sym__un_delimited_javascript_line,
  [24794] = 1,
    ACTIONS(2161), 1,
      sym__indent,
  [24798] = 1,
    ACTIONS(2163), 1,
      sym__newline,
  [24802] = 1,
    ACTIONS(2157), 1,
      anon_sym_RBRACE,
  [24806] = 1,
    ACTIONS(2165), 1,
      sym__newline,
  [24810] = 1,
    ACTIONS(2167), 1,
      sym__indent,
  [24814] = 1,
    ACTIONS(2169), 1,
      sym__newline,
  [24818] = 1,
    ACTIONS(2171), 1,
      sym_tag_name,
  [24822] = 1,
    ACTIONS(2173), 1,
      sym__newline,
  [24826] = 1,
    ACTIONS(1999), 1,
      anon_sym_COMMA,
  [24830] = 1,
    ACTIONS(2175), 1,
      sym__newline,
  [24834] = 1,
    ACTIONS(1990), 1,
      anon_sym_COMMA,
  [24838] = 1,
    ACTIONS(2177), 1,
      sym__indent,
  [24842] = 1,
    ACTIONS(2179), 1,
      sym__indent,
  [24846] = 1,
    ACTIONS(2181), 1,
      sym__newline,
  [24850] = 1,
    ACTIONS(2183), 1,
      sym__newline,
  [24854] = 1,
    ACTIONS(2185), 1,
      sym__newline,
  [24858] = 1,
    ACTIONS(2187), 1,
      anon_sym_SQUOTE,
  [24862] = 1,
    ACTIONS(2187), 1,
      anon_sym_DQUOTE,
  [24866] = 1,
    ACTIONS(2189), 1,
      sym__newline,
  [24870] = 1,
    ACTIONS(2191), 1,
      sym__newline,
  [24874] = 1,
    ACTIONS(2193), 1,
      sym__newline,
  [24878] = 1,
    ACTIONS(2195), 1,
      sym__newline,
  [24882] = 1,
    ACTIONS(2079), 1,
      anon_sym_DQUOTE,
  [24886] = 1,
    ACTIONS(2197), 1,
      sym__newline,
  [24890] = 1,
    ACTIONS(2199), 1,
      sym__newline,
  [24894] = 1,
    ACTIONS(2201), 1,
      sym__newline,
  [24898] = 1,
    ACTIONS(2203), 1,
      sym__indent,
  [24902] = 1,
    ACTIONS(2205), 1,
      sym__indent,
  [24906] = 1,
    ACTIONS(2207), 1,
      sym__delimited_javascript,
  [24910] = 1,
    ACTIONS(2209), 1,
      sym__indent,
  [24914] = 1,
    ACTIONS(2211), 1,
      sym__indent,
  [24918] = 1,
    ACTIONS(2213), 1,
      sym__newline,
  [24922] = 1,
    ACTIONS(2215), 1,
      aux_sym_extends_token1,
  [24926] = 1,
    ACTIONS(2217), 1,
      sym__newline,
  [24930] = 1,
    ACTIONS(2219), 1,
      sym__indent,
  [24934] = 1,
    ACTIONS(2221), 1,
      sym__indent,
  [24938] = 1,
    ACTIONS(2223), 1,
      sym_filter_name,
  [24942] = 1,
    ACTIONS(2225), 1,
      sym__indent,
  [24946] = 1,
    ACTIONS(2227), 1,
      sym__indent,
  [24950] = 1,
    ACTIONS(2229), 1,
      sym__newline,
  [24954] = 1,
    ACTIONS(2231), 1,
      aux_sym_extends_token1,
  [24958] = 1,
    ACTIONS(2233), 1,
      sym__indent,
  [24962] = 1,
    ACTIONS(2235), 1,
      sym__indent,
  [24966] = 1,
    ACTIONS(2237), 1,
      sym__delimited_javascript,
  [24970] = 1,
    ACTIONS(2239), 1,
      sym__indent,
  [24974] = 1,
    ACTIONS(2241), 1,
      sym__indent,
  [24978] = 1,
    ACTIONS(2243), 1,
      sym_filter_name,
  [24982] = 1,
    ACTIONS(2245), 1,
      aux_sym_filter_content_token2,
  [24986] = 1,
    ACTIONS(2247), 1,
      sym__indent,
  [24990] = 1,
    ACTIONS(2249), 1,
      sym__indent,
  [24994] = 1,
    ACTIONS(2251), 1,
      sym__newline,
  [24998] = 1,
    ACTIONS(2253), 1,
      sym__indent,
  [25002] = 1,
    ACTIONS(2255), 1,
      sym__indent,
  [25006] = 1,
    ACTIONS(2257), 1,
      sym__indent,
  [25010] = 1,
    ACTIONS(2259), 1,
      sym__indent,
  [25014] = 1,
    ACTIONS(2261), 1,
      sym__indent,
  [25018] = 1,
    ACTIONS(2263), 1,
      sym__indent,
  [25022] = 1,
    ACTIONS(2265), 1,
      sym__un_delimited_javascript_line,
  [25026] = 1,
    ACTIONS(2267), 1,
      sym__newline,
  [25030] = 1,
    ACTIONS(2269), 1,
      anon_sym_in,
  [25034] = 1,
    ACTIONS(2271), 1,
      sym__newline,
  [25038] = 1,
    ACTIONS(2273), 1,
      sym__newline,
  [25042] = 1,
    ACTIONS(2275), 1,
      sym__un_delimited_javascript_line,
  [25046] = 1,
    ACTIONS(2277), 1,
      sym__newline,
  [25050] = 1,
    ACTIONS(2279), 1,
      anon_sym_in,
  [25054] = 1,
    ACTIONS(2281), 1,
      sym__newline,
  [25058] = 1,
    ACTIONS(2283), 1,
      sym__newline,
  [25062] = 1,
    ACTIONS(2285), 1,
      sym__newline,
  [25066] = 1,
    ACTIONS(2287), 1,
      anon_sym_in,
  [25070] = 1,
    ACTIONS(2289), 1,
      sym__newline,
  [25074] = 1,
    ACTIONS(2291), 1,
      sym__newline,
  [25078] = 1,
    ACTIONS(2293), 1,
      sym__newline,
  [25082] = 1,
    ACTIONS(2295), 1,
      anon_sym_in,
  [25086] = 1,
    ACTIONS(2297), 1,
      sym__newline,
  [25090] = 1,
    ACTIONS(2299), 1,
      sym__newline,
  [25094] = 1,
    ACTIONS(2301), 1,
      sym__newline,
  [25098] = 1,
    ACTIONS(2303), 1,
      sym__newline,
  [25102] = 1,
    ACTIONS(2305), 1,
      sym__newline,
  [25106] = 1,
    ACTIONS(2307), 1,
      sym__newline,
  [25110] = 1,
    ACTIONS(2309), 1,
      sym__newline,
  [25114] = 1,
    ACTIONS(2311), 1,
      sym__newline,
  [25118] = 1,
    ACTIONS(2313), 1,
      sym__newline,
  [25122] = 1,
    ACTIONS(2315), 1,
      aux_sym_filter_content_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 319,
  [SMALL_STATE(6)] = 422,
  [SMALL_STATE(7)] = 527,
  [SMALL_STATE(8)] = 632,
  [SMALL_STATE(9)] = 734,
  [SMALL_STATE(10)] = 836,
  [SMALL_STATE(11)] = 938,
  [SMALL_STATE(12)] = 1040,
  [SMALL_STATE(13)] = 1138,
  [SMALL_STATE(14)] = 1236,
  [SMALL_STATE(15)] = 1334,
  [SMALL_STATE(16)] = 1432,
  [SMALL_STATE(17)] = 1530,
  [SMALL_STATE(18)] = 1628,
  [SMALL_STATE(19)] = 1726,
  [SMALL_STATE(20)] = 1824,
  [SMALL_STATE(21)] = 1922,
  [SMALL_STATE(22)] = 2020,
  [SMALL_STATE(23)] = 2118,
  [SMALL_STATE(24)] = 2216,
  [SMALL_STATE(25)] = 2314,
  [SMALL_STATE(26)] = 2412,
  [SMALL_STATE(27)] = 2510,
  [SMALL_STATE(28)] = 2608,
  [SMALL_STATE(29)] = 2706,
  [SMALL_STATE(30)] = 2804,
  [SMALL_STATE(31)] = 2902,
  [SMALL_STATE(32)] = 3000,
  [SMALL_STATE(33)] = 3098,
  [SMALL_STATE(34)] = 3196,
  [SMALL_STATE(35)] = 3294,
  [SMALL_STATE(36)] = 3392,
  [SMALL_STATE(37)] = 3490,
  [SMALL_STATE(38)] = 3588,
  [SMALL_STATE(39)] = 3686,
  [SMALL_STATE(40)] = 3784,
  [SMALL_STATE(41)] = 3882,
  [SMALL_STATE(42)] = 3980,
  [SMALL_STATE(43)] = 4078,
  [SMALL_STATE(44)] = 4173,
  [SMALL_STATE(45)] = 4268,
  [SMALL_STATE(46)] = 4363,
  [SMALL_STATE(47)] = 4458,
  [SMALL_STATE(48)] = 4553,
  [SMALL_STATE(49)] = 4648,
  [SMALL_STATE(50)] = 4743,
  [SMALL_STATE(51)] = 4798,
  [SMALL_STATE(52)] = 4843,
  [SMALL_STATE(53)] = 4892,
  [SMALL_STATE(54)] = 4945,
  [SMALL_STATE(55)] = 4992,
  [SMALL_STATE(56)] = 5039,
  [SMALL_STATE(57)] = 5084,
  [SMALL_STATE(58)] = 5136,
  [SMALL_STATE(59)] = 5178,
  [SMALL_STATE(60)] = 5220,
  [SMALL_STATE(61)] = 5262,
  [SMALL_STATE(62)] = 5304,
  [SMALL_STATE(63)] = 5356,
  [SMALL_STATE(64)] = 5398,
  [SMALL_STATE(65)] = 5440,
  [SMALL_STATE(66)] = 5482,
  [SMALL_STATE(67)] = 5524,
  [SMALL_STATE(68)] = 5566,
  [SMALL_STATE(69)] = 5608,
  [SMALL_STATE(70)] = 5650,
  [SMALL_STATE(71)] = 5687,
  [SMALL_STATE(72)] = 5730,
  [SMALL_STATE(73)] = 5771,
  [SMALL_STATE(74)] = 5810,
  [SMALL_STATE(75)] = 5851,
  [SMALL_STATE(76)] = 5894,
  [SMALL_STATE(77)] = 5939,
  [SMALL_STATE(78)] = 5984,
  [SMALL_STATE(79)] = 6025,
  [SMALL_STATE(80)] = 6062,
  [SMALL_STATE(81)] = 6099,
  [SMALL_STATE(82)] = 6140,
  [SMALL_STATE(83)] = 6181,
  [SMALL_STATE(84)] = 6220,
  [SMALL_STATE(85)] = 6267,
  [SMALL_STATE(86)] = 6304,
  [SMALL_STATE(87)] = 6345,
  [SMALL_STATE(88)] = 6382,
  [SMALL_STATE(89)] = 6425,
  [SMALL_STATE(90)] = 6466,
  [SMALL_STATE(91)] = 6507,
  [SMALL_STATE(92)] = 6548,
  [SMALL_STATE(93)] = 6584,
  [SMALL_STATE(94)] = 6620,
  [SMALL_STATE(95)] = 6660,
  [SMALL_STATE(96)] = 6696,
  [SMALL_STATE(97)] = 6732,
  [SMALL_STATE(98)] = 6768,
  [SMALL_STATE(99)] = 6804,
  [SMALL_STATE(100)] = 6844,
  [SMALL_STATE(101)] = 6884,
  [SMALL_STATE(102)] = 6920,
  [SMALL_STATE(103)] = 6956,
  [SMALL_STATE(104)] = 6992,
  [SMALL_STATE(105)] = 7032,
  [SMALL_STATE(106)] = 7072,
  [SMALL_STATE(107)] = 7112,
  [SMALL_STATE(108)] = 7152,
  [SMALL_STATE(109)] = 7192,
  [SMALL_STATE(110)] = 7238,
  [SMALL_STATE(111)] = 7274,
  [SMALL_STATE(112)] = 7310,
  [SMALL_STATE(113)] = 7352,
  [SMALL_STATE(114)] = 7388,
  [SMALL_STATE(115)] = 7428,
  [SMALL_STATE(116)] = 7464,
  [SMALL_STATE(117)] = 7504,
  [SMALL_STATE(118)] = 7540,
  [SMALL_STATE(119)] = 7576,
  [SMALL_STATE(120)] = 7612,
  [SMALL_STATE(121)] = 7648,
  [SMALL_STATE(122)] = 7684,
  [SMALL_STATE(123)] = 7720,
  [SMALL_STATE(124)] = 7756,
  [SMALL_STATE(125)] = 7792,
  [SMALL_STATE(126)] = 7828,
  [SMALL_STATE(127)] = 7864,
  [SMALL_STATE(128)] = 7900,
  [SMALL_STATE(129)] = 7936,
  [SMALL_STATE(130)] = 7972,
  [SMALL_STATE(131)] = 8008,
  [SMALL_STATE(132)] = 8054,
  [SMALL_STATE(133)] = 8090,
  [SMALL_STATE(134)] = 8128,
  [SMALL_STATE(135)] = 8164,
  [SMALL_STATE(136)] = 8200,
  [SMALL_STATE(137)] = 8236,
  [SMALL_STATE(138)] = 8272,
  [SMALL_STATE(139)] = 8308,
  [SMALL_STATE(140)] = 8344,
  [SMALL_STATE(141)] = 8394,
  [SMALL_STATE(142)] = 8430,
  [SMALL_STATE(143)] = 8466,
  [SMALL_STATE(144)] = 8504,
  [SMALL_STATE(145)] = 8542,
  [SMALL_STATE(146)] = 8578,
  [SMALL_STATE(147)] = 8614,
  [SMALL_STATE(148)] = 8656,
  [SMALL_STATE(149)] = 8692,
  [SMALL_STATE(150)] = 8728,
  [SMALL_STATE(151)] = 8772,
  [SMALL_STATE(152)] = 8808,
  [SMALL_STATE(153)] = 8844,
  [SMALL_STATE(154)] = 8880,
  [SMALL_STATE(155)] = 8924,
  [SMALL_STATE(156)] = 8959,
  [SMALL_STATE(157)] = 8994,
  [SMALL_STATE(158)] = 9029,
  [SMALL_STATE(159)] = 9068,
  [SMALL_STATE(160)] = 9107,
  [SMALL_STATE(161)] = 9142,
  [SMALL_STATE(162)] = 9181,
  [SMALL_STATE(163)] = 9222,
  [SMALL_STATE(164)] = 9261,
  [SMALL_STATE(165)] = 9300,
  [SMALL_STATE(166)] = 9337,
  [SMALL_STATE(167)] = 9372,
  [SMALL_STATE(168)] = 9407,
  [SMALL_STATE(169)] = 9442,
  [SMALL_STATE(170)] = 9481,
  [SMALL_STATE(171)] = 9516,
  [SMALL_STATE(172)] = 9551,
  [SMALL_STATE(173)] = 9586,
  [SMALL_STATE(174)] = 9621,
  [SMALL_STATE(175)] = 9656,
  [SMALL_STATE(176)] = 9695,
  [SMALL_STATE(177)] = 9734,
  [SMALL_STATE(178)] = 9773,
  [SMALL_STATE(179)] = 9808,
  [SMALL_STATE(180)] = 9843,
  [SMALL_STATE(181)] = 9880,
  [SMALL_STATE(182)] = 9917,
  [SMALL_STATE(183)] = 9952,
  [SMALL_STATE(184)] = 9987,
  [SMALL_STATE(185)] = 10026,
  [SMALL_STATE(186)] = 10067,
  [SMALL_STATE(187)] = 10102,
  [SMALL_STATE(188)] = 10141,
  [SMALL_STATE(189)] = 10176,
  [SMALL_STATE(190)] = 10211,
  [SMALL_STATE(191)] = 10246,
  [SMALL_STATE(192)] = 10285,
  [SMALL_STATE(193)] = 10324,
  [SMALL_STATE(194)] = 10363,
  [SMALL_STATE(195)] = 10399,
  [SMALL_STATE(196)] = 10433,
  [SMALL_STATE(197)] = 10467,
  [SMALL_STATE(198)] = 10503,
  [SMALL_STATE(199)] = 10537,
  [SMALL_STATE(200)] = 10571,
  [SMALL_STATE(201)] = 10605,
  [SMALL_STATE(202)] = 10649,
  [SMALL_STATE(203)] = 10683,
  [SMALL_STATE(204)] = 10717,
  [SMALL_STATE(205)] = 10753,
  [SMALL_STATE(206)] = 10787,
  [SMALL_STATE(207)] = 10821,
  [SMALL_STATE(208)] = 10855,
  [SMALL_STATE(209)] = 10893,
  [SMALL_STATE(210)] = 10927,
  [SMALL_STATE(211)] = 10961,
  [SMALL_STATE(212)] = 10999,
  [SMALL_STATE(213)] = 11033,
  [SMALL_STATE(214)] = 11067,
  [SMALL_STATE(215)] = 11101,
  [SMALL_STATE(216)] = 11139,
  [SMALL_STATE(217)] = 11173,
  [SMALL_STATE(218)] = 11207,
  [SMALL_STATE(219)] = 11241,
  [SMALL_STATE(220)] = 11279,
  [SMALL_STATE(221)] = 11313,
  [SMALL_STATE(222)] = 11351,
  [SMALL_STATE(223)] = 11385,
  [SMALL_STATE(224)] = 11419,
  [SMALL_STATE(225)] = 11453,
  [SMALL_STATE(226)] = 11487,
  [SMALL_STATE(227)] = 11523,
  [SMALL_STATE(228)] = 11557,
  [SMALL_STATE(229)] = 11591,
  [SMALL_STATE(230)] = 11625,
  [SMALL_STATE(231)] = 11661,
  [SMALL_STATE(232)] = 11695,
  [SMALL_STATE(233)] = 11729,
  [SMALL_STATE(234)] = 11763,
  [SMALL_STATE(235)] = 11797,
  [SMALL_STATE(236)] = 11831,
  [SMALL_STATE(237)] = 11865,
  [SMALL_STATE(238)] = 11899,
  [SMALL_STATE(239)] = 11937,
  [SMALL_STATE(240)] = 11971,
  [SMALL_STATE(241)] = 12009,
  [SMALL_STATE(242)] = 12043,
  [SMALL_STATE(243)] = 12077,
  [SMALL_STATE(244)] = 12115,
  [SMALL_STATE(245)] = 12149,
  [SMALL_STATE(246)] = 12183,
  [SMALL_STATE(247)] = 12221,
  [SMALL_STATE(248)] = 12255,
  [SMALL_STATE(249)] = 12289,
  [SMALL_STATE(250)] = 12323,
  [SMALL_STATE(251)] = 12357,
  [SMALL_STATE(252)] = 12391,
  [SMALL_STATE(253)] = 12431,
  [SMALL_STATE(254)] = 12465,
  [SMALL_STATE(255)] = 12499,
  [SMALL_STATE(256)] = 12539,
  [SMALL_STATE(257)] = 12573,
  [SMALL_STATE(258)] = 12611,
  [SMALL_STATE(259)] = 12645,
  [SMALL_STATE(260)] = 12679,
  [SMALL_STATE(261)] = 12713,
  [SMALL_STATE(262)] = 12747,
  [SMALL_STATE(263)] = 12780,
  [SMALL_STATE(264)] = 12813,
  [SMALL_STATE(265)] = 12846,
  [SMALL_STATE(266)] = 12879,
  [SMALL_STATE(267)] = 12912,
  [SMALL_STATE(268)] = 12945,
  [SMALL_STATE(269)] = 12980,
  [SMALL_STATE(270)] = 13015,
  [SMALL_STATE(271)] = 13048,
  [SMALL_STATE(272)] = 13081,
  [SMALL_STATE(273)] = 13114,
  [SMALL_STATE(274)] = 13147,
  [SMALL_STATE(275)] = 13180,
  [SMALL_STATE(276)] = 13213,
  [SMALL_STATE(277)] = 13246,
  [SMALL_STATE(278)] = 13281,
  [SMALL_STATE(279)] = 13316,
  [SMALL_STATE(280)] = 13351,
  [SMALL_STATE(281)] = 13388,
  [SMALL_STATE(282)] = 13425,
  [SMALL_STATE(283)] = 13462,
  [SMALL_STATE(284)] = 13495,
  [SMALL_STATE(285)] = 13528,
  [SMALL_STATE(286)] = 13561,
  [SMALL_STATE(287)] = 13594,
  [SMALL_STATE(288)] = 13627,
  [SMALL_STATE(289)] = 13660,
  [SMALL_STATE(290)] = 13697,
  [SMALL_STATE(291)] = 13732,
  [SMALL_STATE(292)] = 13765,
  [SMALL_STATE(293)] = 13798,
  [SMALL_STATE(294)] = 13831,
  [SMALL_STATE(295)] = 13864,
  [SMALL_STATE(296)] = 13897,
  [SMALL_STATE(297)] = 13930,
  [SMALL_STATE(298)] = 13965,
  [SMALL_STATE(299)] = 13998,
  [SMALL_STATE(300)] = 14031,
  [SMALL_STATE(301)] = 14066,
  [SMALL_STATE(302)] = 14099,
  [SMALL_STATE(303)] = 14132,
  [SMALL_STATE(304)] = 14169,
  [SMALL_STATE(305)] = 14202,
  [SMALL_STATE(306)] = 14239,
  [SMALL_STATE(307)] = 14272,
  [SMALL_STATE(308)] = 14305,
  [SMALL_STATE(309)] = 14342,
  [SMALL_STATE(310)] = 14379,
  [SMALL_STATE(311)] = 14412,
  [SMALL_STATE(312)] = 14445,
  [SMALL_STATE(313)] = 14478,
  [SMALL_STATE(314)] = 14511,
  [SMALL_STATE(315)] = 14544,
  [SMALL_STATE(316)] = 14577,
  [SMALL_STATE(317)] = 14610,
  [SMALL_STATE(318)] = 14643,
  [SMALL_STATE(319)] = 14676,
  [SMALL_STATE(320)] = 14709,
  [SMALL_STATE(321)] = 14742,
  [SMALL_STATE(322)] = 14775,
  [SMALL_STATE(323)] = 14812,
  [SMALL_STATE(324)] = 14849,
  [SMALL_STATE(325)] = 14882,
  [SMALL_STATE(326)] = 14919,
  [SMALL_STATE(327)] = 14951,
  [SMALL_STATE(328)] = 14983,
  [SMALL_STATE(329)] = 15015,
  [SMALL_STATE(330)] = 15047,
  [SMALL_STATE(331)] = 15081,
  [SMALL_STATE(332)] = 15113,
  [SMALL_STATE(333)] = 15145,
  [SMALL_STATE(334)] = 15177,
  [SMALL_STATE(335)] = 15209,
  [SMALL_STATE(336)] = 15241,
  [SMALL_STATE(337)] = 15273,
  [SMALL_STATE(338)] = 15305,
  [SMALL_STATE(339)] = 15337,
  [SMALL_STATE(340)] = 15369,
  [SMALL_STATE(341)] = 15401,
  [SMALL_STATE(342)] = 15433,
  [SMALL_STATE(343)] = 15469,
  [SMALL_STATE(344)] = 15501,
  [SMALL_STATE(345)] = 15533,
  [SMALL_STATE(346)] = 15565,
  [SMALL_STATE(347)] = 15597,
  [SMALL_STATE(348)] = 15629,
  [SMALL_STATE(349)] = 15661,
  [SMALL_STATE(350)] = 15693,
  [SMALL_STATE(351)] = 15725,
  [SMALL_STATE(352)] = 15757,
  [SMALL_STATE(353)] = 15789,
  [SMALL_STATE(354)] = 15821,
  [SMALL_STATE(355)] = 15855,
  [SMALL_STATE(356)] = 15887,
  [SMALL_STATE(357)] = 15919,
  [SMALL_STATE(358)] = 15951,
  [SMALL_STATE(359)] = 15983,
  [SMALL_STATE(360)] = 16015,
  [SMALL_STATE(361)] = 16047,
  [SMALL_STATE(362)] = 16079,
  [SMALL_STATE(363)] = 16111,
  [SMALL_STATE(364)] = 16143,
  [SMALL_STATE(365)] = 16175,
  [SMALL_STATE(366)] = 16207,
  [SMALL_STATE(367)] = 16239,
  [SMALL_STATE(368)] = 16271,
  [SMALL_STATE(369)] = 16303,
  [SMALL_STATE(370)] = 16335,
  [SMALL_STATE(371)] = 16367,
  [SMALL_STATE(372)] = 16399,
  [SMALL_STATE(373)] = 16431,
  [SMALL_STATE(374)] = 16463,
  [SMALL_STATE(375)] = 16495,
  [SMALL_STATE(376)] = 16527,
  [SMALL_STATE(377)] = 16559,
  [SMALL_STATE(378)] = 16591,
  [SMALL_STATE(379)] = 16623,
  [SMALL_STATE(380)] = 16656,
  [SMALL_STATE(381)] = 16687,
  [SMALL_STATE(382)] = 16720,
  [SMALL_STATE(383)] = 16751,
  [SMALL_STATE(384)] = 16782,
  [SMALL_STATE(385)] = 16813,
  [SMALL_STATE(386)] = 16844,
  [SMALL_STATE(387)] = 16875,
  [SMALL_STATE(388)] = 16906,
  [SMALL_STATE(389)] = 16937,
  [SMALL_STATE(390)] = 16968,
  [SMALL_STATE(391)] = 16999,
  [SMALL_STATE(392)] = 17030,
  [SMALL_STATE(393)] = 17061,
  [SMALL_STATE(394)] = 17092,
  [SMALL_STATE(395)] = 17123,
  [SMALL_STATE(396)] = 17154,
  [SMALL_STATE(397)] = 17185,
  [SMALL_STATE(398)] = 17216,
  [SMALL_STATE(399)] = 17247,
  [SMALL_STATE(400)] = 17278,
  [SMALL_STATE(401)] = 17309,
  [SMALL_STATE(402)] = 17340,
  [SMALL_STATE(403)] = 17371,
  [SMALL_STATE(404)] = 17402,
  [SMALL_STATE(405)] = 17433,
  [SMALL_STATE(406)] = 17464,
  [SMALL_STATE(407)] = 17495,
  [SMALL_STATE(408)] = 17526,
  [SMALL_STATE(409)] = 17557,
  [SMALL_STATE(410)] = 17588,
  [SMALL_STATE(411)] = 17619,
  [SMALL_STATE(412)] = 17650,
  [SMALL_STATE(413)] = 17681,
  [SMALL_STATE(414)] = 17712,
  [SMALL_STATE(415)] = 17743,
  [SMALL_STATE(416)] = 17774,
  [SMALL_STATE(417)] = 17805,
  [SMALL_STATE(418)] = 17836,
  [SMALL_STATE(419)] = 17867,
  [SMALL_STATE(420)] = 17898,
  [SMALL_STATE(421)] = 17929,
  [SMALL_STATE(422)] = 17961,
  [SMALL_STATE(423)] = 17990,
  [SMALL_STATE(424)] = 18019,
  [SMALL_STATE(425)] = 18059,
  [SMALL_STATE(426)] = 18099,
  [SMALL_STATE(427)] = 18139,
  [SMALL_STATE(428)] = 18179,
  [SMALL_STATE(429)] = 18205,
  [SMALL_STATE(430)] = 18245,
  [SMALL_STATE(431)] = 18285,
  [SMALL_STATE(432)] = 18325,
  [SMALL_STATE(433)] = 18365,
  [SMALL_STATE(434)] = 18405,
  [SMALL_STATE(435)] = 18445,
  [SMALL_STATE(436)] = 18471,
  [SMALL_STATE(437)] = 18511,
  [SMALL_STATE(438)] = 18551,
  [SMALL_STATE(439)] = 18591,
  [SMALL_STATE(440)] = 18631,
  [SMALL_STATE(441)] = 18651,
  [SMALL_STATE(442)] = 18676,
  [SMALL_STATE(443)] = 18703,
  [SMALL_STATE(444)] = 18728,
  [SMALL_STATE(445)] = 18755,
  [SMALL_STATE(446)] = 18782,
  [SMALL_STATE(447)] = 18807,
  [SMALL_STATE(448)] = 18832,
  [SMALL_STATE(449)] = 18859,
  [SMALL_STATE(450)] = 18884,
  [SMALL_STATE(451)] = 18911,
  [SMALL_STATE(452)] = 18938,
  [SMALL_STATE(453)] = 18963,
  [SMALL_STATE(454)] = 18990,
  [SMALL_STATE(455)] = 19017,
  [SMALL_STATE(456)] = 19042,
  [SMALL_STATE(457)] = 19067,
  [SMALL_STATE(458)] = 19094,
  [SMALL_STATE(459)] = 19119,
  [SMALL_STATE(460)] = 19146,
  [SMALL_STATE(461)] = 19171,
  [SMALL_STATE(462)] = 19196,
  [SMALL_STATE(463)] = 19221,
  [SMALL_STATE(464)] = 19248,
  [SMALL_STATE(465)] = 19275,
  [SMALL_STATE(466)] = 19302,
  [SMALL_STATE(467)] = 19327,
  [SMALL_STATE(468)] = 19354,
  [SMALL_STATE(469)] = 19378,
  [SMALL_STATE(470)] = 19402,
  [SMALL_STATE(471)] = 19426,
  [SMALL_STATE(472)] = 19450,
  [SMALL_STATE(473)] = 19474,
  [SMALL_STATE(474)] = 19498,
  [SMALL_STATE(475)] = 19522,
  [SMALL_STATE(476)] = 19546,
  [SMALL_STATE(477)] = 19570,
  [SMALL_STATE(478)] = 19594,
  [SMALL_STATE(479)] = 19618,
  [SMALL_STATE(480)] = 19642,
  [SMALL_STATE(481)] = 19666,
  [SMALL_STATE(482)] = 19690,
  [SMALL_STATE(483)] = 19714,
  [SMALL_STATE(484)] = 19738,
  [SMALL_STATE(485)] = 19762,
  [SMALL_STATE(486)] = 19786,
  [SMALL_STATE(487)] = 19810,
  [SMALL_STATE(488)] = 19834,
  [SMALL_STATE(489)] = 19858,
  [SMALL_STATE(490)] = 19881,
  [SMALL_STATE(491)] = 19904,
  [SMALL_STATE(492)] = 19927,
  [SMALL_STATE(493)] = 19950,
  [SMALL_STATE(494)] = 19973,
  [SMALL_STATE(495)] = 19996,
  [SMALL_STATE(496)] = 20019,
  [SMALL_STATE(497)] = 20042,
  [SMALL_STATE(498)] = 20065,
  [SMALL_STATE(499)] = 20088,
  [SMALL_STATE(500)] = 20111,
  [SMALL_STATE(501)] = 20134,
  [SMALL_STATE(502)] = 20157,
  [SMALL_STATE(503)] = 20180,
  [SMALL_STATE(504)] = 20203,
  [SMALL_STATE(505)] = 20215,
  [SMALL_STATE(506)] = 20235,
  [SMALL_STATE(507)] = 20255,
  [SMALL_STATE(508)] = 20271,
  [SMALL_STATE(509)] = 20291,
  [SMALL_STATE(510)] = 20311,
  [SMALL_STATE(511)] = 20331,
  [SMALL_STATE(512)] = 20347,
  [SMALL_STATE(513)] = 20367,
  [SMALL_STATE(514)] = 20381,
  [SMALL_STATE(515)] = 20401,
  [SMALL_STATE(516)] = 20421,
  [SMALL_STATE(517)] = 20437,
  [SMALL_STATE(518)] = 20447,
  [SMALL_STATE(519)] = 20467,
  [SMALL_STATE(520)] = 20481,
  [SMALL_STATE(521)] = 20501,
  [SMALL_STATE(522)] = 20521,
  [SMALL_STATE(523)] = 20533,
  [SMALL_STATE(524)] = 20553,
  [SMALL_STATE(525)] = 20573,
  [SMALL_STATE(526)] = 20593,
  [SMALL_STATE(527)] = 20613,
  [SMALL_STATE(528)] = 20633,
  [SMALL_STATE(529)] = 20653,
  [SMALL_STATE(530)] = 20673,
  [SMALL_STATE(531)] = 20693,
  [SMALL_STATE(532)] = 20713,
  [SMALL_STATE(533)] = 20733,
  [SMALL_STATE(534)] = 20753,
  [SMALL_STATE(535)] = 20773,
  [SMALL_STATE(536)] = 20785,
  [SMALL_STATE(537)] = 20801,
  [SMALL_STATE(538)] = 20821,
  [SMALL_STATE(539)] = 20841,
  [SMALL_STATE(540)] = 20861,
  [SMALL_STATE(541)] = 20881,
  [SMALL_STATE(542)] = 20897,
  [SMALL_STATE(543)] = 20911,
  [SMALL_STATE(544)] = 20931,
  [SMALL_STATE(545)] = 20945,
  [SMALL_STATE(546)] = 20959,
  [SMALL_STATE(547)] = 20979,
  [SMALL_STATE(548)] = 20999,
  [SMALL_STATE(549)] = 21019,
  [SMALL_STATE(550)] = 21039,
  [SMALL_STATE(551)] = 21059,
  [SMALL_STATE(552)] = 21079,
  [SMALL_STATE(553)] = 21099,
  [SMALL_STATE(554)] = 21115,
  [SMALL_STATE(555)] = 21135,
  [SMALL_STATE(556)] = 21155,
  [SMALL_STATE(557)] = 21175,
  [SMALL_STATE(558)] = 21191,
  [SMALL_STATE(559)] = 21211,
  [SMALL_STATE(560)] = 21231,
  [SMALL_STATE(561)] = 21251,
  [SMALL_STATE(562)] = 21271,
  [SMALL_STATE(563)] = 21285,
  [SMALL_STATE(564)] = 21305,
  [SMALL_STATE(565)] = 21325,
  [SMALL_STATE(566)] = 21345,
  [SMALL_STATE(567)] = 21361,
  [SMALL_STATE(568)] = 21381,
  [SMALL_STATE(569)] = 21401,
  [SMALL_STATE(570)] = 21415,
  [SMALL_STATE(571)] = 21435,
  [SMALL_STATE(572)] = 21455,
  [SMALL_STATE(573)] = 21475,
  [SMALL_STATE(574)] = 21491,
  [SMALL_STATE(575)] = 21511,
  [SMALL_STATE(576)] = 21531,
  [SMALL_STATE(577)] = 21551,
  [SMALL_STATE(578)] = 21565,
  [SMALL_STATE(579)] = 21585,
  [SMALL_STATE(580)] = 21602,
  [SMALL_STATE(581)] = 21615,
  [SMALL_STATE(582)] = 21632,
  [SMALL_STATE(583)] = 21649,
  [SMALL_STATE(584)] = 21660,
  [SMALL_STATE(585)] = 21677,
  [SMALL_STATE(586)] = 21694,
  [SMALL_STATE(587)] = 21709,
  [SMALL_STATE(588)] = 21726,
  [SMALL_STATE(589)] = 21743,
  [SMALL_STATE(590)] = 21760,
  [SMALL_STATE(591)] = 21773,
  [SMALL_STATE(592)] = 21790,
  [SMALL_STATE(593)] = 21807,
  [SMALL_STATE(594)] = 21824,
  [SMALL_STATE(595)] = 21841,
  [SMALL_STATE(596)] = 21854,
  [SMALL_STATE(597)] = 21871,
  [SMALL_STATE(598)] = 21888,
  [SMALL_STATE(599)] = 21905,
  [SMALL_STATE(600)] = 21918,
  [SMALL_STATE(601)] = 21935,
  [SMALL_STATE(602)] = 21948,
  [SMALL_STATE(603)] = 21965,
  [SMALL_STATE(604)] = 21982,
  [SMALL_STATE(605)] = 21999,
  [SMALL_STATE(606)] = 22016,
  [SMALL_STATE(607)] = 22033,
  [SMALL_STATE(608)] = 22048,
  [SMALL_STATE(609)] = 22065,
  [SMALL_STATE(610)] = 22082,
  [SMALL_STATE(611)] = 22099,
  [SMALL_STATE(612)] = 22116,
  [SMALL_STATE(613)] = 22129,
  [SMALL_STATE(614)] = 22142,
  [SMALL_STATE(615)] = 22159,
  [SMALL_STATE(616)] = 22176,
  [SMALL_STATE(617)] = 22193,
  [SMALL_STATE(618)] = 22210,
  [SMALL_STATE(619)] = 22223,
  [SMALL_STATE(620)] = 22240,
  [SMALL_STATE(621)] = 22252,
  [SMALL_STATE(622)] = 22260,
  [SMALL_STATE(623)] = 22268,
  [SMALL_STATE(624)] = 22282,
  [SMALL_STATE(625)] = 22290,
  [SMALL_STATE(626)] = 22298,
  [SMALL_STATE(627)] = 22306,
  [SMALL_STATE(628)] = 22316,
  [SMALL_STATE(629)] = 22328,
  [SMALL_STATE(630)] = 22336,
  [SMALL_STATE(631)] = 22344,
  [SMALL_STATE(632)] = 22352,
  [SMALL_STATE(633)] = 22366,
  [SMALL_STATE(634)] = 22380,
  [SMALL_STATE(635)] = 22388,
  [SMALL_STATE(636)] = 22396,
  [SMALL_STATE(637)] = 22410,
  [SMALL_STATE(638)] = 22424,
  [SMALL_STATE(639)] = 22436,
  [SMALL_STATE(640)] = 22444,
  [SMALL_STATE(641)] = 22456,
  [SMALL_STATE(642)] = 22464,
  [SMALL_STATE(643)] = 22472,
  [SMALL_STATE(644)] = 22480,
  [SMALL_STATE(645)] = 22489,
  [SMALL_STATE(646)] = 22498,
  [SMALL_STATE(647)] = 22511,
  [SMALL_STATE(648)] = 22524,
  [SMALL_STATE(649)] = 22533,
  [SMALL_STATE(650)] = 22542,
  [SMALL_STATE(651)] = 22555,
  [SMALL_STATE(652)] = 22564,
  [SMALL_STATE(653)] = 22573,
  [SMALL_STATE(654)] = 22582,
  [SMALL_STATE(655)] = 22595,
  [SMALL_STATE(656)] = 22604,
  [SMALL_STATE(657)] = 22613,
  [SMALL_STATE(658)] = 22624,
  [SMALL_STATE(659)] = 22637,
  [SMALL_STATE(660)] = 22646,
  [SMALL_STATE(661)] = 22655,
  [SMALL_STATE(662)] = 22668,
  [SMALL_STATE(663)] = 22677,
  [SMALL_STATE(664)] = 22690,
  [SMALL_STATE(665)] = 22703,
  [SMALL_STATE(666)] = 22712,
  [SMALL_STATE(667)] = 22725,
  [SMALL_STATE(668)] = 22734,
  [SMALL_STATE(669)] = 22743,
  [SMALL_STATE(670)] = 22756,
  [SMALL_STATE(671)] = 22765,
  [SMALL_STATE(672)] = 22778,
  [SMALL_STATE(673)] = 22791,
  [SMALL_STATE(674)] = 22804,
  [SMALL_STATE(675)] = 22813,
  [SMALL_STATE(676)] = 22822,
  [SMALL_STATE(677)] = 22831,
  [SMALL_STATE(678)] = 22844,
  [SMALL_STATE(679)] = 22853,
  [SMALL_STATE(680)] = 22862,
  [SMALL_STATE(681)] = 22871,
  [SMALL_STATE(682)] = 22880,
  [SMALL_STATE(683)] = 22889,
  [SMALL_STATE(684)] = 22902,
  [SMALL_STATE(685)] = 22911,
  [SMALL_STATE(686)] = 22924,
  [SMALL_STATE(687)] = 22933,
  [SMALL_STATE(688)] = 22946,
  [SMALL_STATE(689)] = 22959,
  [SMALL_STATE(690)] = 22972,
  [SMALL_STATE(691)] = 22985,
  [SMALL_STATE(692)] = 22998,
  [SMALL_STATE(693)] = 23007,
  [SMALL_STATE(694)] = 23020,
  [SMALL_STATE(695)] = 23029,
  [SMALL_STATE(696)] = 23038,
  [SMALL_STATE(697)] = 23047,
  [SMALL_STATE(698)] = 23056,
  [SMALL_STATE(699)] = 23065,
  [SMALL_STATE(700)] = 23074,
  [SMALL_STATE(701)] = 23084,
  [SMALL_STATE(702)] = 23092,
  [SMALL_STATE(703)] = 23102,
  [SMALL_STATE(704)] = 23112,
  [SMALL_STATE(705)] = 23122,
  [SMALL_STATE(706)] = 23132,
  [SMALL_STATE(707)] = 23142,
  [SMALL_STATE(708)] = 23152,
  [SMALL_STATE(709)] = 23162,
  [SMALL_STATE(710)] = 23172,
  [SMALL_STATE(711)] = 23182,
  [SMALL_STATE(712)] = 23190,
  [SMALL_STATE(713)] = 23200,
  [SMALL_STATE(714)] = 23210,
  [SMALL_STATE(715)] = 23218,
  [SMALL_STATE(716)] = 23226,
  [SMALL_STATE(717)] = 23234,
  [SMALL_STATE(718)] = 23242,
  [SMALL_STATE(719)] = 23252,
  [SMALL_STATE(720)] = 23260,
  [SMALL_STATE(721)] = 23270,
  [SMALL_STATE(722)] = 23280,
  [SMALL_STATE(723)] = 23286,
  [SMALL_STATE(724)] = 23296,
  [SMALL_STATE(725)] = 23306,
  [SMALL_STATE(726)] = 23316,
  [SMALL_STATE(727)] = 23322,
  [SMALL_STATE(728)] = 23332,
  [SMALL_STATE(729)] = 23342,
  [SMALL_STATE(730)] = 23352,
  [SMALL_STATE(731)] = 23362,
  [SMALL_STATE(732)] = 23372,
  [SMALL_STATE(733)] = 23382,
  [SMALL_STATE(734)] = 23392,
  [SMALL_STATE(735)] = 23402,
  [SMALL_STATE(736)] = 23412,
  [SMALL_STATE(737)] = 23422,
  [SMALL_STATE(738)] = 23432,
  [SMALL_STATE(739)] = 23440,
  [SMALL_STATE(740)] = 23450,
  [SMALL_STATE(741)] = 23456,
  [SMALL_STATE(742)] = 23466,
  [SMALL_STATE(743)] = 23476,
  [SMALL_STATE(744)] = 23486,
  [SMALL_STATE(745)] = 23496,
  [SMALL_STATE(746)] = 23506,
  [SMALL_STATE(747)] = 23516,
  [SMALL_STATE(748)] = 23526,
  [SMALL_STATE(749)] = 23532,
  [SMALL_STATE(750)] = 23542,
  [SMALL_STATE(751)] = 23552,
  [SMALL_STATE(752)] = 23562,
  [SMALL_STATE(753)] = 23570,
  [SMALL_STATE(754)] = 23580,
  [SMALL_STATE(755)] = 23590,
  [SMALL_STATE(756)] = 23600,
  [SMALL_STATE(757)] = 23610,
  [SMALL_STATE(758)] = 23620,
  [SMALL_STATE(759)] = 23630,
  [SMALL_STATE(760)] = 23640,
  [SMALL_STATE(761)] = 23650,
  [SMALL_STATE(762)] = 23660,
  [SMALL_STATE(763)] = 23670,
  [SMALL_STATE(764)] = 23680,
  [SMALL_STATE(765)] = 23690,
  [SMALL_STATE(766)] = 23700,
  [SMALL_STATE(767)] = 23710,
  [SMALL_STATE(768)] = 23720,
  [SMALL_STATE(769)] = 23730,
  [SMALL_STATE(770)] = 23740,
  [SMALL_STATE(771)] = 23750,
  [SMALL_STATE(772)] = 23760,
  [SMALL_STATE(773)] = 23770,
  [SMALL_STATE(774)] = 23780,
  [SMALL_STATE(775)] = 23786,
  [SMALL_STATE(776)] = 23796,
  [SMALL_STATE(777)] = 23806,
  [SMALL_STATE(778)] = 23816,
  [SMALL_STATE(779)] = 23822,
  [SMALL_STATE(780)] = 23832,
  [SMALL_STATE(781)] = 23842,
  [SMALL_STATE(782)] = 23852,
  [SMALL_STATE(783)] = 23862,
  [SMALL_STATE(784)] = 23872,
  [SMALL_STATE(785)] = 23882,
  [SMALL_STATE(786)] = 23892,
  [SMALL_STATE(787)] = 23902,
  [SMALL_STATE(788)] = 23912,
  [SMALL_STATE(789)] = 23918,
  [SMALL_STATE(790)] = 23925,
  [SMALL_STATE(791)] = 23932,
  [SMALL_STATE(792)] = 23939,
  [SMALL_STATE(793)] = 23946,
  [SMALL_STATE(794)] = 23953,
  [SMALL_STATE(795)] = 23960,
  [SMALL_STATE(796)] = 23967,
  [SMALL_STATE(797)] = 23974,
  [SMALL_STATE(798)] = 23981,
  [SMALL_STATE(799)] = 23988,
  [SMALL_STATE(800)] = 23995,
  [SMALL_STATE(801)] = 24002,
  [SMALL_STATE(802)] = 24009,
  [SMALL_STATE(803)] = 24016,
  [SMALL_STATE(804)] = 24023,
  [SMALL_STATE(805)] = 24030,
  [SMALL_STATE(806)] = 24037,
  [SMALL_STATE(807)] = 24044,
  [SMALL_STATE(808)] = 24051,
  [SMALL_STATE(809)] = 24058,
  [SMALL_STATE(810)] = 24065,
  [SMALL_STATE(811)] = 24072,
  [SMALL_STATE(812)] = 24079,
  [SMALL_STATE(813)] = 24086,
  [SMALL_STATE(814)] = 24093,
  [SMALL_STATE(815)] = 24100,
  [SMALL_STATE(816)] = 24107,
  [SMALL_STATE(817)] = 24114,
  [SMALL_STATE(818)] = 24121,
  [SMALL_STATE(819)] = 24128,
  [SMALL_STATE(820)] = 24135,
  [SMALL_STATE(821)] = 24142,
  [SMALL_STATE(822)] = 24149,
  [SMALL_STATE(823)] = 24156,
  [SMALL_STATE(824)] = 24163,
  [SMALL_STATE(825)] = 24170,
  [SMALL_STATE(826)] = 24177,
  [SMALL_STATE(827)] = 24184,
  [SMALL_STATE(828)] = 24191,
  [SMALL_STATE(829)] = 24198,
  [SMALL_STATE(830)] = 24205,
  [SMALL_STATE(831)] = 24212,
  [SMALL_STATE(832)] = 24219,
  [SMALL_STATE(833)] = 24224,
  [SMALL_STATE(834)] = 24231,
  [SMALL_STATE(835)] = 24236,
  [SMALL_STATE(836)] = 24241,
  [SMALL_STATE(837)] = 24248,
  [SMALL_STATE(838)] = 24255,
  [SMALL_STATE(839)] = 24262,
  [SMALL_STATE(840)] = 24269,
  [SMALL_STATE(841)] = 24276,
  [SMALL_STATE(842)] = 24283,
  [SMALL_STATE(843)] = 24290,
  [SMALL_STATE(844)] = 24297,
  [SMALL_STATE(845)] = 24304,
  [SMALL_STATE(846)] = 24311,
  [SMALL_STATE(847)] = 24318,
  [SMALL_STATE(848)] = 24325,
  [SMALL_STATE(849)] = 24332,
  [SMALL_STATE(850)] = 24339,
  [SMALL_STATE(851)] = 24346,
  [SMALL_STATE(852)] = 24351,
  [SMALL_STATE(853)] = 24358,
  [SMALL_STATE(854)] = 24365,
  [SMALL_STATE(855)] = 24372,
  [SMALL_STATE(856)] = 24379,
  [SMALL_STATE(857)] = 24386,
  [SMALL_STATE(858)] = 24393,
  [SMALL_STATE(859)] = 24400,
  [SMALL_STATE(860)] = 24407,
  [SMALL_STATE(861)] = 24414,
  [SMALL_STATE(862)] = 24421,
  [SMALL_STATE(863)] = 24426,
  [SMALL_STATE(864)] = 24433,
  [SMALL_STATE(865)] = 24440,
  [SMALL_STATE(866)] = 24447,
  [SMALL_STATE(867)] = 24452,
  [SMALL_STATE(868)] = 24459,
  [SMALL_STATE(869)] = 24466,
  [SMALL_STATE(870)] = 24473,
  [SMALL_STATE(871)] = 24480,
  [SMALL_STATE(872)] = 24487,
  [SMALL_STATE(873)] = 24494,
  [SMALL_STATE(874)] = 24498,
  [SMALL_STATE(875)] = 24502,
  [SMALL_STATE(876)] = 24506,
  [SMALL_STATE(877)] = 24510,
  [SMALL_STATE(878)] = 24514,
  [SMALL_STATE(879)] = 24518,
  [SMALL_STATE(880)] = 24522,
  [SMALL_STATE(881)] = 24526,
  [SMALL_STATE(882)] = 24530,
  [SMALL_STATE(883)] = 24534,
  [SMALL_STATE(884)] = 24538,
  [SMALL_STATE(885)] = 24542,
  [SMALL_STATE(886)] = 24546,
  [SMALL_STATE(887)] = 24550,
  [SMALL_STATE(888)] = 24554,
  [SMALL_STATE(889)] = 24558,
  [SMALL_STATE(890)] = 24562,
  [SMALL_STATE(891)] = 24566,
  [SMALL_STATE(892)] = 24570,
  [SMALL_STATE(893)] = 24574,
  [SMALL_STATE(894)] = 24578,
  [SMALL_STATE(895)] = 24582,
  [SMALL_STATE(896)] = 24586,
  [SMALL_STATE(897)] = 24590,
  [SMALL_STATE(898)] = 24594,
  [SMALL_STATE(899)] = 24598,
  [SMALL_STATE(900)] = 24602,
  [SMALL_STATE(901)] = 24606,
  [SMALL_STATE(902)] = 24610,
  [SMALL_STATE(903)] = 24614,
  [SMALL_STATE(904)] = 24618,
  [SMALL_STATE(905)] = 24622,
  [SMALL_STATE(906)] = 24626,
  [SMALL_STATE(907)] = 24630,
  [SMALL_STATE(908)] = 24634,
  [SMALL_STATE(909)] = 24638,
  [SMALL_STATE(910)] = 24642,
  [SMALL_STATE(911)] = 24646,
  [SMALL_STATE(912)] = 24650,
  [SMALL_STATE(913)] = 24654,
  [SMALL_STATE(914)] = 24658,
  [SMALL_STATE(915)] = 24662,
  [SMALL_STATE(916)] = 24666,
  [SMALL_STATE(917)] = 24670,
  [SMALL_STATE(918)] = 24674,
  [SMALL_STATE(919)] = 24678,
  [SMALL_STATE(920)] = 24682,
  [SMALL_STATE(921)] = 24686,
  [SMALL_STATE(922)] = 24690,
  [SMALL_STATE(923)] = 24694,
  [SMALL_STATE(924)] = 24698,
  [SMALL_STATE(925)] = 24702,
  [SMALL_STATE(926)] = 24706,
  [SMALL_STATE(927)] = 24710,
  [SMALL_STATE(928)] = 24714,
  [SMALL_STATE(929)] = 24718,
  [SMALL_STATE(930)] = 24722,
  [SMALL_STATE(931)] = 24726,
  [SMALL_STATE(932)] = 24730,
  [SMALL_STATE(933)] = 24734,
  [SMALL_STATE(934)] = 24738,
  [SMALL_STATE(935)] = 24742,
  [SMALL_STATE(936)] = 24746,
  [SMALL_STATE(937)] = 24750,
  [SMALL_STATE(938)] = 24754,
  [SMALL_STATE(939)] = 24758,
  [SMALL_STATE(940)] = 24762,
  [SMALL_STATE(941)] = 24766,
  [SMALL_STATE(942)] = 24770,
  [SMALL_STATE(943)] = 24774,
  [SMALL_STATE(944)] = 24778,
  [SMALL_STATE(945)] = 24782,
  [SMALL_STATE(946)] = 24786,
  [SMALL_STATE(947)] = 24790,
  [SMALL_STATE(948)] = 24794,
  [SMALL_STATE(949)] = 24798,
  [SMALL_STATE(950)] = 24802,
  [SMALL_STATE(951)] = 24806,
  [SMALL_STATE(952)] = 24810,
  [SMALL_STATE(953)] = 24814,
  [SMALL_STATE(954)] = 24818,
  [SMALL_STATE(955)] = 24822,
  [SMALL_STATE(956)] = 24826,
  [SMALL_STATE(957)] = 24830,
  [SMALL_STATE(958)] = 24834,
  [SMALL_STATE(959)] = 24838,
  [SMALL_STATE(960)] = 24842,
  [SMALL_STATE(961)] = 24846,
  [SMALL_STATE(962)] = 24850,
  [SMALL_STATE(963)] = 24854,
  [SMALL_STATE(964)] = 24858,
  [SMALL_STATE(965)] = 24862,
  [SMALL_STATE(966)] = 24866,
  [SMALL_STATE(967)] = 24870,
  [SMALL_STATE(968)] = 24874,
  [SMALL_STATE(969)] = 24878,
  [SMALL_STATE(970)] = 24882,
  [SMALL_STATE(971)] = 24886,
  [SMALL_STATE(972)] = 24890,
  [SMALL_STATE(973)] = 24894,
  [SMALL_STATE(974)] = 24898,
  [SMALL_STATE(975)] = 24902,
  [SMALL_STATE(976)] = 24906,
  [SMALL_STATE(977)] = 24910,
  [SMALL_STATE(978)] = 24914,
  [SMALL_STATE(979)] = 24918,
  [SMALL_STATE(980)] = 24922,
  [SMALL_STATE(981)] = 24926,
  [SMALL_STATE(982)] = 24930,
  [SMALL_STATE(983)] = 24934,
  [SMALL_STATE(984)] = 24938,
  [SMALL_STATE(985)] = 24942,
  [SMALL_STATE(986)] = 24946,
  [SMALL_STATE(987)] = 24950,
  [SMALL_STATE(988)] = 24954,
  [SMALL_STATE(989)] = 24958,
  [SMALL_STATE(990)] = 24962,
  [SMALL_STATE(991)] = 24966,
  [SMALL_STATE(992)] = 24970,
  [SMALL_STATE(993)] = 24974,
  [SMALL_STATE(994)] = 24978,
  [SMALL_STATE(995)] = 24982,
  [SMALL_STATE(996)] = 24986,
  [SMALL_STATE(997)] = 24990,
  [SMALL_STATE(998)] = 24994,
  [SMALL_STATE(999)] = 24998,
  [SMALL_STATE(1000)] = 25002,
  [SMALL_STATE(1001)] = 25006,
  [SMALL_STATE(1002)] = 25010,
  [SMALL_STATE(1003)] = 25014,
  [SMALL_STATE(1004)] = 25018,
  [SMALL_STATE(1005)] = 25022,
  [SMALL_STATE(1006)] = 25026,
  [SMALL_STATE(1007)] = 25030,
  [SMALL_STATE(1008)] = 25034,
  [SMALL_STATE(1009)] = 25038,
  [SMALL_STATE(1010)] = 25042,
  [SMALL_STATE(1011)] = 25046,
  [SMALL_STATE(1012)] = 25050,
  [SMALL_STATE(1013)] = 25054,
  [SMALL_STATE(1014)] = 25058,
  [SMALL_STATE(1015)] = 25062,
  [SMALL_STATE(1016)] = 25066,
  [SMALL_STATE(1017)] = 25070,
  [SMALL_STATE(1018)] = 25074,
  [SMALL_STATE(1019)] = 25078,
  [SMALL_STATE(1020)] = 25082,
  [SMALL_STATE(1021)] = 25086,
  [SMALL_STATE(1022)] = 25090,
  [SMALL_STATE(1023)] = 25094,
  [SMALL_STATE(1024)] = 25098,
  [SMALL_STATE(1025)] = 25102,
  [SMALL_STATE(1026)] = 25106,
  [SMALL_STATE(1027)] = 25110,
  [SMALL_STATE(1028)] = 25114,
  [SMALL_STATE(1029)] = 25118,
  [SMALL_STATE(1030)] = 25122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1005),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(740),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(554),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(812),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(902),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(704),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(669),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(869),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(790),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(927),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(928),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(811),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(811),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1005),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(729),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(730),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1011),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(736),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(736),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(424),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(424),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(904),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(778),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(560),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(819),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(885),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(707),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(690),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(813),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(810),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(988),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(994),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(818),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(818),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(785),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(786),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1006),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(747),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(747),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(429),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(429),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(886),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(988),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(788),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(576),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(860),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(901),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(743),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(890),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(954),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(654),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(800),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(858),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(881),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(893),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(793),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(793),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(947),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(741),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(742),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(894),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(750),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(750),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(880),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(774),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(521),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(798),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(938),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(702),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(672),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(816),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(814),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(980),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(984),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(797),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(797),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1010),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(700),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(761),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1019),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(725),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(725),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(437),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(437),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(940),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(11),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(933),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1024),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1026),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(895),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(722),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(565),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(808),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(920),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(703),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(673),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(843),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(852),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(933),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(929),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(807),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(807),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(773),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(772),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(1015),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(733),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(733),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(430),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(430),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(922),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(31),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(918),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(994),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 6),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(932),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(756),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 5),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 5),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(85),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(1027),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each, 6),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each, 6),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(727),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 11),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 11),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 10),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 10),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(160),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 1, .production_id = 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 1, .production_id = 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 2),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_definition, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 2),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 2),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_append, 3),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_append, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_prepend, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_prepend, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 4),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 4),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_content, 3, .production_id = 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_content, 3, .production_id = 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__each_else, 3),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__each_else, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each, 7),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each, 7),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(945),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(713),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 7),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 7),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 4),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 4),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [971] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(227),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(953),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [985] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(222),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(955),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(987),
  [1032] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(987),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(341),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 2, .production_id = 2),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 2, .production_id = 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 5, .production_id = 5),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 5, .production_id = 5),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 5, .production_id = 2),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 5, .production_id = 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 4, .production_id = 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 4, .production_id = 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 4, .production_id = 2),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 4, .production_id = 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_use, 6, .production_id = 9),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_use, 6, .production_id = 9),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(866),
  [1121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(864),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2), SHIFT_REPEAT(865),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1021),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1008),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(951),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1013),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1017),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(440),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(668),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(598),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(976),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(586),
  [1457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(976),
  [1460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(991),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mixin_use_repeat1, 2, .production_id = 4),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(586),
  [1558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(976),
  [1561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(991),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(439),
  [1609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(573),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [1654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(898),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(586),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(882),
  [1711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(748),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(884),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pug_attributes, 1),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pug_attributes, 1),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [1837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2), SHIFT_REPEAT(925),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2),
  [1842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 8),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 8),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_variable, 1),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2), SHIFT_REPEAT(958),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_variable, 3),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 2),
  [2025] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mixin_attributes_repeat1, 2),
  [2099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 3),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_attributes, 4),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration_iterator, 1, .production_id = 1),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
