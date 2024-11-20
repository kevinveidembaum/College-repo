#include <stdio.h>

void imprimir(int mat[][5]){
  for (int i=0;i < 3;i++) {
    for (int j=0;j < 5;j++) {
      printf("[ %d ]\t", mat[i][j]);
    }
    printf("\n");
  }
}

int calcularMenor(int mat[][5]){
  int menorNum;

  for (int i=0;i < 3;i++) {
    for (int j=0;j < 5;j++) {
      menorNum = (i==0 && j==0)? mat[i][j]: menorNum;

      menorNum = (mat[i][j] < menorNum)? mat[i][j]: menorNum;
    }
  }

  return menorNum;
}

int calcularSoma(int mat[][5]){
  int soma=0;

  for (int i=0;i < 3;i++) {
    for (int j=0;j < 5;j++) {
      soma += (mat[i][j] % 3 == 0)? mat[i][j]: 0;
    }
  }

  return soma;
}

int calcularMaior(int mat[][5]){
  int maiorNum, j=2;

  for (int i=0;i < 3;i++) {
    if(i==0) maiorNum = mat[i][j];

    maiorNum = (mat[i][j] > maiorNum)? mat[i][j]: maiorNum;
  }

  return maiorNum;
}

int main(){
  int matrix[3][5];

  for (int i=0;i < 3;i++) {
    for (int j=0;j < 5;j++) {
      printf("[%i][%i]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("O menor número da Matriz: %i\n", calcularMenor(matrix));
  printf("A soma dos números múltiplos de 3: %i\n", calcularSoma(matrix));
  printf("O maio número da 3ª coluna: %i\n", calcularMaior(matrix));
  imprimir(matrix);
}
