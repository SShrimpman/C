#include <stdio.h>

int main() {
  float cont, perc, i, nalunos, dadaidade, idade;
  cont=0;
  do {
    printf("Qual o número de alunos?\n");
    scanf("%f" , &nalunos);
  }
  while (nalunos<1);
  
  do {
    printf("Dada Idade:\n");
    scanf("%f" , &dadaidade);
  }
  while (dadaidade<0 || dadaidade>130);
  
  for (i=0;i<nalunos;i++) {
    do {
    printf("Qual a idade do aluno?\n");
    scanf("%f" , &idade);
    }
    while (idade<0 || idade>130);
    if (idade>dadaidade){
      cont++;
    }
  }
  perc=cont*100/nalunos;
  printf("Qual a percentagem de alunos? %0.2f" , perc);
  return 0;
}