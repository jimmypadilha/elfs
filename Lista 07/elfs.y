%{
  /*Zona de inclusao de bibliotecas,estruturas de dados,
  * funcoes recorridos de C.
  */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.c"
#include "fila.c"

Fila* f;
extern FILE *yyin;
int erros;
tab_hash *t;
char *conc, *linha;
char escopo[30], var[30];
extern yylineno;
extern char *yytext;

 /*Funcao da Tabela Hash que insere o escopo e nome da variável*/
void inserir(tab_hash *t, char *var, char *escopo) {
  if (!Pesquisa(t, var, escopo))
	insere(t, var, escopo);
  else {
	erros++;
	printf(" ERRO: variável %s declarada mais de uma vez\n", var);
  }
}


void Verificar(tab_hash *t, char *var, char *escopo) {
  /*Pesquisa e uma funcao da tabela hash que retorna  se a variavel e seu escopo existem na tablea */
  if (!Pesquisa(t, var, escopo)) {
	erros++;
	printf("ERRO: variável %s não declarada no escopo %s\n", var, escopo );
  }
}

/* Funcao que concatena strings de uma linha de comando */
void Concatenar(char *texto){
	strcat(conc, texto);
}

/* Funcao que limpa a variavel utilizada para concatenacao de strings de um comando */
void Limpar(){
	strcpy(linha, conc);
	strcpy(conc, "" );
}

%}

 /*Zona de declarações bison*/ 

/*Union especifica o nosso conjunto de  possiveis tipos de valores semanticos*/
%union {
	int intval;
	double floatval;
	char *strval;
}

 /*Simbolos Terminais ou palavras reservadas   */

%token <strval> STRING
%token <floatval> APPROXNUM
%token <strval> INTNUM
%token <strval> VARIAVEL
%token <strval> COMENTARIO

%token  ALGORITMO 
%token VAR
%token INICIO
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
%type <strval> DeclVar  DeclVarList

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
	Algoritmo NomeAlgoritmo Var Funcao Procedimento Inicio {strcpy(escopo,"global");} Comandos FimAlgoritmo
;

Algoritmo:
	ALGORITMO {fila_insere(f, "#include <stdio.h>");} 
	| error {erros++; yyerror("Falta a palavra algoritmo", yylineno, yytext);}
;

NomeAlgoritmo:
	STRING TerminaLinha 
	| error {erros++; yyerror("Falta o nome do algoritmo", yylineno, yytext);}
;

 /* Inicio  Zona de declaracao de variaveis do programa principal */
Var:
	VAR TerminaLinha
	| VAR TerminaLinha DeclVar
	| error {erros++; yyerror("Falta a palavra var", yylineno, yytext);}
;

DeclVar:
        DeclVarList DOISPONTOS TipoVar TerminaLinha {  Concatenar($1);  Concatenar(" ;"); Limpar(); fila_insere(f, linha);}
        | DeclVarList DOISPONTOS TipoVar TerminaLinha DeclVar
        | DeclVarList DOISPONTOS TipoVar
;

TipoVar:
        INTEIRO {Concatenar("int ");}
        | REAL {Concatenar("float");}
        | CARACTER {Concatenar("char ");}
        | error {erros++; yyerror("Tipo invalido", yylineno, yytext);}
;

DeclVarList:
        VARIAVEL {strcpy(escopo, "global"); inserir(t, $1, escopo); Concatenar($1); Concatenar(";");}
        | VARIAVEL VIRGULA DeclVarList {strcpy(escopo, "local"); inserir(t, $1, escopo); strcpy(escopo, "global"); inserir(t, $1, escopo);}
        | error {erros++; yyerror("Problema na lista de variaveis", yylineno, yytext);}
;



	
    /* Inicio Zona de Declarações de Funções */ 

Funcao:
        | DeclFuncao VarFuncao Inicio {strcpy(escopo,"local");} Comandos RetorneFuncao FimFuncao
