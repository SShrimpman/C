#include <stdio.h>

int main() {
  float VT, VD, T, G, TE;
  printf("Qual o valor total?\n");
  scanf("%f" , &VT);
  printf("Qual o valor dado?\n");
  scanf("%f" , &VD);
  T=VT-VD;
  G=T*0.1;
  TE=T-G;
  printf("O troco efetivo é: %f" , TE);
  return 0;
}