#include <stdlib.h>
#include <stdio.h>
 
 int main () {
     int *numeros;
     int n,i;
     n = 5;
     numeros = (int *)malloc(n * sizeof(int));

     for (i = 0; i < n; i++) {
         printf("Informe cinco numeros\n", i+1);
         scanf("%d", &numeros[i]);
     }
     printf("\n");
     for (i = 0; i < n; i++)
     {
         printf("O %d* numero digitado foi o %d\n", i + 1, numeros[i]);
     }

    free(numeros);
    printf("\n\t\aMemoria apos usar o Free: %d\n\n\a", numeros[i]);

    return 0;
 }