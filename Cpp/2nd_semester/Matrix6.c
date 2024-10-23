#include <stdio.h>

void imprimirMensagem(int k){
  if(k == 0){
    printf("\nInforme seu Salário: ");
  } else if (k == 1) {
    printf("Informe sua Idade: ");
  }else {
    printf("Quantos filhos tem? ");
  }
}

int main(){
  int matrix[10][3], somaSalario=0, somaFilhos=0;
  int i, j, qtdFilhos=0, somaSalario2=0, qtdSalario=0;

  for (i=0;i < 10;i++) {
    for (j=0;j < 3;j++) {
      imprimirMensagem(j);
      scanf("%d", &matrix[i][j]);

      somaSalario += (j==0)? matrix[i][j]: 0;
      somaFilhos += (j==2)? matrix[i][j]: 0;
    }
  }

  for (i=0;i < 10;i++) {
    for (j=0;j < 3;j++) {
      if (matrix[i][1] > 15 && matrix[i][1] < 25) {
        qtdFilhos += matrix[i][2];
      }

      if(matrix[i][1] > 20 && matrix[i][1] < 30){
        somaSalario2 += matrix[i][0];
        qtdSalario++;
      }
    }
  }

  float mediaSal = (float)somaSalario/10;
  float mediaFilho = (float)somaFilhos/10;
  float media;
  if (qtdSalario > 0) media = (float)somaSalario2/qtdSalario;

  printf("A média salarial da população: R$%.2f\n", mediaSal);
  printf("A média de Filhos da população: %.0f\n", mediaFilho);
  printf("A qtd. de Filhos de pessoas com idade entre 15 e 25: %d\n", qtdFilhos);
  printf("A média salarial de pessoas na faixa dos 20 a 30 anos: R$%.2f\n", media);
}
