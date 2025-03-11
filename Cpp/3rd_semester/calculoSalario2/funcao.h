#include "variaveis.h"
#include <stdio.h>
#include <stdlib.h>

float* calcularSalario(char nome[30], float valorHora, float qtdHoras, float deslocamento, int tipoContrato, int residencia){
  salarioBruto = valorHora * qtdHoras;

  switch (tipoContrato) {
    case 1:
      valorHora *= 1.30;
      printf("O valor do INSS será recolhido pelo funcionárioXXX\n");
      break;
    case 2:
      valorHora -= (valorHora * 0.06); 
      break;
    case 3:
      valorHora *= 1.08;
      totalReceber = valorHora * qtdHoras;
      totalReceber -= 0.05;
      break;
    default:
      printf("Tipo de contrato inválido.\n");
      return NULL;
  }
  
  
  totalReceber = valorHora * qtdHoras;
  
  
  if(residencia == 1 || residencia ==2){
      totalDescontos = (totalReceber * 0.0374);
      totalReceber -= totalDescontos;
  }else if(residencia == 3 || residencia == 4){
    totalDescontos = (totalReceber * 0.0575);
      totalReceber -= totalDescontos;
  }else{
     totalDescontos = (totalReceber * 0.0225);
      totalReceber -= totalDescontos;
  }

    float* resultados = (float*)malloc(3 * sizeof(float));
    if (resultados == NULL) {
        printf("Erro de alocação de memória.\n");
        return NULL;  
    }

   
    resultados[0] = totalDescontos;
    resultados[1] = totalReceber;
    resultados[2] = salarioBruto;

    return resultados;
}