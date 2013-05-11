%{

/*
Compilador parcial da lista 1
 */

%}

BRANCO [ \t\n\r\f\v]
COMENTARIO ^\/\/.
ASPAS ["a-z"]
PARENTESES [\("[:alnum:]"\)]

%%

{BRANCO} printf("%s \n", yytext);
{COMENTARIO}* printf("%s \n", yytext);
{ASPAS} printf("%s \n", yytext);
{PARENTESES} printf("%s \n", yytext);
algoritmo printf("%s \n", yytext);
var printf("%s \n", yytext);
inicio printf("%s \n", yytext);
escreva|escreval printf("%s \n", yytext);
fimalgoritmo printf("%s \n", yytext);
. printf("%s token desconhecido\n", yytext);

%%

main(int argc, char *argv[])

{
  yyin = fopen(argv[1], "r");

  if (yylex()){
    fprintf (stderr, "\nCorrija e tente de novo!\n\n");
  }
  else{
    fprintf(stderr, "\n Passou\n\n");
  }
  fclose(yyin);
  return 0;

}
