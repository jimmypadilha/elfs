%{
#include "sql.tab.h"
#include <stdlib.h>
%}

white [ \t]+
tabela [A-Z]+
coluna [A-Z0-9]+[,._]?
valor [A-z0-9]*['']?

%%
 
{white} { }
"*" return ALL;
"=" return IGUAL;
"SELECT" return SELECT;
"FROM" return FROM;
"WHERE" return WHERE;
"AS" return AS;
"AND" return AND;
"ORDER" return ORDER;
"BY" return BY;
"LIKE" return LIKE;
{tabela} return TABELA;
{coluna} return COLUNA;
{valor} return VALOR;
"\n" return END;

