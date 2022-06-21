#include <stdio.h>
#include <conio.h>
void main()
{
    int *num;
    int count = 0;
    int totalnums;
    //clrscr();
    do
    {
        printf("Entre com um numero ou digite 0\t\n");
        scanf("%d", num + count);
        count++;
    } while ((*(num + count - 1) != 0) && (count < 100));
    totalnums = count - 1;
    printf("\nOs numeros digitados foram: \n");
    for (count = 0; count <= totalnums; count++)
    {
        printf("%d", *num);
        num++;
    }
}
