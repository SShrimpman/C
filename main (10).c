#include <stdio.h>

int main() 
{
  float SM, HT, PH, PHE;
  scanf("%f" , &HT);
  if (HT<=36)
    SM=HT*7.5;
  
  else 
    SM=36*7.5+(HT-36)*10;
    printf("O salário semanal é: %f" , SM);
  
  return 0;
}