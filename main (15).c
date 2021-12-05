#include <stdio.h>

int main() 
{
  int nalunos, nota, i, soma, media;
  do {
    printf("Quantos alunos são?\n");
    scanf("%d" , &nalunos);
  }while (nalunos<1);
  for (i=0;i<nalunos;i++) {
    do {
      printf("Qual a sua nota?\n");
      scanf("%d" , &nota);
    }while (nota<0 || nota>20);
    soma=soma+nota;
    }
  media=soma/nalunos;
  printf("A sua média é: %d", media);
  return 0;
}