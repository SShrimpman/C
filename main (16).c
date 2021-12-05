#include <stdio.h>

int main() 
{
  int nalunos, nota, i, cont;
  cont=0;
  do {
    printf("Quantos alunos são?\n");
    scanf("%d" , &nalunos);
  }while  (nalunos<1);
  
  for (i=0;i<nalunos;i++) {
    do {
      printf("Qual a sua nota?\n");
      scanf("%d" , &nota);
    } while (nota<0 || nota>20);
    if (nota<9.5) {
    cont++;
    }
  }
  printf("O número de negativas é: %d " , cont);
  return 0;
}