#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct lista{
	char* info;
	struct lista *prox;
};
typedef struct lista Lista;

struct fila {
	Lista *ini;
	Lista *fim;
};
typedef struct fila Fila;

Fila* fila_cria(void){
	Fila* f=(Fila*)malloc(sizeof(Fila));
	f->ini=f->fim=NULL;
	return f;
}

int fila_vazia(Fila *f){
    if ((f->ini)||(f->fim)) return 0;
    else return 1;
}

void fila_insere(Fila *f,char* v){
	Lista *n= (Lista*)malloc(sizeof(Lista));
	n->info=v;
	n->prox=NULL;
	if (f->fim!=NULL) f->fim->prox=n;
	else f->ini=n;
	f->fim=n;
}

/*char* fila_retira(Fila* f){
	Lista *t;
	char* v;
	if (fila_vazia(f)){
		printf("Fila Vazia.\n");
		exit(1);
	}
	t=f->ini;
	v=t->info;
	f->ini=t->prox;
	if (f->ini==NULL) f->fim=NULL;
	free(t);
	return v;
}*/

void fila_libera(Fila *f){
	Lista *q=f->ini;
	while (q!=NULL){
		Lista *t=q->prox;
		free(q);
		q=t;
	}
	free(f);
}

void arq_imprime(Fila *f,FILE *arq){
	Lista *q=f->ini;
	if (fila_vazia(f)) return;
	while (q!=NULL){
		fprintf(arq,"\n%s",q->info);		
		q=q->prox;
	}
}






