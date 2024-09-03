#include <stdio.h>

int main(){
  float peso, maiorPeso, media;
  int idade, somaIdades=0, qtdIdades=0, qtdIdade30=0, somaIdade30=0, pesoMaior70=0;

  for (int i=0;i<10;i++) { 
    printf("Digite sua idade: \n");
    scanf("%i", &idade);
    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    somaIdades += idade;
    qtdIdades++;

    if (i == 0) maiorPeso = peso; //primeiro loop
    maiorPeso = (peso > maiorPeso)? peso : maiorPeso;
    
    if (idade > 30 && idade < 40){
      somaIdade30 += idade;
      qtdIdade30++;
    }

    pesoMaior70 += (peso > 70)? 1 : 0;

  }
  if (qtdIdades > 0) media = somaIdades/qtdIdades;
  if (qtdIdade30 > 0) somaIdade30 /= qtdIdade30;

  printf("\nPrograma encerrado\n");
  printf("O maior peso registrado foi: %.2fkg\n", maiorPeso);
  printf("A média das idades resulta em: %.1f\n", media);
  printf("A média das idades de pessoas entre 30 e 40 anos: %i\n", somaIdade30);
  printf("Quantidade de pessoas com peso superior a 70kg: %i\n", pesoMaior70);
}
