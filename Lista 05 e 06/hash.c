#include "hash.h"

/*Responsavel pela inicializacao da Tabela Hash*/
tab_hash *inicializarHash () {
    tab_hash *temp; //ponteiro para a estrutura da hash
    int i;
    /* Aloca bloco consecutivo de bytes para  na memoria para a tabela
    *  Utilizamos o sizeOF para determinar a qde de bytes da nossa estrutura 
    */
    if((temp = (tab_hash*)malloc(2*TAMANHO_HASH*sizeof(tab_hash))) != NULL)
   {
    //Inicia todos os valores da tabela
        for(i = 0; i < TAMANHO_HASH; i++){
            temp[i].chave = 0;
        }
        return temp;
   }
   else
        exit(0);
}

 /*Converte sequencia de caracteres para minusculo caso estejam maiusculo */
void converterString(char *variavel) {
    int i;
       	/* Caso algum caractere esteja em letra maiuscula
	* e transformado em letra minuscula, pois visualg
       	*  nao e case sensitive
	* 65 - codigo ascii para A
	* 90 - codigo ascii para Z
	* para trasnformar esse intervalo so adicionar 32
     	*/
     for(i = 0; variavel[i] != '\0'; ++i){
	if((variavel[i]>=65)&&(variavel[i]<=90))
            variavel[i] = variavel[i] + 32;
    }
}

 /*atribui um peso a sequencia de caracteres  que esta em variavel*/
unsigned int Variavel(char *variavel) {
    int peso = 0;
    int i;
    converterString(variavel);
    for(i = 0; variavel[i] != '\0'; ++i){
        peso = peso * 61 + variavel[i];
    }
    peso = ((peso+1) % TAMANHO_HASH);
        if(peso<0)
        peso=peso*(-1);
return (peso);
}

unsigned int Escopo(char *escopo) {
    int peso = 0, i;
    converterString(escopo);
    for(i = 0; escopo[i] != '\0'; ++i){
        peso = peso * 61 + escopo[i];
    }
    peso = (peso % TAMANHO_HASH);
        if(peso<0)
        peso=peso*(-1);
return (peso);
}

int Pesquisa(tab_hash *t, char *variavel, char *escopo) {
    int i = 0;
    int j = 0, k = 0;
    converterString(variavel);
    converterString(escopo);
    j = Variavel(variavel);
    k = Escopo(escopo);
    if((i < TAMANHO_HASH))
    {
                if(t[j+k].chave != 0){
                    return 1;
                }
                else{
                    return 0;
                }
    }
    else
    {
     return 0;
    }
}

 /*Responsavel pela insercao dos dados na tabela hash */
void insere(tab_hash *t, char *variavel, char *escopo) {
    int j = 0, k = 0;
        j = Variavel(variavel);
        k = Escopo(escopo);
        t[j+k].chave = (j+k);
}
