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

%%

arquivo:algoritmo
;

algoritmo:algoritmo_cabecalho STRING corpo_algoritmo 
;

