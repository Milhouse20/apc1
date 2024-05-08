/* 1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números. */

#include <stdio.h>

int main() {

  float numero1;
  float numero2;
  float numero3;

  printf("Entre com o primeiro número: ");
  float leu_certo = scanf("%f", &numero1);

  printf("Entre com o segundo número: ");
  leu_certo = scanf("%f", &numero2);

  printf("Entre com o terceiro número: ");
  leu_certo = scanf("%f", &numero3);

  float media = (numero1 + numero2 + numero3) / 3;

  printf("A média aritmética dos 3 é: %f\n", media);
  
  return 0;
}