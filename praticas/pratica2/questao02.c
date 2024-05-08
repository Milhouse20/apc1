/* 2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>

int main() {

  int numero1;
  int numero2;

  printf("Insira o primeiro número: ");
  int leu_certo = scanf("%i", &numero1);

  printf("Insira o segundo número: ");
  leu_certo = scanf("%i", &numero2);

  int quociente = numero1 / numero2;

  int resto = numero1 % numero2;

  printf("O quociente e o resto da divisão são: %i e %i\n", quociente, resto);
  
  return 0;
}