#include <stdio.h>

char converterNota(float nota){
  if (nota > 9 && nota < 10) {
    return 'A';
  }else if (nota > 7 && nota < 8.9) {
    return 'B';
  }else if (nota > 5 && nota < 6.9) {
    return 'C';
  }else if (nota > 3 && nota < 4.9) {
    return 'D';
  }else {
    return 'E';
  }
}

int main(){
  float nota;

  printf("Digite a nota a ser convertida: ");
  scanf("%f", &nota);

  printf("A nota de %.2f equivale a: %c \n", nota, converterNota(nota));
}
