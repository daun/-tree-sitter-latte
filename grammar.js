const REGEX_NAME = /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/;
const REGEX_STRING_UNQUOTED = REGEX_NAME;
const REGEX_STRING_SIMPLE_QUOTED = /\'([^\'\\\\]*(?:\\\\.[^\'\\\\]*)*)\'/;
const REGEX_STRING_INTERPOLATED = /[^#"\\\\]+/;
const REGEX_NUMBER = /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/;

module.exports = grammar({
  name: "latte",

  conflicts: ($) => [[$.binary_operator, $.unary_operator]],

  extras: ($) => [$.comment, /\s+/],

  inline: ($) => [$.argument],

  rules: {
    template: ($) => repeat(choice($.tag, $.comment, $.content)),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    comment: () => seq("{*", repeat(choice(/[^*]/, /\*[^}]/)), "*}"),

    variable: ($) => seq("$", $._name),

    tag: ($) => seq("{", $._statement, "}"),

    _statement: ($) =>
      choice(
        $.closing_statement,
        seq(
          choice(
            $.assignment_statement,
            $.for_statement,
            $.foreach_statement,
            $.if_statement,
            $.include_statement,
            $.block_statement,
            $.generic_tag_statement,
            prec(-1, $._expression),
          ),
          optional($.arguments),
          optional($.filters),
        ),
      ),

    assignment_statement: ($) =>
      seq(
        alias(choice("var", "default"), $.keyword),
        alias($.variable, $.variable),
        optional(seq("=", $._expression)),
      ),

    for_statement: ($) =>
      seq(
        alias("for", $.repeat),
        seq(alias($._expression, $.variable), repeat(seq(";", alias($._expression, $.variable)))),
      ),

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
          alias($._name, $.keyword),
        ),
      ),

    include_statement: ($) =>
      seq(
        alias(choice("include", "embed"), $.keyword),
        optional(alias("block", $.attribute)),
        choice($.variable, $._string),
      ),

    block_statement: ($) => seq(alias("block", $.keyword), choice($.variable, $._string)),

    generic_tag_statement: ($) => seq(alias($._name, $.keyword), optional($._expression)),

    _expression: ($) =>
      choice(
        alias($.variable, $.variable),
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

    arguments: ($) => repeat1(seq(",", $.argument)),

    argument: ($) => seq(alias($._name, $.argument), choice("=>", ":"), $._expression),

    filters: ($) => repeat1(seq("|", $.filter)),

    filter: ($) =>
      prec.left(
        seq(alias($._name, $.filter_name), optional(alias($.filter_arguments, $.arguments))),
      ),

    filter_arguments: ($) => seq(":", seq($._expression, repeat(seq(",", $._expression)))),

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