;

DeclFuncao:
        FUNCAO VARIAVEL APARENTESE {strcpy(escopo,"local");} DeclVarFuncao FPARENTESE DOISPONTOS TipoVar TerminaLinha
;

VarFuncao:
        
        | VAR TerminaLinha
        | VAR TerminaLinha DeclVarFuncao
        | error {erros++; yyerror("Problema no var da funcao", yylineno, yytext);}
;

DeclVarFuncao:
        DeclVarListFuncao DOISPONTOS TipoVar TerminaLinha {Limpar(); fila_insere(f, linha);}
        | DeclVarListFuncao DOISPONTOS TipoVar TerminaLinha DeclVarFuncao
        | DeclVarListFuncao DOISPONTOS TipoVar
;

DeclVarListFuncao:
        VARIAVEL {strcpy(escopo, "local"); inserir(t, $1, escopo); Concatenar($1); Concatenar(";");}
        | VARIAVEL VIRGULA DeclVarListFuncao {inserir(t, $1, escopo);}
        | error {erros++; yyerror("Problema na lista de variaveis da funcao", yylineno, yytext);}
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

 /* Inicio zona de declaração de procedimentos */
Procedimento:

	| DeclProc Inicio Comandos FIMPROCEDIMENTO TerminaLinha
; 

DeclProc:
	PROCEDIMENTO VARIAVEL TerminaLinha
;

Inicio:
        INICIO TerminaLinha {fila_insere(f, "void main() {");}
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
	| error {erros++; yyerror("Comando invalido", yylineno, yytext);}
;

Escreva:
	ESCREVA {Concatenar("printf(");} EscrevaList {Concatenar(");"); Limpar(); fila_insere(f, linha);} TerminaLinha 
;

EscrevaList:
	STRING {Concatenar($1);}
	| APARENTESE EscrevaList FPARENTESE 
	| STRING VIRGULA EscrevaList {Concatenar($1); Concatenar(",");}
	| VARIAVEL {Verificar(t, $1, escopo); Concatenar($1);}
	| VARIAVEL EscrevaList /* Chamada de funcao dentro do escreva */
	| VARIAVEL VIRGULA EscrevaList {Verificar(t, $1, escopo); Concatenar(",");}
	| COPIA APARENTESE CopiaList FPARENTESE
;

Leia:
	LEIA APARENTESE {Concatenar("scanf(");} LeiaList FPARENTESE {Concatenar(");"); Limpar(); fila_insere(f, linha);} TerminaLinha 
;

LeiaList:
	VARIAVEL {Verificar(t, $1, escopo); Concatenar($1);}
;

Atribuicao:
	VARIAVEL ATRIBUICAO Expr TerminaLinha {Verificar(t, $1, escopo); Limpar(); fila_insere(f, linha);}
	| VARIAVEL ATRIBUICAO VARIAVEL APARENTESE AtribuicaoList FPARENTESE TerminaLinha
;

AtribuicaoList:
        VARIAVEL {Verificar(t, $1, escopo); Concatenar($1); Concatenar(";");}
        | VARIAVEL VIRGULA AtribuicaoList {Verificar(t, $1, escopo);}
        | error {erros++; yyerror("Problema na lista de variaveis", yylineno, yytext);}
;

Se:
	SE {Concatenar("if");}  Expr Entao{Concatenar("{");Limpar(); fila_insere(f, linha);}  Comandos Senao FimSe {Limpar();fila_insere(f, linha);}
;

Senao:
	
	| SENAO{Concatenar("}else{");Limpar(); fila_insere(f, linha);} TerminaLinha Comandos 
;

Entao:
	ENTAO TerminaLinha
	| error {erros++; yyerror("Falta a palavra entao", yylineno, yytext);}
;

FimSe:
	FIMSE {Concatenar("}");} TerminaLinha 
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
        | error {erros++; yyerror("Problema na lista de strings", yylineno, yytext);}
