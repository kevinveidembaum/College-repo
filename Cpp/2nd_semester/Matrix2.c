#include <stdio.h>

int main(){
  int matrix[4][6], numInterval=0, maior10par=0, somaQuarta=0;
  int i, j, somaTerceira=0;

  printf("Preencha a Matriz 4 x 6\n");

  for (i=0;i < 4;i++) {
    printf("<<<<<<< %i° Linha >>>>>>>\n", i+1);
    for (j=0;j < 6;j++) {
      printf("%i° coluna: ", j+1);
      scanf("%i", &matrix[i][j]);

      numInterval += (matrix[i][j] > 10 && matrix[i][j] < 30)? 1:0;

      maior10par += (matrix[i][j] > 10 && matrix[i][j]%2==0)? matrix[i][j]:0;

      somaQuarta += (j == 3)? matrix[i][3]: 0;

      somaTerceira += (i == 2)? matrix[2][j]: 0;
    }
  }

  float media = somaTerceira/6;

  printf("\nA quantidade de números no intervalo de 10 a 30: %i\n", numInterval);
  printf("A soma dos números maiores que 10 e Pares: %d\n", maior10par);
  printf("A soma dos números da 4° Coluna: %d\n", somaQuarta);
  printf("A média dos números da 3° Linha: %.1f\n", media);
}
