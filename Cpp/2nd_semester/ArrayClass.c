#include <stdio.h>
#include <string.h>

int main(){
  char nomes[10][20], melhorAluno[20];
  float notas[10], soma=0, maiorNota=0;
  int reprovados=0, notaMaiorMedia=0;

  for (int i=0;i < 10;i++) {
    printf("Digite o nome do %i° aluno: \n", i+1);
    fgets(nomes[i], sizeof(nomes[i]), stdin);

    nomes[i][strcspn(nomes[i], "\n")] = 0;

    printf("Informe a nota desse aluno: \n");
    scanf("%f", &notas[i]);

    if(i==0 || notas[i] > maiorNota){
      maiorNota = notas[i];
      strcpy(melhorAluno, nomes[i]);
    }

    reprovados += (notas[i] < 5)? 1: 0;

    soma+= notas[i];

    while (getchar() != '\n');
  }

  float media = soma/10;

  for (int k=0;k < 10;k++) {
    notaMaiorMedia += (notas[k] > media)? 1: 0;
  }

  printf("\nA quantidade de alunos com nota inferior a 5: %i\n", reprovados);
  printf("A média das notas dos alunos: %.2f\n", media);
  printf("Quantidade de alunos com nota acima da média: %d\n", notaMaiorMedia);
  printf("O aluno %s foi o melhor, tendo nota de %.2f\n", melhorAluno, maiorNota);
}
