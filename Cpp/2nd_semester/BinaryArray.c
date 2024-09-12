#include <stdio.h>
 
int main(){
	int vetor[5], outroVetor[5];
	
  for(int i=0; i < 5; i++){
		printf("Digite um valor inteiro: ");
		scanf("%i", &vetor[i]);
		outroVetor[i] = (vetor[i] < 10)? 1: 0;
	}
	
  printf("\n Primeiro vetor: ");

  for(int j=0; j < 5; j++){
		printf("[%i] ", vetor[j]);
	}

  printf("\n Segundo vetor: ");

  for(int k=0; k < 5; k++){
		printf("[%i] ", outroVetor[k]);
	}
}
