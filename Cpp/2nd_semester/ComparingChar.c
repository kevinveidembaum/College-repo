#include <stdio.h>
#include <string.h>
 
int main(){
    char string[100];
    char caracter;
    int qtd=0;
   
    printf("Digite uma String: \n");
    fgets(string, sizeof(string), stdin);
 
    printf("Digite um caracter: ");
    scanf("%c", &caracter);
 
    int tamanho = strlen(string);
 
    for(int i = 0; i < tamanho; i++){
        if(string[i] == caracter){
            qtd++;
        }
    }
 
    printf("O caracter '%c' foi encontrado %i vezes", caracter, qtd);
 
}
