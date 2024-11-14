#include <stdio.h>
#include <locale.h>
 
void mensagem(int num){
  if(num == 1){
    printf("Não é número Primo \n");
    return;
  }


	int divisores=0;
	for(int k=1;k <= num; k++){
		if(num % k == 0){
			divisores++;
		}
		if(divisores > 2) break;
	}
	if(divisores == 2) printf("É número Primo \n"); else printf("Não é número Primo \n");
}
 
int main(){
	setlocale(LC_ALL, "");
 
	int num, res;
 
	while(1){
		printf("Digite um número: ");
		scanf("%d", &num);
		mensagem(num);
		printf("\nQuer continuar? [1]Sim	[2]Não ");
		scanf("%d", &res);
		if(res == 1) continue; else break;
	}
}
