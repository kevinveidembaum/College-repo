#include <stdio.h>
#include <string.h>

void imprimirFunc(char nome[30], float deslocamento, float salarioBruto, float totalDescontos, float salarioLiquido){
    printf("\nNome do Funcionário: %s\n", nome);
    printf("Valor de deslocamento: R$%.2f\n", deslocamento);
    printf("Total salário bruto: R$%.2f\n", salarioBruto);
    printf("==============Descontos por Região==================\n");
    printf("Total Descontos: R$%.2f\n", totalDescontos);
    printf("Total salário liquido: R$%.2f\n", salarioLiquido);
}


void calcularSalario(char nome[30], float valorHora, float qtdHoras, float deslocamento, int tipoContrato, int residencia){
  float totalReceber, totalDescontos;
  float salarioBruto = valorHora * qtdHoras;

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
      return;
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
  
  imprimirFunc(nome, deslocamento, salarioBruto, totalDescontos, totalReceber);
}


int main(){
  char nome[30];
  float valorHora, qtdHoras, deslocamento;
  int tipoContrato, residencia;


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

  calcularSalario(nome, valorHora, qtdHoras, deslocamento, tipoContrato, residencia);
}

