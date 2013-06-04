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


