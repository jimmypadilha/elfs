%{
/* 1 definindo todos os tokens
   2 Regras utilizando os tokens */
%}

/*1 parte definindo todos os tokens*/

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
OPERACAO  \+ | \/ | \- |\*
VARIAVEL_VETOR {ESPACO}*{VARIAVEL} \[( [0-9]+|{VARIAVEL}|{VARIAVEL}{ESPACO}*{OPERACAO}{ESPACO}*[0-9]+ )\]
ESCREVA escreva|ESCREVA
ESCREVAL ESCREVAL|escreval
ENTRE_ASPAS [\"].*[\"]
ENTRE_PARENTESE ( \({VARIAVEL}\) | \({VARIAVEL}\[([0-9]+|{VARIAVEL})\])\) )  |  \({ENTRE_ASPAS}\) | \( {ENTRE_ASPAS}[,].*\) )
ESPACO [ \t]
ESPACO_LINHA [\n]
TIPO ({INTEIRO}|{REAL}|{LOGICO}|{CARACTERE})
COMENTARIO {ESPACO}*[/][/].*[\n]
VARIAVEL [a-zA-Z]([a-z0-9]*{0,29}

/*2 utilizando os tokens para formar as regras da linguagem */
	
USO_MOD {ESPACO}*{VARIAVEL}{ESPACO}*{MOD}{ESPACO}*{VARIAVEL}
FIMSE_LINHA {ESPACO}*{FIMSE}{ESPACO}*({COMENTARIO})?
FIMALGORITMO_LINHA {ESPACO}*{FIMALGORITMO}{ESPACO}*
ALGORITMO_LINHA {ESPACO}*{ALGORITMO}{ESPACO}+{ENTRE_ASPAS}
INICIO_LINHA {ESPACO}*{INICIO}{ESPACO}*
VAR_LINHA {ESPACO}*{VAR}({ESPACO}|{ESPACO_LINHA})
FIMSE_LINHA {ESPACO}*{FIMSE}{ESPACO}*({COMENTARIO})?
SENAO_LINHA {ESPACO}*{SENAO}{ESPACO}*({COMENTARIO})?
REPITA_LINHA {ESPACO}*{REPITA}{ESPACO}*({COMENTARIO})?
LINHA_ALGORITMO {ESPACO}*{ALGORITMO}{ESPACO}+{ENTRE_ASPAS}
LEIA_LINHA {ESPACO}*{LEIA}{ESPACO}*{ENTRE_PARENTESE}{ESPACO}*({COMENTARIO})?
DECLARAR_VETOR  {ESPACO}*{VARIAVEL}{ESPACO}*([\,]{VARIAVEL}){0,5}{ESPACO}*[:]{ESPACO}*{VETOR}\[ [0-9]+\.\.[0-9]+\]{ESPACO}+{DE}{ESPACO}+{TIPO}{ESPACO}*({COMENTARIO})?
DECLARAR_VARIAVEL {ESPACO}*{VARIAVEL}{ESPACO}*([\,]{VARIAVEL}){0,5}{ESPACO}*[:]{ESPACO}*{TIPO}{ESPACO}*({COMENTARIO})?
ESCREVA_LINHA ({ESPACO}*{ESCREVA}{ESPACO}*{ENTRE_PARENTESE}{ESPACO}*({COMENTARIO})?
RECEBE_VALOR {ESPACO}*{VARIAVEL}{ESPACO}*[<][-]{ESPACO}*[\(]*{ESPACO}* ([0-9]+|{VARIAVEL}|{VARIAVEL_VETOR}){ESPACO}* ( {OPERACAO}{ESPACO}*({NUMERO}|{VARIAVEL}|{VARIAVEL_VETOR})([\)]* ){0,10} {ESPACO}*({COMENTARIO})?
FIMPARA_LINHA {ESPACO}*{FIMPARA}{ESPACO}*({COMENTARIO})?
FIMENQUANTO_LINHA {ESPACO}*{FIMENQUANTO}{ESPACO*}({COMENTARIO})?
SENAO_LINHA {ESPACO}*{SENAO}{ESPACO*}({COMENTARIO})?
COMPARADOR [(]?({VARIAVEL}|{0-9}|{MOD}){ESPACO}*([=]|[>]|[>][=]|[<][=]|[<]|[<][>]){ESPACO}*({VARIAVEL}|{0-9}|{VARIAVEL_VETOR}|\"[A-Za-z]\")[)]?
SE_LINHA {ESPACO}*{SE}{ESPACO}*[(]?{COMPARADOR}({ESPACO}({E}|{OU}){ESPACO}{COMPARADOR}){0,10}[)]?{ESPACO}{ENTAO}{ESPACO}*({COMENTARIO})?
PARA_LINHA {ESPACO}*{PARA}{ESPACO}{VARIAVEL}{ESPACO}{DE}{ESPACO}{0-9}{ESPACO}{ATE}{ESPACO}({NUMERO}|{VARIAVEL}){ESPACO}{FACA}{ESPACO}*({COMENTARIO})?
ENQUANTO_LINHA {ESPACO}*{ENQUANTO}{ESPACO}*[(]{COMPARADOR}({ESPACO}*({E}|{OU}){ESPACO}{COMPARADOR}){0,5}[)]{ESPACO}*{FACA}{ESPACO}*({COMENTARIO})?
ATE_LINHA {ESPACO}*{ATE}{ESPACO}*[(]{COMPARADOR}({ESPACO}({E}|{OU}){ESPACO}{COMPARADOR}){0,10}[)]{ESPACO}*({COMENTARIO})?
%%
{ALGORITMO_LINHA} printf("%s\n", yytext);
{INICIO} printf("%s\n", yytext);
{VAR_LINHA} printf("%s\n", yytext);
{VARIAVEL} printf("%s\n", yytext);
{ESCREVA_LINHA} printf("%s\n", yytext);
{FIMALGORITMO_LINHA} printf("%s\n", yytext);
{DECLARAR_VARIALVEL} printf("%s\n", yytext);
{DECLARAR_VETOR} printf("%s\n", yytext);
{COMENTARIO} printf("%s\n", yytext);
{RECEBE_VALOR} printf("%s\n", yytext);
{SE_LINHA} printf("%s\n", yytext);
{FIMSE_LINHA} printf("%s\n", yytext);
{PARA_LINHA} printf("%s\n", yytext);
{FIMPARA_LINHA} printf("%s\n", yytext);
{ENQUANTO_LINHA} printf("%s\n", yytext);
{FIMENQUANTO_LINHA} printf("%s\n", yytext);
{ATE_LINHA} printf("%s\n", yytext);
{ESPACO} printf("%s\n", yytext);
{LEIA_LINHA} printf("%s", yytext);
{SENAO_LINHA} printf("%s", yytext);
{REPITA_LINHA} printf("%s", yytext);
.* printf("NAO RECONHECIDO !: %s\n", yytext);
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
