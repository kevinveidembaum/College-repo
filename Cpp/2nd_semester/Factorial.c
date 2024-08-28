#include <stdio.h>
#include <locale.h>
 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	unsigned long long int num[5], fatorial=1;
	for(int i=0; i < 5; i++){
		printf("\nDigite o %dº número: ", i+1);
		scanf("%lld", &num[i]);
		if(num[i] < 0){
			printf("Número inválido!");
			break;
		}
		fatorial = 1;

		for(int k=2; k <= num[i]; k++){
			fatorial *= k;
		}

		printf("\nFatorial de %lld é: %lld", num[i], fatorial);

	}
}
