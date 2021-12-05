#include <stdio.h>

int main() {
  int num;
  scanf("%d" , &num);
  if (num%2==0)
  printf("É par %d" , num);
  else 
  printf("É ímpar %d" , num);
  return 0;
}