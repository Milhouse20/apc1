/* 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias. */

#include <stdio.h>

int main() {

  int anos;
  int meses;
  int dias;

  printf("Insira o número do ano: ");
  int deu_certo = scanf("%i", &anos);

  printf("Insira o número do mês: ");
  deu_certo = scanf("%i", &meses);

  printf("Insira o número do dia: ");
  deu_certo = scanf("%i", &dias);

  int dias_convertidos = (anos * 365) + (meses * 30) + dias;

  printf("O número de dias convertido é: %i\n", dias_convertidos);
  
  return 0;
}