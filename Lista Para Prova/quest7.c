//----------------------------------------------------
/**
 * Crie um programa que receba um vetor de números reais com 100 elementos. Escreva 
 * uma função recursiva que inverta a ordem dos elementos presentes no vetor.
 */

#include <stdio.h>

void vet_invertido_aux(double *vet, int inicio, int fim)
{
    if (inicio >= fim) return;

    double temp = vet[inicio];
    vet[inicio] = vet[fim];
    vet[fim] = temp;

    vet_invertido_aux(vet, inicio + 1, fim - 1);
}

void vet_invertido(double *vet, int tam)
{
    vet_invertido_aux(vet, 0, tam - 1);
}

int main()
{
    double vet[100];
    
    for (int i = 0.0; i < 100.0; i++) 
    {
        vet[i] = i + 1;
    }

    vet_invertido(vet, 100);

    for (int i = 0; i < 100; i++) {
        printf("vet[%d] = %.1f\n", i, vet[i]);
    }

    return 0;

}