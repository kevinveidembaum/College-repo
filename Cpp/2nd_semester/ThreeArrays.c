#include <stdio.h>

void exibirVetor(int vetor [], int tamanho){
  for (int k=0;k < tamanho;k++) {
    printf("[%d]", vetor[k]);
  }
}

int main(){
  int vetorA[10], vetorB[10], vetorC[20];

  for (int i=0;i < 10;i++) {
    printf("Digite o %i° valor do vetorA: \n", i+1);
    scanf("%i", &vetorA[i]);

    printf("Digite o %i° valor do vetorB: \n", i+1);
    scanf("%i", &vetorB[i]);

    vetorC[2* i] = vetorA[i];
    vetorC[2* i + 1] = vetorB[i];
  }


  printf("\nVetorA: ");
  exibirVetor(vetorA, 10);

  printf("\nVetorB: ");
  exibirVetor(vetorB, 10);

  printf("\nVetorC: ");
  exibirVetor(vetorC, 20);
}
