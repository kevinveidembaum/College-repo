#include <stdio.h>
#include <string.h>

int main(){
  char nomes[10][30], pessoaLeve[30];
  float pesos[10], menorPeso=0, soma=0;

  for (int i=0;i < 10;i++) {
    printf("Informe o nome da %i° pessoa: \n", i+1);
    fgets(nomes[i], sizeof(nomes[i]), stdin);

    nomes[i][strcspn(nomes[i], "\n")] = 0;

    printf("Informe o peso dessa pessoa: \n");
    scanf("%f", &pesos[i]);

    if(i == 0 || pesos[i] < menorPeso){
      menorPeso = pesos[i];
      strcpy(pessoaLeve, nomes[i]);
    }

    soma+= pesos[i];

    while (getchar() != '\n');
  }
  
  float media = soma / 10;

  printf("\nA pessoa mais leve é a %s, pesando %2.fkg\n", pessoaLeve, menorPeso);
  printf("A média dos pesos corresponde a %.2fkg\n", media);
  printf("\nTabela das pessoas com peso inferior a média: \n");
  for (int k=0;k < 10;k++) {
      if (pesos[k] < media) {
        printf("%-15s %.2fkg\n", nomes[k], pesos[k]);
      }
  }
}
