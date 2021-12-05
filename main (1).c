#include <stdio.h>

int main() {
  int n1, n2, n3, media; 
  printf("Qual o valor de n1?\n");
  scanf("%d" , &n1 );
  printf("Qual o valor de n2?\n");
  scanf("%d" , &n2 );
  printf("Qual o valor de n3?\n");
  scanf("%d" , &n3 );
  media= n1+n2+n3/3;
  printf("A média é: %d " , media);
  return 0;
}