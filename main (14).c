#include <stdio.h>

int main() {
  int cargo, salario, novosalario, dif;
  printf("Qual o seu salário?\n");
    scanf("%d", &salario);
  printf("Qual o seu cargo?\n");
    scanf("%d" , &cargo);
  switch (cargo) {
    case 101:
      novosalario=salario*1.25;
      dif=novosalario-salario;
      printf(" O novo salário é: %d " , novosalario);
      printf(" O salário antigo é: %d" , salario);
      printf(" A diferença é: %d" , dif);break;
    case 102:
      novosalario=salario*1.20;
      dif=novosalario-salario;
      printf(" O novo salário é: %d " , novosalario);
      printf(" O salário antigo é: %d" , salario);
      printf(" A diferença é: %d" , dif);break;
    case 103:
      novosalario=salario*1.15;
      dif=novosalario-salario;
      printf(" O novo salário é: %d " , novosalario);
      printf(" O salário antigo é: %d" , salario);
      printf(" A diferença é: %d" , dif);break;
    case 104:
      novosalario=salario*1.10;
      dif=novosalario-salario;
      printf(" O novo salário é: %d " , novosalario);
      printf(" O salário antigo é: %d" , salario);
      printf(" A diferença é: %d" , dif);break;
  }
  return 0;
}