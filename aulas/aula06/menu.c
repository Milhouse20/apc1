#include <stdio.h>

int main() {

  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - Ligações feitas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opção: ");
  int leu_certo = scanf("%c", &opcao);

  switch(opcao) {
    case '1': printf("Seu saldo é R$ 10.00\n"); break;
    case '2': {
      float valor;
      printf("Entre com o valor da recarga: ");
      leu_certo = scanf("%f", &valor);
      if (!leu_certo) {
        printf("Valor inválido. Tente novamente!\n");
      }
      break;
    }
    case '3': printf("Você não tem recados\n"); break;
    case '4': 
      printf("6199999999\n");
      printf("6188888888\n");
      printf("6199999999\n");
      printf("6188888888\n");
    break;
    case '0': printf("Até logo!\n"); break;
    default: printf("Opção invalidada. Tente novamente!\n");
  }

  return 0;
}