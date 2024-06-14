//-----------------------------------------------------------------
/**
 * Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 = 321
 */
//-----------------------------------------------------------------

#include<stdio.h>

int inverte_num_aux(int n, int invertido)
{
    if (n == 0) return invertido;
    invertido = invertido * 10 + (n % 10);
    return inverte_num_aux(n / 10, invertido);
}

int inverte_num(int n)
{
    return inverte_num_aux(n, 0);
}

int main()
{
    int n;

    do 
    {
        printf("\ninforme n (0 para sair): ");
        scanf("%d", &n);
        printf("%d = %d\n",n, inverte_num(n));
    }while(n != 0);

    return 0;

}