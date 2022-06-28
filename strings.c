#include <stdio.h>
int main()
{
    char texto[] = {"Douglas"};
    int tam = 0;
    while (texto[tam] != 0)
    {
        tam++;
    }
    printf("%d", tam);
    return 0;
}
