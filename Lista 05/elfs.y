%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
%}

%union {
 int intval;
 double floatval;
 char *strval;
}


%token <strval> STRING
%token <floatval> APPROXNUM
%token <intval> INTNUM

%token ALGORITMO 
%token VAR
%token INICIO
%token COMENTARIO
%token ESCREVA
%token FIMALGORITMO

%token MAIORIGUAL
%token DIFERENTE
%token IGUAL
%token MENOR
%token MENORIGUAL
%token MAIOR

%token PONTOPONTO
%token VIRGULA
%token FCOLCHETE
%token ACOLCHETE
%token FPARENTESE
%token APARENTESE
%token ENTREASPAS
%token DOISPONTOS

%token SOMA
%token MENOS
%token MULTIPLICACAO
%token DIVISAO
%token RESTO
%token POTENCIA

%token LEIA
%token ATRIBUICAO
%token BRANCO 

%token VARIAVEL
%token REAL
%token NUMERO
%token CARACTERE
%token INTEIRO

%token SE
%token FIMSE
%token SENAO
%token ENTAO
%token ATE
%token DE 
%token FACA
%token PARA
%token FIMPARA
%token ENQUANTO
%token FIMENQUANTO
%token REPITA
%token FIMREPITA
%token QUEBRA_LINHA

%token RETORNE
%token PASSO
%token VETOR
%token CASO
%token FIMFACA
%token FUNCAO
%token FIMFUNCAO
%token OUTROCASO
%token PROCEDIMENTO
%token FIMPROCEDIMENTO





%left OU
%left E
%left MENOR MAIOR DIFERENTE IGUAL MENORIGUAL MAIORIGUAL 
%left SOMA MENOS
%left MULTIPLICACAO DIVISAO
%right POTENCIA RAIZQ



%start Input

%%


Input:
 
 | Input Line
;

Line:
   QUEBRA_LINHA
  | algoritmo_inicio QUEBRA_LINHA { printf("---Base do algoritmo---\n"); }

;


algoritmo_inicio:estrutura_algoritmo  {printf("----Em estrutura do algoritmo----\n");}
 | algoritmo_inicio estrutura_algoritmo {printf("----Em estrutura algoritmo----\n");} 
;


estrutura_algoritmo: ALGORITMO STRING QUEBRA_LINHA estrutura_comentario VAR QUEBRA_LINHA declaracao_variaveis_lista estrutura_corpo {printf("passando estrutura_cabacalho\n");}
;

/*Comentario apos cabecalho algoritmo*/
estrutura_comentario:/*nil*/ 
  | COMENTARIO QUEBRA_LINHA  estrutura_comentario {printf("Comentarios:\n");}  
;

/* declaracao de variaveis */

declaracao_variaveis_lista:
 declaracao_variaveis_lista QUEBRA_LINHA declaracao_variaveis
 | declaracao_variaveis
;

declaracao_variaveis: declaracao_variavel DOISPONTOS tipo_variavel
 |
;

declaracao_variavel: VARIAVEL VIRGULA  declaracao_variavel
 | VARIAVEL
;

tipo_variavel: REAL {printf("variavel tipo real...\n");}
| INTEIRO  {printf("variavel tipo inteiro...\n");}
| CARACTERE {printf("variavel tipo caractere...\n");}
;

estrutura_corpo: INICIO QUEBRA_LINHA corpo_algoritmo FIMALGORITMO
;

/* Corpo Algoritmo */
corpo_algoritmo:
 | COMENTARIO QUEBRA_LINHA corpo_algoritmo
 | lista_escreva QUEBRA_LINHA corpo_algoritmo
 | lista_leia QUEBRA_LINHA corpo_algoritmo
 | lista_atribuicao QUEBRA_LINHA corpo_algoritmo
 | lista_escreva corpo_algoritmo
 | lista_leia corpo_algoritmo
 | lista_atribuicao corpo_algoritmo
;

/* responsavel pelos escrevas */
lista_escreva: ESCREVA APARENTESE STRING FPARENTESE {printf("escreva simples...\n");} 
 | ESCREVA APARENTESE  STRING VIRGULA declaracao_variavel FPARENTESE  {printf("escreva com variaveis\n");}
 | ESCREVA APARENTESE  declaracao_variavel FPARENTESE   {printf("escreva so variaveis...\n");}
;

lista_leia: LEIA APARENTESE declaracao_variavel FPARENTESE 
;

lista_atribuicao: VARIAVEL ATRIBUICAO expr

;

expr: VARIAVEL     { printf("VARIAVEL:\n"); }
   | STRING        { printf("STRING\n");}
   | APPROXNUM     { printf("FLOAT\n");}
   | INTNUM        { printf("INTEIRO\n");}
   | RAIZQ '('expr')'   { printf("Funcao Raizq\n");} 
;

expr: expr SOMA expr { printf("ADD\n"); }
   | expr '-' expr { printf("SUB\n"); }
   | expr MULTIPLICACAO expr { printf("MUL\n"); }
   | expr DIVISAO expr { printf("DIV\n"); }
   | expr '^' expr { printf("POWER\n");}
   | '('expr')'   
;

%%

int yyerror(char *s) {
  printf("Erro: %s.Linha: %d. Token nao esperado: %s.\n", s, yylineno, yytext);
}

int main(int argc, char *argv[]) {
//tentativa de recebimento de arquivo
  if (argc < 2){
     printf("Digite o arquivo\n");
  } 
  else{
     yyin = fopen(argv[1], "r");
     if (!yyparse())
        fprintf(stderr, "---ALGORITMO FINALIZADO---\n");
     else
        fprintf(stderr, "Erros Encontrados.\n");
  }
}
