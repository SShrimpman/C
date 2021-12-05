#include <stdio.h>

int main() {
  int x,y,aux,i;
  printf("Qual o valor de x?\n");
  scanf("%d" , &x );
  printf("Qual o valor de y?\n");
  scanf("%d" , &y );
  if (x>y) {
    aux=x;
    x=y;
    y=aux;
  }
  if (x%2!=0) {
    x++;
  }
  for (i=x;i<=y;i=i+2) {
  printf("Os números pares são: %d\n" , i);
  }
  return 0;
}