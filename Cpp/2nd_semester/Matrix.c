#include <stdio.h>

int main(){
  int matriz[3][5], menorNum=0, soma=0, maiorNum=0;
  int i, j, somaTotal=0;

  printf("Preencha a Matriz:\n");
  
  for (i=0;i < 3;i++) {
    for (j=0;j < 5;j++) {
      printf("Posição: [%i][%i]: ", i, j);
      scanf("%d", &matriz[i][j]);

      if ((i == 0 && j == 0) || matriz[i][j] < menorNum) {
        menorNum = matriz[i][j];
      }

      if (matriz[i][j] % 3 == 0){
        soma += matriz[i][j];
      }

      if ((i == 0 && j == 2) || matriz[i][2] > maiorNum){
        maiorNum = matriz[i][2];
      }

      somaTotal += matriz[i][j];
    }
  }

  float media = somaTotal/15;

  printf("O menor número registrado na matriz: %i\n", menorNum);
  printf("A somatória dos números múltiplos de 3: %i\n", soma);
  printf("O maior número encontrado na 2° coluna: %i\n", maiorNum);
  printf("A média dos números da matriz: %.1f\n", media);
}
