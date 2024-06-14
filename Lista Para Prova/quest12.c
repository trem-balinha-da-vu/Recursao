//---------------------------------------------------------
/**
 * Faça um programa recursivo que imprima na tela todas as sequências de 4 letras que
 * seguem a seguinte regra:
 *           A primeira letra é uma consoante
 *           A segunda letra é uma vogal 
 *           A terceira letra é uma consoante
 *           A quarta letra é uma vogal
 */
//---------------------------------------------------------
#include <stdio.h>

void imprimirSequencias(char sequencia[], int posicaoAtual, char consoantes[], int tamanhoConsoantes, char vogais[], int tamanhoVogais) {
    if (posicaoAtual == 4) {
        for (int i = 0; i < 4; i++) {
            printf("%c", sequencia[i]);
        }
        printf("\n");
        return;
    }

    if (posicaoAtual == 0 || posicaoAtual == 2) {
        for (int i = 0; i < tamanhoConsoantes; i++) {
            sequencia[posicaoAtual] = consoantes[i];
            imprimirSequencias(sequencia, posicaoAtual + 1, consoantes, tamanhoConsoantes, vogais, tamanhoVogais);
        }
    } else if (posicaoAtual == 1 || posicaoAtual == 3) {
        for (int i = 0; i < tamanhoVogais; i++) {
            sequencia[posicaoAtual] = vogais[i];
            imprimirSequencias(sequencia, posicaoAtual + 1, consoantes, tamanhoConsoantes, vogais, tamanhoVogais);
        }
    }
}

int main() {
    char consoantes[] = "bcdfghjklmnpqrstvwxyz";
    char vogais[] = "aeiou";
    int tamanhoConsoantes = sizeof(consoantes) - 1; 
    int tamanhoVogais = sizeof(vogais) - 1; 

    char sequencia[4];

    imprimirSequencias(sequencia, 0, consoantes, tamanhoConsoantes, vogais, tamanhoVogais);

    return 0;
}
