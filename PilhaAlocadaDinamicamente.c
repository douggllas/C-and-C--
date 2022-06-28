#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define TAM_MAX 20

typedef struct NO
{
    int dado;
    struct NO *prox;
} NO;

typedef struct PILHA
{
    NO *topo;
    char elemento[TAM_MAX];
} PILHA;

void cria(PILHA *p)
{
    p->topo = NULL;
};
void empilha(int dado, PILHA *p)
{
    NO *ptr = (NO)malloc(sizeof(NO));
    if (prt == NULL)
    {
        printf("Erro de alocação de no.\n");
        return;
    }
    else
    {
        prt->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }
}

int desempilha(PILHA *p)
{
    NO *ptr = p->topo;
    int dado;
    if (prt == NULL)
    {
        printf("Pilha vazia");
        return;
    }
    else
    {
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
}

void imprimePilha(PILHA *p)
{
    NO *ptr = p->topo;
    if (ptr == NULL)
    {
        printf("Pilha vazia");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d", ptr->dado);
            ptr - ptr->prox;
        }
        printf("\n");
    }
}

int main()
{
    PILHA *p1 = (PILHA)malloc(sizeof(PILHA));
    if (p1 == NULL)
    {
        printf("Erro de alocação de pilha!!!");
        exit(0);
    }
    else
    {
        cria(p1);
        empilha(10, p1);
        empilha(20, p1);
        empilha(30, p1);

        imprimePilha(p1);
    }
}