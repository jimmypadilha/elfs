%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
%}

%union {
 int intval;
 double floatval;
 char *strval;
 int subtok;
}


%token <strval> NAME
%token <strval> STRING
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM

%token ALGORITMO
%token VAR
%token INICIO
%token LEIA
%token ESCREVA
%token FIMALGORITMO
%token RAIZQ


%%
