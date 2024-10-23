#include <stdio.h>

int main(){
  int matrix[7][10], somaColuna[10] = {0};
  int i, j;

  for (i=0;i < 6;i++) {
    for (j=0;j < 10;j++) {
      printf("[%i, %i]: ", i, j);
      scanf("%i", &matrix[i][j]);

      somaColuna[j] += matrix[i][j];
    }
  }

  for (j=0;j < 10;j++) {
    matrix[6][j] = somaColuna[j];

    printf("Soma dos Elementos %i° Coluna: %d\n", j+1, matrix[6][j]);
  }
}
