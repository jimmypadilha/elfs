/*Definicoes*/
%{
#include "sqlParser.tab.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
%}


%%

 /* PALAVRAS CHAVES */ 

SELECT {return SELECT;}
FROM {return FROM;}
WHERE {return WHERE;}
GROUP {return GROUP;}
ORDER {return ORDER;}
BY {return BY;}
HAVING {return HAVING;}
DISTINCT {return DISTINCT;}
TABLE {return TABLE;}
ANDOP {return ANDOP;}
AS {return AS;}
COLUMN  {return COLUMN;}
DIV  {return DIV;}
DOUBLE {return DOUBLE;}
FLOAT4? {return FLOAT;}
INTEGER  {return INTEGER;}
LIKE {return LIKE;}
NULL {return NULLX;}
NUMBER {return NUMBER;}
ASC {return ASC;}
DESC {return DESC;}
INTO { return INTO; }
LIMIT {return LIMIT;}


 /* numeros */

-?[0-9]+	        { yylval.intval = atoi(yytext); return INTNUM; } 

-?[0-9]+"."[0-9]* |
-?"."[0-9]+	|
-?[0-9]+E[-+]?[0-9]+	|
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]*E[-+]?[0-9]+	{ yylval.floatval = atof(yytext) ;
                                  return APPROXNUM; }

 /*booleanos */

TRUE {yylval.intval = 1; return BOOL; } 
UNKNOWN	{ yylval.intval = -1; return BOOL; }
FALSE	{ yylval.intval = 0; return BOOL; }

 /*strings */

'(\\.|''|[^'\n])*'	|
\"(\\.|\"\"|[^"\n])*\"  { yylval.strval = strdup(yytext); return STRING; }

'(\\.|[^'\n])*$	        { yyerror("Unterminated string %s", yytext); }
\"(\\.|[^"\n])*$	{ yyerror("Unterminated string %s", yytext); }


 /*operadores*/
  
[-+&~|^/%*(),.;!]   { return yytext[0]; }

"&&"		{ return ANDOP; }
"||"            { return OR; }

"="	{ yylval.subtok = 4; return COMPARISON; }
"<=>"	{ yylval.subtok = 12; return COMPARISON; }
">="	{ yylval.subtok = 6; return COMPARISON; }
">"	{ yylval.subtok = 2; return COMPARISON; }
"<="	{ yylval.subtok = 5; return COMPARISON; }
"<"	{ yylval.subtok = 1; return COMPARISON; }
"!="	|
"<>"	{ yylval.subtok = 3; return COMPARISON; }

  /* nomes  */

[A-Za-z][A-Za-z0-9_]*	{ yylval.strval = strdup(yytext);
                          return NAME; }
`[^`/\\.\n]+`           { yylval.strval = strdup(yytext+1);
                          yylval.strval[yyleng-2] = 0;
                          return NAME; }

`[^`\n]*$               { yyerror("tipo de nome inderminado %s", yytext); }

 /*demais */

[ \t\n]         /* white space */
.               { yyerror("caractere desconhecido '%c'", *yytext); }




%%
