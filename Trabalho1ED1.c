#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 10

struct coordenada
{
    int i;
    int j;
};

typedef struct coordenada Coordenada;


struct pilha
{
    Coordenada C[TAM_MAX];
    int topo;
};

typedef struct pilha Pilha;

Pilha *criar(void)
{
    Pilha *P;
    P = (Pilha *)malloc(sizeof(Pilha));
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
        return 1; // true
    else
        return 0; // false
}

int cheia(Pilha *P)
{
    if (P->topo == TAM_MAX - 1)
        ;
    return 0;
}

void empilha(Pilha *P, int i, int j)
{
    if (cheia(P) == 1)
    {
    }
    else
        P->topo = P->topo + 1;
    P->C[P->topo].i = i;
    P->C[P->topo].j = j;
}
//|(i,j)|(i,j)|(i,j)|(i,j)|
void desempilha(Pilha *P, int *i, int *j)
{
    if (vazia(P) == 1)
    {
    }
    else
    {
        i = P->C[P->topo].i;
        j = P->C[P->topo].j;
        P->topo = P->topo - 1;
    }
}

int main(void)
{
    Pilha *P;
    P = criar();
    // A Partir daqui a minha pilha começa a existir
    while (1)
    {
        int opcao;
        int x1, x2;
        system("cls");

        for (int i = 0; i <= P->topo; i++)
            printf("|X=%d Y=%d\n", P->C[i].i, P->C[i].j);
        printf("\nMINHA PILHA\n");
        printf("1 - empilhar\n");
        printf("2 - desempilhar\n");
        printf("3 - sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("digite dois valores: ");
            scanf("%d %d", &x1, &x2);
            // x1=i, x2=j
            empilha(P, x1, x2);
            break;
        case 2:
            desempilha(P, &x1, &x2);
            printf("valor desempilhado i=%d j=%d\n\n", x1, x2);
            system("pause");
            break;
        case 3:
            return 0;
        }
    }
    return 0;
}