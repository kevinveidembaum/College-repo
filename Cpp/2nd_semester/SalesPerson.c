#include <stdio.h>
#include <string.h>

int main(){
  int acimaMedia=0;
  char nomes[5][20], maiorVendedor[20];
  float vendas[5], total, comissao[5], maiorComissao;

  for (int i=0;i < 5;i++) {
    printf("Informe o nome do funcionário: \n");
    fgets(nomes[i], sizeof(nomes[i]), stdin);

    nomes[i][strcspn(nomes[i], "\n")] = 0;
    
    printf("Informe o valor total de suas vendas: \n");
    scanf("%f", &vendas[i]);

    total += vendas[i];

    comissao[i] = vendas[i] * 0.1;

    if(i == 0 || comissao[i] > maiorComissao){
      maiorComissao = comissao[i];
      strcpy(maiorVendedor, nomes[i]);
    }

    while (getchar() != '\n');
  }

  float media = total/5;
  
  printf("\nVendedor         Comissão\n");
  for (int k=0;k < 5;k++) {
    acimaMedia += (vendas[k] > media)? 1: 0;  
    printf("%-15s  R$%.2f\n", nomes[k], comissao[k]);
  }

  printf("\nO total bruto de vendas realizadas foi de: R$%.2f\n", total);
  printf("A média total das vendas foi de: R$%.2f\n", media);
  printf("O total de vendedores que venderam acima da média: %i\n", acimaMedia);
  printf("O vendedor %s teve a maior comissão com o valor de R$%.2f\n", maiorVendedor, maiorComissao);
}
