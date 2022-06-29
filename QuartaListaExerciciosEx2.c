#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, pares = 0, impares;
    int i = 0;
    int *numeros;

    printf("Quantos inteiros serao lidos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%do inteiro:\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
            printf("O numero %d e par\n", pares);
        }
        else
        {
            impares++;
            printf("O numero %d e impar\n", numeros[i]);
        }
    }

    return 0;
}
