//-----------------------------------------------------------------------------
/**
 * Crie um programa que contenha uma função recursiva para encontrar o menor
 * elemento em um vetor.
 */
//-----------------------------------------------------------------------------
#include <stdio.h>

int menor_elemento_aux(int * vet, int tam, int min)
{
    if (vet[tam] < min) min = vet[tam];
    if (tam < 0) return min;

    return menor_elemento_aux(vet, tam-1, min);
}
int menor_elemento(int * vet, int tam)
{
    int min = vet[0];

    return menor_elemento_aux(vet, tam, min);
}

int main()
{
    int vetor_teste[7] = {0, 5, 7, 90, 6, 1456, 78};

    printf("\nmenor elemento do vetor: %d", menor_elemento(vetor_teste, 7));

    return 0;
}