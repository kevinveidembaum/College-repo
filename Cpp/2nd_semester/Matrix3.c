#include <stdio.h>
#include <string.h>

int main(){
  float matrix[5][3], trimestreVenda[5], soma, maiorNum=0, menorNum;
  char vendedores[5][30];
  int i, j;
  float totalMensal[3] = {0, 0, 0};

  printf("Informe o nome dos vendedores.\n");

  for (i=0;i < 5;i++) {
    printf("%i° Vendedor: ", i+1);
    fgets(vendedores[i], sizeof(vendedores), stdin);
    vendedores[i][strcspn(vendedores[i], "\n")] = '\0';

    if (i==4) printf("\n");
  }

  for (i=0;i < 5;i++) {
    printf("=-=-=-=- Vendedor %s -=-=-=-=\n", vendedores[i]);

    soma = 0;
    for (j=0;j < 3;j++) {
      printf("Seu total de Vendas no %i° mês: ", j+1);
      scanf("%f", &matrix[i][j]);

      if (matrix[i][0] > maiorNum){
        maiorNum = matrix[i][0];
      }

      if (i == 0 && j == 2) {
        menorNum = matrix[i][2];
      }

      if (j == 2 && matrix[i][2] < menorNum) {
        menorNum = matrix[i][2];
      }

      totalMensal[j] += matrix[i][j];

      soma += matrix[i][j];
    }

    trimestreVenda[i] = soma;
  }

  printf("\nVendedor          Total das Vendas por Trimestre\n");
  for (i=0;i < 5;i++) {
    printf("%-25s R$%.2f\n", vendedores[i], trimestreVenda[i]);
  }

  printf("\nA maior Venda no 1° Mês foi de: R$%.2f\n", maiorNum);
  printf("A menor Venda no 3° Mês foi de: R$%.2f\n", menorNum);

  for (i=0;i < 3;i++) {
    printf("Total de vendas no %i° Mês: R$%.2f\n", i+1, totalMensal[i]);
  }
}
