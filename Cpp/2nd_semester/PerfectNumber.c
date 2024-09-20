#include <stdio.h>

int main() {
  int cont = 0, vetorA[5], vetorB[5], vetorC[10], soma, ehPerfeito=0;

  for (cont = 0; cont < 5; cont++) {
    printf("Digite o %i° valor do vetor A: ", cont + 1);
    scanf("%i", &vetorA[cont]);  
  }

  for (cont = 0; cont < 5; cont++) {
    printf("Digite o %i° valor do vetor B: ", cont + 1);
    scanf("%i", &vetorB[cont]);  
  }

  for (cont = 0; cont < 5; cont++) {
    vetorC[cont] = vetorA[cont];
    vetorC[cont + 5] = vetorB[cont];
  }

  for (cont = 0; cont < 10; cont++) {
    int num = vetorC[cont];
    soma = 0;

    for (int i=1; i< num; i++) {
      if(num % i == 0){
        soma += i;
      }
    }

    ehPerfeito += (soma == num)? 1: 0;

  }

  printf("A quantidade de números perfeitos foi: %i", ehPerfeito);  
}

