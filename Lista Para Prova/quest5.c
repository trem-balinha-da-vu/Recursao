//----------------------------------------------------------------------
/**
 * Faça uma função recursiva que calcule o valor da série S descrita a seguir para um valor
 * n > 0 a ser fornecido como parâmetro para ela.
 *          S = 2 + (5/2) + (10/3) + ... + ((1 + n²)/n)
 */
//----------------------------------------------------------------------

#include<stdio.h>

double calcula_S(int n)
{
    if (n == 1) return 2.0;

    return ((1.0 + n*n)/n) + calcula_S(n-1);
}

int main()
{
    int n = 1;

    do 
    {
        printf("\ninforme n, n > 0 (0 para sair): ");
        scanf("%d", &n);
        printf("Serie S para o valor de n = %d: %.3lf\n",n, calcula_S(n));
    }while(n != 0);

    return 0;
}