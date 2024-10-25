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
  int i, j, matrix[4][4], novaMatrix[4][4], numeros[16], aux;

  printf("Preencha a Matriz 4 x 4:\n");
  for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
      printf("[%i][%i]: ", i, j);
      scanf("%d", &matrix[i][j]);

      numeros[i * 4 + j] = matrix[i][j];
    }
  }

  for (i = 0;i < 15;i++) {
    for (j = i + 1;j < 16;j++) {
      if (numeros[i] > numeros[j]) {
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
      }
    }
  }

  for (i=0; i<4; i++) {
    for (j=0; j<4; j++) {
      novaMatrix[i][j] = numeros[i * 4 + j];
    }
  }

  printf("Matriz Original:\n");
  imprimirMatrix(matrix);

  printf("Matriz Ordenada:\n");
  imprimirMatrix(novaMatrix);
}
