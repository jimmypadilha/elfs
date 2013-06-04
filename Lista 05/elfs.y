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
%token LEIA
%token ESCREVA
%token ESCREVAL
%token CARACTERE
%token SE
%token SENAO
%token ENTAO



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
 | area_principal  
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

area_principal:composicao_principal
;

composicao_principal:INICIO sequencia_principal FIMALGORITMO
;

sequencia_principal: sequencia_principal principal
 | principal
;


principal:lista_escreva principal
 | lista_leia principal
 | abri_principal
 | fecha_principal
;

lista_escreva: ESCREVA '('STRING ')'  
 | ESCREVAL '('STRING ')'
 | ESCREVA '('STRING ',' lista_variavel ')' 
 | ESCREVAL '('STRING ',' lista_variavel ')'  
 | ESCREVA '('lista_variavel ')'
 | ESCREVAL '('lista_variavel')'
;

lista_leia: LEIA '('VARIAVEL')'
;


abri_principal: abri_principal_estruturas
;

fecha_principal:fecha_principal_estruturas
;


abri_principal_estruturas:abri_se_principal
;
fecha_principal_estruturas:fecha_se_principal
;


abri_se_principal: SE expressao_logica  ENTAO principal
 | SE expressao_logica  ENTAO fecha_principal SENAO abri_principal
;

fecha_se_principal:SE expressao_logica  ENTAO fecha_principal SENAO fecha_principal
;

%%

