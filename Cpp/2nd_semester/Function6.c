#include <stdio.h>

float calcularMedia(float notas[], char res){
  if(res == 'A' || res == 'a'){
    float media = (notas[0]+notas[1]+notas[2])/3;
    return media;

  }else {
    int peso[3] = {5, 3, 2}, somaPesos=0;
    float soma=0;

    for (int i=0;i < 3;i++) {
      soma += notas[i] * peso[i];
      somaPesos += peso[i];
    }

    return soma/somaPesos;

  }

  return 0;
}

int main(){
  float notas[3];
  char res;

  printf("Informe as notas do Aluno(a)\n");

  for (int i=0;i < 3;i++) {
    printf("%iª Nota: ", i+1);
    scanf("%f", &notas[i]);
  }

  getchar();

  printf("[A]Média [P]Média Ponderada\n");
  printf("Informe a operação: ");
  scanf("%c", &res);

  if (res == 'a' || res == 'A') {
    printf("A Média Aritimética resultou em: %.2f\n", calcularMedia(notas, res));
  }else if(res == 'P' || res == 'p'){
    printf("A Média Ponderada resultou em: %.2f\n", calcularMedia(notas, res));
  }else {
    printf("Operação Inválida, tente novamente!\n");
  }
}
