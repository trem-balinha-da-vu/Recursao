//----------------------------------------------------------------
/**
 * Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um
 * número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
 */
//-----------------------------------------------------------------
#include <stdio.h>

int ocorrencia_aux(int n, int k, int qtde_ocorrencia)
{
    if (n == 0) return qtde_ocorrencia;
    if(n % 10 == k) qtde_ocorrencia++;
    return ocorrencia_aux(n / 10, k, qtde_ocorrencia);
}

int ocorrencia(int n, int k)
{
    return ocorrencia_aux(n, k, 0);
}

int main()
{
    int k = 4, n = 76222192;

    printf("\ndígito %d ocorre %d vezes em %d",k, ocorrencia(n, k), n);

    return 0;
}