#include <stdio.h>
#include <string.h>

int main(){
  
  char cores[10][30], pesquisa[30];

  for (int i=0;i < 10;i++) {
    printf("Informe a %i° cor: ", i+1);
    fgets(cores[i], sizeof(cores), stdin); 
    cores[i][strcspn(cores[i], "\n")] = '\0';
  }

  int encontrada = 0;

  while(1){
    printf("Pesquise uma cor: [FIM para encerrar]\n");
    fgets(pesquisa, sizeof(pesquisa), stdin);
    pesquisa[strcspn(pesquisa, "\n")] = '\0';

    if(strcmp(pesquisa, "FIM") == 0){
      break;
    }

    encontrada = 0;
    for(int j=0; j < 10; j++){
      if(strcmp(pesquisa, cores[j]) == 0){
        printf("A palavra '%s' foi encontrada na posição %i do vetor.\n", pesquisa, j);

        encontrada = 1;
      }
    }
    
    if(!encontrada){
      printf("A palavra '%s' não foi encontrada!\n", pesquisa);
    }

  } 
  printf("Obrigado, volte sempre!");
}
