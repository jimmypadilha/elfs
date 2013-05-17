 /*Definicoes */
%{
 #include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
%left ANDOP
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
%token ANDOP
%token AS
%token COLUMN
%token DIV
%token DOUBLE
%token FLOAT
%token INTEGER 
%token LIKE
%token NULLX
%token NUMBER
%token ASC
%token DESC
%token INTO
%token LIMIT
%token ORDER

 /*SIMBOLOS NAO TERMINAIS */

%type <intval> select_expr_list
%type <intval> table_references 
%type <intval> groupby_list opt_asc_desc



 /* Simbolo nao terminal de Inicio*/
%start stmt_list

%%
 

stmt_list:  stmt ';'
 | stmt_list stmt ';'
;


stmt: select_stmt  {printf("Base Statement\n"); } 
;

select_stmt: SELECT select_expr_list {printf("Select Vazio %d\n",$2);};
 |  SELECT select_expr_list FROM table_references 
 	opt_where opt_orderby
	{printf("SELECT %d %d  ",$2,$4);};
;


select_expr_list: select_expr {$$ = 1;}
	| select_expr_list ',' select_expr {$$ = $1 + 1; }
	| '*' {printf("Selecionou todos os campos\n"); $$=1;}
;

select_expr: expr opt_as_alias; 

opt_as_alias: AS NAME { printf("COMO %s\n", $2); free($2); }
  | NAME              { printf("COMO %s\n", $1); free($1); }
  | /* nil */
  ;
  
 /******** expressoes *****/
 expr: NAME         { printf("  NAME  %s\n", $1); free($1); }
   | NAME '.' NAME { printf("FIELDNAME %s.%s\n", $1, $3); free($1); free($3); }
   | STRING        { printf("STRING %s\n", $1); free($1); }
   | INTNUM        { printf("NUMBER %d\n", $1); }
   | APPROXNUM     { printf("FLOAT %g\n", $1); }
   | BOOL          { printf("BOOL %d\n", $1); }
   ;
  
expr: expr '+' expr { printf("ADD\n"); }
   | expr '-' expr { printf("SUB\n"); }
   | expr '*' expr { printf("MUL\n"); }
   | expr '/' expr { printf("DIV\n"); }
   | '-' expr %prec UMINUS { printf("NEG\n"); }
   | expr ANDOP expr { printf("AND\n"); }
   | expr OR expr { printf("OR\n"); }
   | expr '|' expr { printf("BITOR\n"); }
   | expr '&' expr { printf("BITAND\n"); }
   | expr '^' expr { printf("BITXOR\n"); }
   | expr COMPARISON expr { printf(" Comparando %d\n", $2); }
   | expr COMPARISON '(' select_stmt ')' { printf("Comparando_SELECT %d ", $2); }
   ;    
  
table_references:    table_reference { $$ = 1; }
    | table_references ',' table_reference { $$ = $1 + 1; }
    ;

table_reference:  table_factor
;

table_factor:
    NAME { printf("\nTABLE %s\n", $1); free($1); }
  | NAME '.' NAME { printf("TABLE REFERENCIANDO CAMPO %s.%s\n", $1, $3);
                               free($1); free($3); }
  | '(' table_references ')' { printf("TABLE_REFERENCES %d\n", $2); }
  ;

opt_where: /* nil */ 
   | WHERE expr { printf("WHERE \n"); };  

opt_orderby: /* nil */ | ORDER BY groupby_list { printf("ORDERBY %d\n", $3); }
;

groupby_list: expr opt_asc_desc
                             { printf("GROUPBY %d \n",  $2); $$ = 1; }
   | groupby_list ',' expr opt_asc_desc
                             { printf("GROUPBY %d\n",  $4); $$ = $1 + 1; }
   ;
 
opt_asc_desc: /* nil */ { $$ = 0; }
   | ASC                { $$ = 0; }
   | DESC               { $$ = 1; }
    ;

   
%%


int yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  if (yyparse())
     fprintf(stderr, "Sucesso.\n");
  else
     fprintf(stderr, "Erros Encontrados.\n");
}
