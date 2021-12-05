#include <stdio.h>

int main() {
  int nxe,nxo,nf,ap;
  printf("Qual a nota do exame escrito?\n");
  scanf("%d" , &nxe);
  printf("Qual a nota do exame oral?\n");
  scanf("%d" , &nxo);
  nf=nxe*0.7+nxo*0.3;
  printf("Qual a nota final? %d" , nf);
  if (nf>10)
  printf(" Aprovado");
  else
  printf(" Reprovado");
  return 0;
}