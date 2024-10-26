#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 6
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum {
  aux_sym_content_token1 = 1,
  anon_sym_LBRACE_STAR = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACE = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_var = 7,
  anon_sym_default = 8,
  anon_sym_EQ = 9,
  anon_sym_for = 10,
  anon_sym_SEMI = 11,
  anon_sym_foreach = 12,
  anon_sym_as = 13,
  anon_sym_EQ_GT = 14,
  anon_sym_if = 15,
  anon_sym_elseif = 16,
  anon_sym_else = 17,
  anon_sym_SLASH = 18,
  anon_sym_include = 19,
  anon_sym_embed = 20,
  anon_sym_block = 21,
  anon_sym_import = 22,
  anon_sym_from = 23,
  anon_sym_COMMA = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  aux_sym__name_token1 = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  sym_null = 30,
  aux_sym__string_token1 = 31,
  anon_sym_DQUOTE = 32,
  anon_sym_BSLASH_DQUOTE = 33,
  anon_sym_BSLASH_DOLLAR = 34,
  anon_sym_BSLASH_BSLASH = 35,
  aux_sym_interpolated_string_token1 = 36,
  sym_number = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_COLON = 40,
  anon_sym_PIPE = 41,
  anon_sym_or = 42,
  anon_sym_and = 43,
  anon_sym_EQ_EQ_EQ = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_BANG_EQ = 46,
  anon_sym_LT_EQ_GT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_LT = 51,
  anon_sym_DOT_DOT = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_TILDE = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH_SLASH = 57,
  anon_sym_PERCENT = 58,
  anon_sym_STAR_STAR = 59,
  anon_sym_QMARK_QMARK = 60,
  anon_sym_QMARK_COLON = 61,
  anon_sym_not = 62,
  anon_sym_QMARK = 63,
  sym_template = 64,
  sym_content = 65,
  sym_comment = 66,
  sym_statement_directive = 67,
  sym_output_directive = 68,
  sym_variable_name = 69,
  sym__statement = 70,
  sym_assignment_statement = 71,
  sym_for_statement = 72,
  sym_generic_tag_statement = 73,
  sym_foreach_statement = 74,
  sym_if_statement = 75,
  sym_closing_statement = 76,
  sym_include_statement = 77,
  sym_block_statement = 78,
  sym_import_statement = 79,
  sym_from_statement = 80,
  sym__expression = 81,
  sym__name = 82,
  sym__literal = 83,
  sym_boolean = 84,
  sym__string = 85,
  sym_unquoted_string = 86,
  sym_interpolated_string = 87,
  sym_array = 88,
  sym_argument = 89,
  sym_filters = 90,
  sym_filter = 91,
  sym_filter_arguments = 92,
  sym_filter_argument = 93,
  sym_binary_expression = 94,
  sym_binary_operator = 95,
  sym_unary_expression = 96,
  sym_unary_operator = 97,
  sym_ternary_expression = 98,
  aux_sym_template_repeat1 = 99,
  aux_sym_content_repeat1 = 100,
  aux_sym_for_statement_repeat1 = 101,
  aux_sym_from_statement_repeat1 = 102,
  aux_sym_interpolated_string_repeat1 = 103,
  aux_sym_array_repeat1 = 104,
  aux_sym_filters_repeat1 = 105,
  aux_sym_filter_arguments_repeat1 = 106,
  alias_sym_argument_value = 107,
  alias_sym_conditional_end = 108,
  alias_sym_filter_identifier = 109,
  alias_sym_name = 110,
  alias_sym_repeat_end = 111,
  alias_sym_variable = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_STAR] = "{*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_var] = "keyword",
  [anon_sym_default] = "keyword",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "repeat",
  [anon_sym_SEMI] = ";",
  [anon_sym_foreach] = "repeat",
  [anon_sym_as] = "keyword",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "conditional",
  [anon_sym_elseif] = "conditional_branch",
  [anon_sym_else] = "conditional_branch",
  [anon_sym_SLASH] = "/",
  [anon_sym_include] = "tag",
  [anon_sym_embed] = "tag",
  [anon_sym_block] = "attribute",
  [anon_sym_import] = "keyword",
  [anon_sym_from] = "tag",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__name_token1] = "_name_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [aux_sym__string_token1] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_DOLLAR] = "\\$",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_interpolated_string_token1] = "interpolated_string_token1",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_not] = "not",
  [anon_sym_QMARK] = "\?",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_comment] = "comment",
  [sym_statement_directive] = "statement_directive",
  [sym_output_directive] = "output_directive",
  [sym_variable_name] = "variable_name",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_for_statement] = "for_statement",
  [sym_generic_tag_statement] = "generic_tag_statement",
  [sym_foreach_statement] = "foreach_statement",
  [sym_if_statement] = "if_statement",
  [sym_closing_statement] = "closing_statement",
  [sym_include_statement] = "include_statement",
  [sym_block_statement] = "block_statement",
  [sym_import_statement] = "import_statement",
  [sym_from_statement] = "from_statement",
  [sym__expression] = "_expression",
  [sym__name] = "_name",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym__string] = "_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_interpolated_string] = "interpolated_string",
  [sym_array] = "array",
  [sym_argument] = "argument",
  [sym_filters] = "filters",
  [sym_filter] = "filter",
  [sym_filter_arguments] = "arguments",
  [sym_filter_argument] = "argument",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_operator] = "operator",
  [sym_unary_expression] = "unary_expression",
  [sym_unary_operator] = "operator",
  [sym_ternary_expression] = "ternary_expression",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_from_statement_repeat1] = "from_statement_repeat1",
  [aux_sym_interpolated_string_repeat1] = "interpolated_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_filters_repeat1] = "filters_repeat1",
  [aux_sym_filter_arguments_repeat1] = "filter_arguments_repeat1",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_conditional_end] = "conditional_end",
  [alias_sym_filter_identifier] = "filter_identifier",
  [alias_sym_name] = "name",
  [alias_sym_repeat_end] = "repeat_end",
  [alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_STAR] = anon_sym_LBRACE_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_default] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_foreach] = anon_sym_for,
  [anon_sym_as] = anon_sym_var,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_elseif,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_embed] = anon_sym_include,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_import] = anon_sym_var,
  [anon_sym_from] = anon_sym_include,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__name_token1] = aux_sym__name_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_interpolated_string_token1] = aux_sym_interpolated_string_token1,
  [sym_number] = sym_number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_comment] = sym_comment,
  [sym_statement_directive] = sym_statement_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_variable_name] = sym_variable_name,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_generic_tag_statement] = sym_generic_tag_statement,
  [sym_foreach_statement] = sym_foreach_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_closing_statement] = sym_closing_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_block_statement] = sym_block_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_from_statement] = sym_from_statement,
  [sym__expression] = sym__expression,
  [sym__name] = sym__name,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym__string] = sym__string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym_array] = sym_array,
  [sym_argument] = sym_argument,
  [sym_filters] = sym_filters,
  [sym_filter] = sym_filter,
  [sym_filter_arguments] = sym_filter_arguments,
  [sym_filter_argument] = sym_argument,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_expression] = sym_unary_expression,
  [sym_unary_operator] = sym_binary_operator,
  [sym_ternary_expression] = sym_ternary_expression,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_from_statement_repeat1] = aux_sym_from_statement_repeat1,
  [aux_sym_interpolated_string_repeat1] = aux_sym_interpolated_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_filters_repeat1] = aux_sym_filters_repeat1,
  [aux_sym_filter_arguments_repeat1] = aux_sym_filter_arguments_repeat1,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_conditional_end] = alias_sym_conditional_end,
  [alias_sym_filter_identifier] = alias_sym_filter_identifier,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_repeat_end] = alias_sym_repeat_end,
  [alias_sym_variable] = alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [aux_sym__name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolated_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_tag_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_from_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_filters] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_conditional_end] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_filter_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_repeat_end] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_variable,
  },
  [2] = {
    [0] = anon_sym_include,
  },
  [3] = {
    [1] = alias_sym_variable,
  },
  [4] = {
    [1] = alias_sym_repeat_end,
  },
  [5] = {
    [1] = alias_sym_conditional_end,
  },
  [6] = {
    [1] = anon_sym_include,
  },
  [7] = {
    [0] = alias_sym_filter_identifier,
  },
  [8] = {
    [0] = anon_sym_include,
    [3] = alias_sym_name,
  },
  [9] = {
    [3] = alias_sym_name,
  },
  [10] = {
    [0] = alias_sym_argument_value,
  },
  [11] = {
    [3] = alias_sym_name,
    [5] = alias_sym_name,
  },
  [12] = {
    [1] = alias_sym_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_variable_name, 2,
    sym_variable_name,
    alias_sym_variable,
  sym__expression, 3,
    sym__expression,
    alias_sym_argument_value,
    alias_sym_variable,
  sym__name, 4,
    sym__name,
    alias_sym_filter_identifier,
    alias_sym_name,
    anon_sym_include,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 8,
  [22] = 22,
  [23] = 23,
  [24] = 4,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 5,
  [29] = 8,
  [30] = 5,
  [31] = 7,
  [32] = 26,
  [33] = 4,
  [34] = 13,
  [35] = 4,
  [36] = 20,
  [37] = 22,
  [38] = 7,
  [39] = 19,
  [40] = 25,
  [41] = 12,
  [42] = 14,
  [43] = 23,
  [44] = 18,
  [45] = 16,
  [46] = 15,
  [47] = 9,
  [48] = 17,
  [49] = 8,
  [50] = 11,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 61,
  [62] = 57,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 64,
  [76] = 68,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 64,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 82,
  [87] = 87,
  [88] = 67,
  [89] = 68,
  [90] = 68,
  [91] = 67,
  [92] = 85,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 111,
  [115] = 111,
  [116] = 112,
  [117] = 112,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 135,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 25,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 16,
  [156] = 22,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 153,
  [162] = 162,
  [163] = 163,
  [164] = 153,
  [165] = 13,
  [166] = 23,
  [167] = 26,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 170,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 171,
  [185] = 185,
  [186] = 176,
  [187] = 187,
  [188] = 137,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(229);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(229);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(220);
      if (lookahead == 160) ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(229);
      if (lookahead == ']') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(229);
      if (lookahead == ']') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == ']') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 160) ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(127);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == 160) ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == 160) ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 160) ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(197);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(195);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(80);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(217);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == 160) ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(79);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_embed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 160) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(127);
      if (lookahead == 160) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 160) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'b') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'c') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'd') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'f') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'f') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'f') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 160) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 160) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'h') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'k') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'p') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 's') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'u') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'u') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 160) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(212);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(184);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '?') ADVANCE(225);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 75},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 75},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 40},
  [127] = {.lex_state = 75},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 75},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 75},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 75},
  [138] = {.lex_state = 75},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 75},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_STAR] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(187),
    [sym_content] = STATE(107),
    [sym_comment] = STATE(1),
    [sym_statement_directive] = STATE(107),
    [sym_output_directive] = STATE(107),
    [aux_sym_template_repeat1] = STATE(107),
    [aux_sym_content_repeat1] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_content_token1] = ACTIONS(7),
    [anon_sym_LBRACE_STAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_foreach,
    ACTIONS(25), 1,
      anon_sym_else,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_block,
    ACTIONS(33), 1,
      anon_sym_import,
    ACTIONS(35), 1,
      anon_sym_from,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__name_token1,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_comment,
    STATE(42), 1,
      sym_variable_name,
    STATE(52), 1,
      sym__name,
    STATE(56), 1,
      sym__expression,
    STATE(89), 1,
      sym_unary_operator,
    STATE(182), 1,
      sym__statement,
    ACTIONS(17), 2,
      anon_sym_var,
      anon_sym_default,
    ACTIONS(23), 2,
      anon_sym_if,
      anon_sym_elseif,
    ACTIONS(29), 2,
      anon_sym_include,
      anon_sym_embed,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
    STATE(181), 10,
      sym_assignment_statement,
      sym_for_statement,
      sym_generic_tag_statement,
      sym_foreach_statement,
      sym_if_statement,
      sym_closing_statement,
      sym_include_statement,
      sym_block_statement,
      sym_import_statement,
      sym_from_statement,
  [113] = 23,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_EQ_GT,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    STATE(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_variable_name,
    STATE(71), 1,
      sym_binary_operator,
    STATE(89), 1,
      sym_unary_operator,
    STATE(99), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
    ACTIONS(57), 19,
      anon_sym_SLASH,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [210] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    STATE(4), 1,
      sym_comment,
    STATE(88), 1,
      sym_binary_operator,
    ACTIONS(65), 14,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_not,
    ACTIONS(57), 21,
      anon_sym_SLASH,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [262] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(71), 1,
      anon_sym_COLON,
    STATE(5), 1,
      sym_comment,
    STATE(88), 1,
      sym_binary_operator,
    ACTIONS(69), 35,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [312] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(6), 1,
      sym_comment,
    STATE(88), 1,
      sym_binary_operator,
    ACTIONS(69), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [360] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(7), 1,
      sym_comment,
    STATE(88), 1,
      sym_binary_operator,
    ACTIONS(73), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [408] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(8), 1,
      sym_comment,
    STATE(88), 1,
      sym_binary_operator,
    ACTIONS(75), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [456] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(77), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [501] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(10), 1,
      sym_comment,
    STATE(71), 1,
      sym_binary_operator,
    ACTIONS(73), 35,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [548] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(79), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [593] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(81), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [638] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(83), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [683] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(85), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [728] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(87), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [773] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(89), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [818] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(91), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [863] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(93), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [908] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(95), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [953] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(97), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [998] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(21), 1,
      sym_comment,
    STATE(71), 1,
      sym_binary_operator,
    ACTIONS(75), 35,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [1045] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(99), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [1090] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(101), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [1135] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    STATE(24), 1,
      sym_comment,
    STATE(71), 1,
      sym_binary_operator,
    ACTIONS(65), 13,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_not,
    ACTIONS(57), 21,
      anon_sym_SLASH,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1186] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(103), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [1231] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(105), 36,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ_GT,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_not,
      anon_sym_QMARK,
  [1276] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(83), 15,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(103), 20,
      anon_sym_SLASH,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
      anon_sym_QMARK,
  [1322] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(28), 1,
      sym_comment,
    STATE(91), 1,
      sym_binary_operator,
    ACTIONS(69), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(107), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1367] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(29), 1,
      sym_comment,
    STATE(91), 1,
      sym_binary_operator,
    ACTIONS(75), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(109), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1412] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(111), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_comment,
    STATE(91), 1,
      sym_binary_operator,
    ACTIONS(69), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(107), 23,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1459] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(31), 1,
      sym_comment,
    STATE(91), 1,
      sym_binary_operator,
    ACTIONS(73), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(113), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1504] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(105), 8,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(115), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1547] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(121), 1,
      anon_sym_QMARK,
    STATE(33), 1,
      sym_comment,
    STATE(91), 1,
      sym_binary_operator,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(117), 9,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1596] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(83), 8,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(123), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1639] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(35), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(117), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1687] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(97), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(127), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1729] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(129), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1771] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(38), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    ACTIONS(73), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(113), 23,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1815] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(95), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(131), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1857] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(103), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(133), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1899] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(81), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(135), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1941] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(137), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [1983] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(101), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(139), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2025] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(93), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(141), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2067] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(89), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(143), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2109] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(87), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(145), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2151] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(77), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(147), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2193] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(91), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(149), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2235] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(49), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    ACTIONS(75), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(109), 23,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2279] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(79), 7,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(151), 24,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2321] = 19,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(51), 1,
      sym_comment,
    STATE(53), 1,
      sym__expression,
    STATE(89), 1,
      sym_unary_operator,
    STATE(122), 1,
      sym_filter_argument,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [2391] = 20,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      sym_variable_name,
    STATE(52), 1,
      sym_comment,
    STATE(63), 1,
      sym__expression,
    STATE(89), 1,
      sym_unary_operator,
    STATE(172), 1,
      sym_filters,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [2462] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(53), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    ACTIONS(159), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2506] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(171), 1,
      sym_filters,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2553] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(184), 1,
      sym_filters,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2600] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(169), 1,
      sym_filters,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2647] = 18,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_variable_name,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      sym__expression,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [2712] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(143), 1,
      aux_sym_array_repeat1,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2759] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(140), 1,
      aux_sym_for_statement_repeat1,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2806] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(135), 1,
      aux_sym_array_repeat1,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [2853] = 18,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(53), 1,
      sym__expression,
    STATE(61), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(125), 1,
      sym_filter_argument,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [2918] = 18,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_variable_name,
    STATE(60), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [2983] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
    STATE(67), 1,
      sym_binary_operator,
    STATE(185), 1,
      sym_filters,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [3030] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym__expression,
    STATE(14), 1,
      sym_variable_name,
    STATE(64), 1,
      sym_comment,
    STATE(68), 1,
      sym_unary_operator,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3092] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(59), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3154] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(30), 1,
      sym__expression,
    STATE(42), 1,
      sym_variable_name,
    STATE(66), 1,
      sym_comment,
    STATE(90), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3216] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(35), 1,
      sym__expression,
    STATE(42), 1,
      sym_variable_name,
    STATE(67), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3278] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym__expression,
    STATE(14), 1,
      sym_variable_name,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    STATE(68), 2,
      sym_comment,
      sym_unary_operator,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3338] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(69), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(96), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3400] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(70), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(93), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3462] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_variable_name,
    STATE(24), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(76), 1,
      sym_unary_operator,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3524] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym__expression,
    STATE(14), 1,
      sym_variable_name,
    STATE(72), 1,
      sym_comment,
    STATE(76), 1,
      sym_unary_operator,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3586] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(73), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(100), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3648] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(74), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(98), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3710] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym__expression,
    STATE(14), 1,
      sym_variable_name,
    STATE(68), 1,
      sym_unary_operator,
    STATE(75), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3772] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_variable_name,
    STATE(21), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    STATE(76), 2,
      sym_comment,
      sym_unary_operator,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3832] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(94), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3894] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(78), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(95), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [3956] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(79), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(101), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4018] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(80), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(97), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4080] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(28), 1,
      sym__expression,
    STATE(42), 1,
      sym_variable_name,
    STATE(81), 1,
      sym_comment,
    STATE(90), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4142] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(54), 1,
      sym__expression,
    STATE(82), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4204] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(83), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    STATE(102), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4266] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(84), 1,
      sym_comment,
    STATE(87), 1,
      sym__expression,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4328] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(38), 1,
      sym__expression,
    STATE(42), 1,
      sym_variable_name,
    STATE(85), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4390] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(55), 1,
      sym__expression,
    STATE(86), 1,
      sym_comment,
    STATE(89), 1,
      sym_unary_operator,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4452] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(67), 1,
      sym_binary_operator,
    STATE(87), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [4494] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym__expression,
    STATE(14), 1,
      sym_variable_name,
    STATE(68), 1,
      sym_unary_operator,
    STATE(88), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4556] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(42), 1,
      sym_variable_name,
    STATE(49), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    STATE(89), 2,
      sym_comment,
      sym_unary_operator,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4616] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(29), 1,
      sym__expression,
    STATE(42), 1,
      sym_variable_name,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    STATE(90), 2,
      sym_comment,
      sym_unary_operator,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4676] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      aux_sym__name_token1,
    STATE(33), 1,
      sym__expression,
    STATE(42), 1,
      sym_variable_name,
    STATE(90), 1,
      sym_unary_operator,
    STATE(91), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_null,
      sym_number,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(46), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(41), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4738] = 17,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym__name_token1,
    ACTIONS(195), 1,
      aux_sym__string_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym__expression,
    STATE(14), 1,
      sym_variable_name,
    STATE(76), 1,
      sym_unary_operator,
    STATE(92), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_null,
      sym_number,
    STATE(16), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    ACTIONS(51), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(15), 3,
      sym_boolean,
      sym__string,
      sym_array,
    STATE(12), 4,
      sym__literal,
      sym_binary_expression,
      sym_unary_expression,
      sym_ternary_expression,
  [4800] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(67), 1,
      sym_binary_operator,
    STATE(93), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [4842] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(205), 1,
      anon_sym_as,
    STATE(67), 1,
      sym_binary_operator,
    STATE(94), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [4883] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_operator,
    STATE(95), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [4924] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_operator,
    STATE(96), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [4965] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(211), 1,
      anon_sym_import,
    STATE(67), 1,
      sym_binary_operator,
    STATE(97), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [5006] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_operator,
    STATE(98), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [5047] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_operator,
    STATE(99), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [5088] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_operator,
    STATE(100), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [5129] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(219), 1,
      anon_sym_as,
    STATE(67), 1,
      sym_binary_operator,
    STATE(101), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [5170] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_operator,
    STATE(102), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(119), 15,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_COLON,
  [5211] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(223), 13,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [5233] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(225), 13,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [5255] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(227), 13,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      aux_sym__name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      aux_sym__string_token1,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [5277] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      anon_sym_block,
    ACTIONS(234), 1,
      aux_sym__name_token1,
    ACTIONS(236), 1,
      aux_sym__string_token1,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_comment,
    STATE(131), 2,
      sym_variable_name,
      sym__string,
    STATE(155), 2,
      sym_unquoted_string,
      sym_interpolated_string,
  [5307] = 7,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_content_repeat1,
    STATE(109), 4,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [5332] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      aux_sym__string_token1,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__name_token1,
    STATE(108), 1,
      sym_comment,
    STATE(141), 2,
      sym_variable_name,
      sym__string,
    STATE(155), 2,
      sym_unquoted_string,
      sym_interpolated_string,
  [5359] = 6,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      aux_sym_content_token1,
    ACTIONS(249), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      aux_sym_content_repeat1,
    STATE(109), 5,
      sym_content,
      sym_comment,
      sym_statement_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [5382] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      aux_sym__string_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      aux_sym__name_token1,
    STATE(110), 1,
      sym_comment,
    STATE(45), 2,
      sym_unquoted_string,
      sym_interpolated_string,
    STATE(133), 2,
      sym_variable_name,
      sym__string,
  [5409] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(261), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5431] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(261), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5453] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(113), 2,
      sym_comment,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(270), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5473] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(261), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5495] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(261), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5517] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym_interpolated_string_repeat1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5539] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym_interpolated_string_repeat1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5561] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(281), 6,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5576] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(283), 6,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_BSLASH,
      aux_sym_interpolated_string_token1,
  [5591] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_filter_arguments_repeat1,
    ACTIONS(285), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5609] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(121), 2,
      sym_comment,
      aux_sym_filter_arguments_repeat1,
    ACTIONS(289), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5625] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_filter_arguments_repeat1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5643] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(298), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym_comment,
    STATE(144), 1,
      sym_filter_arguments,
    ACTIONS(296), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5661] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(300), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(124), 2,
      sym_comment,
      aux_sym_filters_repeat1,
  [5676] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(289), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5689] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(305), 1,
      anon_sym_foreach,
    ACTIONS(307), 1,
      anon_sym_if,
    ACTIONS(309), 1,
      aux_sym__name_token1,
    STATE(126), 1,
      sym_comment,
    STATE(175), 1,
      sym__name,
  [5708] = 4,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      aux_sym_content_token1,
    ACTIONS(316), 2,
      anon_sym_LBRACE_STAR,
      anon_sym_LBRACE,
    STATE(127), 2,
      sym_comment,
      aux_sym_content_repeat1,
  [5723] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    STATE(124), 1,
      aux_sym_filters_repeat1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [5740] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    STATE(128), 1,
      aux_sym_filters_repeat1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [5757] = 5,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      aux_sym_content_token1,
    STATE(127), 1,
      aux_sym_content_repeat1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_LBRACE_STAR,
      anon_sym_LBRACE,
  [5774] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      aux_sym__name_token1,
    STATE(131), 1,
      sym_comment,
    STATE(180), 1,
      sym_argument,
  [5790] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    STATE(132), 2,
      sym_comment,
      aux_sym_for_statement_repeat1,
  [5804] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_comment,
    STATE(168), 1,
      sym_filters,
  [5820] = 3,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_comment,
    ACTIONS(343), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_STAR,
      anon_sym_LBRACE,
  [5832] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_array_repeat1,
  [5848] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(136), 2,
      sym_comment,
      aux_sym_array_repeat1,
  [5862] = 3,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_comment,
    ACTIONS(352), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_STAR,
      anon_sym_LBRACE,
  [5874] = 3,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_comment,
    ACTIONS(356), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_STAR,
      anon_sym_LBRACE,
  [5886] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(123), 1,
      sym__name,
    STATE(129), 1,
      sym_filter,
    STATE(139), 1,
      sym_comment,
  [5902] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_for_statement_repeat1,
    STATE(140), 1,
      sym_comment,
  [5918] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(332), 1,
      aux_sym__name_token1,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_comment,
    STATE(173), 1,
      sym_argument,
  [5934] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_from_statement_repeat1,
  [5950] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_array_repeat1,
    STATE(143), 1,
      sym_comment,
  [5966] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(370), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5978] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5990] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_from_statement_repeat1,
  [6006] = 3,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_content_token1,
      anon_sym_LBRACE_STAR,
      anon_sym_LBRACE,
  [6018] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(148), 2,
      sym_comment,
      aux_sym_from_statement_repeat1,
  [6032] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(123), 1,
      sym__name,
    STATE(145), 1,
      sym_filter,
    STATE(149), 1,
      sym_comment,
  [6048] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(150), 1,
      sym_comment,
    STATE(152), 1,
      sym__name,
  [6061] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      aux_sym__name_token1,
    STATE(151), 1,
      sym_comment,
  [6074] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6085] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(32), 1,
      sym__name,
    STATE(153), 1,
      sym_comment,
  [6098] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(385), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym_comment,
    STATE(157), 1,
      sym_variable_name,
  [6111] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      aux_sym__name_token1,
    STATE(155), 1,
      sym_comment,
  [6124] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      aux_sym__name_token1,
    STATE(156), 1,
      sym_comment,
  [6137] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym_comment,
  [6150] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(158), 1,
      sym_comment,
    STATE(163), 1,
      sym__name,
  [6163] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(159), 1,
      sym_comment,
    STATE(174), 1,
      sym__name,
  [6176] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(358), 1,
      aux_sym__name_token1,
    STATE(142), 1,
      sym__name,
    STATE(160), 1,
      sym_comment,
  [6189] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(391), 1,
      aux_sym__name_token1,
    STATE(26), 1,
      sym__name,
    STATE(161), 1,
      sym_comment,
  [6202] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    STATE(162), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON,
  [6213] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_as,
    STATE(163), 1,
      sym_comment,
  [6226] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(399), 1,
      aux_sym__name_token1,
    STATE(164), 1,
      sym_comment,
    STATE(167), 1,
      sym__name,
  [6239] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      aux_sym__name_token1,
    STATE(165), 1,
      sym_comment,
  [6252] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      aux_sym__name_token1,
    STATE(166), 1,
      sym_comment,
  [6265] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      aux_sym__name_token1,
    STATE(167), 1,
      sym_comment,
  [6278] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_comment,
  [6288] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_comment,
  [6298] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(405), 1,
      aux_sym_comment_token1,
    STATE(170), 1,
      sym_comment,
  [6308] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_comment,
  [6318] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_comment,
  [6328] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
  [6338] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [6348] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_comment,
  [6358] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_comment,
  [6368] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_comment,
  [6378] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      sym_comment,
  [6388] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    STATE(179), 1,
      sym_comment,
  [6398] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_comment,
  [6408] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym_comment,
  [6418] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_comment,
  [6428] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_comment,
  [6438] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
  [6448] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_comment,
  [6458] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_comment,
  [6468] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_comment,
  [6478] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 262,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 456,
  [SMALL_STATE(10)] = 501,
  [SMALL_STATE(11)] = 548,
  [SMALL_STATE(12)] = 593,
  [SMALL_STATE(13)] = 638,
  [SMALL_STATE(14)] = 683,
  [SMALL_STATE(15)] = 728,
  [SMALL_STATE(16)] = 773,
  [SMALL_STATE(17)] = 818,
  [SMALL_STATE(18)] = 863,
  [SMALL_STATE(19)] = 908,
  [SMALL_STATE(20)] = 953,
  [SMALL_STATE(21)] = 998,
  [SMALL_STATE(22)] = 1045,
  [SMALL_STATE(23)] = 1090,
  [SMALL_STATE(24)] = 1135,
  [SMALL_STATE(25)] = 1186,
  [SMALL_STATE(26)] = 1231,
  [SMALL_STATE(27)] = 1276,
  [SMALL_STATE(28)] = 1322,
  [SMALL_STATE(29)] = 1367,
  [SMALL_STATE(30)] = 1412,
  [SMALL_STATE(31)] = 1459,
  [SMALL_STATE(32)] = 1504,
  [SMALL_STATE(33)] = 1547,
  [SMALL_STATE(34)] = 1596,
  [SMALL_STATE(35)] = 1639,
  [SMALL_STATE(36)] = 1687,
  [SMALL_STATE(37)] = 1729,
  [SMALL_STATE(38)] = 1771,
  [SMALL_STATE(39)] = 1815,
  [SMALL_STATE(40)] = 1857,
  [SMALL_STATE(41)] = 1899,
  [SMALL_STATE(42)] = 1941,
  [SMALL_STATE(43)] = 1983,
  [SMALL_STATE(44)] = 2025,
  [SMALL_STATE(45)] = 2067,
  [SMALL_STATE(46)] = 2109,
  [SMALL_STATE(47)] = 2151,
  [SMALL_STATE(48)] = 2193,
  [SMALL_STATE(49)] = 2235,
  [SMALL_STATE(50)] = 2279,
  [SMALL_STATE(51)] = 2321,
  [SMALL_STATE(52)] = 2391,
  [SMALL_STATE(53)] = 2462,
  [SMALL_STATE(54)] = 2506,
  [SMALL_STATE(55)] = 2553,
  [SMALL_STATE(56)] = 2600,
  [SMALL_STATE(57)] = 2647,
  [SMALL_STATE(58)] = 2712,
  [SMALL_STATE(59)] = 2759,
  [SMALL_STATE(60)] = 2806,
  [SMALL_STATE(61)] = 2853,
  [SMALL_STATE(62)] = 2918,
  [SMALL_STATE(63)] = 2983,
  [SMALL_STATE(64)] = 3030,
  [SMALL_STATE(65)] = 3092,
  [SMALL_STATE(66)] = 3154,
  [SMALL_STATE(67)] = 3216,
  [SMALL_STATE(68)] = 3278,
  [SMALL_STATE(69)] = 3338,
  [SMALL_STATE(70)] = 3400,
  [SMALL_STATE(71)] = 3462,
  [SMALL_STATE(72)] = 3524,
  [SMALL_STATE(73)] = 3586,
  [SMALL_STATE(74)] = 3648,
  [SMALL_STATE(75)] = 3710,
  [SMALL_STATE(76)] = 3772,
  [SMALL_STATE(77)] = 3832,
  [SMALL_STATE(78)] = 3894,
  [SMALL_STATE(79)] = 3956,
  [SMALL_STATE(80)] = 4018,
  [SMALL_STATE(81)] = 4080,
  [SMALL_STATE(82)] = 4142,
  [SMALL_STATE(83)] = 4204,
  [SMALL_STATE(84)] = 4266,
  [SMALL_STATE(85)] = 4328,
  [SMALL_STATE(86)] = 4390,
  [SMALL_STATE(87)] = 4452,
  [SMALL_STATE(88)] = 4494,
  [SMALL_STATE(89)] = 4556,
  [SMALL_STATE(90)] = 4616,
  [SMALL_STATE(91)] = 4676,
  [SMALL_STATE(92)] = 4738,
  [SMALL_STATE(93)] = 4800,
  [SMALL_STATE(94)] = 4842,
  [SMALL_STATE(95)] = 4883,
  [SMALL_STATE(96)] = 4924,
  [SMALL_STATE(97)] = 4965,
  [SMALL_STATE(98)] = 5006,
  [SMALL_STATE(99)] = 5047,
  [SMALL_STATE(100)] = 5088,
  [SMALL_STATE(101)] = 5129,
  [SMALL_STATE(102)] = 5170,
  [SMALL_STATE(103)] = 5211,
  [SMALL_STATE(104)] = 5233,
  [SMALL_STATE(105)] = 5255,
  [SMALL_STATE(106)] = 5277,
  [SMALL_STATE(107)] = 5307,
  [SMALL_STATE(108)] = 5332,
  [SMALL_STATE(109)] = 5359,
  [SMALL_STATE(110)] = 5382,
  [SMALL_STATE(111)] = 5409,
  [SMALL_STATE(112)] = 5431,
  [SMALL_STATE(113)] = 5453,
  [SMALL_STATE(114)] = 5473,
  [SMALL_STATE(115)] = 5495,
  [SMALL_STATE(116)] = 5517,
  [SMALL_STATE(117)] = 5539,
  [SMALL_STATE(118)] = 5561,
  [SMALL_STATE(119)] = 5576,
  [SMALL_STATE(120)] = 5591,
  [SMALL_STATE(121)] = 5609,
  [SMALL_STATE(122)] = 5625,
  [SMALL_STATE(123)] = 5643,
  [SMALL_STATE(124)] = 5661,
  [SMALL_STATE(125)] = 5676,
  [SMALL_STATE(126)] = 5689,
  [SMALL_STATE(127)] = 5708,
  [SMALL_STATE(128)] = 5723,
  [SMALL_STATE(129)] = 5740,
  [SMALL_STATE(130)] = 5757,
  [SMALL_STATE(131)] = 5774,
  [SMALL_STATE(132)] = 5790,
  [SMALL_STATE(133)] = 5804,
  [SMALL_STATE(134)] = 5820,
  [SMALL_STATE(135)] = 5832,
  [SMALL_STATE(136)] = 5848,
  [SMALL_STATE(137)] = 5862,
  [SMALL_STATE(138)] = 5874,
  [SMALL_STATE(139)] = 5886,
  [SMALL_STATE(140)] = 5902,
  [SMALL_STATE(141)] = 5918,
  [SMALL_STATE(142)] = 5934,
  [SMALL_STATE(143)] = 5950,
  [SMALL_STATE(144)] = 5966,
  [SMALL_STATE(145)] = 5978,
  [SMALL_STATE(146)] = 5990,
  [SMALL_STATE(147)] = 6006,
  [SMALL_STATE(148)] = 6018,
  [SMALL_STATE(149)] = 6032,
  [SMALL_STATE(150)] = 6048,
  [SMALL_STATE(151)] = 6061,
  [SMALL_STATE(152)] = 6074,
  [SMALL_STATE(153)] = 6085,
  [SMALL_STATE(154)] = 6098,
  [SMALL_STATE(155)] = 6111,
  [SMALL_STATE(156)] = 6124,
  [SMALL_STATE(157)] = 6137,
  [SMALL_STATE(158)] = 6150,
  [SMALL_STATE(159)] = 6163,
  [SMALL_STATE(160)] = 6176,
  [SMALL_STATE(161)] = 6189,
  [SMALL_STATE(162)] = 6202,
  [SMALL_STATE(163)] = 6213,
  [SMALL_STATE(164)] = 6226,
  [SMALL_STATE(165)] = 6239,
  [SMALL_STATE(166)] = 6252,
  [SMALL_STATE(167)] = 6265,
  [SMALL_STATE(168)] = 6278,
  [SMALL_STATE(169)] = 6288,
  [SMALL_STATE(170)] = 6298,
  [SMALL_STATE(171)] = 6308,
  [SMALL_STATE(172)] = 6318,
  [SMALL_STATE(173)] = 6328,
  [SMALL_STATE(174)] = 6338,
  [SMALL_STATE(175)] = 6348,
  [SMALL_STATE(176)] = 6358,
  [SMALL_STATE(177)] = 6368,
  [SMALL_STATE(178)] = 6378,
  [SMALL_STATE(179)] = 6388,
  [SMALL_STATE(180)] = 6398,
  [SMALL_STATE(181)] = 6408,
  [SMALL_STATE(182)] = 6418,
  [SMALL_STATE(183)] = 6428,
  [SMALL_STATE(184)] = 6438,
  [SMALL_STATE(185)] = 6448,
  [SMALL_STATE(186)] = 6458,
  [SMALL_STATE(187)] = 6468,
  [SMALL_STATE(188)] = 6478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_statement, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_arguments, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_tag_statement, 1, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_argument, 1, .production_id = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_statement, 2, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_statement, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_statement, 6),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_binary_operator, 1), REDUCE(sym_unary_operator, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(130),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(179),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(78),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(118),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_arguments, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_arguments_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_arguments_repeat1, 2), SHIFT_REPEAT(61),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_arguments, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filters_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filters_repeat1, 2), SHIFT_REPEAT(149),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(127),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filters, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filters, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(70),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(84),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 6, .production_id = 11),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 7),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 7, .production_id = 11),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_statement_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_statement_repeat1, 2), SHIFT_REPEAT(150),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_statement_repeat1, 2, .production_id = 12),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 2, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 4, .production_id = 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 8),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closing_statement, 2, .production_id = 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closing_statement, 2, .production_id = 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closing_statement, 2, .production_id = 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_statement, 3, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [437] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_latte(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
