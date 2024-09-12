#include <stdio.h>
 
int main(){
	float vetorA[5], vetorB[5], aux;
	int i, j, k;
	for(i=0; i < 5; i++){
		printf("Digite um valor inteiro: ");
		scanf("%f", &vetorA[i]);
		vetorB[i] = vetorA[i]/2;
	}
	for(j=0; j < 4; j++){
		for(k=j; k < 5; k++){
			if(vetorA[j] < vetorA[k]){
				aux = vetorA[j];
				vetorA[j] = vetorA[k];
				vetorA[k] = aux;
			}
		}
	}
	for(j=0; j < 4; j++){
		for(k=j; k < 5; k++){
			if(vetorB[j] > vetorB[k]){
				aux = vetorB[j];
				vetorB[j] = vetorB[k];
				vetorB[k] = aux;
			}
		}
	}
	printf("\nVetorA ordem decrescente: ");
	for(i=0; i < 5; i++){
		printf(" [ %.1f ] ", vetorA[i]);
	}
	printf("\nVetorB ordem crescente: ");
	for(i=0; i < 5; i++){
		printf(" [ %.1f ] ", vetorB[i]);
	}
}
