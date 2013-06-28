#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanhoHash 10
typedef struct
{
   char escopo[5], variavel[10], tipo[7];
}tab_hash;

// Cria a tabela hash
tab_hash *cria_hash ()
{
    tab_hash *temp;
    int i;
    //Aloca memoria suficiente para o nó da tabela
   if((temp = (tab_hash*)malloc(tamanhoHash*sizeof(tab_hash))) != 0)
   {
        //Inicia todos os valores da tabela
        for(i = 0; i < tamanhoHash; i++){
            temp[i] = NULL;
        }
        return temp;
   }
   else
        exit(0);
}
// Calcula a função de espalhamento
// transforma a chave no indice da tabela hash.
unsigned int funcao_hash(char *variavel)
{
    int indice = 0, i;
    for(i = 0; variavel[i] != '\0'; ++i){
        printf("CARACTER = %c   ----   ASCII = %d\n",variavel[i], variavel[i]);
        indice = indice * 19 + variavel[i];
    }
    indice = (indice % tamanhoHash);
	printf("Indice = %d\n\n", indice);
	return (indice);
}

// Insere uma variavelvel na tabela t de tamanho m
void inserir(tab_hash *t, char *variavel, char *tipo, char *escopo)
{
    int j = 0;
	char temp[10] = variavel;
	strcat(variavel, tipo);
	strcat(variavel, escopo);
    transforma(variavel);
    j = funcao_hash(variavel);
	if(t[j] != 0){
		t[j].variavel = temp;
		t[j].escopo = escopo;
		t[j].tipo = tipo;
		printf("Inserida posicao: %d\n\n", j);
	}else if(t[j].variavel == temp){
		printf("Variavel ja presente na tabela");
	}
	
}

int buscar(tab_hash *t, char *pesquisa)
{
    int i = 0;
    if((i < tamanhoHash))//Garante a comparação com todos elementos
    {
        int j = gerar_pesos(pesquisa);
                if(t[j].chave != 0){
                    printf("ACHOU!!! \n");
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

void transforma(char *variavel){
int i;
    for(i = 0; variavel[i] != '\0'; ++i){
        if((variavel[i]>=65)&&(variavel[i]<=90))
            variavel[i] = variavel[i] + 32;
    }
    printf("TRANSFORMADO => %s \n",variavel);
}

int main ()
{
    char escopo[5], variavel[10], pesquisa[10], tipo[7];
    int opcao = 0;
    tab_hash *t;
    t = cria_hash();

    do{
        printf("Digite a variavel: \n");
        gets(variavel);
        printf("LOCAL ou GLOBAL?\n");
        gets(escopo);
        printf("Digite o tipo:\n");
        gets(tipo);
		inserir(t,variavel,tipo,escopo);

        ++opcao;
    }while(opcao != 3);

    printf("Pesquisa: \n");
    gets(pesquisa);
    transforma(pesquisa);
    printf("%s B U S C A N D O . . .  .    .\n",pesquisa);

    if(buscar(t, pesquisa) == 0)
        {
            printf("\nVariavel nao encontrado!\n");
        }
        else
            {
                printf("\nVariavel encontrado.\n");
            }
  return 0;
}
