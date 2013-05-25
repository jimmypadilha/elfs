%{

/*
Compilador parcial da lista 1
 */

%}
INICIO (inicio|INICIO)
ALGORITMO (algoritmo|ALGORITMO) 
FIMALGORITMO (fimalgoritmo|FIMALGORITMO)
LEIA (leia|LEIA)
VAR (var|VAR)
REAL (real|REAL)
LOGICO (logico|LOGICO)
INTEIRO  (inteiro|INTEIRO )
CARACTERE (caractere|CARACTERE)
VETOR (vetor|VETOR)
PARA (para|PARA)
ATE (ate|ATE)
FACA (faca|FACA)
FIMPARA (fimpara|FIMPARA)
FIMSE (fimse|FIMSE)
OUTROCASO (outrocaso|OUTROCASO)
SE (se|SE)
SENAO (SENAO|Senao)
ENTAO (entao|ENTAO)
ENQUANTO (enquanto|ENQUANTO)
FIMENQUANTO (fimenquanto|FIMENQUANTO)
VAR (VAR|var)
REPITA (repita|REPITA)
E  (e|E)
OU  (ou|OU)
DE  (de|DE)
MOD (mod|MOD)
ESCREVA escreva|ESCREVA
ESCREVAL ESCREVAL|escreval
OPERACAO  \+ | \/ | \- |\* | ^
RAIZQ raizq|RAIZQ



%%

/*strings */

'(\\.|''|[^'\n])*'	|
\"(\\.|\"\"|[^"\n])*\"  { yylval.strval = strdup(yytext); return STRING; }

{ALGORITMO} printf("%s", yytext);
{FIMALGORITMO} printf("%s \n", yytext);
. printf("%s TOKEN DESCONHECIDO\n", yytext);

%%

main(int argc, char *argv[])

{
  yyin = fopen(argv[1], "r");
  yylex();
  fclose(yyin);
  return 0;

}
