#include <stdio.h>

void imprimirMatrix(int matrix[][4]){
  for (int i=0;i < 4;i++) {
    for (int j=0;j < 4;j++) {
      printf("[ %d ]\t", matrix[i][j]);
    }
    printf("\n");
  }
}

int main(){
  int i, j, matrix[4][4], novaMatrix[4][4]={0};

  printf("Posição:\n");
  for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
      printf("[%d][%i]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
      novaMatrix[i][0] = matrix[i][1];
      novaMatrix[i][1] = matrix[i][0];
      novaMatrix[i][2] = matrix[i][3];
      novaMatrix[i][3] = matrix[i][2];
    }
  }

  printf("A Matriz Original:\n");
  imprimirMatrix(matrix);

  printf("A Nova Matriz:\n");
  imprimirMatrix(novaMatrix);
}
