#include <stdio.h>

int main(){
  int num, somaPares, menorNum, qntdPrimos, somaMaior20, qntdMaior20;
  float media;
  printf("Digite o 1º número inteiro: \n");
  scanf("%d", &num);
    
  menorNum = num;

  for (int i=2;i<=10;i++) {
    printf("Digite o %iº número inteiro: \n", i);
    scanf("%d", &num);
    

    if(num < menorNum){
      menorNum = num;
    }

    if(num%2==0 && num > 10){
      somaPares += num;
    }

    if(num%2!=0){
      qntdPrimos++;
    }

    if(num>20){
      somaMaior20 += num;
      qntdMaior20++;
    }
  }

  if(qntdMaior20 > 0){
    media = somaMaior20/qntdMaior20;
    printf("A média dos números maiores que 20 foi: %.2f\n", media);
  }else {
    printf("Não houve média para números maiores que 20\n");
  }

  printf("O menor número registrado foi: %i\n", menorNum);
  printf("A soma dos números Pares maiores que 10 foi: %i\n", somaPares);
  printf("A quantidade de números primos foi: %i\n", qntdPrimos);

}
