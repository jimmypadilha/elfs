 /*ddddd*/
%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
%}


%union {
 int intval;
 double floatval;
 char *strval;
 int subtok;
}



%token <strval> VARIAVEL
%token <strval> STRING
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM


%token ALGORITMO
%token VAR
%token INICIO
%token LEIA
%token ESCREVA
%token FIMALGORITMO
%token RAIZQ

%left OR
%left AND
%left <subtok> COMPARISON /*= <> <= etc */
%left '|'
%left '&'
%left '+' '-'
%left '*''/'
%left '^'
%nonassoc UMINUS

%%

expr: VARIAVEL         { printf("NAME:  %s\n", $1); free($1); }
   | STRING        { printf("STRING %s\n", $1); free($1); }
   | INTNUM        { printf("NUMBER %d\n", $1); }
   | APPROXNUM     { printf("FLOAT %g\n", $1); }
 ;



expr: expr '+' expr { printf("ADD\n"); }
   | expr '-' expr { printf("SUB\n"); }
   | expr '*' expr { printf("MUL\n"); }
   | expr '/' expr { printf("DIV\n"); }
   | expr '^' expr { printf("POWER\n");}
   | '-' expr %prec UMINUS { printf("NEG\n"); }
   | '('expr')'  
 ;

