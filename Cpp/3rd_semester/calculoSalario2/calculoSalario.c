#include <stdio.h>
#include <string.h>
#include "variaveis.h"
#include "funcao.h"
#include "imprimir.h"
#include <stdlib.h>

int main(){

  printf("Informe o Nome do Funcionário: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';

  printf("Informe o seu valor/hora: ");
  scanf("%f", &valorHora);

  printf("Quantas Horas trabalhou no mês: ");
  scanf("%f", &qtdHoras);

  printf("Informe a distância até o trabalho (Km): ");
  scanf("%f", &deslocamento);

  deslocamento *= 0.51;

  printf("\nInforme o tipo de Contratação:\n");
  printf(" [1]Pessoa Jurídica\n [2]Pessoa Física\n [3]Carteira Assinada");
  printf("\nResposta: ");
  scanf("%d", &tipoContrato);

  printf("\nInforme o local onde reside:\n");
  printf(" [1]Região 1\n [2]Região 2\n [3]Região 3\n [4]Região 4");
  printf("\nResposta: ");
  scanf("%d", &residencia);

  float* resultados = calcularSalario(nome, valorHora, qtdHoras, deslocamento, tipoContrato, residencia);


  imprimirFunc(nome, deslocamento, resultados[2], resultados[0], resultados[1]);

  free(resultados);
}

