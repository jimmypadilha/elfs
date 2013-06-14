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





%left OU
%left E
%left MENOR MAIOR DIFERENTE IGUAL MENORIGUAL MAIORIGUAL 
%left SOMA MENOS
%left MULTIPLICACAO DIVISAO
%right POTENCIA RAIZQ



%start Input

%%


Input:

 | Input estrutura_algoritmo QUEBRA_LINHA { printf("---Base do algoritmo---\n"); }
;

estrutura_algoritmo:
 ALGORITMO STRING
 | COMENTARIO {printf("comentario\n");}
 | VAR
 | declaracao_parte
 | bloco_intermediario
 | estrutura_corpo {printf("***Estrutura Completa ALGORITMO...\n");}
;

/* chama estrutura de procedimentos */
bloco_intermediario:declaracao_procedimentos_funcoes {printf("***Chama Estrutura Procedimento e funcoes\n");}
| 
;

/* declaracao de variaveis */

declaracao_parte:
 declaracao_variaveis_lista 
;

declaracao_variaveis_lista: declaracao_variaveis_lista declaracao_variaveis
 | declaracao_variaveis 
;
declaracao_variaveis: declaracao_variavel DOISPONTOS tipo_variavel 
;

declaracao_variavel: declaracao_variavel  VIRGULA VARIAVEL
 | VARIAVEL 
;

tipo_variavel: REAL {printf("variavel tipo real...\n");}
| INTEIRO  {printf("variavel tipo inteiro...\n");}
| CARACTER {printf("variavel tipo caractere...\n");}
;

/* estrutura do corpo do algoritmo */
estrutura_corpo:
 INICIO {printf("INICIO\n");}
 | comandos {printf("CORPO ALGORITMO\n");}
 | FIMALGORITMO{printf("FIM ALGORITMO...\n");}
;

comandos:
 comando
 | comandos comando QUEBRA_LINHA
 | comando COMENTARIO
;

comando:
 lista_escreva
 | lista_leia
 | atribuicao
 | se
;

/* responsavel pelos escrevas */
lista_escreva: ESCREVA APARENTESE STRING FPARENTESE  {printf("escreva simples...\n");} 
 | ESCREVA APARENTESE  STRING VIRGULA declaracao_variavel FPARENTESE  {printf("escreva com variaveis\n");}
 | ESCREVA APARENTESE  declaracao_variavel FPARENTESE   {printf("escreva so variaveis...\n");}
 | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING FPARENTESE {printf("escreva invertido ...\n");}
 | ESCREVA APARENTESE declaracao_variavel VIRGULA STRING VIRGULA declaracao_variavel FPARENTESE {printf("variavel, string, variavel");}
;



/*responsavel pelos leias*/
lista_leia: LEIA APARENTESE declaracao_variavel FPARENTESE {printf("leia\n");}
;

/*responsavel pelas atribuicoes*/
atribuicao:
 VARIAVEL ATRIBUICAO lista_expr {printf("atribuicao\n");}
;

lista_expr:
 expr
 | expr lista_expr
;

expr:
 VARIAVEL {printf("VARIAVEL\n");}
 | INTNUM        { printf("INTEIRO\n");}
 | APPROXNUM     { printf("FLOAT\n");}
 | expr SOMA expr { printf("ADD\n"); }
 | expr MULTIPLICACAO expr { printf("MUL\n"); }
 | expr DIVISAO expr { printf("DIV\n"); }
 | APARENTESE expr FPARENTESE
 | expr MAIOR expr
 | expr MAIORIGUAL expr 
;

se:
 SE APARENTESE expr FPARENTESE ENTAO
 | comandos
 | SENAO
 | FIMSE
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
