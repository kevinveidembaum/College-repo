#include <stdio.h>

int main(){
  int matrix[4][3], somaLinhas=0, somaPrimo=0, divisores, somaTotal=0;
  int maiorNum=0;

  printf("Preencha a Matriz: \n");

  for (int i=0;i < 4;i++) {
    for (int j=0;j < 3;j++) {
      printf("[%i][%i]: ", i, j);
      scanf("%d", &matrix[i][j]);

      somaLinhas += (i==1 || i==3)? matrix[i][j]:0;

      divisores = 0;
      for (int k=1;k <= matrix[i][j];k++) {
        if(matrix[i][j] % k == 0){
          divisores++;
        }

        if(divisores > 2) break;
      }

      if(divisores == 2) somaPrimo += matrix[i][j];

      maiorNum = (matrix[i][j] > maiorNum)? matrix[i][j]:maiorNum;
      somaTotal += matrix[i][j];
    }
  }

  float media = somaTotal/12;

  printf("A soma dos elementos nas Linhas 2 e 4: %i\n", somaLinhas);
  printf("A soma dos números Primos: %i\n", somaPrimo);
  printf("A média dos valores da Matriz: %.0f\n", media);
  printf("O maior número da Matriz: %i\n", maiorNum);
}
