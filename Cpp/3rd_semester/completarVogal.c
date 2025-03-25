#include <stdio.h>

void completarVogal(char palavras[][4], int qtd){
  
  for(int i=0; i< qtd; i++){
    char primeiraLetra = palavras[i][0];
    char segundaLetra = palavras[i][2]; 

    printf("\n%c%c - %c%c\n", palavras[i][0], palavras[i][1], palavras[i][2], palavras[i][3]);

    printf("%cA-%cE-%cI-%cO-%cU\n", primeiraLetra, primeiraLetra, primeiraLetra, primeiraLetra, primeiraLetra);
    printf("%cA-%cE-%cI-%cO-%cU\n", segundaLetra, segundaLetra, segundaLetra, segundaLetra, segundaLetra);
  }
}

int main(){
  int qtd;

  printf("Digite a quantidade de palavras: ");
  scanf("%d", &qtd);

  char palavras[qtd][4];

  for (int i=0;i < qtd;i++) {
    printf("%i° palavra: ", i + 1);
    scanf(" %4s", palavras[i]);
  }

  completarVogal(palavras, qtd);
}
