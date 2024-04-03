// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
# include <math.h>

int main() {


  double distancia = 0.0;
  int angulo = 0;

  const double PI = 3.1416;

  printf("Insira o valor do angulo: ");
  int deu_certo = scanf("%i", &angulo);

  double seno = sin(angulo * (PI / 180));
    
  printf("Insira o valor da distância: ");
  deu_certo = scanf("%lf", &distancia);

  double altura = seno * distancia;
  printf("A altura alcançada pelo avião é %.2f\n", altura);

  return 0;
}