%{
#include <stdio.h>
#include <stdlib.h>
%}

%token ALL
%token IGUAL
%token SELECT
%token FROM
%token WHERE
%token AS
%token AND
%token ORDER BY
%token LIKE
%token TABELA
%token COLUNA
%token VALOR
%token END

%start Input
%%

Input:
     
     | Input Line
;

Line:
     END
     | Expression END { printf("Result: OK\n", $1); }
;

Expression:
     SELECT ALL FROM TABELA { $$=$1; }
;

%%

int yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  if (yyparse())
     fprintf(stderr, "Successful parsing.\n");
  else
     fprintf(stderr, "error found.\n");
}
