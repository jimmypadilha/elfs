/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     APPROXNUM = 259,
     INTNUM = 260,
     ALGORITMO = 261,
     VAR = 262,
     INICIO = 263,
     COMENTARIO = 264,
     ESCREVA = 265,
     FIMALGORITMO = 266,
     MAIORIGUAL = 267,
     DIFERENTE = 268,
     IGUAL = 269,
     MENOR = 270,
     MENORIGUAL = 271,
     MAIOR = 272,
     PONTOPONTO = 273,
     VIRGULA = 274,
     FCOLCHETE = 275,
     ACOLCHETE = 276,
     FPARENTESE = 277,
     APARENTESE = 278,
     ENTREASPAS = 279,
     DOISPONTOS = 280,
     SOMA = 281,
     MENOS = 282,
     MULTIPLICACAO = 283,
     DIVISAO = 284,
     RESTO = 285,
     POTENCIA = 286,
     LEIA = 287,
     ATRIBUICAO = 288,
     BRANCO = 289,
     VARIAVEL = 290,
     REAL = 291,
     NUMERO = 292,
     CARACTER = 293,
     INTEIRO = 294,
     SE = 295,
     FIMSE = 296,
     SENAO = 297,
     ENTAO = 298,
     ATE = 299,
     DE = 300,
     FACA = 301,
     PARA = 302,
     FIMPARA = 303,
     ENQUANTO = 304,
     FIMENQUANTO = 305,
     REPITA = 306,
     FIMREPITA = 307,
     QUEBRA_LINHA = 308,
     CASO = 309,
     FIMFACA = 310,
     FUNCAO = 311,
     FIMFUNCAO = 312,
     OUTROCASO = 313,
     PROCEDIMENTO = 314,
     FIMPROCEDIMENTO = 315,
     PASSO = 316,
     VETOR = 317,
     RETORNE = 318,
     ESCOLHA = 319,
     FIMESCOLHA = 320,
     OU = 321,
     E = 322,
     RAIZQ = 323
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 11 "elfs.y"

 int intval;
 double floatval;
 char *strval;



/* Line 2068 of yacc.c  */
#line 126 "elfs.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


