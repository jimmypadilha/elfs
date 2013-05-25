%{


/*
Compilador parcial da lista 1
 */
%}
ALGORITMO (algoritmo|ALGORITMO)
VAR (VAR|var)
INICIO (inicio|INICIO) 
LEIA (leia|LEIA)
ESCREVA (ESCREVA|escreva)
ESCREVAL (ESCREVAL|escreval)
FIMALGORITMO (fimalgoritmo|FIMALGORITMO)
RAIZQ (raizq|RAIZQ)
COMMENT [/][/].*[\n]
REAL (REAL|real)
ATRIBUICAO ("<-")
QUEBRA_LINHA [\n]

%%
{ALGORITMO} {return ALGORITMO;}
{VAR} {return VAR;}
{INICIO} {return INICIO;}
{LEIA} {return LEIA;}
{ESCREVA}  {return ESCREVA;}
{ESCREVAL}  {return ESCREVAL;}
{FIMALGORITMO} {return FIMALGORITMO;}
{RAIZQ} {return RAIZQ;}
{COMMENT}  {return COMMENT;}
{REAL}  {return REAL;}
{ATRIBUICAO}  {return ATRIBUICAO;}
{QUEBRA_LINHA}  {return QUEBRA_LINHA;}
  
[-+&~|^/%*(),.;!]   { return yytext[0]; }

[A-Za-z][A-Za-z0-9_]*	{ yylval.strval = strdup(yytext);
                          return VARIAVEL; }
`[^`/\\.\n]+`           { yylval.strval = strdup(yytext+1);
                          yylval.strval[yyleng-2] = 0;
                          return VARIAVEL; }

\"(\\.|\"\"|[^"\n])*\"  { yylval.strval = strdup(yytext); return STRING; }

-?[0-9]+"."[0-9]* |
-?"."[0-9]+	|
-?[0-9]+E[-+]?[0-9]+	|
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]*E[-+]?[0-9]+	{ yylval.floatval = atof(yytext) ;
                                  return APPROXNUM; }

. printf("%s TOKEN DESCONHECIDO\n", yytext);

%%
main(int argc, char *argv[])

{
  yyin = fopen(argv[1], "r");
  yylex();
  fclose(yyin);
  return 0;

}
