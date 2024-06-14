//---------------------------------------------------------------------------
/***
 * Escreva um procedimento recursivo Dec2Bin(int n) que dado um número decimal
 * mostre a sua representação binária corretamente.
 */
//---------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dec2bin_aux(int n, char *bin, int *index) {
    if (n == 0) {
        return bin;
    }

    putchar(n % 2 ? '1' : '0');
    strcat(bin + (*index), n % 2 ? "1" : "0");

    return dec2bin_aux(n / 2, bin, index);
}

char *dec2bin(int n) {
    int index = 33;
    
    char *bin = (char *)malloc(index);
    if (bin == NULL) {
        printf("falha na alocação de memória\n");
        exit(1);
    }

    bin[32] = '\0';
    index -= 2;

    //numeros negativos
    if (n < 0) {
        n = -n; 
        putchar('-'); 
    }

    return dec2bin_aux(n, bin, &index);
}

int main() {
    int n;
    printf("\n informe o inteiro: ");
    scanf("%d", &n);

    char *bin = dec2bin(n);

    free(bin);

    return 0;
}
