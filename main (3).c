#include <stdio.h>

int main() {
  int n, ant, suc;
  printf("Qual o valor de n?\n");
  scanf("%d" , &n );
  ant= n-1;
  suc= n+1;
  printf("O antecedente é: %d " , ant);
  printf("O sucessor é: %d " , suc);
  return 0;
}