#include <stdio.h>
#include <string.h>

int main() {
  int precoMenor10 = 0, maiorMedia=0;
  float vetorPreco[5], somaProdutos = 0, maiorValor=0; 
  char vetorNomes[5][30], maiorNome[30];

  for (int i = 0; i < 5; i++) {
    printf("\nInforme o nome do %i° produto: ", i + 1);
    fgets(vetorNomes[i], sizeof(vetorNomes[i]), stdin);
    vetorNomes[i][strcspn(vetorNomes[i], "\n")] = 0; // Remove o newline

    printf("Informe o preço desse produto: ");
    scanf("%f", &vetorPreco[i]);

    precoMenor10 += (vetorPreco[i] < 10) ? 1 : 0;
    somaProdutos += vetorPreco[i];
    
    if (i == 0) maiorValor = vetorPreco[i];

    if(vetorPreco[i] > maiorValor){
      maiorValor = vetorPreco[i];
      strcpy(maiorNome, vetorNomes[i]);
    }
    
    getchar(); 

    printf("\n");
  }

  float media = somaProdutos / 5;

  for (int k=0;k < 5; k++) {
    maiorMedia += (vetorPreco[k] > media)? 1: 0;
  }

  printf("A quantidade de produtos com preço inferior a R$10: %i\n", precoMenor10);
  printf("A média do preço dos produtos é: R$%.2f\n", media);
  printf("A quantidade de produtos com preço superior a média: %i\n", maiorMedia);
  printf("O produto '%s' foi o mais caro registrado, custando: R$%.2f\n", maiorNome, maiorValor);

  printf("\nNome do Produto          Preço\n");
  for (int j = 0; j < 5; j++) {
    printf("%-24s R$%.2f\n", vetorNomes[j], vetorPreco[j]);
  }

  return 0;
}

