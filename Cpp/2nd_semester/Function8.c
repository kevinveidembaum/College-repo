#include <stdio.h>

char verificarPrimo(int num){
  int div=0;

  if (num <= 1) return 'N';

  for (int i=1;i <= num;i++) {
    if (num % i == 0) div++;

    if (div > 2) return 'N';
  }

  return (div == 2)? 'S': 'N';
}

int main(){
  int num;

  printf("Verificador de Números Primos. \n");
  for (int i=0;i < 10;i++) {
    printf("\n%iº número: ", i+1);
    scanf("%d", &num);

    if (verificarPrimo(num) == 'S') {
      printf("O número informado É Primo!\n");
    }else {
      printf("O número informado NÃO É Primo!\n");
    }
  }
}
