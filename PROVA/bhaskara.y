%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
%}

%token <strval> STRING
%token <strval> VARIAVEL
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
%token ATRIBUICAO
%token QUEBRA_LINHA

%left '+' '-'
%left '*''/'
%left '^'
%nonassoc UMINUS

%start algoritmo_inicio

%%
algoritmo_inicio:estrutura_cabecalho;

estrutura_cabecalho: ALGORITMO STRING QUEBRA_LINHA estrutura_comment QUEBRA_LINHA  VAR QUEBRA_LINHA estrutura_var QUEBRA_LINHA INICIO QUEBRA_LINHA lista_dentro_inicio QUEBRA_LINHA FIMALGORITMO
;

estrutura_comment: /*nil*/
  | COMMENT QUEBRA_LINHA estrutura_comment
;

estrutura_var: /*nil*/
  | variavel_declaracao  ':' REAL
; 

variavel_declaracao: VARIAVEL ',' variavel_declaracao
  | VARIAVEL
;

lista_dentro_inicio: /*nil*/
  | lista_escreva lista_dentro_inicio
  | lista_leia lista_dentro_inicio
  | lista_atribuicao lista_dentro_inicio
;

lista_escreva: ESCREVA '('STRING ')' 
 | ESCREVAL '('STRING ')'
 | ESCREVA '('STRING ',' variavel_declaracao ')'
 | ESCREVAL '('STRING ',' variavel_declaracao ')'
 | ESCREVA '('variavel_declaracao ')'
 | ESCREVAL '('variavel_declaracao ')'
;

lista_leia: LEIA '('VARIAVEL')'
;

lista_atribuicao: VARIAVEL ATRIBUICAO expr 
;

expr: VARIAVEL     { printf("VARIAVEL:  %s\n", $1); free($1); }
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
  | RAIZQ '('expr')'
 ;

