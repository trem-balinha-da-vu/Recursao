//----------------------------------------------------------------
/**
 * Escreva uma função recursiva que receba um vetor V e um número N e retorne
 * quantas vezes o número N aparece no vetor.
 */
//-----------------------------------------------------------------
#include <stdio.h>

int ocorrencia_aux(int *v, int tam, int k, int qtde_ocorrencia)
{
    if (tam < 0) return qtde_ocorrencia;
    if(v[tam] % 10 == k) qtde_ocorrencia++;
    return ocorrencia_aux(v, tam-1, k, qtde_ocorrencia);
}

int ocorrencia(int *v, int tam, int k)
{
    return ocorrencia_aux(v, tam-1, k, 0);
}

int main()
{
    int k = 4;
    int v[10] = {4, 4, 5, 6,3, 1, 4, 6, 4, 4};

    printf("\ndígito %d ocorre %d vezes no vetor",k, ocorrencia(v,10, k));

    return 0;
}