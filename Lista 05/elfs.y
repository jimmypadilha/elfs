%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
//extern int yylineno;
//extern char *yytext;

int erros;
extern yylineno, yytext;
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
%token CARACTER
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
%token ESCOLHA
%token FIMESCOLHA


%left OU
%left E
%left MENOR MAIOR DIFERENTE IGUAL MENORIGUAL MAIORIGUAL 
%left SOMA MENOS
%left MULTIPLICACAO DIVISAO
%right POTENCIA RAIZQ



%start Input

%%


Input:
 
 | Input estrutura_algoritmo QUEBRA_LINHA
;

estrutura_algoritmo:
 ALGORITMO STRING
 | COMENTARIO
 | VAR
 | declaracao_parte
 | bloco_intermediario
 | estrutura_corpo
 | error {erros++; yyerror ("PROBLEMA NA ESTRUTURA DO ALGORITMO", yylineno, yytext);};
;

/* chama estrutura de procedimentos */
bloco_intermediario:declaracao_procedimentos_funcoes {printf("***Chama Estrutura Procedimento e funcoes\n");}
| 
;

/* declaracao de variaveis */

declaracao_parte:
 declaracao_variaveis_lista 
;

declaracao_variaveis_lista:
 declaracao_variaveis_lista declaracao_variaveis
 | declaracao_variaveis 
;

declaracao_variaveis:
 declaracao_variavel DOISPONTOS tipo_variavel 
;

declaracao_variavel:
 declaracao_variavel VIRGULA VARIAVEL
 | VARIAVEL 
;

tipo_variavel:
 REAL
 | INTEIRO
 | CARACTER
 | error {erros++; yyerror("TIPO INVALIDO", yylineno, yytext);} ;
;

/* estrutura do corpo do algoritmo */
estrutura_corpo:
 INICIO
 | comandos
 | FIMALGORITMO
;

comandos:
 comando
 | comando COMENTARIO
;

comando:
 lista_escreva
 | lista_leia
 | atribuicao
 | se
 | escolha
 | repita
 | para
 | enquanto
;

/* responsavel pelos escrevas */
lista_escreva:
 ESCREVA APARENTESE STRING FPARENTESE
 | ESCREVA APARENTESE  STRING VIRGULA declaracao_variavel FPARENTESE
 | ESCREVA APARENTESE  declaracao_variavel FPARENTESE
 | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING FPARENTESE
 | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING VIRGULA declaracao_variavel FPARENTESE
 | ESCREVA APARENTESE STRING VIRGULA declaracao_variavel VIRGULA STRING FPARENTESE
 | ESCREVA APARENTESE STRING VIRGULA declaracao_variavel VIRGULA STRING VIRGULA declaracao_variavel FPARENTESE
 | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING VIRGULA declaracao_variavel VIRGULA STRING VIRGULA declaracao_variavel FPARENTESE
 /*| error {erros++; yyerror("COMANDO ESCREVA INCORRETO", yylineno, yytext);} ;*/
;



/*responsavel pelos leias*/
lista_leia:
 LEIA APARENTESE declaracao_variavel FPARENTESE
 /*| error {erros++; yyerror("COMANDO LEIA INCORRETO", yylineno, yytext);} ;*/
;

/*responsavel pelas atribuicoes*/
atribuicao:
 VARIAVEL ATRIBUICAO lista_expr
 /*| error {erros++; yyerror("ATRIBUICAO INCORRETA", yylineno, yytext);} ;*/
;

lista_expr:
 expr
 | expr lista_expr
;

expr:
 VARIAVEL
 | INTNUM      
 | VARIAVEL RESTO VARIAVEL
 | APPROXNUM    
 | expr SOMA expr
 | expr MENOS expr 
 | expr MULTIPLICACAO expr 
 | expr DIVISAO expr 
 | APARENTESE expr FPARENTESE
 | expr MAIOR expr 
 | expr MAIORIGUAL expr 
 | expr IGUAL expr  
 | expr MENOR expr 
 | expr MENORIGUAL expr 
 | expr E expr 
 | expr OU expr 
 | error {erros++; yyerror("EXPRESSAO INVALIDA", yylineno, yytext);} ;
