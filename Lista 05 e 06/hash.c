#include "hash.h"

/*Responsavel pela inicializacao da Tabela Hash*/
tab_hash *IniciaHash () {
    tab_hash *temp; //ponteiro para a estrutura da hash
    int i;
    /* Aloca bloco consecutivo de bytes para  na memoria para a tabela
    *  Utilizamos o sizeOF para determinar a qde de bytes da nossa estrutura 
    */
    if((temp = (tab_hash*)malloc(2*tam*sizeof(tab_hash))) != NULL)
   {
    //Inicia todos os valores da tabela
        for(i = 0; i < tam; i++){
            temp[i].chave = 0;
        }
        return temp;
   }
   else
        exit(0);
}

void MudaVar(char *variavel) {
	int i;
    for(i = 0; variavel[i] != '\0'; ++i){
        if((variavel[i]>=65)&&(variavel[i]<=90))
            variavel[i] = variavel[i] + 32;
    }
}

unsigned int Variavel(char *variavel) {
    int peso = 0, i;
    MudaVar(variavel);
    for(i = 0; variavel[i] != '\0'; ++i){
        peso = peso * 61 + variavel[i];
    }
    peso = ((peso+1) % tam);
        if(peso<0)
        peso=peso*(-1);
return (peso);
}

unsigned int Escopo(char *escopo) {
    int peso = 0, i;
    MudaVar(escopo);
    for(i = 0; escopo[i] != '\0'; ++i){
        peso = peso * 61 + escopo[i];
    }
    peso = (peso % tam);
        if(peso<0)
        peso=peso*(-1);
return (peso);
}

int Pesquisa(tab_hash *t, char *variavel, char *escopo) {
    int i = 0;
    int j = 0, k = 0;
    MudaVar(variavel);
    MudaVar(escopo);
    j = Variavel(variavel);
    k = Escopo(escopo);
    if((i < tam))
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

void insere(tab_hash *t, char *variavel, char *escopo) {
    int j = 0, k = 0;
        j = Variavel(variavel);
        k = Escopo(escopo);
        t[j+k].chave = (j+k);
}
