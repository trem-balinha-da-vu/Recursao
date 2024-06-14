//-----------------------------------------------------------------
/**
 * Faça uma função recursiva que receba um número inteiro positivo N e imprima todos 
 * os números naturais de 0 até N em ordem decrescente.
 */
//------------------------------------------------------------------

#include<stdio.h>

void imprime_naturais_decrescente(int n)
{
    if (n < 0) return;

    printf("%d ", n);

    return imprime_naturais_decrescente(n-1);
}

int main()
{
    int n = 15;

    imprime_naturais_decrescente(n);

    return 0;
}