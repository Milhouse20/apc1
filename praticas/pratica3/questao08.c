/* 8. Faça um programa em C que calcule o fatorial de um número inteiro. n! = n x n-1 x n-2 x ... 2 x 1 */

#include <stdio.h>

int main() {

  int numero;
  long int fatorial = 1;

  printf("Cálculo do Fatorial (n!)\n\n");
  printf("Entre com um número >= 0: ");
  int leu_certo = scanf("%i", &numero);
  int numero_valido = numero >= 0;

  if (leu_certo && numero_valido) {
    printf("%i! = ", numero);
    for(int i = numero; i > 1; i--) {
     fatorial = fatorial * i;
     printf("%i x ", i);
    }
    printf("1 = %li\n", fatorial);
  } else {
    printf("Número inválido\n");
  }
  
  return 0;
}