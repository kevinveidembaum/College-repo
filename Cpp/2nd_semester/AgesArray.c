#include <stdio.h>
 
int main(){
	int idades[5], superior50, somaIdades, qtdIdades, menorMedia, superior30;
	float porcentagem=0;
	for(int i=0; i < 5; i++){
		printf("Digite sua idade: ");
		scanf("%i", &idades[i]);
		superior50 += (idades[i] > 50)? 1: 0;
		superior30 += (idades[i] > 30)? 1: 0;
		somaIdades += idades[i];
		qtdIdades++;
	}
	if (qtdIdades > 0) somaIdades /= qtdIdades;
	for(int j=0; j < 5; j++){
		menorMedia += (idades[j] < somaIdades)? 1 : 0;
	}
	porcentagem = ((float)superior30 / 5) * 100;
	printf("\nQuantidade de pessoas com idade superior de 50 anos: %i", superior50);
	printf("\nA media das idades corresponde a: %i", somaIdades);
	printf("\nQuantidade de pessoas com idade inferior a media: %i", menorMedia);
	printf("\nPorcentagem de pessoas com idade superior a 30 anos: %.1f%%", porcentagem);
}
