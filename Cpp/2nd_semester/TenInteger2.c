#include <stdio.h>
#include <string.h>

int main(){
  int num[10], imparMaior10=0, qtdMult3=0, somaMult3=0, divisores=0;
  int somaPrimos=0;
  float media=0;

  for (int i=0;i < 10;i++) {
    printf("Digite um valor inteiro: \n");
    scanf("%d", &num[i]);

    if (num[i]%3==0) {
      qtdMult3++;
      somaMult3 += num[i];
     }

    if (num[i]%2!=0) {
      imparMaior10 += (num[i] > 10)? 1: 0;
    }

    divisores = 0;
    for (int k=1;k <= num[i];k++) {
      if (num[i]%k==0) {
        divisores++;
      }
    }

    if (divisores == 2) {
      somaPrimos+= num[i];
    }
  }

  if (qtdMult3 > 0) {
    media = somaMult3/qtdMult3;
  }

  printf("\nQuantidade de números ímpares e maiores que 10: %d\n", imparMaior10);
  printf("A média dos números múltiplos de 3: %.1f\n", media);
  printf("A soma dos números primos corresponde a: %d\n", somaPrimos);
}
