%{
#include "elfs.tab.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
%}

A [aA]
B [bB]
C [cC]
D [dD]
E [eE]
F [fF]
G [gG]
H [hH]
I [iI]
J [jJ]
K [kK]
L [lL]
M [mM]
N [nN]
O [oO]
P [pP]
Q [qQ]
R [rR]
S [sS]
T [tT]
U [uU]
V [vV]
W [wW]
X [xX]
Y [yY]
Z [zZ]

%%

{R}{E}{T}{O}{R}{N}{E}			  return(RETORNE);
{P}{A}{S}{S}{O}  			  return(PASSO); 
{R}{A}{I}{Z}{Q}  			  return(RAIZQ);
{E}    					  return(E);
{R}{E}{A}{L}  				  return(REAL);
{I}{N}{T}{E}{I}{R}{O}  			  return(INTEIRO);
{C}{A}{R}{A}{C}{T}{E}{R}  		  return(CARACTER);
{V}{E}{T}{O}{R}   			  return(VETOR);
{C}{A}{S}{O}   				  return(CASO);
{O}{U}    		  		  return(OU);
{F}{I}{M}{A}{L}{G}{O}{R}{I}{T}{M}{O}      return(FIMALGORITMO);
{E}{S}{C}{R}{E}{V}{A} |
 {E}{S}{C}{R}{E}{V}{A}{L} 	          return(ESCREVA);
{P}{A}{R}{A}      			  return(PARA);
{F}{I}{M}{P}{A}{R}{A}                     return(FIMPARA);
{F}{A}{C}{A}   				  return(FACA);
{F}{I}{M}{F}{A}{C}{A}   		  return(FIMFACA);
{L}{E}{I}{A}   				  return(LEIA);
{F}{U}{N}{C}{A}{O}  			  return(FUNCAO);
{F}{I}{M}{F}{U}{N}{C}{A}{O}  		  return(FIMFUNCAO);
{O}{U}{T}{R}{O}{C}{A}{S}{O}  		  return(OUTROCASO);
{I}{N}{I}{C}{I}{O}   			  return(INICIO);
{S}{E}   				  return(SE);
{S}{E}{N}{A}{O}    			  return(SENAO);
{F}{I}{M}{S}{E}    			  return(FIMSE);
{E}{N}{T}{A}{O}   			  return(ENTAO);
{A}{L}{G}{O}{R}{I}{T}{M}{O}  		  return(ALGORITMO);
{R}{E}{P}{I}{T}{A}   			  return(REPITA);
{D}{E}    				  return(DE);
{V}{A}{R}   				  return(VAR);
{A}{T}{E}   				  return(ATE);
{E}{N}{Q}{U}{A}{N}{T}{O}   		  return(ENQUANTO);
{F}{I}{M}{E}{N}{Q}{U}{A}{N}{T}{O}         return(ENQUANTO);
{P}{R}{O}{C}{E}{D}{I}{M}{E}{N}{T}{O}      return(PROCEDIMENTO);
{F}{I}{M}{P}{R}{O}{C}{E}{D}{I}{M}{E}{N}{T}{O}  return(FIMPROCEDIMENTO);
{E}{S}{C}{O}{L}{H}{A}                     return(ESCOLHA);
{F}{I}{M}{E}{S}{C}{O}{L}{H}{A}            return(FIMESCOLHA);

[/][/].*		        	   return(COMENTARIO);
"<-"   				           return(ATRIBUICAO);
[\n\t\r]+  			           return(QUEBRA_LINHA);

"/" |
 {D}{I}{V}   	        return(DIVISAO);
"%" |
 {M}{O}{D}       	return(RESTO);
"*"  			return(MULTIPLICACAO);
"+" 			return(SOMA);
"-" 			return(MENOS);
"^" 			return(POTENCIA);
"="			return(IGUAL);
">=" 			return(MAIORIGUAL);
">"			return(MAIOR);
"<"			return(MENOR);
"<="			return(MENORIGUAL);
"<>"  			return(DIFERENTE);  
".."  			return(PONTOPONTO);
":"    			return(DOISPONTOS);
","   			return(VIRGULA);
"["    			return(FCOLCHETE);
"]"     		return(ACOLCHETE);
"("    		        return(APARENTESE);
")"   			return(FPARENTESE);

[A-Za-z][A-Za-z0-9_]* return(VARIAVEL);


\"(\\.|\"\"|[^"\n])*\"  { yylval.strval = strdup(yytext); return STRING; }

-?[0-9]+  { yylval.intval = atoi(yytext); return INTNUM;}

-?[0-9]+"."[0-9]* |
-?"."[0-9]+	|
-?[0-9]+E[-+]?[0-9]+	|
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]*E[-+]?[0-9]+	{ yylval.floatval = atof(yytext) ;
                                  return APPROXNUM; }

%%

