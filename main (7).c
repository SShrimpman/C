#include <stdio.h>

int main() {
  int NIP, un, resu, dez, cent, num;
  scanf("%d" , &NIP);
  un=NIP%10;
  resu=num/10;
  dez=resu%10;
  cent=resu/10;
  printf("A unidade é: %d" , un );
  printf(" A dezena é: %d" , dez);
  printf(" A centena é: %d" , cent);
  return 0;
}