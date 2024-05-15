/* 4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial. */

#include <stdio.h>

int main() {
  char letra;
  int digito;
  
  printf("Insira uma tecla: ");
  
 char tecla = getchar ();
    tecla >= 'a' && tecla <= 'z';
  
    printf("É uma letra!\n"); } else if (digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7 || digito == 8 || digito == 9 || digito == 0);
  { printf("É um dígito!\n"); } else { 
    printf ("É um caractere especial!\n");
  }
  
  return 0;
}