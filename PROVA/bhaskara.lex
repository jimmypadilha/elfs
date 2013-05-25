%{

/*
Compilador parcial da lista 1
 */

%}


ALGORITMO (algoritmo|ALGORITMO)
FIMALGORITMO (fimalgoritmo|FIMALGORITMO)





%%


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
