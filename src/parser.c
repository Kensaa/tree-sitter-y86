#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  sym_comment = 18,
  sym_source_file = 19,
  sym_line = 20,
  sym_label = 21,
  sym_instruction = 22,
  sym_directive = 23,
  sym_arg_list = 24,
  sym_arg = 25,
  sym_register = 26,
  sym_index = 27,
  aux_sym_source_file_repeat1 = 28,
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
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_directive] = "directive",
  [sym_arg_list] = "arg_list",
  [sym_arg] = "arg",
  [sym_register] = "register",
  [sym_index] = "index",
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
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_directive] = sym_directive,
  [sym_arg_list] = sym_arg_list,
  [sym_arg] = sym_arg,
  [sym_register] = sym_register,
  [sym_index] = sym_index,
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
  [sym_comment] = {
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
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
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
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(23);
      if (lookahead == ':') ADVANCE(20);
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
      if (lookahead == '\n') ADVANCE(19);
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
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_line] = STATE(3),
    [sym_label] = STATE(8),
    [sym_instruction] = STATE(19),
    [sym_directive] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    STATE(17), 1,
      sym_arg,
    STATE(22), 1,
      sym_arg_list,
    STATE(15), 2,
      sym_register,
      sym_index,
  [29] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_label,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_instruction,
      sym_directive,
  [56] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(30), 1,
      sym__newline,
    ACTIONS(33), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_label,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_instruction,
      sym_directive,
  [83] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 8,
      anon_sym_eax,
      anon_sym_ecx,
      anon_sym_edx,
      anon_sym_ebx,
      anon_sym_esi,
      anon_sym_edi,
      anon_sym_esp,
      anon_sym_ebp,
  [97] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    STATE(17), 1,
      sym_arg,
    STATE(22), 1,
      sym_arg_list,
    STATE(15), 2,
      sym_register,
      sym_index,
  [123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    STATE(27), 1,
      sym_arg,
    STATE(15), 2,
      sym_register,
      sym_index,
  [143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      sym__newline,
    STATE(23), 2,
      sym_instruction,
      sym_directive,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
  [170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
  [180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
  [190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 2,
      sym__newline,
      anon_sym_COMMA,
  [201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 3,
      sym_identifier,
      sym__newline,
      anon_sym_DOT,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 2,
      sym__newline,
      anon_sym_COMMA,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    STATE(26), 1,
      sym_register,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(58), 1,
      anon_sym_COMMA,
  [247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 2,
      sym__newline,
      anon_sym_COMMA,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__newline,
  [262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_identifier,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym__newline,
  [283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym__newline,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym__newline,
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_number,
  [304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 219,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 247,
  [SMALL_STATE(19)] = 255,
  [SMALL_STATE(20)] = 262,
  [SMALL_STATE(21)] = 269,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 311,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 3, 0, 0),
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
