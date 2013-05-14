%{
%}

white [ \t]+
tabela [A-Z]+
coluna [A-Z0-9]+[,._]?

%%
 
{white} { }
{tabela} printf(" TTT %s ", yytext);
{coluna} printf(" CCC  %s ", yytext);
"*" printf(" %s ", yytext);
"=" printf(" %s", yytext);
"SELECT" printf(" SSS %s ",yytext);
"FROM" printf(" %s ", yytext);
"WHERE" printf(" %s ", yytext);
"AS" printf(" %s ", yytext);
"ORDER BY" printf(" %s ", yytext);
. printf(" Nao reconhecido %s\n", yytext);

%%

main(int argc, char *argv[])

{

  if (argc < 2)

  {

    printf ("Missing input file\n");exit(-1);

  }

  yyin = fopen(argv[1], "r" );

  yylex();

}

