%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
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
%nonassoc UMINUS


%start Programa

%%


Programa:
	Algoritmo NomeAlgoritmo Var Inicio Comandos FimAlgoritmo
;

Algoritmo:
	ALGORITMO
	| error {erros++; yyerror("Falta a palavra algoritmo", yylineno, yytext);}
;

NomeAlgoritmo:
	STRING TerminaLinha 
	| error {erros++; yyerror("Falta o nome do algoritmo", yylineno, yytext);}
;

Var:
	VAR TerminaLinha
	| VAR TerminaLinha DeclVar
	| error {erros++; yyerror("Falta a palavra var", yylineno, yytext);}
;

DeclVar:
	DeclVarList DOISPONTOS TipoVar TerminaLinha
	| DeclVar DeclVarList DOISPONTOS TipoVar TerminaLinha
;

TipoVar:
	INTEIRO
	| REAL
	| CARACTER
	| error {erros++; yyerror("Tipo invalido", yylineno, yytext);}
;

DeclVarList:
	VARIAVEL
	| VARIAVEL VIRGULA DeclVarList
	| error {erros++; yyerror("Problema na lista de variaveis", yylineno, yytext);}
;

DeclStringList:
        STRING
        | DeclStringList VIRGULA STRING
        | error {erros++; yyerror("Problema na lista de strings", yylineno, yytext);}
;

Inicio:
	INICIO TerminaLinha
	| error {erros++; yyerror("Falta a palavra inicio", yylineno, yytext);}
;
/*
Comandos:
	Comando
	| Comandos Comando
;
*/
Comandos:
	
	| Escreva Comandos
	| Leia Comandos
	| Atribuicao Comandos
	| Se Comandos
	| Escolha
	| Repita
	| Para
	| error {erros++; yyerror("Comando invalido", yylineno, yytext);}
;

Escreva:
	ESCREVA APARENTESE STRING FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA DeclVarList FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL VIRGULA STRING FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL VIRGULA STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE VARIAVEL VIRGULA STRING FPARENTESE TerminaLinha
        | ESCREVA APARENTESE VARIAVEL VIRGULA STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE VARIAVEL VIRGULA STRING VIRGULA VARIAVEL VIRGULA STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| error {erros++; yyerror("Problema no escreva", yylineno, yytext);}
;
/*
EscrevaList:

	| STRING
	| STRING EscrevaList
	| VIRGULA DeclVarList EscrevaList
	| VIRGULA STRING EscrevaList
	| VARIAVEL
	| EscrevaList VIRGULA DeclVarList
	| EscrevaList VIRGULA STRING
;
*/
Leia:
	LEIA APARENTESE VARIAVEL FPARENTESE TerminaLinha {printf("LEIAAAA\n");}
	| error {erros++; yyerror("Problema no leia", yylineno, yytext);}
;

Atribuicao:
	VARIAVEL ATRIBUICAO Expr TerminaLinha {printf("ATRIBUICAO ....\n");}
;

Se:
	SE Expr Entao TerminaLinha Comandos FimSe {printf("NO PRIMEIRO SE\n");}
	| SE Expr Entao TerminaLinha Comandos SENAO TerminaLinha Comandos FimSe {printf("SEEEEE....\n");}
	| error {erros++; yyerror("Problema no se", yylineno, yytext);}
;

Entao:
	ENTAO
	| error {erros++; yyerror("Falta a palavra entao", yylineno, yytext);}
;

FimSe:
	FIMSE TerminaLinha
	| error {erros++; yyerror("Falta a palavra fimse", yylineno, yytext);}
;

Escolha:
	ESCOLHA VARIAVEL TerminaLinha CasoList OUTROCASO TerminaLinha Comandos FIMESCOLHA TerminaLinha
;

CasoList:
	CASO DeclStringList TerminaLinha Comandos
	| CasoList CASO STRING TerminaLinha Comandos
;

Repita:
	REPITA TerminaLinha Comandos ATE Expr TerminaLinha
;

Para:
	PARA VARIAVEL DE INTNUM ATE VARIAVEL FACA TerminaLinha Comandos FIMPARA TerminaLinha {printf("PARA....\n");}
	
	/*PARA {printf("PARA\n");}
	| VARIAVEL {printf("VAR PARA\n");}
	| DE {printf("DE\n");}
	| INTNUM
	| ATE {printf("ATE\n");}
	| FACA {printf("FACA\n");}
	| TerminaLinha
	| Comandos
	| FIMPARA{printf("FIMPARA\n");}*/
