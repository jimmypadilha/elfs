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


estrutura_cabecalho: ALGORITMO STRING QUEBRA_LINHA estrutura_comment VAR QUEBRA_LINHA {printf("pegou primeira linha algoritmo\n");}
;

estrutura_comment: /*nil*/ 
  | COMMENT  estrutura_comment {printf("Comentarios:\n");}
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
