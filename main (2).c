#include <stdio.h>

int main() {
  int n1, n2, div;
  printf("Qual o valor de n1?\n");
  scanf("%d" , &n1);
  printf("Qual o valor de n2?\n");
  scanf("%d" , &n2);
  div= n1/n2;
  printf("A Divisão é: %d" , div);
  return 0;
}