;


;

Expr:
	VARIAVEL
	| INTNUM
	| APPROXNUM
    /*| STRING        { printf("STRING\n");}
    | RAIZQ APARENTESE expr FPARENTESE { printf("Funcao Raizq\n");} */
;
 
Expr: 
        Expr SOMA Expr
	| Expr DIVISAO Expr
	| Expr MULTIPLICACAO Expr
	| APARENTESE Expr FPARENTESE
	| Expr MENOS Expr
	| Expr MAIOR Expr
	| Expr MAIORIGUAL Expr
	| Expr IGUAL Expr
	| Expr MENORIGUAL Expr
	| Expr MENOR Expr
;

Expr:
	Expr OU Expr
	| Expr E Expr
;

FimAlgoritmo:
	FIMALGORITMO QUEBRA_LINHA
	| error {erros++; yyerror("Falta a palavra fimalgoritmo", yylineno, yytext);}
;

TerminaLinha:
        QUEBRA_LINHA
	| TerminaLinha QUEBRA_LINHA
        | COMENTARIO QUEBRA_LINHA
        | TerminaLinha COMENTARIO QUEBRA_LINHA
        | error {erros++; yyerror("Comentario",yylineno, yytext);}
;



/**********************************************************************************************************************************/

                                            /* chama estrutura de procedimentos */
bloco_intermediariosta_escreva:
        ESCREVA APARENTESE STRING FPARENTESE  {printf("escreva simples...\n");} 
        | ESCREVA APARENTESE  STRING VIRGULA declaracao_variavel FPARENTESE  {printf("escreva com variaveis\n");}
        | ESCREVA APARENTESE  declaracao_variavel FPARENTESE   {printf("escreva so variaveis...\n");}
        | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING FPARENTESE {printf("escreva invertido ...\n");}
        | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING VIRGULA declaracao_variavel FPARENTESE {printf("escreva invertido ...\n");}

;





/****************************************************** FUNCOES E PROCEDIMENTOS ****************************************/
declaracao_procedimentos_funcoes:
	procedimento_funcoes_lista QUEBRA_LINHA 
;

procedimento_funcoes_lista: 
	procedimento_funcoes_lista QUEBRA_LINHA proc_func_declaracao
	| proc_func_declaracao
;

proc_func_declaracao:
	procedimento_declaracao
	| funcao_declaracao
;

procedimento_declaracao:
	procedimento_cabecalho QUEBRA_LINHA VAR QUEBRA_LINHA declaracao_parte corpo_procedimento
;

funcao_declaracao:
	funcao_cabecalho QUEBRA_LINHA VAR QUEBRA_LINHA declaracao_parte corpo_funcao
;

		/* procedimento  cabecalho */
procedimento_cabecalho: 
	procedimento_identificacao
	| procedimento_identificacao lista_parametros
;

procedimento_identificacao:
	PROCEDIMENTO VARIAVEL
;

lista_parametros:
	APARENTESE procedimento_funcao_parametros FPARENTESE {printf("...\n");} 
;

procedimento_funcao_parametros:
	declaracao_parametros_lista
 	|VAR QUEBRA_LINHA declaracao_variaveis
;

declaracao_parametros_lista:
	 declaracao_parametros_lista VIRGULA procedimento_funcao_declaracao_parametros
	 | procedimento_funcao_declaracao_parametros
;

procedimento_funcao_declaracao_parametros:
	 declaracao_variavel DOISPONTOS tipo_variavel  
; 

	//corpo do procedimento
corpo_procedimento:
	INICIO QUEBRA_LINHA  corpo_algoritmo FIMPROCEDIMENTO  {printf("***Corpo PROCEDIMENTO...\n");} 
 ;

	/* funcao cabecalho */
funcao_cabecalho: 
	funcao_identificacao
 	| funcao_identificacao lista_parametros
;

funcao_identificacao:
	FUNCAO VARIAVEL
;

	/* corpo da funcao */
corpo_funcao:
	INICIO QUEBRA_LINHA corpo_algoritmo  RETORNE VARIAVEL  QUEBRA_LINHA FIMFUNCAO{printf("***Corpo FUNCAO...\n");}
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
  printf("ERRO->%d %s %s\n", line, s, msg);
  return 0;
}

int yywrap(void){
  return 1;
}

