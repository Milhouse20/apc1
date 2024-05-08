/* 8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)). */

#include <stdio.h>
#include <math.h>

int main() {

  int x1;
  int y1;
  int x2;
  int y2;

  printf("Insira o valor de x1: ");
  int leu_certo = scanf("%i", &x1);

  printf("Insira o valor de y1: ");
  leu_certo = scanf("%i", &y1);

  printf("Insira o valor de x2: ");
  leu_certo = scanf("%i", &x2);

  printf("Insira o valor de y2: ");
  leu_certo = scanf("%i", &y2);

  float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A distância das coordenadas é: %.2f\n", distancia);
  
  return 0;
}