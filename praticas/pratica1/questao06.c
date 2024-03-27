/* 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). */

#include <stdio.h>
#include <math.h>

int main() {

  int a;
  int b;
  int c;

  printf("Insira o valor de a: ");
  int deu_certo = scanf("%i", &a);

  printf("Insira o valor de b: ");
  deu_certo = scanf("%i", &b);

  printf("Insira o valor de c: ");
  deu_certo = scanf("%i", &c);

  float delta = b * b - 4 * a * c;
  
  double raiz_delta = sqrt(delta);

  float raiz1 = ((-b) + (raiz_delta)) / (2 * a);
  float raiz2 = ((-b) - (raiz_delta)) / (2 * a);
  

  printf("Raiz 1:  %f\n", raiz1);
  printf("Raiz 2:  %f\n", raiz2);
  
  return 0;
}