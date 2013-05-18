%{

/*
Compilador parcial da lista 1
 */

%}

BRANCO [\t\n\r\]
COMENTARIO \/\/.*
ASPAS ["[:alnum:]:,+=.<>$"-]
PARENTESES [\(\)]
VARIAVEL [[:alnum:]:_\[\]/*+^-]

%%

{BRANCO} printf("%s", yytext);
{COMENTARIO}* printf("%s", yytext);
{ASPAS} printf("%s", yytext);
{PARENTESES} printf("%s", yytext);
{VARIAVEL} printf("%s", yytext);
algoritmo printf("%s", yytext);
var printf("%s \n", yytext);
inicio printf("%s \n", yytext);
escreva|escreval printf("%s \n", yytext);
fimalgoritmo printf("%s \n", yytext);
. printf("%s TOKEN DESCONHECIDO\n", yytext);

%%

main(int argc, char *argv[])

{
  yyin = fopen(argv[1], "r");
  yylex();
  fclose(yyin);
  return 0;

}
