//--------------------------------------------------------
/**
 * Faça uma função recursiva que receba um vetor de números inteiros de tamanho 
 * tam, e retorne o maior elemento do vetor.
 */
//-------------------------------------------------------=

#include <stdio.h>

int maior_elemento_aux(int * vet, int tam, int *max)
{
    if (tam < 0) return *max;
    if (vet[tam] > *max) *max = vet[tam];

    return maior_elemento_aux(vet, tam-1, max);
}
int maior_elemento(int * vet, int tam)
{
    int max = vet[0];

    return maior_elemento_aux(vet, tam-1, &max);
}

int main()
{
    int vetor_teste[7] = {0, 0, 124, 0, 6, 0, 0};

    int maior = maior_elemento(vetor_teste, 7);

    printf("\nmaior elemento do vetor: %d", maior );

    return 0;
}