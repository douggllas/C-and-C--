#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 10

 struct pilha {
  int vet[TAM_MAX];
  int topo; 
  };

typedef struct pilha Pilha;

Pilha* criar (void) {
  Pilha *P;
  P= (Pilha*)malloc(sizeof(Pilha));
  P= vet = [TAM_MAX] malloc (topo * sizeof(int));
  if (P!=NULL){
    P->topo=-1;
    return P;
  }
}

void destruir (Pilha *P) {
  free(P);
}

int vazia (Pilha*P){
  if (P->topo==-1) return 1;
  else return 0;
}

int cheia (Pilha *P){
  P->topo;
  if topo = vet[TAM_MAX-1];
  return 0;
}

void empilha (Pilha *P, int valor){
  if (cheia(P) == 1)
    return 0;
  else 
  P->topo = P-> topo+1;
  P-> vet[P->topo]=valor;
  return 1;
  
}
void desempilha (Pilha *P, int valor)
{
  if (vazia==1) return 0;
  else {
    *valor =  P-> vet[P->topo];
    P->topo = P-> topo -1;
    return 1;   
  }
}



int main(void){
  Pilha *P;
  P = criar();
  //A Partir daqui a minha pilha começa a existir
  while(1){
    switch(opcao) {
      int opcao;
      printf("MINHA PILHA");
      printf("1 - empilhar");
      printf("2 - desempilhar");
      printf("3 - sair");
      case 1:
        int valor;
        printf("digite um valor: ");
        scanf("%d",&valor);
        empilha(P,valor);
        break;
      case 2:
        desempilha(P,&valor);
        printf("%d",valor);
        break;
      case 3: 
        return 0;
    }
  }
  return 0;
}