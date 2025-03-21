#include <stdio.h>

void maximoDivisor(int num[3], int *maxDiv, int divisor) {
  if (divisor > num[0] || divisor > num[1] || divisor > num[2]){
    return;
  }


  if(num[0] % divisor == 0 && num[1] % divisor == 0 && num[2] % divisor == 0){
    *maxDiv *= divisor;   
    num[0] /= divisor;   
    num[1] /= divisor;
    num[2] /= divisor;

    maximoDivisor(num, maxDiv, divisor);
    } else{
        
      maximoDivisor(num, maxDiv, divisor + 1);
    }
}

int main() {
  int num[3], maxDiv = 1;

  for (int i = 0; i < 3; i++){
    printf("Digite o %d° número: ", i + 1);
    scanf("%d", &num[i]);
  }

  maximoDivisor(num, &maxDiv, 2);

  printf("O MDC é: %d\n", maxDiv);

  return 0;
}
