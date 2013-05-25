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
%token ESCREVAL
%token FIMALGORITMO
%token RAIZQ
%token COMMENT
%token REAL

%left '+' '-'
%left '*''/'
%right '^'
%nonassoc UMINUS

%start algoritmo_inicio

%%

algoritmo_inicio:estrutura_cabecalho;

estrutura_cabecalho:ALGORITMO STRING{printf("estrutura incompleta");}
  | ALGORITMO STRING COMMENT VAR estrutura_var INICIO lista_dentro_inicio FIMALGORITMO
; 

estrutura_var: /*nil*/
| VARIAVEL ':' REAL
| variavel_declaracao  ':' REAL
; 

variavel_declaracao: VARIAVEL
 | variavel_declaracao ',' VARIAVEL
;

lista_dentro_inicio: /*nil*/
 | ESCREVA '('STRING ')' 
 | ESCREVAL '('STRING ')'
 | ESCREVA '('STRING ',' variavel_declaracao ')'
 | ESCREVAL '('STRING ',' variavel_declaracao ')'
 | ESCREVA '('variavel_declaracao ')'
 | ESCREVAL '('variavel_declaracao ')'




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












