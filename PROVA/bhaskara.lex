%{

/*
Compilador parcial da lista 1
 */

%}
ALGORITMO (algoritmo|ALGORITMO) 
VAR (var|VAR) 
INICIO (inicio|INICIO)
LEIA (leia|LEIA)
ESCREVA (escreva|ESCREVA)
ESCREVAL (ESCREVAL|escreval)
FIMALGORITMO (fimalgoritmo|FIMALGORITMO)
RAIZQ (raizq|RAIZQ)
REAL (real|REAL)



%%
{INICIO} {return INICIO;}
{ALGORITMO} {return ALGORITMO;}
{FIMALGORITMO} {return FIMALGORITMO;}
{LEIA} {return LEIA;}
{VAR} {return VAR;}
{REAL} {return REAL;}
{ESCREVA} {return ESCREVA;}
{ESCREVAL} {return ESCREVAL;}
{RAIZQ} {return RAIZQ;}

[A-Za-z][A-Za-z0-9_]*   { yylval.strval = strdup(yytext);
                          return VARIAVEL; };
`[^`/\\.\n]+`           { yylval.strval = strdup(yytext+1);
                          yylval.strval[yyleng-2] = 0;
                          return VARIAVEL; };

/*operadores*/

[-+&~|^/%*(),.;!]   { return yytext[0]; }

 /*strings */

'(\\.|''|[^'\n])*'      |
\"(\\.|\"\"|[^"\n])*\"  { yylval.strval = strdup(yytext); return STRING; };



. printf("%s TOKEN DESCONHECIDO\n", yytext);

%%

main(int argc, char *argv[])

{
  yyin = fopen(argv[1], "r");
  yylex();
  fclose(yyin);
  return 0;

}
