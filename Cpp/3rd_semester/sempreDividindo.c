#include <stdio.h>
#include <stdbool.h>

const double NUM_MIN = 0.01;

void getResultado(double num){
  double num2 = 0;

  printf("Valor        Divisor        Resultado\n");

  do {
    num2 = num;
    num /= 2;

    printf("%-15.5f /%-10d %.5f\n", num2, 2, num);
  } while (num > NUM_MIN);
}


int main(){
  double num;
  char resposta;

  while (true) {
    printf("Digite um número para ser Dividido: ");
    scanf("%lf", &num);

    getResultado(num);
    
    printf("\nDeseja continuar? [S/n]: ");
    scanf(" %c", &resposta);

    if(resposta != 's' && resposta != 'S'){
      break;
    }
  }
}
