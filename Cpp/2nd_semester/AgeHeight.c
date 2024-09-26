#include <stdio.h>

int main(){
  int idades[5], menorPessoa=0, maiorIdade=0, soma=0, soma2=0, qtd=0;
  float alturas[5], menorAltura=0;

  for (int i=0;i < 5;i++) {
    printf("Informe a %i° idade: \n", i+1);
    scanf("%d", &idades[i]);

    printf("E a altura dessa pessoa: \n");
    scanf("%f", &alturas[i]);

    if(i==0 || idades[i] > maiorIdade){
      maiorIdade = idades[i];
    }

    if(i==0 || alturas[i] < menorAltura){
      menorAltura = alturas[i];
      menorPessoa = idades[i];
    }

    if(alturas[i] > 1.80){
      soma2+= idades[i];
      qtd++;
    }

    soma+= idades[i];
  }

  float media = soma/5;
  int acimaMedia=0;

  for (int k=0;k < 5;k++) {
    acimaMedia += (idades[k] > media)? 1: 0;
  }

  float media2=0;
  if(qtd > 0) media2 = soma2/qtd;

  printf("\nA menor altura registrada foi %.2fm, com a pessoa tendo %i anos.\n", menorAltura, menorPessoa);
  printf("A maior idade registrada foi de %i anos.\n", maiorIdade);
  printf("A média das idades corresponde a %.0f anos.\n", media);
  printf("A quantidade de pessoas com idade acima da média: %d\n", acimaMedia);
  printf("A média das idades de pessoas com mais de 1.80m: %.0f anos.\n", media2);
}
