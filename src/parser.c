#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  anon_sym_sub = 2,
  anon_sym_return = 3,
  sym_string = 4,
  sym_integer = 5,
  anon_sym_POUND = 6,
  anon_sym_dot = 7,
  anon_sym_false = 8,
  anon_sym_smc = 9,
  anon_sym_spc = 10,
  anon_sym_true = 11,
  anon_sym_linesPerCycle = 12,
  sym_script = 13,
  sym__compound_statement = 14,
  sym_subroutine_definition = 15,
  sym__expression = 16,
  sym_constant = 17,
  sym__builtin_variables = 18,
  sym__simple_statement = 19,
  sym_lines_per_cycle_statement = 20,
  aux_sym_script_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_sub] = "sub",
  [anon_sym_return] = "return",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [anon_sym_POUND] = "#",
  [anon_sym_dot] = "dot",
  [anon_sym_false] = "false",
  [anon_sym_smc] = "smc",
  [anon_sym_spc] = "spc",
  [anon_sym_true] = "true",
  [anon_sym_linesPerCycle] = "linesPerCycle",
  [sym_script] = "script",
  [sym__compound_statement] = "_compound_statement",
  [sym_subroutine_definition] = "subroutine_definition",
  [sym__expression] = "_expression",
  [sym_constant] = "constant",
  [sym__builtin_variables] = "_builtin_variables",
  [sym__simple_statement] = "_simple_statement",
  [sym_lines_per_cycle_statement] = "lines_per_cycle_statement",
  [aux_sym_script_repeat1] = "script_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_return] = anon_sym_return,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_dot] = anon_sym_dot,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_smc] = anon_sym_smc,
  [anon_sym_spc] = anon_sym_spc,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_linesPerCycle] = anon_sym_linesPerCycle,
  [sym_script] = sym_script,
  [sym__compound_statement] = sym__compound_statement,
  [sym_subroutine_definition] = sym_subroutine_definition,
  [sym__expression] = sym__expression,
  [sym_constant] = sym_constant,
  [sym__builtin_variables] = sym__builtin_variables,
  [sym__simple_statement] = sym__simple_statement,
  [sym_lines_per_cycle_statement] = sym_lines_per_cycle_statement,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
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
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linesPerCycle] = {
    .visible = true,
    .named = false,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_subroutine_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_variables] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_lines_per_cycle_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_lines = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_lines] = "lines",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_lines, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'C') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'P') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'y') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_dot);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_smc);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_spc);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_linesPerCycle);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_linesPerCycle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_dot] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_smc] = ACTIONS(1),
    [anon_sym_spc] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_linesPerCycle] = ACTIONS(1),
  },
  [1] = {
    [sym_script] = STATE(10),
    [sym__compound_statement] = STATE(2),
    [sym_subroutine_definition] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_constant] = STATE(2),
    [sym__builtin_variables] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym_lines_per_cycle_statement] = STATE(2),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_sub] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_linesPerCycle] = ACTIONS(13),
  },
  [2] = {
    [sym__compound_statement] = STATE(3),
    [sym_subroutine_definition] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_constant] = STATE(3),
    [sym__builtin_variables] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym_lines_per_cycle_statement] = STATE(3),
    [aux_sym_script_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(7),
    [sym_string] = ACTIONS(19),
    [sym_integer] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_linesPerCycle] = ACTIONS(13),
  },
  [3] = {
    [sym__compound_statement] = STATE(3),
    [sym_subroutine_definition] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_constant] = STATE(3),
    [sym__builtin_variables] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym_lines_per_cycle_statement] = STATE(3),
    [aux_sym_script_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(26),
    [sym_string] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(32),
    [anon_sym_linesPerCycle] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      sym_integer,
    ACTIONS(38), 2,
      sym_identifier,
      sym_string,
    STATE(6), 3,
      sym__expression,
      sym_constant,
      sym__builtin_variables,
  [16] = 2,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(44), 5,
      anon_sym_sub,
      sym_string,
      sym_integer,
      anon_sym_POUND,
      anon_sym_linesPerCycle,
  [28] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(48), 5,
      anon_sym_sub,
      sym_string,
      sym_integer,
      anon_sym_POUND,
      anon_sym_linesPerCycle,
  [40] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(52), 5,
      anon_sym_sub,
      sym_string,
      sym_integer,
      anon_sym_POUND,
      anon_sym_linesPerCycle,
  [52] = 1,
    ACTIONS(54), 5,
      anon_sym_dot,
      anon_sym_false,
      anon_sym_smc,
      anon_sym_spc,
      anon_sym_true,
  [60] = 1,
    ACTIONS(56), 1,
      sym_identifier,
  [64] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [68] = 1,
    ACTIONS(60), 1,
      anon_sym_return,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 68,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines_per_cycle_statement, 2, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lines_per_cycle_statement, 2, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_definition, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine_definition, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_easyuo(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
