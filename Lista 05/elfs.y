%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
%}


%token ALGORITMO 
%token VAR
%token INICIO
%token FIMALGORITMO
%token STRING
%token COMMENT
%token VARIAVEL
%token REAL
%token INTEIRO




%%

arquivo:algoritmo
;

algoritmo:algoritmo_cabecalho estrutura_comentario  corpo_algoritmo 
;

algoritmo_cabecalho:ALGORITMO STRING
;

estrutura_comentario:/*nil*/
  | COMMENT estrutura_comentario
;

corpo_algoritmo:area_declaracao_variavel
;

area_declaracao_variavel:VAR 
  | VAR lista_declaracao_variavel
;

lista_declaracao_variavel:lista_declaracao_variavel  declaracao_variavel
  | declaracao_variavel
;

declaracao_variavel: lista_variavel ':' tipo_variavel
;

lista_variavel:
  | VARIAVEL ',' lista_variavel
  | VARIAVEL
;

tipo_variavel:REAL
 | INTEIRO
 | CARACTERE
;
