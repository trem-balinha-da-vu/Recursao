//-----------------------------------------------------------------
/**
 * Faça uma rotina recursiva para detectar se uma string é palíndromo ou não. Ignore
 * todos os espaços da string.
 */
//-----------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int eh_palindromo_aux(char * str, int inicio, int fim)
{
    while (str[inicio] == ' ') {
        inicio++;
    }

    while (str[fim] == ' ') {
        fim--;
    }

    if (inicio >= fim) return 1;

    if (str[inicio] != str[fim]) return 0;

    return eh_palindromo_aux(str, inicio+1, fim-1);
}

int eh_palindromo (char *str, int tam)
{
    return eh_palindromo_aux(str,0, tam-1);
}

int main()
{
    char palavra[100];

    printf("\ndigite a palavra/frase: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho = strlen(palavra);

    eh_palindromo(palavra, tamanho) ? printf("\n %s eh palindromo", palavra) : printf("\n %s NAO eh palindromo", palavra);

    return 0;
}