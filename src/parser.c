#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym__newline = 2,
  anon_sym_COLON = 3,
  anon_sym_DOT = 4,
  anon_sym_COMMA = 5,
  sym_number = 6,
  anon_sym_PERCENT = 7,
  anon_sym_eax = 8,
  anon_sym_ecx = 9,
  anon_sym_edx = 10,
  anon_sym_ebx = 11,
  anon_sym_esi = 12,
  anon_sym_edi = 13,
  anon_sym_esp = 14,
  anon_sym_ebp = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_POUND = 18,
  sym_string = 19,
  sym_source_file = 20,
  sym_line = 21,
  sym_label = 22,
  sym_instruction = 23,
  sym_directive = 24,
  sym_arg_list = 25,
  sym_arg = 26,
  sym_register = 27,
  sym_index = 28,
  sym_comment = 29,
  aux_sym_source_file_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__newline] = "_newline",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [sym_number] = "number",
  [anon_sym_PERCENT] = "%",
  [anon_sym_eax] = "eax",
  [anon_sym_ecx] = "ecx",
  [anon_sym_edx] = "edx",
  [anon_sym_ebx] = "ebx",
  [anon_sym_esi] = "esi",
  [anon_sym_edi] = "edi",
  [anon_sym_esp] = "esp",
  [anon_sym_ebp] = "ebp",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_directive] = "directive",
  [sym_arg_list] = "arg_list",
  [sym_arg] = "arg",
  [sym_register] = "register",
  [sym_index] = "index",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__newline] = sym__newline,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_number] = sym_number,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_eax] = anon_sym_eax,
  [anon_sym_ecx] = anon_sym_ecx,
  [anon_sym_edx] = anon_sym_edx,
  [anon_sym_ebx] = anon_sym_ebx,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_edi] = anon_sym_edi,
  [anon_sym_esp] = anon_sym_esp,
  [anon_sym_ebp] = anon_sym_ebp,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_directive] = sym_directive,
  [sym_arg_list] = sym_arg_list,
  [sym_arg] = sym_arg,
  [sym_register] = sym_register,
  [sym_index] = sym_index,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ecx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ebx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ebp] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 19,
        '#', 45,
        '%', 26,
        '(', 43,
        ')', 44,
        ',', 22,
        '-', 8,
        '.', 21,
        '0', 23,
        ':', 20,
        'e', 12,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 19,
        '#', 45,
        '%', 26,
        '(', 43,
        '-', 8,
        '.', 21,
        '0', 23,
        ':', 20,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_eax);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_eax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ecx);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ecx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_edx);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_edx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_ebx);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_ebx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_esi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_edi);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_edi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_esp);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_esp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ebp);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ebp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_eax] = ACTIONS(1),
    [anon_sym_ecx] = ACTIONS(1),
    [anon_sym_edx] = ACTIONS(1),
    [anon_sym_ebx] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_edi] = ACTIONS(1),
    [anon_sym_esp] = ACTIONS(1),
    [anon_sym_ebp] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_line] = STATE(3),
    [sym_label] = STATE(8),
    [sym_instruction] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_comment] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_arg,
    STATE(23), 1,
      sym_arg_list,
    ACTIONS(15), 2,
      sym__newline,
      anon_sym_POUND,
    STATE(16), 2,
      sym_register,
      sym_index,
  [30] = 9,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_label,
    STATE(28), 1,
      sym_comment,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_instruction,
      sym_directive,
  [60] = 9,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(32), 1,
      sym__newline,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(38), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_label,
    STATE(28), 1,
      sym_comment,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_instruction,
      sym_directive,
  [90] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_arg,
    STATE(23), 1,
      sym_arg_list,
    ACTIONS(15), 2,
      sym__newline,
      anon_sym_POUND,
    STATE(16), 2,
      sym_register,
      sym_index,
  [117] = 1,
    ACTIONS(41), 8,
      anon_sym_eax,
      anon_sym_ecx,
      anon_sym_edx,
      anon_sym_ebx,
      anon_sym_esi,
      anon_sym_edi,
      anon_sym_esp,
      anon_sym_ebp,
  [128] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_arg,
    STATE(16), 2,
      sym_register,
      sym_index,
  [148] = 6,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym__newline,
    STATE(35), 1,
      sym_comment,
    STATE(20), 2,
      sym_instruction,
      sym_directive,
  [168] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
      anon_sym_POUND,
  [176] = 1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
      anon_sym_POUND,
  [184] = 1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
      anon_sym_POUND,
  [192] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
      anon_sym_POUND,
  [200] = 1,
    ACTIONS(55), 4,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
      anon_sym_POUND,
  [207] = 2,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_POUND,
  [216] = 1,
    ACTIONS(61), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [223] = 1,
    ACTIONS(57), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_POUND,
  [229] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym__newline,
    STATE(35), 1,
      sym_comment,
  [239] = 2,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(63), 2,
      sym__newline,
      anon_sym_POUND,
  [247] = 1,
    ACTIONS(67), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_POUND,
  [253] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      sym__newline,
    STATE(33), 1,
      sym_comment,
  [263] = 1,
    ACTIONS(71), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_POUND,
  [269] = 2,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    STATE(36), 1,
      sym_register,
  [276] = 1,
    ACTIONS(73), 2,
      sym__newline,
      anon_sym_POUND,
  [281] = 1,
    ACTIONS(75), 2,
      sym__newline,
      anon_sym_POUND,
  [286] = 1,
    ACTIONS(77), 2,
      sym__newline,
      anon_sym_POUND,
  [291] = 2,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    STATE(34), 1,
      sym_register,
  [298] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [302] = 1,
    ACTIONS(45), 1,
      sym__newline,
  [306] = 1,
    ACTIONS(81), 1,
      sym_number,
  [310] = 1,
    ACTIONS(83), 1,
      sym__newline,
  [314] = 1,
    ACTIONS(85), 1,
      sym_string,
  [318] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(89), 1,
      sym__newline,
  [326] = 1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
  [330] = 1,
    ACTIONS(69), 1,
      sym__newline,
  [334] = 1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 286,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 298,
  [SMALL_STATE(28)] = 302,
  [SMALL_STATE(29)] = 306,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 314,
  [SMALL_STATE(32)] = 318,
  [SMALL_STATE(33)] = 322,
  [SMALL_STATE(34)] = 326,
  [SMALL_STATE(35)] = 330,
  [SMALL_STATE(36)] = 334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_y86(void) {
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
