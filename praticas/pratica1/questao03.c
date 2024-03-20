/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  int raio;
  const float PI = 3.1416f;
  
  printf("Inserir o valor do raio da pizza: ");
  int deu_certo = scanf("%i", &raio);

  float P = 2 * PI * raio;

  printf("O perimetro da pizza é %f\n", P);
  
  return 0;
}