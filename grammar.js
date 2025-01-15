/**
 * @file Y86 grammar for tree-sitter
 * @author Kensa <kensadevs@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "y86",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
