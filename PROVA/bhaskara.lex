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

{INICIO} printf("%s\n", yytext);
{ALGORITMO} printf("%s", yytext);
{FIMALGORITMO} printf("%s \n", yytext);
{LEIA} printf("%s", yytext);
{VAR} printf("%s\n", yytext);
{VARIAVEL} printf("%s\n", yytext);
{REAL} printf("%s\n", yytext);
{LOGICO} printf("%s\n", yytext);
{INTEIRO} printf("%s\n", yytext);
{CARACTERE} printf("%s\n", yytext);
{VETOR} printf("%s\n", yytext);
{PARA} printf("%s\n", yytext);
{ATE} printf("%s\n", yytext);
{FACA} printf("%s\n", yytext);
{FIMPARA} printf("%s\n", yytext);
{FIMSE} printf("%s\n", yytext);
{OUTROCASO} printf("%s\n", yytext);
{SE} printf("%s\n", yytext);
{SENAO} printf("%s", yytext);
{ENTAO} printf("%s\n", yytext);
{ENQUANTO} printf("%s\n", yytext);
{FIMENQUANTO} printf("%s\n", yytext);
{VAR} printf("%s\n", yytext);
{REPITA} printf("%s", yytext);
{E} printf("%s\n", yytext);
{OU} printf("%s\n", yytext);
{DE} printf("%s\n", yytext);
{MOD} printf("%s\n", yytext);
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
