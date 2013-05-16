%{
#include <stdio.h>
#include <stdlib.h>
%}

%token ALL
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
     | Expression END
;

Expression:
     SELECT ALL FROM TABELA
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
