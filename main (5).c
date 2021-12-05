#include <stdio.h>

int main() {
  float VT, VL, IVA;
  printf("Qual o valor lido?\n");
  scanf("%f" , &VL);
  IVA=VL*0.23;
  VT=VL+IVA;
  printf("O valor total é: %f" , VT);
  return 0;
}