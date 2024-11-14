#include <stdio.h>
#include <locale.h>
 
int verificarPar(int matrix[][3]){
	int pares = 0;
	for(int i=0;i < 3; i++){
		for(int j=0;j< 3;j++){	
			if(matrix[i][j] % 2 == 0) pares++;
		}
	}
	return pares;
}
 
int somarDiagonal(int matrix[][3]){
	int soma=0;
	for(int i=0;i < 3; i++){
		for(int j=0;j< 3;j++){
			if(i == j) soma += matrix[i][j];
		}
	}
	return soma;
}
 
float fazerMedia(int matrix[][3]){
	int qtd=0;
	int somaMatrix=0;
	float media=0;
	for(int i=0;i < 3; i++){
		for(int j=0;j< 3;j++){
			qtd++;
			somaMatrix += matrix[i][j];
		}
	}
	if(qtd > 0) media = somaMatrix/qtd;
	return media;
}
 
int main(){
	setlocale(LC_ALL, "");
	int matrix[3][3];
	printf("Preencha a Matriz: \n");
	for(int i=0;i < 3; i++){
		for(int j=0;j< 3;j++){
			printf("[%i][%i]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	int pares = verificarPar(matrix);
	int soma = somarDiagonal(matrix);
	float media = fazerMedia(matrix);
	printf("Quantidade de números Pares: %i \n", pares);
	printf("A soma da Diagonal da Matriz: %i \n", soma);
	printf("A média da Matrix: %.2f", media);
}
