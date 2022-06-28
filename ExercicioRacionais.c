#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 20 

struct pilha {
    int topo;
    char elemento[TAM_MAX];
};

typedef struct pilha Pilha; 

Pilha *criar ( int *DeuCerto){

    Pilha *p;
    p = (Pilha *)malloc(sizeof(Pilha));
    if (p==NULL){
        *DeuCerto = 0;
    }else
        *DeuCerto = 1;
}
void destruir (Pilha*p){

    if (p!=NULL) free(p);
}

int vazia (Pilha *p)
{
    if (p->topo=-1)
        return 1;
    else return 0;
}

int cheia (Pilha*p)
{
    if (p->topo==TAM_MAX-1)
        return 1;
        else
            return 0;
}


void empilha (Pilha*p, int x, int *DeuCerto)
{
    if (cheia==1)
        *DeuCerto = 0;
    else{
        
        p->topo = p->topo +1;
        p->elemento[p->topo]=x;
    } 
}

void desempilha (Pilha *p){
   if  (vazia==0){
    


   }
}








