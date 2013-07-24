%{
  /*Zona de inclusao de bibliotecas,estruturas de dados,
  * funcoes recorridos de C.
  */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;

%}

 /*Zona de declarações bison*/ 

/*Unio especifica o nosso conjunto de  possiveis tipos de valores semanticos*/
%union {
 int intval;
 double floatval;
 char *strval;
}

 /*Simbolos Terminais ou palavras reservadas   */

%token <strval> STRING
%token <floatval> APPROXNUM
%token <intval> INTNUM
%token <strval> VARIAVEL

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
%token COMPR
%token COPIA
%token MAIUSC
%token INTERROMPA

 /*Left - operadore associativo a esquerda
 * Right - operador associativo a direita
 * Nonassoc - operador que nao esta associado 
 */
%left OU
%left E
%left MENOR MAIOR DIFERENTE IGUAL MENORIGUAL MAIORIGUAL 
%left SOMA MENOS
%left MULTIPLICACAO DIVISAO RESTO
%right POTENCIA RAIZQ
%nonassoc UMINUS

 /*Simbolo Inicial */
%start Programa

%%


Programa:
	Algoritmo NomeAlgoritmo Var Funcao Procedimento Inicio Comandos FimAlgoritmo
;

Algoritmo:
	ALGORITMO
;

NomeAlgoritmo:
	STRING TerminaLinha
	| STRING
;

 /* Inicio  Zona de declaracao de variaveis do programa principal */
Var:
	VAR TerminaLinha
	| VAR TerminaLinha DeclVar
;

DeclVar:
        DeclVarList DOISPONTOS TipoVar TerminaLinha
        | DeclVarList DOISPONTOS TipoVar TerminaLinha DeclVar
        | DeclVarList DOISPONTOS TipoVar
;

TipoVar:
        INTEIRO
        | REAL
        | CARACTER
;

DeclVarList:
        VARIAVEL
        | VARIAVEL VIRGULA DeclVarList
;
	
    /* Inicio Zona de Declarações de Funções */ 

Funcao:
        | DeclFuncao VarFuncao Inicio Comandos RetorneFuncao FimFuncao
;

DeclFuncao:
        FUNCAO VARIAVEL APARENTESE DeclVar FPARENTESE DOISPONTOS TipoVar TerminaLinha
;

VarFuncao:
        
        | VAR TerminaLinha
        | VAR TerminaLinha DeclVar
;

RetorneFuncao:
        RETORNE TipoRetorno TerminaLinha
;

TipoRetorno:
        STRING
        | VARIAVEL
;

FimFuncao:
        FIMFUNCAO TerminaLinha
;

 /* Inicio zona de declaração de procedimentos */
Procedimento:

	| DeclProc Inicio Comandos FIMPROCEDIMENTO TerminaLinha
; 

DeclProc:
	PROCEDIMENTO VARIAVEL TerminaLinha
;

Inicio:
        INICIO TerminaLinha
;


 /* Zona de Comandos */
Comandos:
	
	| Comandos Escreva
	| Comandos Leia
	| Comandos Atribuicao
	| Comandos Se
	| Comandos Escolha
	| Comandos Repita
	| Comandos Para
	| Comandos Enquanto
	| Comandos Proc
	| Comandos Interrompa
;

Escreva:
	ESCREVA EscrevaList TerminaLinha
;

EscrevaList:
	STRING
	| APARENTESE EscrevaList FPARENTESE
	| STRING VIRGULA EscrevaList
	| VARIAVEL
	| VARIAVEL EscrevaList
	| VARIAVEL VIRGULA EscrevaList
	| COPIA APARENTESE CopiaList FPARENTESE
;

Leia:
	LEIA APARENTESE VARIAVEL FPARENTESE TerminaLinha
;

Atribuicao:
	VARIAVEL ATRIBUICAO Expr TerminaLinha
	| VARIAVEL ATRIBUICAO VARIAVEL APARENTESE DeclVarList FPARENTESE TerminaLinha
;

Se:
	SE Expr Entao Comandos Senao FimSe
;

Senao:
	
	| SENAO TerminaLinha Comandos
;

Entao:
	ENTAO TerminaLinha
;

FimSe:
	FIMSE TerminaLinha
;

Escolha:
	ESCOLHA VarUtil TerminaLinha CasoList OutroCaso /* Comandos */ FIMESCOLHA TerminaLinha
;

CasoList:
	CASO DeclStringList TerminaLinha Comandos
	| CASO DeclStringList TerminaLinha Comandos CasoList
;

OutroCaso:
	
	| OUTROCASO TerminaLinha Comandos
;

DeclStringList:
        STRING
        | STRING VIRGULA DeclStringList
;

VarUtil: 
        VARIAVEL
;

Repita:
	REPITA TerminaLinha Comandos LimiteRepita
;

LimiteRepita:
	ATE Expr TerminaLinha
	| FIMREPITA TerminaLinha
;

Para:
	PARA VarUtil DE LimitePara ATE LimitePara PassoPara FACA TerminaLinha Comandos FIMPARA TerminaLinha
;

LimitePara:
  //	COMPR APARENTESE VarUtil FPARENTESE
	 Expr
;

PassoPara:
		
	| PASSO INTNUM
;

Enquanto:
	ENQUANTO Expr FACA TerminaLinha Comandos FIMENQUANTO TerminaLinha
;

Proc:
	VARIAVEL APARENTESE FPARENTESE TerminaLinha
;

Interrompa:
	INTERROMPA TerminaLinha
;

Expr:
	VARIAVEL
	| INTNUM
	| APPROXNUM
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
	| Expr RESTO Expr
	| Expr DIFERENTE Expr
	| MAIUSC APARENTESE  Expr FPARENTESE
	| COPIA APARENTESE CopiaList FPARENTESE
	| COMPR APARENTESE Expr FPARENTESE
;

Expr:
	Expr OU Expr
	| Expr E Expr
;

CopiaList:
        INTNUM
        | VARIAVEL VIRGULA CopiaList
;


FimAlgoritmo:
	FIMALGORITMO TerminaLinha
;

TerminaLinha:
        QUEBRA_LINHA
	| QUEBRA_LINHA TerminaLinha
        | COMENTARIO QUEBRA_LINHA
        | COMENTARIO QUEBRA_LINHA TerminaLinha
;

%%

int main(int argc, char *argv[]) 
{
	FILE *arq;
	
  	if (argc < 2)
	{
     		printf("Digite o arquivo\n");
  	}else{
		yyin = fopen(argv[1], "r");
		if (!yyparse())
		{
			printf("  Arquivo compilado com sucesso!\n");
		}else{
			printf("  Arquivo não compilado.\n");
		     }
                return 0;	     
	     }
}

int yyerror(char *s) {
  printf("%s\n", s);
}
