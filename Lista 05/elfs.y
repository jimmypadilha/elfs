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
  | algoritmo_inicio QUEBRA_LINHA { printf("base do algoritmo\n"); }

;


algoritmo_inicio:estrutura_algoritmo  {printf("algoritmo realizado com sucesso\n");}
 | algoritmo_inicio estrutura_algoritmo {printf("ALGORITMO REALIZADO COM SUCESSO\n");} 
;



estrutura_algoritmo: ALGORITMO STRING QUEBRA_LINHA estrutura_comentario VAR QUEBRA_LINHA estrutura_corpo {printf("passando estrutura_cabacalho\n");}
;

estrutura_comentario:/*nil*/ 
  | COMENTARIO QUEBRA_LINHA  estrutura_comentario {printf("Comentarios:\n");}
;


estrutura_corpo: INICIO QUEBRA_LINHA corpo_algoritmo FIMALGORITMO
;

corpo_algoritmo:
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
        fprintf(stderr, "---QUERY FINALIZADA---\n");
     else
        fprintf(stderr, "Erros Encontrados.\n");
  }
}
