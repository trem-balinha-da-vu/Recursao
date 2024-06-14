//-------------------------------------------------------------
/**
 * Crie um programa que conte os dígitos de um determinado número usando recursividade.
 */
//-------------------------------------------------------------

#include<stdio.h>

int conta_dig_aux(int n, int qtde_digitos)
{
    if(n == 0) return qtde_digitos;
    return conta_dig_aux(n/10, qtde_digitos+1);
}

int conta_dig(int n)
{
    return conta_dig_aux(n, 0);
}

int main()
{
    int n;

    do 
    {
        printf("\ninforme n (0 para sair): ");
        scanf("%d", &n);
        printf("quantidade de digitos em %d: %d\n",n, conta_dig(n));
    }while(n != 0);

    return 0;
}