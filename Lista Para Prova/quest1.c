//---------------------------------------------------------------------------------------
/***
 * Implemente um método recursivo que receba como entrada um número N e retorne o
 *  N-ésimo número de Pell.
 * p(0) = 0; p(1) = 1; p(n) = 2*p(n-1) + p(n-2);
 * 
 * Exemplo de números desta sequência são: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...
*/
//---------------------------------------------------------------------------------------
#include <stdio.h>

int numero_de_pell(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return 2*numero_de_pell(n-1) + numero_de_pell(n - 2);
}

int main()
{
    int n;

    do 
    {
        printf("\ninforme n (-1 para sair): ");
        scanf("%d", &n);
        printf("Numero de Pell correspondente: %d\n", numero_de_pell(n));
    }while(n != -1);

    return 0;
}


