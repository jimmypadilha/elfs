%{
#include <stdio.h>
int line_no = 1;
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

{E}    return(E);
{R}{E}{A}{L}  return(REAL);
{I}{N}{T}{E}{I}{R}{O}  return(INTEIRO);
{C}{A}{R}{A}{C}{T}{E}{R}{E}  return(CARACTERE);
{V}{E}{T}{O}{R}   return(VETOR);
{C}{A}{S}{O}   return(CASO);
{O}{U}    return(OU);
{F}{I}{M}{A}{L}{G}{O}{R}{I}{T}{M}{O}    return(FIMALGORITMO);
{E}{S}{C}{R}{E}{V}{A} | {E}{S}{C}{R}{E}{V}{A}{L} return(ESCREVA);
{P}{A}{R}{A}   return(PARA);
{L}{E}{I}{A}   return(LEIA);
{F}{U}{N}{C}{A}{O}  return(FUNCAO);
{F}{I}{M}{F}{U}{N}{C}{A}{O}  return(FIMFUNCAO);
{O}{U}{T}{R}{O}{C}{A}{S}{O}  return(OUTROCASO);
{I}{N}{I}{C}{I}{O}   return(INICIO);
{S}{E}   return(SE);
{S}{E}{N}{A}{O}    return(SENAO);
{F}{I}{M}{S}{E}    return(FIMSE);
{E}{N}{T}{A}{O}   return(ENTAO);
{A}{L}{G}{O}{R}{I}{T}{M}{O}  return(ALGORITMO);
{R}{E}{P}{I}{T}{A}   return(REPITA);
{D}{E}    return(DE);
{V}{A}{R}   return(VAR);
{E}{N}{Q}{U}{A}{N}{T}{O}   return(ENQUANTO);
{P}{R}{O}{C}{E}{D}{I}{M}{E}{N}{T}{O}   return(PROCEDIMENTO);
{F}{I}{M}{P}{R}{O}{C}{E}{D}{I}{M}{E}{N}{T}{O}  return(FIMPROCEDIMENTO);
[a-zA-Z]([a-zA-Z0-9])+  return(VARIAVEL);
".."  return(PONTOPONTO);
"<-"   return(ATRIBUICAO);
":"    return(DOISPONTOS);
","   return(VIRGULA);
[0-9]+    return(DIGITO);
"["    return(FCOLCHETE);
"]"     return(ACOLCHETE);
"("     return(APARENTESE);
")"   return(FPARENTESE);
[/][/].*[\n]  return(COMENTARIO);
[0-9]+"."[0-9]+   return(NUMREAL);
"/" | {D}{I}{V}   return(DIVISAO);
"%" | {M}{O}{D}   return(MOD);
["*""+""-""^"]    return(OPERADORES);
"=" |">=" |">"|"<" |"<="|"<>"    return(COMPARACAO);
["].*["]  return(ENTREASPAS);
[\t\r]  return(BRANCO);
[\n]  return(LINHA);

%%

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
	if(yylex())
		fprintf(stderr, "\nCorriga e tente de novo!\n\n");
	else
		fprintf(stderr, "\nCodigo escrito corretamente!\n\n");
	fclose(yyin);
	return 0;
}
