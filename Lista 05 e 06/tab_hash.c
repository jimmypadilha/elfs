#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanhoHash 500

typedef struct {
	int chave;
} tab_hash;

void transforma(char *variavel){
int i;
    for(i = 0; variavel[i] != '\0'; ++i){
        if((variavel[i]>=65)&&(variavel[i]<=90))
            variavel[i] = variavel[i] + 32;
    }
}
// Calcula a função de espalhamento
// transforma a chave no indice da tabela hash.
unsigned int gerar_pesos_variavel(char *variavel)
{
    int peso = 0, i;
    transforma(variavel);
    for(i = 0; variavel[i] != '\0'; ++i){
        peso = peso * 61 + variavel[i];
    }
    peso = ((peso+1) % tamanhoHash);
        if(peso<0)
        peso=peso*(-1);
	return (peso);
}

unsigned int gerar_pesos_escopo(char *escopo)
{
    int peso = 0, i;
    transforma(escopo);
    for(i = 0; escopo[i] != '\0'; ++i){
        peso = peso * 61 + escopo[i];
    }
    peso = (peso % tamanhoHash);
        if(peso<0)
        peso=peso*(-1);
	return (peso);
}



tab_hash *cria_hash ()
{
    tab_hash *temp;
    int i;
    //Aloca memoria suficiente para o nó da tabela
   if((temp = (tab_hash*)malloc(2*tamanhoHash*sizeof(tab_hash))) != NULL)
   {
        //Inicia todos os valores da tabela
        for(i = 0; i < tamanhoHash; i++){
            temp[i].chave = 0;
        }
        return temp;
   }
   else
        exit(0);
}
// Insere uma variavelvel na tabela t de tamanho m
void insere(tab_hash *t, char *variavel, char *escopo)
{
    int j = 0, k = 0;
        j = gerar_pesos_variavel(variavel);
        k = gerar_pesos_escopo(escopo);
        t[j+k].chave = (j+k);
}

int buscar(tab_hash *t, char *variavel, char *escopo)
{
    int i = 0;
    int j = 0, k = 0;
    transforma(variavel);
    transforma(escopo);
    j = gerar_pesos_variavel(variavel);
    k = gerar_pesos_escopo(escopo);
    if((i < tamanhoHash))//Garante a comparação com todos elementos
    {
                if(t[j+k].chave != 0){
                    return 1;//Se for encontrado a função recebe o valor da pesquisa, e invalidando a 1º condicional
                }
                else{
                    return 0;
                }
                    //return buscar(t, variavelvel);//Se não encontrar ocorre há recursão
    }
    else
    {
     return 0;//Quando o elemento é encontrado j!=0, invalidando a 1º condicional
    }
}
