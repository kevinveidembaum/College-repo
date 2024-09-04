#include <stdio.h>
 
int main(){
	int num[5], divisores=0, maiorMult=0, qtdNum=0, ehPrimo=0;

	for(int i=0; i < 5; i++){
		printf("Digite um valor inteiro: ");
		scanf("%i", &num[i]);

    maiorMult += (num[i] > 10 && num[i]%5==0)? num[i]: 0;
		
    qtdNum += (num[i] >= 50 && num[i] <= 100)? 1: 0;

    //descobrir primos
    divisores = 0;
    for (int j=1;j <= num[i];j++) {
      if (num[i]%j==0) divisores++;
    }
    
    if(divisores == 2) ehPrimo++;
	}

	printf("\nSoma dos numeros maiores que 10 e multiplos de 5: %i", maiorMult);
	printf("\nQuantidade de numeros maiores entre 50 e 100 (inclusos): %i", qtdNum);
	printf("\nQuantidade de numeros primos registrados: %i", ehPrimo);
}