;

VarUtil: 
        VARIAVEL {Verificar(t, $1, escopo);}
      | error {erros++; yyerror("Falta a variavel", yylineno, yytext);}       
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
	VARIAVEL {Verificar(t, $1, escopo); Concatenar($1);}
	| INTNUM {Concatenar($1);}
	| APPROXNUM
;
 
Expr: 
	Expr SOMA{Concatenar("+");} Expr 
	| Expr DIVISAO {Concatenar("/");} Expr
	| Expr MULTIPLICACAO{Concatenar("*");} Expr 
	| APARENTESE{Concatenar("(");} Expr FPARENTESE{Concatenar(")");} 
	| Expr MENOS{Concatenar("-");}  Expr
	| Expr MAIOR{Concatenar(">");}  Expr
	| Expr MAIORIGUAL{Concatenar(">=");}  Expr
	| Expr IGUAL{Concatenar("=");} Expr
	| Expr MENORIGUAL{Concatenar("<=");} Expr
	| Expr MENOR{Concatenar("<");} Expr
	| Expr RESTO{Concatenar("%");} Expr
	| Expr DIFERENTE{Concatenar("!=");} Expr
	| MAIUSC APARENTESE{Concatenar("(");}  Expr FPARENTESE{Concatenar(")");} 
	| COPIA APARENTESE{Concatenar("(");}  CopiaList FPARENTESE {Concatenar(")");} 
	| TK_Compr APARENTESE{Concatenar("(");} Expr FPARENTESE {Concatenar(")");}
        | error {erros++; yyerror("Expresao incorreta", yylineno, yytext);}
;

TK_Compr:
	COMPR  {Concatenar("strlen");} 
;
Expr:
	Expr OU{Concatenar("||");} Expr
	| Expr E{Concatenar("&&");} Expr
;

CopiaList:
        INTNUM
        | VARIAVEL VIRGULA CopiaList
        | error {erros++; yyerror("Problema na lista de variaveis do copia", yylineno, yytext);}
;


FimAlgoritmo:
	FIMALGORITMO TerminaLinha {fila_insere(f, "}");}
;

TerminaLinha:
        QUEBRA_LINHA
	| QUEBRA_LINHA TerminaLinha
        | TK_comentario QUEBRA_LINHA 
        | TK_comentario QUEBRA_LINHA TerminaLinha
;

TK_comentario:
	COMENTARIO {Concatenar($1); Limpar(); fila_insere(f, linha);} 
;
/*
Variavel:
	VARIAVEL {Verificar(t, $1, escopo);}
;
*/
%%

int main(int argc, char *argv[]) 
{
	FILE *arq;
	
  	if (argc < 2)
	{
     		printf("Digite o arquivo\n");
  	}else{
		f = fila_cria();
		
		conc=(char *)(malloc((sizeof(char)*100)));//variável para concatenação de strings
		
		linha=(char *)(malloc((sizeof(char)*100)));//variável para ser passada para a fila

		yyin = fopen(argv[1], "r");

		erros = 0;

		t = inicializarHash();

                yyparse();

		if (erros == 0)
		{
			printf("  Arquivo compilado com sucesso!\n"); 
			//    abrir_arq(arq);				
			if (!(arq=fopen("traducao.c","w+")))
			{
    				printf("erro na abertura do arquivo!");
        			exit(1);
 	    		}
			arq_imprime(f,arq);
				
			fila_libera(f);

			printf("  Transcrição feita com Sucesso!.\n");
		}else{
			printf("  Arquivo não compilado.\n");
		     }
                return 0;	     
	     }
}

int yyerror(char *s,int line, char *msg) {
  	if (line > 0 && line < 100) {
	printf("Erro na Linha: %d. %s .\n",line,s);
    
	return 0;  }
}

int yywrap(void){
	return 1;
}

