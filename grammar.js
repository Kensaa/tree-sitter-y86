/**
 * @file Y86 grammar for tree-sitter
 * @author Kensa <kensadevs@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "y86",

  extras: ($) => [/[ \t]+/],

  rules: {
    source_file: ($) => repeat($.line),

    identifier: ($) => /[a-zA-Z][0-9a-zA-Z_]*/,
    _newline: ($) => /[\n]+/,
    // line: ($) => seq(choice($.instruction, $.label, $.directive), $._newline),
    line: ($) =>
      seq(
        optional($.label),
        optional(choice($.instruction, $.directive)),
        optional($.comment),
        $._newline
      ),

    label: ($) => seq($.identifier, ":"),
    instruction: ($) => seq($.identifier, optional($.arg_list)),
    directive: ($) => seq(".", $.identifier, $.number),

    arg_list: ($) => seq($.arg, optional(seq(",", $.arg))),
    arg: ($) => choice($.index, $.number, $.identifier, $.register),

    number: ($) => /(0x[0-9a-fA-F]+)|(-?[0-9]+)/,
    register: ($) =>
      seq("%", choice("eax", "ecx", "edx", "ebx", "esi", "edi", "esp", "ebp")),
    index: ($) => seq($.number, "(", $.register, ")"),

    comment: ($) => /#.*/,
  },
});
