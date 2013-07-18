#ifndef HASH_H_
#define HASH_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_HASH 1000

typedef struct {
int chave;
} tab_hash;

tab_hash *IniciaHash ();
void MudaVar(char *variavel);
unsigned int Variavel(char *variavel);
unsigned int Escopo(char *escopo);
int Pesquisa(tab_hash *t, char *variavel, char *escopo);
void insere(tab_hash *t, char *variavel, char *escopo);

#endif /* HASH_H_ */
