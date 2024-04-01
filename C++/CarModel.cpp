#include <stdio.h>
#include <stdlib.h>
 
int main(){
	char modelo[20];
	int qntd_estoque, alugado, carro;
	float v_loc;
	printf("Digite o modelo de carro desejado \n ");
	scanf("%s", &modelo);
	printf("Quantidade em estoque \n");
	scanf("%d", &qntd_estoque);
	printf("Quantidade que esta alugada \n");
	scanf("%d", &alugado);
	printf("Valor para locacao \n");
	scanf("%f", &v_loc);
	carro = qntd_estoque - alugado;
	printf("====================RESULTADOS================== \n");
	printf("Modelo de carro escolhido %s \n", modelo);
	printf("Quantidade de carros desse modelo em estoque %d \n", qntd_estoque);
	printf("Valor do carro para alugar %f \n", v_loc);
	printf("Carros disponiveis em estoque %d \n", carro);
}