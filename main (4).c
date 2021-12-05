#include <stdio.h>

int main() {
  float base, altura, area;
  printf("Qual o valor da base?\n");
  scanf("%f" , &base);
  printf("Qual o valor da altura?\n");
  scanf("%f" , &altura);
  area=base*altura/2;
  printf("A área de um triângulo é: %f " , area);
  return 0;
}