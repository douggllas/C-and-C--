#include <stdio.h>

int main()
{
    char texto[] = {"123456789"};
    int i, tam = 0;
    while (texto[tam] != 0)
    {
        tam++;
    }
    printf("\n\n%d", tam);

    return 0;
}