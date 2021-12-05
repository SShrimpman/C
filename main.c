#include <stdio.h>

int main() {
  int n1, n2, produto;
  printf("Qual o valor de n1?\n");
  scanf("%d" , &n1);
  printf("Qual o valor de n2?\n");
  scanf("%d" , &n2);
  produto=n1*n2;
  printf("Produto: %d" ,produto);
  return 0;
}