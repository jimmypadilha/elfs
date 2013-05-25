%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
%}

%union {
 int intval;
 double floatval;
 char *strval;
}


%token <strval> STRING
%token <strval> VARIAVEL
%token <floatval> APPROXNUM
%token <intval> INTNUM

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
%right '^'
%nonassoc UMINUS


%start algoritmo_inicio

%%
algoritmo_inicio:estrutura_cabecalho QUEBRA_LINHA {printf("ALGORITMO REALIZADO COM SUCESSO\n");}
 | algoritmo_inicio estrutura_cabecalho QUEBRA_LINHA {printf("ALGORITMO REALIZADO COM SUCESSO\n");} 
;


estrutura_cabecalho: ALGORITMO STRING QUEBRA_LINHA estrutura_comment VAR QUEBRA_LINHA estrutura_var INICIO QUEBRA_LINHA lista_dentro_inicio  FIMALGORITMO
;

estrutura_comment: /*nil*/ 
  | COMMENT  estrutura_comment {printf("Comentarios:\n");}
;

estrutura_var: /*nil*/ 
  | variavel_declaracao ':' REAL QUEBRA_LINHA {printf("Variaveis\n");}
; 

variavel_declaracao: /*nil*/
  | VARIAVEL ',' variavel_declaracao
  | VARIAVEL
;

lista_dentro_inicio: /*nil*/
  | lista_escreva QUEBRA_LINHA lista_dentro_inicio
  | lista_leia QUEBRA_LINHA lista_dentro_inicio
  | lista_atribuicao QUEBRA_LINHA lista_dentro_inicio
;

lista_escreva: ESCREVA '('STRING ')'  {printf("pegou\n");} 
 | ESCREVAL '('STRING ')'  {printf("pegou1\n");}
 | ESCREVA '('STRING ',' variavel_declaracao ')'  {printf("pegou2\n");}
 | ESCREVAL '('STRING ',' variavel_declaracao ')'  {printf("pegou3\n");}
 | ESCREVA '('variavel_declaracao ')'   {printf("pegou4\n");}
 | ESCREVAL '('variavel_declaracao ')' {printf("pegou5\n");}
;

lista_leia: LEIA '('VARIAVEL')'
;

lista_atribuicao: VARIAVEL ATRIBUICAO expr 
;

expr: VARIAVEL     { printf("VARIAVEL:\n"); }
   | STRING        { printf("STRING\n");}
   | APPROXNUM     { printf("FLOAT\n");}
   | INTNUM        { printf("INTEIRO\n");}
   | RAIZQ '('expr')'   { printf("Funcao Raizq\n");} 
;

expr: expr '+' expr { printf("ADD\n"); }
   | expr '-' expr { printf("SUB\n"); }
   | expr '*' expr { printf("MUL\n"); }
   | expr '/' expr { printf("DIV\n"); }
   | expr '^' expr { printf("POWER\n");}
   | '-' expr %prec UMINUS { printf("NEG\n"); }
   | '('expr')'   
;


%%

int yyerror(char *s) {
  printf("%s\n", s);
}

int main(int argc, char *argv[]) {
//tentativa de recebimento de arquivo
/*  if (argc < 2){
     printf("Digite o arquivo\n");
  } 
  else{
     yyin = fopen(argv[1], "r");*/
     if (yyparse())
        fprintf(stderr, "---QUERY FINALIZADA---\n");
     else
        fprintf(stderr, "Erros Encontrados.\n");
 // }
}
