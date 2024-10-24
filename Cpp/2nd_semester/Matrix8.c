#include <stdio.h>

int main(){
  int matrix[2][6], maiorNum=0, mult3=0, somaSegunda=0, soma=0, i, j;
  float novaMatrix[2][6];

  printf("Preencha a Matriz 2 x 6: \n");
  for (i=0;i < 2;i++) {
    for (j=0;j < 6;j++) {
      printf("[%d][%i]: ", i, j);
      scanf("%d", &matrix[i][j]);

      if(i==0 && j==0) maiorNum = matrix[i][j];
      maiorNum = (matrix[i][j] > maiorNum)? matrix[i][j]: maiorNum;

      mult3 += (matrix[i][j]%3==0)? matrix[i][j]: 0;

      if(i==1) somaSegunda += matrix[1][j];

      soma += matrix[i][j];
    }
  }

  float media = (float)soma/12;
  float mediaSegunda = (float)somaSegunda/6;

  for (i=0;i < 2;i++) {
    for (j=0;j<6;j++) {
      novaMatrix[i][j] = matrix[i][j]*media;
    }
  }

  printf("O maior Número encontrado foi: %i\n", maiorNum);
  printf("A soma dos números Múltiplos de 3: %i\n", mult3);
  printf("A Média dos números presentes na 2° Linha: %.1f\n", mediaSegunda);
  printf("A Média da Matriz: %.1f\n", media);
  printf("\nNova Matriz: \n");
  for (i=0;i < 2;i++) {
    for (j=0;j<6;j++) {
      printf("[%.2f]\t", novaMatrix[i][j]);
    }
    printf("\n");
  }
}
