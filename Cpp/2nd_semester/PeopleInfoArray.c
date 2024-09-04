#include <stdio.h>
 
int main(){
	int idades[5], superior50=0, qtdAlturas;
	float alturas[5], pesos[5], somaAlturas, media, pesoInferior40;
	for(int i=0; i < 5; i++){
		printf("\nDigite sua idade: ");
		scanf("%i", &idades[i]);
		printf("Digite sua altura: ");
		scanf("%f", &alturas[i]);
		printf("Digite seu peso: ");
		scanf("%f", &pesos[i]);
		superior50 += (idades[i] > 50)? 1: 0;
		pesoInferior40 += (pesos[i] < 40)? 1: 0;
		if(idades[i] > 10 && idades[i] < 20){
			somaAlturas += alturas[i];
			qtdAlturas++;
		}
	}
	float porcentagem = (pesoInferior40 / 5) *100;
	if (qtdAlturas > 0) media = somaAlturas/(float)qtdAlturas;
	printf("\nQuantidade de pessoas com idade superior a 50 anos: %i", superior50);
	printf("\nMedia das alturas de pessoas com idade entre 10 e 20 anos: %.2fm", media);
	printf("\nPorcentagem de pessoas com peso inferior a 40kg: %.2f%%", porcentagem);
}
