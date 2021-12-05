#include <stdio.h>

int main() 
{
  int EC, Idade;
  printf("Qual o seu estado civil?\n");
    scanf("%d" , &EC);
  printf("Qual a sua idade?\n");
    scanf("%d" , &Idade);
  if (EC==0){
    if (Idade<=25) {
      printf("Grupo 1");
    }
    else {
      printf("Grupo 2");
    }
  }
  else { 
    if (Idade<34) {
      printf("Grupo 3");
    }
    else {
      printf("Grupo 4");
    }
  }

  return 0;
}