#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>

#define true 0
#define false 1

typedef struct vetor
{
    float *elem;
    int total;
    int max;
} Vetor;

Vetor *criar(int n, bool *deuCerto)
{
    Vetor *v;
    v = (Vetor *)malloc(sizeof(Vetor));
    if (v == NULL)
        *deuCerto = false;
    else
    {
        v->elem = (float *)malloc(sizeof(n * sizeof(float)));
        if (v->elem == NULL)
            *deuCerto = false;
        else
        {
            *deuCerto = true;
            v->total = 0;
            v->max = n;
        }
    }
    return v;
}
void destrutir(Vetor *v)
{
    free(v->elem);
    free(v);
}

int cheia(Vetor *v)
{
    Vetor *v;
    if (v->max == v->total - 1)
        return 0;
    else
        return 1;
}

float inserir(Vetor *v, float valor)
{
}
