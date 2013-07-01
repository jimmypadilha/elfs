%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.c"

extern FILE *yyin;
int erros;
tab_hash *t;
char escopo[30], var[30];
extern yylineno;
extern char *yytext;

void inserir(tab_hash *t, char *var, char *escopo) {
if (!buscar(t, var, escopo))
insere(t, var, escopo);
else {
erros++;
printf(" ERRO: variável %s declarada mais de uma vez\n", var);
}
}

void checar_variavel(tab_hash *t, char *var, char *escopo) {
if (!buscar(t, var, escopo)) {
erros++;
printf("ERRO: variável %s não declarada no escopo %s\n", var, escopo );
    }
}
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
	Algoritmo NomeAlgoritmo Var Funcao Procedimento Inicio {strcpy(escopo,"global");} Comandos FimAlgoritmo
;

Algoritmo:
	ALGORITMO
	| error {erros++; yyerror("Falta a palavra algoritmo", yylineno, yytext);}
;

NomeAlgoritmo:
	STRING TerminaLinha
	| STRING {$1 = strdup(yytext); printf("Nome: %s\n", $1);} 
	| error {erros++; yyerror("Falta o nome do algoritmo", yylineno, yytext);}
;

Var:
	VAR TerminaLinha {strcpy(escopo,"local");} {strcpy(escopo,"global");}
	| VAR TerminaLinha DeclVar {strcpy(escopo,"local");} {strcpy(escopo,"global");}
	| error {erros++; yyerror("Falta a palavra var", yylineno, yytext);}
;

VarUtil: 
	VARIAVEL //{$1 = strdup(yytext); printf("Nome: %s\n", $1);}
	| error {erros++; yyerror("Falta a variavel", yylineno, yytext);}	
;

VarFuncao:
	
        | VAR TerminaLinha {strcpy(escopo,"local");} {strcpy(escopo,"global");}
        | VAR TerminaLinha DeclVar {strcpy(escopo,"local");} {strcpy(escopo,"global");}
        | error {erros++; yyerror("Problema no var da funcao", yylineno, yytext);}
;


Funcao:
	
	| DeclFuncao VarFuncao Inicio {strcpy(escopo,"local");} Comandos RetorneFuncao FimFuncao
;

DeclFuncao:
	FUNCAO VARIAVEL APARENTESE {strcpy(escopo,"local");} DeclVar FPARENTESE DOISPONTOS TipoVar TerminaLinha
;

RetorneFuncao:
	RETORNE TipoRetorno TerminaLinha
;

TipoRetorno:
	STRING
	| VARIAVEL
	| error {erros++; yyerror("Tipo de retorno desconhecido", yylineno, yytext);}
;

FimFuncao:
	FIMFUNCAO TerminaLinha
;

Procedimento:

	| DeclProc Inicio Comandos FIMPROCEDIMENTO TerminaLinha
; 

DeclProc:
	PROCEDIMENTO VARIAVEL TerminaLinha
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
	| error {erros++; yyerror("Tipo invalido", yylineno, yytext);}
;

DeclVarList:
	VARIAVEL //{$1 = strdup(yytext); inserir(t, $1, escopo);}
	| VARIAVEL VIRGULA DeclVarList //{$1 = strdup(yytext); inserir(t, $1, escopo);}
	| error {erros++; yyerror("Problema na lista de variaveis", yylineno, yytext);}
;

DeclStringList:
        STRING
        | STRING VIRGULA DeclStringList
        | error {erros++; yyerror("Problema na lista de strings", yylineno, yytext);}
;

Inicio:
	INICIO TerminaLinha
	| error {erros++; yyerror("Falta a palavra inicio", yylineno, yytext);}
;

Comandos:
	
	| Comandos Escreva
	| Comandos Leia
	| Comandos Atribuicao
	| Comandos Se
	| Comandos Escolha
	| Comandos Repita
	| Comandos Para
	| Comandos Enquanto
	// | Comandos Proc
	| Comandos Interrompa
	/*| error {erros++; yyerror("Comando invalido", yylineno, yytext);}*/
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
	| error {erros++; yyerror("Problema no se", yylineno, yytext);}
;

Senao:
	
	| SENAO TerminaLinha Comandos
;

Entao:
	ENTAO TerminaLinha
	| error {erros++; yyerror("Falta a palavra entao", yylineno, yytext);}
;

FimSe:
	FIMSE TerminaLinha
	| error {erros++; yyerror("Falta a palavra fimse", yylineno, yytext);}
;

Escolha:
	ESCOLHA VarUtil TerminaLinha CasoList OutroCaso Comandos FIMESCOLHA TerminaLinha
;

CasoList:
	CASO DeclStringList TerminaLinha Comandos
	| CASO DeclStringList TerminaLinha Comandos CasoList
;

OutroCaso:
	
	| OUTROCASO TerminaLinha
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
	COMPR APARENTESE VarUtil FPARENTESE
	| Expr
;

PassoPara:
		
	| PASSO INTNUM
;

Enquanto:
	ENQUANTO Expr FACA TerminaLinha Comandos FIMENQUANTO TerminaLinha
;
/*
Proc:
	VARIAVEL APARENTESE FPARENTESE TerminaLinha
;
*/
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
	FIMALGORITMO TerminaLinha
	| error {erros++; yyerror("Falta a palavra fimalgoritmo", yylineno, yytext);}
;

TerminaLinha:
        QUEBRA_LINHA
	| QUEBRA_LINHA TerminaLinha
        | COMENTARIO QUEBRA_LINHA
        | COMENTARIO QUEBRA_LINHA TerminaLinha
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
		t = cria_hash();
		if (erros == 0)
			printf("  Arquivo compilado com sucesso!\n");
		else
			printf("  Arquivo não compilado.\n");
     	return 0;
  }
}

int yyerror(char *s, int line, char *msg) {
  	//printf("ERRO->%d %s %s\n", line, s, msg);
	erros++;
	/*
	printf("Erro: %s \n", s);
	printf("\t %d ", line);
	printf("%s \n",msg);*/
	printf("Erro: %s \n\t%d %s\n", s, line, msg);


	return 0;
}

int yywrap(void){
	return 1;
}

