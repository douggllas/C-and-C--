#include <stdio.h>
typedef char douglas;

int main()
{
    douglas texto[80];
    int n;
    scanf("%d\n", &n);

    scanf("%[^\n]", texto);

    printf("\n-------------\n%d\t%s    ", n, texto);

    return 0;
}