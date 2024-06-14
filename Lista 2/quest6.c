//-------------------------------------------------------------------------
/**
 * Faça uma função recursiva que inverta os elementos de um vetor.
 */
//----------------------------------------------------

#include <stdio.h>

void vet_invertido_aux(int *vet, int inicio, int fim)
{
    if (inicio >= fim) return;

    int temp = vet[inicio];
    vet[inicio] = vet[fim];
    vet[fim] = temp;

    vet_invertido_aux(vet, inicio + 1, fim - 1);
}

void vet_invertido(int *vet, int tam)
{
    vet_invertido_aux(vet, 0, tam - 1);
}

int main()
{
    int vet[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    vet_invertido(vet, 20);

    for (int i = 0; i < 20; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;

}