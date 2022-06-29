#include <stdlib.h>
#include <stdio.h>

 int main () {
double *produtos;
int n,i;

printf("Informe o numero de produtos: ");
scanf("%d", &n);
produtos = (double *)malloc(n * sizeof(double));

for (i = 0; i < n;i++){
    printf("Informe o valor do produto %d R$: ", i + 1);
    scanf("%lf", &produtos[i]);
}

printf("\nProdutos cadastrados\n");
for (i = 0; i < n; i++){
    printf("Produto %d: R$ %.2lf\n", i + 1, produtos[i]);
}

free(produtos);

return 0;

 }