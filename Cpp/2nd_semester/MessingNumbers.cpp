#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, somaMult3, somaPares = 0, numerosPares = 0, menorNum = 0, multMaior50, quantNumDigitados;
	float mediaPares = 0;
	printf("Para encerrar o programa digite 0 ou números negativos.\n");
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	while(num == 0){
		printf("Digite pelo menos um número: ");
		scanf("%i", &num);
	}
	while(num > 0){
		if(num%3 == 0){
			somaMult3 += num;
		}
		if(num%2 == 0){
			somaPares += num;
			numerosPares++;
		}
		if(numerosPares == 0 || num < menorNum) {
			menorNum = num;
		}
		if(num%5 == 0 && num > 50){
			multMaior50++;
		}
		printf("Digite um número inteiro: ");
		scanf("%i", &num);
		if(num != 0 && num > 0){
			quantNumDigitados++;	
		}
	}
	if(quantNumDigitados > 1){
		printf("\nPrograma Encerrado!!\n");
		printf("Digite mais números na próxima vez!");
	}
	mediaPares = somaPares/numerosPares;
	printf("\nPrograma Encerrado!!");
	printf("\nRESULTADOS: ");
	printf("\nSoma dos números múltiplos de 3: %d", somaMult3);
	printf("\nMédia dos números Pares: %.2f", mediaPares);
	printf("\nMenor número registrado: %d", menorNum);
	printf("\nQntd. de números múltiplos de 5 e maiores de 50: %d", multMaior50);	
}