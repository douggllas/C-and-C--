#include <stdio.h>
#include <stdio.h>

#define TAM_MAX 10

typedef struct pilha 
{
    int vet[TAM_MAX];
    int topo;
}Pilha;

Pilha *criar (void) {
    int vet;
    Pilha *P;
    P = (Pilha*)malloc(sizeof(Pilha));
    P = (vet->TAM_MAX)malloc(topo * sizeof(int));
    if (P!=NULL){
        P->topo = -1;
        return P;
    }
}

void destruir (Pilha *P){
    free(P);
}

int cheia (Pilha *P){
    if (P->topo==-1)
        return 1;
    else
        return 0;
}

int vazia 


