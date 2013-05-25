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
%type <intval> val_list opt_val_list 
%type <intval> groupby_list opt_asc_desc
%type <intval> table_references 
%type <intval> column_list


 /* Simbolo nao terminal de Inicio*/
%start stmt_list

%%
 

stmt_list:  stmt ';'
 | stmt_list stmt ';'
;


stmt: select_stmt  {printf("ddd\n"); } 
;

select_stmt: SELECT select_expr_list {printf("Select No data %d\n",$2);};
 |  SELECT select_expr_list FROM table_references 
	opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list
	{printf("SELECT %d %d  ",$2,$4);};
;


select_expr_list: select_expr {$$ = 1;}
	| select_expr_list ',' select_expr {$$ = $1 + 1; }
	| '*' {printf("Selecionou tudo"); $$=1;}
;


select_expr: expr opt_as_alias; 

opt_as_alias: AS NAME { printf("ALIAS %s", $2); free($2); }
  | NAME              { printf("ALIAS %s", $1); free($1); }
  | /* nil */
  ;
opt_having: /* nil */ | HAVING expr { printf("HAVING"); };

opt_orderby: /* nil */ | ORDER BY groupby_list { printf("ORDERBY %d", $3); }
   ;

opt_where: /* nil */ 
   | WHERE expr { printf("WHERE"); };  
   
opt_groupby: /* nil */ 
   | GROUP BY groupby_list 
                             { printf("GROUPBYLIST %d", $3); }
;

opt_limit: /* nil */ | LIMIT expr { printf("LIMIT 1"); }
  | LIMIT expr ',' expr             { printf("LIMIT 2"); }
  ; 

opt_into_list: /* nil */ 
   | INTO column_list { printf("INTO %d", $2); }
   ; 

column_list: NAME { printf("COLUMN %s", $1); free($1); $$ = 1; }
  | column_list ',' NAME  { printf("COLUMN %s", $3); free($3); $$ = $1 + 1; }
  ;
  
groupby_list: expr opt_asc_desc
                             { printf("GROUPBY %d",  $2); $$ = 1; }
   | groupby_list ',' expr opt_asc_desc
                             { printf("GROUPBY %d",  $4); $$ = $1 + 1; }
   ;
 
opt_asc_desc: /* nil */ { $$ = 0; }
   | ASC                { $$ = 0; }
   | DESC               { $$ = 1; }
    ;

  
 /******** expressoes *****/
 expr: NAME         { printf("NAME %s", $1); free($1); }
   | NAME '.' NAME { printf("FIELDNAME %s.%s", $1, $3); free($1); free($3); }
   | STRING        { printf("STRING %s", $1); free($1); }
   | INTNUM        { printf("NUMBER %d", $1); }
   | APPROXNUM     { printf("FLOAT %g", $1); }
   | BOOL          { printf("BOOL %d", $1); }
   ;
  
expr: expr '+' expr { printf("ADD\n"); }
   | expr '-' expr { printf("SUB\n"); }
   | expr '*' expr { printf("MUL\n"); }
   | expr '/' expr { printf("DIV\n"); }
   | '-' expr %prec UMINUS { printf("NEG\n"); }
   | expr ANDOP expr { printf("AND\n"); }
   | expr OR expr { printf("OR\n"); }
   | expr COMPARISON '(' select_stmt ')' { printf("CMPSELECT %d\n", $2); }
   | expr '|' expr { printf("BITOR\n"); }
   | expr '&' expr { printf("BITAND\n"); }
   | expr '^' expr { printf("BITXOR\n"); }
   ;    

expr:  expr IS NULLX     { printf("ISNULL"); }
   |   expr IS BOOL      { printf("ISBOOL %d", $3); }
   ;

expr: NAME '(' opt_val_list ')' {  printf("CALL %d %s", $3, $1); free($1); }
   ;

opt_val_list: /* nil */ { $$ = 0; }
   | val_list
   ; 

val_list: expr { $$ = 1; }
   | expr ',' val_list { $$ = 1 + $3; }
   ;   

   
table_references:    table_reference { $$ = 1; }
    | table_references ',' table_reference { $$ = $1 + 1; }
    ;

table_reference:  table_factor
;

table_factor:
    NAME { printf("TABLE %s", $1); free($1); }
  | NAME '.' NAME { printf("TABLE %s.%s", $1, $3);
                               free($1); free($3); }
  | '(' table_references ')' { printf("TABLE_REFERENCES %d", $2); }
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
