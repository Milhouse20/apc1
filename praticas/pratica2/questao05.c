/* 5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²). */

#include <stdio.h>

int main() {

  float peso;
  float altura;

  printf("Para saber seu imc (Índice de Massa Corporal), você terá que informar seu peso e sua altura\n");

  printf ("Indique seu peso: ");
  float leu_certo = scanf("%f", &peso);

  printf ("Indique sua altura: ");
  leu_certo = scanf("%f", &altura);

  float imc = peso / (altura * altura);

  printf("O seu índice de massa corporal é: %.2f\n", imc);

  return 0;
}