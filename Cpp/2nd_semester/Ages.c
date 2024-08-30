#include <stdio.h>

int main(){
  int idade, menorIdade=0, maiorIdade=0, menor10=0, qtdIdades=0, somaIdades=0;
  
  int primeiroLoop = 1;

  do{
    printf("Insira sua idade: \n");
    scanf("%i", &idade);

    if(idade <= 0) break;

    if(primeiroLoop){
      menorIdade = idade;
      maiorIdade = idade;
      primeiroLoop = 0;
    }

    if(idade > maiorIdade){
      maiorIdade = idade;
    }

    if(idade < menorIdade){
      menorIdade = idade;
    }

    if(idade < 10){
      menor10++;
    }

    somaIdades += idade;
    qtdIdades++;

  }while(1);
  
  if(qtdIdades > 0){
    float media = somaIdades/qtdIdades;
    printf("A média das Idades foi: %.2f\n", media);
  }else {
    printf("Não foi possível fazer a média das Idades.\n");
  }

  printf("A maior Idade registrada: %i\n", maiorIdade);
  printf("A menor Idade registrada: %i\n", menorIdade);
  printf("A quantidade de Idades menor que 10: %i\n", menor10);

  return 0;
}
