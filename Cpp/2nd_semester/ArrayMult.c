#include <stdio.h>
 
int main(){
	int vetor1[5], vetor2[5], maiorNum=0;
	for(int i=0; i < 5; i++){
		printf("Digite um numero inteiro: ");
		scanf("%i", &vetor1[i]);
		if(i == 0) maiorNum = vetor1[0]; //primeiro loop
		maiorNum = (vetor1[i] > maiorNum)? vetor1[i] : maiorNum;
	}
	for(int j=0; j < 5; j++){
		vetor2[j] = vetor1[j] * maiorNum;
	}
	printf("\nO maior numero do primeiro vetor encontrado foi: %i", maiorNum);
	printf("\nNovo vetor: ");
	for(int k=0; k < 5; k++){
		printf(" [%i] ", vetor2[k]);
	}
}
