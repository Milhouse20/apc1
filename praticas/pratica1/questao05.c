/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
  */

#include <stdio.h>

int main() {

  int gigabytes;

  printf("Insira o valor em gigabytes: ");
  int deu_certo = scanf("%i", &gigabytes);

  int bytes = gigabytes * 1024 * 1024 * 1024;

  printf("%i", bytes);
  
  return 0;
}