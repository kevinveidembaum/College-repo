#include <stdio.h>

int encontrarMenor(int num[]){
  int menorNum;
  for (int i=0;i < 10;i++) {
    if(i == 0) menorNum = num[i];
    menorNum = (num[i] < menorNum)? num[i]: menorNum;
  }
  return menorNum;
}

int somarPar(int num[]){
  int soma=0;
  for (int k=0;k < 10;k++) {
    soma += (num[k] % 2 == 0 && num[k] > 10)? num[k]: 0;
  }
  return soma;
}

int contarImpar(int num[]){
  int qtd=0;
  for (int j=0;j < 10;j++) {
    qtd += (num[j] % 2 != 0)? 1: 0;
  }
  return qtd;
}

float calcularMedia(int num[]){
  float soma=0, qtd=0;
  for (int i=0;i < 10;i++) {
    if (num[i] > 20) {
      soma += num[i];
      qtd++;
    }
  }

  return soma/qtd;
}

int main(){
  int num[10];

  printf("Informe 10 Números: \n");
  for (int i=0;i < 10;i++) {
    printf("%iº número: ", i+1);
    scanf("%d", &num[i]);
  }

  printf("\nO menor número registrado foi: %i\n", encontrarMenor(num));
  printf("A soma dos números Pares maiores que 10: %i\n", somarPar(num));
  printf("A quantidade de números ímpares encontrada: %i\n", contarImpar(num));
  printf("A média dos números que são maiores que 20: %.1f\n", calcularMedia(num));
}
