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
%token COMPR
%token COPIA
%token MAIUSC
%token INTERROMPA


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
	| Algoritmo NomeAlgoritmo Var Funcao Inicio Comandos FimAlgoritmo
	| Algoritmo NomeAlgoritmo Var Procedimento Inicio Comandos FimAlgoritmo
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

VarFuncao:

        | VAR TerminaLinha
        | VAR TerminaLinha DeclVar
        | error {erros++; yyerror("Problema no var da funcao", yylineno, yytext);}
;


Funcao:
	DeclFuncao VarFuncao Inicio Comandos RETORNE TipoRetorno TerminaLinha FIMFUNCAO TerminaLinha
;

DeclFuncao:
	FUNCAO VARIAVEL APARENTESE DeclVar FPARENTESE DOISPONTOS TipoVar TerminaLinha
;

TipoRetorno:
	STRING
	| VARIAVEL
	| error {erros++; yyerror("Tipo de retorno desconhecido", yylineno, yytext);}
;

Procedimento:
	DeclProc Inicio Comandos FIMPROCEDIMENTO TerminaLinha
; 

DeclProc:
	PROCEDIMENTO VARIAVEL TerminaLinha
;

DeclVar:
	DeclVarList DOISPONTOS TipoVar TerminaLinha
	| DeclVar DeclVarList DOISPONTOS TipoVar TerminaLinha
  	| DeclVarList DOISPONTOS TipoVar
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

Comandos:
	
	| Escreva Comandos
	| Leia Comandos
	| Atribuicao Comandos
	| Se Comandos
	| Escolha Comandos
	| Repita Comandos
	| Para Comandos
	| Enquanto Comandos
	| Proc Comandos
	| Interrompa Comandos
	| error {erros++; yyerror("Comando invalido", yylineno, yytext);}
;

Escreva:
	ESCREVA APARENTESE STRING FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL VIRGULA STRING FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL VIRGULA STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL VIRGULA STRING VIRGULA VARIAVEL VIRGULA STRING FPARENTESE TerminaLinha
	| ESCREVA APARENTESE STRING VIRGULA VARIAVEL VIRGULA VARIAVEL VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE VARIAVEL VIRGULA STRING FPARENTESE TerminaLinha
        | ESCREVA APARENTESE VARIAVEL VIRGULA STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE VARIAVEL VIRGULA STRING VIRGULA VARIAVEL VIRGULA STRING VIRGULA VARIAVEL FPARENTESE TerminaLinha
	| ESCREVA APARENTESE VARIAVEL APARENTESE VARIAVEL FPARENTESE FPARENTESE TerminaLinha
	| ESCREVA APARENTESE COPIA APARENTESE CopiaList FPARENTESE FPARENTESE TerminaLinha
	| error {erros++; yyerror("Problema no escreva", yylineno, yytext);}
;

Leia:
	LEIA APARENTESE VARIAVEL FPARENTESE TerminaLinha
	| error {erros++; yyerror("Problema no leia", yylineno, yytext);}
;

Atribuicao:
	VARIAVEL ATRIBUICAO Expr TerminaLinha
	| VARIAVEL ATRIBUICAO VARIAVEL APARENTESE DeclVarList FPARENTESE TerminaLinha
;

Se:
	SE Expr Entao TerminaLinha Comandos FimSe
	| SE Expr Entao TerminaLinha Comandos SENAO TerminaLinha Comandos FimSe
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
	ESCOLHA VARIAVEL TerminaLinha CasoList OutroCaso Comandos FIMESCOLHA TerminaLinha
;

CasoList:
	CASO DeclStringList TerminaLinha Comandos
	| CasoList CASO STRING TerminaLinha Comandos
;

OutroCaso:
	
	| OUTROCASO TerminaLinha
;

Repita:
	REPITA TerminaLinha Comandos ATE Expr TerminaLinha
	| REPITA TerminaLinha Comandos FIMREPITA TerminaLinha
;

Para:
	PARA VARIAVEL DE LimitePara ATE LimitePara PassoPara FACA TerminaLinha Comandos FIMPARA TerminaLinha
	| error {erros++; yyerror("Problema no para", yylineno, yytext);}
;

LimitePara:
	COMPR APARENTESE VARIAVEL FPARENTESE
	| Expr
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
	| MAIUSC Expr
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
        | error {erros++; yyerror("Problema na lista de variaveis do copia", yylineno, yytext);}
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

%%

int main(int argc, char *argv[]) {
  	if (argc < 2){
     		printf("Digite o arquivo\n");
  	}
	else{
    		yyin = fopen(argv[1], "r");
		erros = 0;
		yyparse();
		printf("Verificação finalizada.\n");

		if (erros == 0)
			printf("  Arquivo compilado com sucesso!\n");
     	return 0;
  }
}

int yyerror(char *s, int line, char *msg) {
  	//printf("ERRO->%d %s %s\n", line, s, msg);
	erros++;
	//printf("\nLinha %d: %s %s", line, msg, s);

	printf("%d: %s at %s in this line:\n%s\n",
               lineno, s, yytext, linebuf);

	return 0;
}

int yywrap(void){
	return 1;
}

