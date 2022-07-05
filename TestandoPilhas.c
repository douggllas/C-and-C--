#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 50

struct pilha
{
    int vet[TAM_MAX];
    int topo;
};

typedef struct pilha Pilha;

Pilha *criar(void)
{
    int vet;
    Pilha *P;
    P = (Pilha *)malloc(sizeof(Pilha));
    P->vet[TAM_MAX] malloc(*topo sizeof(int));
    
    if (P != NULL)
    {
        P->topo = -1;
        return P;
    }
}

void destruir(Pilha *P)
{
    free(P);
}

int vazia(Pilha *P)
{
    if (P->topo == -1)
        return 1;
    else
        return 0;
}

int cheia(Pilha *P)
{
    P->topo;
    if (topo= vet[TAM_MAX - 1])    return 0;
}

void empilha(Pilha *P, int valor)
{
    if (cheia(P) == 1)
        return 0;
    else
        P->topo = P->topo + 1;
    P->vet[P->topo] = valor;
    return 1;
}
void desempilha(Pilha *P, int valor)
{
    if (vazia == 1)
        return 0;
    else
    {
        valor = P->vet[P->topo];
        P->topo = P->topo - 1;
        return 1;
    }
}

int main()
{
    Pilha *P;
    int valor;
    char X;

    P = criar(&valor);

    if (valor == 0)
    {
        printf("Nao foi possivel criar a pilha");
        return 0;
    }

    empilhar(P, 'a', &valor);
    empilhar(P, 'b', &valor);
    empilhar(P, 'c', &valor);
    empilhar(P, 'd', &valor);
    empilhar(P, 'e', &valor);
    empilhar(P, 'f', &valor);
    empilhar(P, 'g', &valor);
    empilhar(P, 'h', &valor);
    empilhar(P, 'i', &valor);
    empilhar(P, 'j', &valor);
    desempilha(P, c, &valor);
    empilhar(P, 'k', &valor);

    if (cheia == 1)
        printf("pilha cheia\n");

    desempilha(P, &c, &valor);
    printf("   %c\n", c);

    destruir(P);
    return 0;
}
