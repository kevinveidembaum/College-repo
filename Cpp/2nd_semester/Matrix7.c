#include <stdio.h>
#include <string.h>

void pularLinha(int i){
  if (i==4) printf("\n");
}

int main(){
  float notas[5][4], somaNotas[5]={0}, medias[5]={0}, maiorMedia=0;
  char alunos[5][30];
  int i, j, posicao;

  for (i=0;i < 5;i++) {
    printf("%i° Aluno: ", i+1);
    fgets(alunos[i], sizeof(alunos), stdin);
    alunos[i][strcspn(alunos[i], "\n")] = '\0';

    pularLinha(i);
  }

  for (i=0;i < 5;i++) {

    printf("~~~~~ Notas do Aluno %s ~~~~~ \n", alunos[i]);

    for (j=0;j < 4;j++) {
      printf("%d° Nota: ", j+1);
      scanf("%f", &notas[i][j]);

      somaNotas[i] += notas[i][j];
    }

    pularLinha(i);
  }

  printf("-=-=-=-=-= MÉDIAS =-=-=-=-=-\n");
  printf("Alunos                Médias\n");
  for (i=0;i < 5;i++) {
    if (i <= 4) {
      medias[i] = somaNotas[i]/4;

      if(i==0 || medias[i] > maiorMedia){
        maiorMedia = medias[i];
        posicao = i;
      }
    }

    printf("%-22s %.2f\n", alunos[i], medias[i]);
    pularLinha(i);
  }

  printf("A maior Média foi do Aluno %s com %.2f pontos\n", alunos[posicao], maiorMedia);
}
