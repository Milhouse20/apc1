/*3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.*/

#include <stdio.h>

int main() {

  int nota = 0;

  printf("Entre com a avaliação de 1 a 5: ");
  int leu_certo = scanf("%i", &nota);
  
  switch(nota) {
    case 1: printf("A nota foi ruim.\n"); break;
    case 2: printf("A nota foi insuficiente.\n"); break;
    case 3: printf("A nota foi suficiente.\n"); break;
    case 4: printf("A nota foi bom.\n"); break;
    case 5: printf("A nota foi ótimo.\n"); break;
    default: printf("A nota está inválida, tente novamente.\n");
  }
  
  return 0;
}