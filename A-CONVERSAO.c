#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 10

typedef struct pilha {
    int topo;
    int dados[TAM_MAX];
    int cont;
}Pilha;

int criar (Pilha *P){
    P->topo = 0;
    P->cont = 0;
};

int empilha (Pilha *P, int x){
    if (P->topo=TAM_MAX){
        printf("A pilha esta cheia");
    return 0;
    }else
    P->topo++;
    }





int main (){

    Ponteiro *P;


    int X;
    int aux=0, aux2=0;
    scanf("%d",&X);
    if(X%=2==0){
       aux++;
       aux=*P->[P->topo];
    }else aux2++;
    printf("%d", aux);
    printf("%d", aux2);
return 0;
}
