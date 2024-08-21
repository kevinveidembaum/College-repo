#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "POrtuguese");
	int idade, somaIdades, pessoasGordas=0;
	float peso, mediaIdades;
	for(int i=0;i <= 5; i++){
		printf("-------------------------\n");
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		if(peso > 90){
			pessoasGordas++;
		}
		somaIdades += idade;
	}
	mediaIdades = somaIdades/5;
	printf("-------------------------\n");
	printf("Resultados:\n");
	printf("\nMédia das idades: %.2f", mediaIdades);
	printf("\nQuantidade de pessoas com mais de 90Kg: %d", pessoasGordas);
}