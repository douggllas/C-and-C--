#include <stdlib.h>
#include <stdio.h>

typedef struct no
{
    int valor;
    struct no *proximo;
} No;

typedef struct
{
    No *inicio;
    int tam;
} Lista;

// Inserindo no inicio da lista;
void inserirInicio(Lista *lista, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor; //é a mesma coisa que fazer: (*novo).valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}

// Imprimindo a lista;
void imprimir(Lista *lista)
{
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n\n", lista->tam);

    while (inicio != NULL)
    {
        printf("%d \n", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}


int main()
{
    Lista lista;
    int opcao, valor;
    lista.inicio = NULL;
    lista.tam = 0;

    do
    {
        printf("1-Inserir no inicio\n2 - Imprimir\n5-Sair\n\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite um valor a ser inserido\n");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 5:
            printf("Finalizando...");
            break;
        }
    } while (opcao != 5);

    return 0;
}