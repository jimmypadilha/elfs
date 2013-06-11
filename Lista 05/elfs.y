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
%token CASO
%token FIMFACA
%token FUNCAO
%token FIMFUNCAO
%token OUTROCASO
%token PROCEDIMENTO
%token FIMPROCEDIMENTO
%token PASSO
%token VETOR
%token RETORNE





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


algoritmo_inicio:estrutura_algoritmo  {printf("***Chamando Estrutura do Algoritmo----\n");}
 | algoritmo_inicio estrutura_algoritmo {printf("***Chamando Estrutura do Algoritmo----\n");} 
;


estrutura_algoritmo: ALGORITMO STRING QUEBRA_LINHA estrutura_comentario VAR QUEBRA_LINHA declaracao_variaveis_lista  bloco_intermediario estrutura_corpo {printf("***Estrutura Completa ALGORITMO...\n");}
;

/*Comentario apos cabecalho algoritmo*/
estrutura_comentario:/*nil*/ 
  | COMENTARIO QUEBRA_LINHA  estrutura_comentario {printf("***Comentarios...\n");}  
;
bloco_intermediario:declaracao_procedimentos_funcoes
 |
;

/* declaracao de variaveis */

declaracao_variaveis_lista:declaracao_variaveis_lista QUEBRA_LINHA declaracao_variaveis
 | declaracao_variaveis
 |
;
declaracao_variaveis: declaracao_variavel DOISPONTOS tipo_variavel QUEBRA_LINHA 
;

declaracao_variavel: declaracao_variavel  VIRGULA VARIAVEL
 | VARIAVEL
;

tipo_variavel: REAL {printf("variavel tipo real...\n");}
| INTEIRO  {printf("variavel tipo inteiro...\n");}
| CARACTERE {printf("variavel tipo caractere...\n");}
;

/* estrutura do corpo do algoritmo */
estrutura_corpo: INICIO QUEBRA_LINHA corpo_algoritmo FIMALGORITMO{printf("***CORPO ALGORITMO...\n");}
;

corpo_algoritmo:
 | COMENTARIO QUEBRA_LINHA corpo_algoritmo
 | lista_escreva QUEBRA_LINHA corpo_algoritmo
 | lista_leia QUEBRA_LINHA corpo_algoritmo
;

/* responsavel pelos escrevas */
lista_escreva: ESCREVA APARENTESE STRING FPARENTESE  {printf("escreva simples...\n");} 
 | ESCREVA APARENTESE  STRING VIRGULA declaracao_variavel FPARENTESE  {printf("escreva com variaveis\n");}
 | ESCREVA APARENTESE  declaracao_variavel FPARENTESE   {printf("escreva so variaveis...\n");}
 | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING FPARENTESE {printf("escreva invertido ...\n");}
;



/*responsavel pelos leias*/
lista_leia: LEIA APARENTESE declaracao_variavel FPARENTESE 
;

/* funcoes e procedimentos */

declaracao_procedimentos_funcoes:procedimento_funcoes_lista QUEBRA_LINHA 
;

procedimento_funcoes_lista: procedimento_funcoes_lista QUEBRA_LINHA proc_func_declaracao
 | proc_func_declaracao
;

proc_func_declaracao: procedimento_declaracao
;

procedimento_declaracao:procedimento_cabecalho QUEBRA_LINHA procedimento_variaveis QUEBRA_LINHA corpo_procedimento
;

procedimento_cabecalho: procedimento_identificacao
 | procedimento_identificacao lista_parametros
;

procedimento_identificacao:PROCEDIMENTO VARIAVEL
;

lista_parametros:APARENTESE procedimento_variaveis FPARENTESE {printf("...\n");} 

;
 
//procedimento_especificacao_parametro: procedimento_cabecalho {printf("indo pra cabcalho procedimento...\n");} 
;

corpo_procedimento:PROCEDIMENTO  corpo_algoritmo FIMPROCEDIMENTO  {printf("ind pra corpo de procedimento...\n");} 
;

procedimento_variaveis:declaracao_variaveis
 |VAR QUEBRA_LINHA declaracao_variaveis

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
