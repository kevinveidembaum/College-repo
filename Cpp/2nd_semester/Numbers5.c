#include <stdio.h>

int main(){
  int num, divisores=0, ehPrimo=0, somaMult5=0, somaImpar=0, qtdImpar=0;

  for (int i=10;i > 0;i--) {
    printf("Digite um número inteiro: \n");
    scanf("%i", &num);
    
    somaMult5 += (num%5==0)? num : 0;

    if (num%2!=0 && num > 10){
      somaImpar += num;
      qtdImpar++;
    }

    //descobrir primo
    divisores = 0;
    for (int j=1; j <= num;j++) {
      if(num%j==0) divisores++;
    }
    
    if(divisores == 2) ehPrimo++; 
  }
  somaImpar /= qtdImpar;

  printf("A quantidade de números primos foi de: %d\n", ehPrimo);
  printf("A soma dos números múltiplos de 5: %i\n", somaMult5);
  printf("A média dos números ímpares maiores que 10: %i\n", somaImpar);
}
