#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contadorLetras(char palavra[], char letra){
  int qtd=0;

  for (int i=0;i < strlen(palavra); i++) {
    if (toupper((unsigned char)palavra[i]) == toupper((unsigned char)letra)) qtd++;
  }

  return qtd;
}

int main(){
  char palavra[5][30], letra;

  for (int i=0;i< 5;i++) {
    printf("Digite uma palavra: ");
    fgets(palavra[i], sizeof(palavra[i]), stdin);

    palavra[i][strcspn(palavra[i], "\n")] = 0;

    printf("Digite uma Letra: ");
    scanf("%c", &letra);

    printf("A Letra '%c' aparece %i Vezes na Palavra '%s'.\n", letra, contadorLetras(palavra[i], letra), palavra[i]);

    while(getchar() != '\n');
  }
}
