/* 6. Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100. */

# include <stdio.h>

int main() {

  int numero;

  printf("Entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

   if (leu_certo) {
     for(int i=1; i<=100; i++) {
       if (i % numero == 0) {
         printf("%i, ", i);
       }
     }
     printf("\n");
   } else {
     printf("Numero inválido!\n");
   }
  
  return 0;
}