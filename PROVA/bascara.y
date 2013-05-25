%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
%}

%union {
 double floatval;
 char *strval;
}


%token <strval> STRING
%token <strval> VARIAVEL
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
%token ESPACO

%left '+' '-'
%left '*''/'
%left '^'
%nonassoc UMINUS


%start algoritmo_inicio

%%
algoritmo_inicio:estrutura_cabecalho {printf("base do algoritmo\n");}
 | algoritmo_inicio estrutura_cabecalho
;


estrutura_cabecalho: ALGORITMO STRING QUEBRA_LINHA estrutura_comment VAR QUEBRA_LINHA estrutura_var QUEBRA_LINHA INICIO QUEBRA_LINHA lista_dentro_inicio QUEBRA_LINHA {printf("pegou primeira linha algoritmo\n");}
;

estrutura_comment: /*nil*/ 
  | COMMENT  estrutura_comment {printf("Comentarios:\n");}
;

estrutura_var: /*nil*/ 
  | variavel_declaracao ':' REAL {printf("Variaveis\n");}
; 

variavel_declaracao: VARIAVEL ',' variavel_declaracao
  | VARIAVEL
;

lista_dentro_inicio: /*nil*/
  | lista_escreva QUEBRA_LINHA lista_dentro_inicio
;

lista_escreva: ESCREVA '('STRING ')'  {printf("pegou\n");} 
 | ESCREVAL '('STRING ')'  {printf("pegou1\n");}
 | ESCREVA '('STRING ',' variavel_declaracao ')'  {printf("pegou2\n");}
 | ESCREVAL '('STRING ',' variavel_declaracao ')'  {printf("pegou3\n");}
 | ESCREVA '('variavel_declaracao ')'   {printf("pegou4\n");}
 | ESCREVAL '('variavel_declaracao ')' {printf("pegou5\n");}
;


%%

int yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  if (yyparse())
     fprintf(stderr, "---QUERY FINALIZADA---\n");
  else
    fprintf(stderr, "Erros Encontrados.\n");
}
