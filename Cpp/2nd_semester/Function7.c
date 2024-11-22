#include <stdio.h>
#include <string.h>

void imprimirMatrix(float matrix[][4], char alunos[][30]){
  for (int i=0;i < 5;i++) {
    printf("%-15s ", alunos[i]);
    for (int j=0;j < 4;j++) {
      printf("[%-6.1f]\t", matrix[i][j]);
    }
    printf("\n");
  }
}

float calcularMedia(float notas[][4], int aluno){
  float somaMedia=0;

  for (int j=0;j < 4;j++) {
    somaMedia += notas[aluno][j];
  }

  return somaMedia / 4;
}

void imprimirMedia(float medias[], char alunos[][30]){
  for (int i=0;i < 5;i++) {
    printf("Média %s: %.1f \n", alunos[i], medias[i]);
  }
}

int main(){
  int i, j;
  float notas[5][4], medias[5];
  char alunos[5][30];

  for (i=0;i < 5;i++) {
    printf("Nome do %iº Aluno(a): ", i+1);
    fgets(alunos[i], sizeof(alunos[i]), stdin);

    alunos[i][strcspn(alunos[i], "\n")] = 0;

    for (j=0;j < 4;j++) {
      printf("%iª nota do(a) %s: ", j+1, alunos[i]);
      scanf("%f", &notas[i][j]);
    }
    printf("\n");

    while (getchar() != '\n');
  }

  for (int i=0;i<5;i++) {
    medias[i] = calcularMedia(notas, i);
  }

  imprimirMedia(medias, alunos);
  printf("\n");
  imprimirMatrix(notas, alunos);
}
