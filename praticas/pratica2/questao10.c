/* 10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação. */

#include <stdio.h>

int main() {

  int numero;
  
  printf("Insira um número inteiro: ");
  int leu_certo = scanf("%i", &numero);

  int numerox1 = numero * 1;
  int numerox2 = numero * 2;
  int numerox3 = numero * 3;
  int numerox4 = numero * 4;
  int numerox5 = numero * 5;
  int numerox6 = numero * 6;
  int numerox7 = numero * 7;
  int numerox8 = numero * 8;
  int numerox9 = numero * 9;
  int numerox10 = numero * 10;

  printf("A tabuada desse número:\n 1x = %i\n 2x = %i\n 3x = %i\n 4x = %i\n 5x = %i\n 6x = %i\n 7x = %i\n 8x = %i\n 9x = %i\n 10x = %i\n", numerox1, numerox2, numerox3, numerox4, numerox5, numerox6, numerox7, numerox8, numerox9, numerox10);

  return 0;
}