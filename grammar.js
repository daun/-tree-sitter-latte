const REGEX_NAME = /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/;
const REGEX_STRING_UNQUOTED = REGEX_NAME;
const REGEX_STRING_SIMPLE_QUOTED = /\'([^\'\\\\]*(?:\\\\.[^\'\\\\]*)*)\'/;
const REGEX_STRING_INTERPOLATED = /[^#"\\\\]+/;
const REGEX_NUMBER = /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/;

module.exports = grammar({
  name: "latte",

  conflicts: ($) => [[$.binary_operator, $.unary_operator]],

  extras: ($) => [$.comment, /[\s\u00A0\u200B\u2060\uFEFF]/],

  // inline: ($) => [$._variable, $._namespace_use_type],

  // supertypes: ($) => [$.statement, $.expression, $.primary_expression, $.type, $.literal],

  // word: ($) => $.name,

  rules: {
    template: ($) =>
      repeat(choice($.statement_directive, $.output_directive, $.comment, $.content)),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    comment: () => seq("{*", /[^*]*\*+([^\}*][^*]*\*+)*/, "}"),

    statement_directive: ($) => seq("{", $._statement, "}"),

    output_directive: ($) => seq("{", $._expression, optional($.filters), "}"),

    variable_name: ($) => seq("$", $._name),

    _statement: ($) =>
      choice(
        $.closing_statement,
        $.assignment_statement,
        $.for_statement,
        $.foreach_statement,
        $.if_statement,
        $.import_statement,
        $.from_statement,
        $.include_statement,
        $.block_statement,
        $.generic_tag_statement,
      ),

    assignment_statement: ($) =>
      seq(
        alias(choice("var", "default"), $.keyword),
        alias($.variable_name, $.variable),
        optional(seq("=", $._expression)),
      ),

    for_statement: ($) =>
      seq(
        alias("for", $.repeat),
        seq(alias($._expression, $.variable), repeat(seq(";", alias($._expression, $.variable)))),
      ),

    generic_tag_statement: ($) =>
      seq(alias($._name, $.tag), optional($._expression), optional($.filters)),

    foreach_statement: ($) =>
      seq(
        alias("foreach", $.repeat),
        $._expression,
        alias("as", $.keyword),
        $._expression,
        optional(seq(optional("=>"), $._expression)),
      ),

    if_statement: ($) =>
      choice(
        seq(
          choice(alias("if", $.conditional), alias("elseif", $.conditional_branch)),
          $._expression,
        ),
        alias("else", $.conditional_branch),
      ),

    closing_statement: ($) =>
      seq(
        "/",
        choice(
          alias("if", $.conditional_end),
          alias("foreach", $.repeat_end),
          alias($._name, $.tag),
        ),
      ),

    include_statement: ($) =>
      seq(
        alias(choice("include", "embed"), $.tag),
        optional(alias("block", $.attribute)),
        choice($.variable_name, $._string),
        optional($.argument),
      ),

    block_statement: ($) =>
      seq(alias("block", $.tag), choice($.variable_name, $._string), optional($.filters)),

    import_statement: ($) =>
      seq(alias("import", $.tag), $._expression, alias("as", $.keyword), alias($._name, $.name)),

    from_statement: ($) =>
      seq(
        alias("from", $.tag),
        $._expression,
        alias("import", $.keyword),
        alias($._name, $.name),
        optional(
          seq(
            alias("as", $.keyword),
            alias($._name, $.name),
            repeat(seq(",", alias($._name, $.name))),
          ),
        ),
      ),

    _expression: ($) =>
      choice(
        alias($.variable_name, $.variable),
        $._literal,
        seq("(", $._expression, optional($.filters), ")"),
        $.unary_expression,
        $.binary_expression,
        $.ternary_expression,
      ),

    _name: () => prec(1, REGEX_NAME),

    _literal: ($) => choice($._string, $.number, $.array, $.boolean, $.null),

    boolean: () => choice("true", "false"),

    null: () => "null",

    _string: ($) =>
      choice(alias(REGEX_STRING_SIMPLE_QUOTED, $.string), $.interpolated_string, $.unquoted_string),

    unquoted_string: ($) => REGEX_STRING_UNQUOTED,

    interpolated_string: ($) =>
      seq(
        '"',
        repeat(
          choice('\\"', "\\$", "\\\\", REGEX_STRING_INTERPOLATED, seq("{", $._expression, "}")),
        ),
        '"',
      ),

    number: () => REGEX_NUMBER,

    array: ($) => seq("[", optional(seq($._expression, repeat(seq(",", $._expression)))), "]"),

    argument: ($) => seq(REGEX_NAME, choice("=>", ":"), $._expression),

    filters: ($) => seq("|", $.filter, optional(repeat(seq("|", $.filter)))),

    filter: ($) =>
      prec.left(
        seq(alias($._name, $.filter_identifier), optional(alias($.filter_arguments, $.arguments))),
      ),

    filter_arguments: ($) =>
      seq(
        ":",
        optional(
          seq(
            alias($.filter_argument, $.argument),
            repeat(seq(",", alias($.filter_argument, $.argument))),
          ),
        ),
      ),

    filter_argument: ($) => alias($._expression, $.argument_value),

    binary_expression: ($) =>
      prec.right(seq($._expression, seq(alias($.binary_operator, $.operator), $._expression))),

    binary_operator: () =>
      choice(
        "or",
        "and",
        "===",
        "==",
        "!=",
        "<=>",
        ">=",
        "<=",
        ">",
        "<",
        "..",
        "+",
        "-",
        "~",
        "*",
        "/",
        "//",
        "%",
        "**",
        "??",
        "?:",
      ),

    unary_expression: ($) => prec.left(seq(alias($.unary_operator, $.operator), $._expression)),

    unary_operator: () => choice("-", "+", "not"),

    ternary_expression: ($) =>
      prec.left(seq($._expression, "?", $._expression, optional(seq(":", $._expression)))),
  },
});

/**
 * Creates a regex that matches the given word case-insensitively,
 * and will alias the regex to the word if aliasAsWord is true
 *
 * @param {string} word
 * @param {boolean} aliasAsWord
 *
 * @returns {RegExp|AliasRule}
 */
function keyword(word, aliasAsWord = true) {
  let result = new RegExp(word, "i");
  if (aliasAsWord) result = alias(result, word);
  return result;
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {ChoiceRule}
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a pipe
 *
 * @param {Rule} rule
 *
 * @returns {SeqRule}
 */
function pipeSep1(rule) {
  return seq(rule, repeat(seq("|", rule)));
}

/**
 * Creates a rule to  match one or more of the rules separated by an ampersand
 *
 * @param {Rule} rule
 * @returns {SeqRule}
 */
function ampSep1(rule) {
  return seq(rule, repeat(seq(token("&"), rule)));
}
