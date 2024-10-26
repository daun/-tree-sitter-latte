module.exports = grammar({
  name: "latte",

  extras: ($) => [$.comment, /\s+/],

  rules: {
    template: ($) => repeat($._latte),

    _latte: ($) => choice($.inline, $.include, $.block, $.text, $.foreach, $.if),

    _nested: ($) => choice($.inline, $.include, $.text, $.foreach, $.if),

    comment: ($) => seq("{*", /[^*]*/, "*}"),

    inline: ($) => seq("{", alias($.text, $.php), repeat(seq("|", $.modifier)), "}"),

    include: ($) => seq("{include", repeat($.parameter), "}"),

    block: ($) =>
      seq("{block", repeat($.parameter), "}", alias(repeat($._nested), $.body), "{/block}"),

    foreach: ($) =>
      seq(
        "{foreach",
        /\$[^\s]+/,
        "as",
        /\$[^\s=}]+/,
        optional(seq("=>", /\$[^}]+/)),
        "}",
        field("body", alias(repeat($._nested), $.body)),
        optional(field("alternative", $.else)),
        "{/foreach}",
      ),

    if: ($) =>
      seq(
        "{if",
        field("condition", alias(/[^}]+/, $.text)),
        "}",
        field("body", alias(repeat($._nested), $.body)),
        repeat(field("alternative", $.else_if)),
        optional(field("alternative", $.else)),
        "{/if}",
      ),

    else_if: ($) =>
      seq(
        "{elseif",
        field("condition", alias(/[^}]+/, $.text)),
        "}",
        field("body", alias(repeat($._nested), $.body)),
      ),

    else: ($) => seq("{else}", field("body", alias(repeat($._nested), $.body))),

    modifier: ($) => seq(/[^|:}]+/, repeat(seq(":", alias(/[^|:}]+/, $.parameter)))),

    parameter: ($) => /[^\s=]+[\s]*=[\s]*('[^']*'|"[^"]*"|\[[^]]*])/,

    text: ($) => prec(-1, /[^\s\|{*}-]([^\|{*}]*[^\|{*}-])?/),
  },
});
