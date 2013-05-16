 /*Definicoes */
%{
 #include <stdlib.h>
 #include <stdlarg.h>
 #include <string.h>
%} 

%union {
 int intval;
 double floatval;
 char *strval;
 int subtok;
}

 /*valores literais */

%token <strval> NAME
%token <strval> STRING
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM

 /*Precedencia e nivel de operadores */ 

%left OR
%left AND
%nonassoc IN IS LIKE
%left <subtok> COMPARISON /*= <> <= etc */
%left '|'
%left '&'
%left '+' '-'
%left '*''/'
%left '^'
%nonassoc UMINUS

%token SELECT
%token FROM
%token WHERE
%token GROUP
%token BY
%token HAVING
%token DISTINCT
%token TABLE
%token AND
%token AS
%token COLUMN
%token DIV
%token DOUBLE
%token FLOAT
%token INTEGER 
%token LIKE
%token NULLX
%token NUMBER

 /*SIMBOLOS NAO TERMINAIS */

//%type <intval>  select_expr_list


 /* Simbolo nao terminal de Inicio*/
//%start stmt_list

%%
 
/*
stmt_list:  stmt ';'
 | stmt_list stmt ';'
;


stmt: select_stmt  {printf("ddd\n"); } 
;

select_stmt: SELECT select_expr_list {printf("Select No data %d",$2);};
 |  SELECT select_expr_list FROM table_references 
	opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list
	{printf("SELECT %d %d %d ",$2,$3,$5);};
;

select_expr_list: select_expr {$$ = 1;}
	| select_expr_list ',' select_expr {$$ = $1 + 1; }
	| '*' {printf("Selecionou tudo"); $$=1;}
;

select_expr: expr opt_as_alias; 
*/

 /******** expressoes *****/


expr: NAME         { printf("NAME %s", $1); free($1); }
   | NAME '.' NAME { printf("FIELDNAME %s.%s", $1, $3); free($1); free($3); }
   | STRING        { printf("STRING %s", $1); free($1); }
   | INTNUM        { printf("NUMBER %d", $1); }
   | APPROXNUM     { printf"FLOAT %g", $1); }
   | BOOL          { printf"BOOL %d", $1); }
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
