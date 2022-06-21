#include <stdio.h>
int main()
{

    int matriz[5][4];

    for (int i = 0; i < 5; i++) // i começa com zero
    {
        for (int j = 0; j < 4; j++) // J começa com zero
        {
            matriz[i][j] = i + 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
            int soma = 0;
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
        printf("\n%d\n", soma);
    }

    return 0;
}