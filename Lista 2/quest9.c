//------------------------------------------------------------------------------
/**
 * O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais
 * de N. Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3! * 4! = 288, Faça uma função
 * recursiva que receba um número inteiro positivo N e retorne o superfatorial desse
 * número.
 */
//-------------------------------------------------------------------------------
#include <stdio.h>

int fatorial(int n) {
  if (n == 0) {
    return 1; 
  } else {
    return n * fatorial(n - 1);
  }
}

int superfatorial(int n) {
  if (n == 0) return 1;

  return fatorial(n) * superfatorial(n - 1);
}

int main() {
  int numero = 4; 
  int resultado = superfatorial(numero);

  printf("Superfatorial de %d: %d\n", numero, resultado);

  return 0;
}

