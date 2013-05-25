%{

/*
Compilador parcial da lista 1
 */

%}
ALGORITMO (algoritmo|ALGORITMO) 
VAR (var|VAR)
INICIO (inicio|INICIO)
LEIA (leia|LEIA)
ESCREVA escreva|ESCREVA
ESCREVAL ESCREVAL|escreval
FIMALGORITMO (fimalgoritmo|FIMALGORITMO)
RAIZQ raizq|RAIZQ
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
OPERACAO  \+ | \/ | \- |\* | ^



%%

/*strings */

'(\\.|''|[^'\n])*'	|
\"(\\.|\"\"|[^"\n])*\"  { yylval.strval = strdup(yytext); return STRING; }

{INICIO} printf("%s\n", yytext);
{ALGORITMO} printf("%s", yytext);
{FIMALGORITMO} printf("%s \n", yytext);
{LEIA} printf("%s", yytext);
{VAR} printf("%s\n", yytext);
{VARIAVEL} printf("%s\n", yytext);
{REAL} printf("%s\n", yytext);
{ESCREVA} printf("%s\n", yytext);
{ESCREVAL} printf("%s\n", yytext);
{OPERACAO} printf("%s\n", yytext);
{RAIZQ} printf("%s\n", yytext);


. printf("%s TOKEN DESCONHECIDO\n", yytext);

%%

main(int argc, char *argv[])

{
  yyin = fopen(argv[1], "r");
  yylex();
  fclose(yyin);
  return 0;

}
