/* 3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32). */

#include <stdio.h>

int main() {

  float celsius;

  printf("Insira o valor da temperatura em graus: ");
  float leu_certo = scanf("%f", &celsius);

  float fahrenheit = (9.0/5.0 * celsius) + 32;

  printf("O valor em fahrenheit convertido é: %.2f\n", fahrenheit);

  return 0;
}