;

se:
 SE expr ENTAO
 | SENAO
 | FIMSE
 /*| error {erros++; yyerror("SE INVALIDO", yylineno, yytext);} ;*/
;

strings:
 STRING
 | strings VIRGULA STRING
 | error {erros++; yyerror("STRING INVALIDA", yylineno, yytext);} ;
;

escolha:
 ESCOLHA VARIAVEL
 | CASO strings
 | OUTROCASO
 | FIMESCOLHA
/* | error {erros++; yyerror("ESCOLHA INVALIDO", yylineno, yytext);} ;*/
;

repita:
 REPITA
 | ATE lista_expr
/* | error {erros++; yyerror("REPITA INVALIDO", yylineno, yytext);} ;*/
;

para:
 PARA VARIAVEL DE INTNUM ATE expr FACA
 | FIMPARA
/* | error {erros++; yyerror("PARA INVALIDO", yylineno, yytext);} ;*/
;

enquanto:
 ENQUANTO expr FACA
 | FIMENQUANTO
 /*| error {erros++; yyerror("ENQUANTO INVALIDO", yylineno, yytext);} ;*/
;

/****** funcoes e procedimentos ******/

declaracao_procedimentos_funcoes:procedimento_funcoes_lista QUEBRA_LINHA 
;

procedimento_funcoes_lista: procedimento_funcoes_lista QUEBRA_LINHA proc_func_declaracao
 | proc_func_declaracao
;

proc_func_declaracao: procedimento_declaracao
 | funcao_declaracao
;

procedimento_declaracao:procedimento_cabecalho QUEBRA_LINHA VAR QUEBRA_LINHA declaracao_parte corpo_procedimento
;

funcao_declaracao:funcao_cabecalho QUEBRA_LINHA VAR QUEBRA_LINHA declaracao_parte corpo_funcao
;
/* procedimento  cabecalho */
procedimento_cabecalho: procedimento_identificacao
 | procedimento_identificacao lista_parametros
;

procedimento_identificacao:PROCEDIMENTO VARIAVEL
;

lista_parametros:APARENTESE procedimento_funcao_parametros FPARENTESE {printf("...\n");} 

;
 
procedimento_funcao_parametros:declaracao_parametros_lista
 |VAR QUEBRA_LINHA declaracao_variaveis
;

declaracao_parametros_lista: declaracao_parametros_lista VIRGULA procedimento_funcao_declaracao_parametros
 | procedimento_funcao_declaracao_parametros

;
procedimento_funcao_declaracao_parametros: declaracao_variavel DOISPONTOS tipo_variavel  
 ;
//fim cabecalho com parametros 

//corpo do procedimento
corpo_procedimento:INICIO QUEBRA_LINHA  comandos FIMPROCEDIMENTO  {printf("***Corpo PROCEDIMENTO...\n");} 
 ;

/* funcao cabecalho */
funcao_cabecalho: funcao_identificacao
 | funcao_identificacao lista_parametros
;
funcao_identificacao:FUNCAO VARIAVEL
;
//fim cabecalho com parametros 

//corpo da funcao
corpo_funcao:INICIO QUEBRA_LINHA comandos  RETORNE VARIAVEL  QUEBRA_LINHA FIMFUNCAO{printf("***Corpo FUNCAO...\n");}
;

%%

int main(int argc, char *argv[]) {
  if (argc < 2){
     printf("Digite o arquivo\n");
  } 
  else{
     yyin = fopen(argv[1], "r");
     printf("Compilando...\n");
     yyparse();

     if (erros == 0)
        printf("Sucesso!\n");
     return 0;
  }
}

int yyerror(char *s, int line, char *msg) {
  printf("ERRO->%d%s%s\n", line, s, msg);
  return 0;
}

int yywrap(void){
  return 1;
}

