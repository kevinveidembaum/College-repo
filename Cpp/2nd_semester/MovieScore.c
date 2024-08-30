#include <stdio.h>

int main(){
  
  int idade, escolha, qtdIdades=0, qtdBom=0, qtdRegular=0, somaIdades;
  
  do {    
    printf("Com relação o filme, qual sua opinião?\n");
    printf("[3]Ótimo [2]Bom [1]Regular)\n");
    scanf("%i", &escolha);
    
    printf("Informe sua idade: \n");
    scanf("%i", &idade);

    switch (escolha) {
      case 1: //regular
        qtdRegular++;
        break;
      case 2: //bom
        qtdBom++;
        break;
      case 3: //otimo
        qtdIdades++;
        somaIdades += idade;
        break;
      default:
        break;
    }

  } while (idade > 0);

  if (qtdIdades <=0) {
    printf("Não há média das idades de pessoas que responderam ótimo.\n");
  }else {
    float media = somaIdades/qtdIdades;
    printf("A média das idades das pessoas que reponderam ótimo: %.2f \n", media);
  }

  printf("A quantidade de pessoas que responderam regular: %i\n", qtdRegular);
  printf("A quantidade de pessoas que responderam bom: %i\n", qtdBom);
}
