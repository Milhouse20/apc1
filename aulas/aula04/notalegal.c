#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;
  
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Entre com a qtde do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[32m----------------------------\n");
  printf("      N O T A  L E G A L    \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM            QTD  VALOR  \n");
  printf("%-15s %03i \x1b[34m %02.4f\x1b[0m\n" , nome, quantidade, valor);
  
  return 0;
}