/* 6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra). */

#include <stdio.h>

int main() {

  float valor_de_compra;
  int ano_de_fabricacao;
  int ano_de_depreciacao;
  
  printf("Digite o valor de compra: ");
  float leu_certo = scanf("%f", &valor_de_compra);

  printf("Digite o ano de fabricação: ");
  leu_certo = scanf("%i", &ano_de_fabricacao);

  printf("Digite o ano de depreciação: ");
  leu_certo = scanf("%i", &ano_de_depreciacao);

  float valor_depreciado = (ano_de_depreciacao - ano_de_fabricacao) * 0.01 * 
  valor_de_compra;

  printf("O valor depreciado foi: %.3f\n", valor_depreciado);
  
  return 0;
}