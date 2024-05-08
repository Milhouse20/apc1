/* 4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²). */

#include <stdio.h> 

int main() {

  float largura;
  float comprimento;

  printf("Insira o tamanho em metros largura do terreno: ");
  float leu_certo = scanf("%f", &largura);

  printf("Insira o tamanho em metros comprimento do terreno: ");
  leu_certo = scanf("%f", &comprimento);

  float area_metro = largura * comprimento;

  printf("A área em metros do terreno é: %.2f\n", area_metro);

  float area_hectare = area_metro * 0.0001;

  printf("A área em hectares do terreno é: %f\n", area_hectare);
  
  return 0;
}