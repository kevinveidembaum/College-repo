#include <stdio.h>
 
int main(){
    char string[100];
    char trocado;
    char novo;
   
    printf("Digite uma String: ");
    fgets(string, sizeof(string), stdin);
 
    printf("Digite um caracter a ser trocado: ");
    scanf(" %c", &trocado);
 
    printf("Digite o novo caracter: ");
    scanf(" %c", &novo);
 
    for(int i = 0; i < (string[i] != '\0'); i++){
        if(string[i] == trocado){
            string[i] = novo;
        }
    }
 
    printf("String após as mudanças: %s\n", string);
}
