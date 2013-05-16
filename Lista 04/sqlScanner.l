/*Definicoes*/
%{
#include "sql.tab.h"
#include <stdarg.h>
#include <string.h>
%}


%%

 /* PALAVRAS CHAVES */ 

AND {return AND;}
AS {return AS;}
COLUMN  {return COLUMN;}
CREATE  {return CREATE;}
DATABASE  {return DATABASE;}
DATABASES  {return DATABASES;}
DIV  {return DIV;}
DOUBLE {return DOUBLE;}
INTEGER  {return INTEGER;}
LIKE {return LIKE;}
NULL {return NULLX;}
NUMBER {return NUMBER;}
SELECT {return SELECT;}
WHERE {return WHERE;}


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



 /*demais */

[ \t\n]         /* white space */
.               { yyerror("mystery character '%c'", *yytext); }




%%
