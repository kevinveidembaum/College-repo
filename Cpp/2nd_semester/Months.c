#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

const char* nomeMes(int mes){
  const char *meses[] = {
      "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
      "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
  };
    

  switch (mes) {
    case 1:
      return meses[0]; 
      break;
    case 2:
      return meses[1];
      break;
    case 3:
      return meses[2];
      break;
    case 4:
      return meses[3];
      break;
    case 5:
      return meses[4];
      break;
    case 6:
      return meses[5];
      break;
    case 7:
      return meses[6];
      break;
    case 8:
      return meses[7];
      break;
    case 9:
      return meses[8];
      break;
    case 10:
      return meses[9];
      break;
    case 11:
      return meses[10];
      break;
    case 12:
      return meses[11];
      break;
    default:
      return NULL;
  }
}

int main(){
  setlocale(LC_ALL, "Portuguese");
 
 int mes;

  while (true) {
    printf("Digite um número de 1 a 12 (0 para encerrar): ");
    scanf("%d", &mes);
    
    if(mes == 0){
      printf("Programa encerrado!\n");
      break;
    }else if(mes < 0 || mes > 12){
      printf("Informe um número válido por favor: \n");
    }else {
      const char* resultado = nomeMes(mes);
      printf("O %d° mês é %s\n", mes, resultado);

    }
  }
    return 0;
}


