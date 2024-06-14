//----------------------------------------------------------------
/*
 * Crie uma função recursiva que receba um número inteiro positivo N e calcule o
 * somatório dos números de 1 a N.
 */
//----------------------------------------------------------------
#include <stdio.h>

int somatorio_aux(int n, int soma)
{
    if (n == 0) return soma;

    return somatorio_aux(n -1, soma+n);
}

int somatorio(int n)
{
    return somatorio_aux(n, 0);
}

int main()
{
    int n;

    do 
    {
        printf("\ninforme n (-1 para sair): ");
        scanf("%d", &n);
        printf("Somatório de 1 a n: %d\n", somatorio(n));
    }while(n != -1);

    return 0;
}