//---------------------------------------------------------------------
/**
 * Escreva uma função recursiva que receba como parâmetros um número real X e
 * um inteiro N e retorne o valor de XN.
 */
//---------------------------------------------------------------------
#include<stdio.h>

int multiplica (int x, int n)
{
    if (n == 1) return x;

    return x + multiplica(x, n-1);
}

int main ()
{
    int n, x;

    printf("\nInforme N: ");
    scanf("%d", &n);
    printf("\nInforme X: ");
    scanf("%d", &x);

    printf("%d * %d = %d", x, n, multiplica(x,n));

    return 0;
}