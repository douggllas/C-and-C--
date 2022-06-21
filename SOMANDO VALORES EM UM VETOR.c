#include <stdio.h>

#define TAM_MAX 10

int main()
{

    int vet[TAM_MAX];
    int n;
    scanf("%d", &n);
    if (n >= TAM_MAX)
    {
        printf("Valor de n alterado para %d\n", TAM_MAX);
        n = TAM_MAX;
    }

    int i;
    for (i = 0; i < n; i++)
    {
        vet[i] = i + 1;
    }
    int soma = 0;
    i = 0;
    while (i < n)
    {
        soma += vet[i];
        i++;
    }
    printf("Soma = %d\n", soma);

    return 0;
}