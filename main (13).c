#include <stdio.h>

int main() {
  float SM;
  printf("Qual o seu saldo médio?\n");
  scanf("%f" , &SM);
  if (SM<200) {
    printf("Nenhum Crédito");
  }
  else
    if (SM<=400) {
      printf("O crédito é: %0.2f" , SM*0.2);
      printf(" Saldo médio: %0.2f" , SM);
    }
  else
    if (SM<=600) {
      printf("O crédito é: %0.2f" , SM*0.3);
      printf(" Saldo médio: %0.2f" , SM);
    }
    else
    if (SM>600) {
      printf("O crédito é: %0.2f" , SM*0.4);
      printf(" Saldo médio: %0.2f" , SM);
    }
  return 0;
}