//------------------------------------------------------------
/**
 * Considere um sistema numérico que não tenha a operação de adição 
 * implementada e que você disponha somente dos operadores de incremento (++) e
 * decremento (--). Então, pede-se para escrever uma função recursiva que calcule a
 * soma de dois números x e y através desses dois operadores: sucessor e
 * predecessor.
 */
//-------------------------------------------------------------
#include <stdio.h>

int adicao(int x, int y)
{
    if (y == 0) return x;
    x++;
    y--;

    return adicao(x, y);
}

int main()
{
    int x, y;
    
    printf("\nInforme x: ");
    scanf("%d", &x);
    printf("\nInforme y: ");
    scanf("%d", &y);

    printf("%d + %d = %d", x, y, adicao(x,y));

    return 0;

}