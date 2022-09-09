module.exports = grammar({
  name: "easyuo",

  word: $ => $.identifier,

  conflicts: $ => [
  ],

  rules: {
    script: $ => repeat(choice(
      $._simple_statement,
      $._compound_statement
    )),

    _compound_statement: $ => choice(
      $.subroutine_definition
    ),

    subroutine_definition: $ => seq(
      'sub',
      $.identifier,
      'return'
    ),

    identifier: $ => /[%\!\*\#][a-zA-Z0-9]+/,

    _expression: $ => choice(
      $.identifier,
      $._builtin_variables,
      //$.subroutine_name,
      $.integer,
      $.string
    ),

    //subroutine_name: $ => $.string,

    string: $ => /[a-zA-Z0-9]+/,

    integer: $ => /[1-9][0-9]*/,

    constant: $ => seq(
      '#',
      choice(
        'dot',
        'false',
        'smc',
        'spc',
        'true'
      )
    ),

    _builtin_variables: $ => choice(
      //$.character_variables,
      //$.status_variables,
      //$.container_variables,
      //$.last_action_variables,
      //$.find_item_variables,
      //$.shop_variables,
      //$.extended_variables,
      //$.client_variables,
      //$.combat_variables,
      //$.namespace_variables,
      //$.misc_variables,
      //$.result_variables,
      //$.tile_variables
      $.constant
    ),

    _simple_statement: $ => choice(
      $.lines_per_cycle_statement,
      $._expression
    ),

    lines_per_cycle_statement: $ => seq(
      'linesPerCycle',
      field('lines', $._expression)
    )
  }
});
