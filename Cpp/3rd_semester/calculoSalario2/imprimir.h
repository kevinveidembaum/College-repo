#include "variaveis.h"

void imprimirFunc(char nome[30], float deslocamento, float salarioBruto, float totalDescontos, float salarioLiquido){
    printf("\nNome do Funcionário: %s\n", nome);
    printf("Valor de deslocamento: R$%.2f\n", deslocamento);
    printf("Total salário bruto: R$%.2f\n", salarioBruto);
    printf("==============Descontos por Região==================\n");
    printf("Total Descontos: R$%.2f\n", totalDescontos);
    printf("Total salário liquido: R$%.2f\n", salarioLiquido);
}