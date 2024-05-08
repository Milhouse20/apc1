/* 9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII. */

#include <stdio.h>

int main() {

  int numero;

  printf("Informe um número: ");
  int leu_certo = scanf("%i", &numero);

  printf("Em ASCII ficará: \n");
  putchar (numero);
 putchar ('\n');
  
  return 0;
}