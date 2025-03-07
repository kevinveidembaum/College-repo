#include <stdio.h>
#include <string.h>


void calcularSalario(char nome[30], float valorHora, float qtdHoras, float deslocamento, int tipoContrato, int residencia){
  float totalReceber = valorHora * qtdHoras;

  switch (tipoContrato) {
    case 1:
      totalReceber *= 1.30; // Aumento de 30% para Pessoa Jurídica
      break;
    case 2:
      totalReceber -= (totalReceber * 0.06); // Desconto de 6% para Pessoa Física
      break;
    case 3:
      totalReceber *= 1.03; // Aumento de 3% para Carteira Assinada
      break;
    default:
      printf("Tipo de contrato inválido.\n");
      return;
  }


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
  printf(" [1]Região 1\n [2]Região 2\n [3]Região 4\n [4]Região 4");
  printf("\nResposta: ");
  scanf("%d", &residencia);

  calcularSalario(nome, valorHora, qtdHoras, deslocamento, tipoContrato, residencia);
}


