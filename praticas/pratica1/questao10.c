/* 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares). */

#include <stdio.h>

int main() {

  int numero;

  int unidade;
  int dezena;
  int centena;
  int milhar;

  printf("Insira o número: ");
  int deu_certo = scanf("%i", &numero);

  unidade = numero % 10;
  dezena = (numero / 10) % 10;
  centena = (numero / 100) % 10;
  milhar = (numero / 1000) % 10;

  printf(" A decomposição do número é: %i sendo a unidade, %i sendo a dezena, %i sendo a centena, %i sendo a milhar\n", unidade, dezena, centena, milhar);
  
  return 0;
}