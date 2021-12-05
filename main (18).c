#include <stdio.h>

int main() {
  float n,soma, media, cont;
  soma=0;
  cont=0;
  printf("Qual o valor de n?\n");
  scanf("%f" , &n );
  while (n!=0) {
      soma=soma+n;
      cont++;
      scanf("%f" , &n);
  }
  media=soma/cont;
  printf("A soma é: %0.2f\n" , soma);
  printf("A média é: %0.2f\n" , cont++);
  return 0;
}