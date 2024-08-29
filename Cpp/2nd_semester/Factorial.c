#include <stdio.h>
#include <locale.h>
 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	unsigned long long int num[10], fatorial=1;
	for(int i=0; i < 10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%lld", &num[i]);
		if(num[i] < 0){
			printf("Número inválido!");
			break;
		}
		fatorial = 1;

		for(int k=2; k <= num[i]; k++){
			fatorial *= k;
		}

		printf("Fatorial de %lld é: %lld\n", num[i], fatorial);

	}
}
