#include <stdio.h>
#include <stdbool.h>
int main(){
  int idade, maiorIdade, primeiroLoop=1, qtdSalario=0, somaSalario=0;
  float salario, maiorSalario, media, ganhaBem=0;
  bool loop=true;

  while (loop) {
    printf("Informe seu salário: \n");
    scanf("%f", &salario);

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    if(primeiroLoop){
      maiorSalario = salario;
      maiorIdade = idade;
      primeiroLoop = 0;
    }

    loop = (idade <= 0)? false:true;
    ganhaBem += (salario > 5000)? 1 : 0;
    maiorSalario = (salario > maiorSalario)? salario : maiorSalario;
    maiorIdade = (idade > maiorIdade)? idade : maiorIdade;
    if(idade > 20 && idade < 30){
      somaSalario += salario; 
      qtdSalario++;   
    }
}
  if(qtdSalario > 0) media = (somaSalario/qtdSalario);

  printf("Programa encerrado!\n");
  printf("O maior salário registrado foi: R$%.2f\n", maiorSalario);
  printf("A maior idade registrada foi: %i\n", maiorIdade);
  printf("A porcentagem de pessoas que ganham mais que R$5.000: %.1f%%\n", (ganhaBem/100)*100);
  printf("Média de salário com pessoas entre 20 e 30 anos: R$%.2f\n", media);
}
