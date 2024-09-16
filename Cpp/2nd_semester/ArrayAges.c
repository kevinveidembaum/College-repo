#include <stdio.h>

int main(){
  int idades[10], menorIdade, qtd20e30=0, maiorMedia=0;
  float somaPessoas, qtdPessoas;

  for (int i=0;i<10;i++) {
    printf("Informe sua idade: ");
    scanf("%d", &idades[i]);

    if(i == 0) menorIdade = idades[i];

    menorIdade = (idades[i] < menorIdade)? idades[i]: menorIdade;

    qtd20e30 += (idades[i] >= 20 && idades[i] <= 30)? 1: 0;

    qtdPessoas++;
    somaPessoas += idades[i];
   }

  if(qtdPessoas > 0) somaPessoas /= qtdPessoas;

  for(int j=0;j <10;j++) {
    maiorMedia += (somaPessoas < idades[j])? 1: 0;

  }

  printf("A menor idade registrada foi: %d\n", menorIdade);
  printf("A média de idade das pessoas corresponde a: %.0f\n", somaPessoas);
  printf("A quantidade de pessoas com idades entre 20 e 30 anos: %d\n", qtd20e30);
  printf("A quantidade de pessoas com idade superior a média: %d\n", maiorMedia);
}
