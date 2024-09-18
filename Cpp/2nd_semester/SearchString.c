#include <stdio.h>
#include <locale.h>
#include <string.h>
 
int main(){
	setlocale(LC_ALL, "");
	char nomes[10][15], pesquisaNome[15];
	int encontrado=0;

  for(int i=0; i < 10; i++){
		printf("Informe o %i° nome: ", i+1);
		fgets(nomes[i], sizeof(nomes[i]), stdin);
	}

	while(1){
		printf("\nPesquise por um nome: [S]air ");
		fgets(pesquisaNome, sizeof(pesquisaNome), stdin);

    if (pesquisaNome[0] == 'S'){
			break;
		}
	
    encontrado = 0;

    for(int j=0; j < 10; j++){
			if(strcmp(pesquisaNome, nomes[j]) == 0){
				encontrado = 1;
				break;
			}	
		}
	
    if(encontrado){
			printf("O nome %s foi encontrado!\n", pesquisaNome);
		}else{
			printf("Não foi encontrado o nome %s\n", pesquisaNome);
		}
	}	
}
