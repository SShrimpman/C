#include <stdio.h>

int main() 
{
  int n;
  printf("Qual o dia da semana?\n");
    scanf("%d" , &n);
  switch (n) { 
  case 1:
    printf("Domingo");break;
  case 2:
    printf("Segunda");break;
  case 3:
    printf("Terça");break;
  case 4:
    printf("Quarta");break;
  case 5:
    printf("Quinta");break;
  case 6:
    printf("Sexta"); break;
  case 7:
    printf("Sábado");break;
  }
  return 0;
}