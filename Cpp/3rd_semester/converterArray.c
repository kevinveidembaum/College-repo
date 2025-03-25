#include <stdio.h>

void preencherVetor(int vetor[8]){
    for(int i=0; i < 8; i++){
        printf("Digite o %i°: ", i+1);
        scanf("%i", &vetor[i]);
    }
}

void imprimirVetor(int vetor[8]){
    printf("Imprimindo Vetor: ");
    for(int i=0; i < 8; i++){
        printf(" [%i] ", vetor[i]);
    }
    printf("\n");
}

void converterVetor(int vetor[8], int matriz[2][2][2]){
    int aux = 0;

    for(int i=0; i < 2; i++){
        for(int k=0; k < 2; k++){
            for(int j=0; j< 2; j++){
                matriz[i][k][j] = vetor[aux];
                aux++;
            }
        }
    }
}

void imprimirMatriz(int matriz[2][2][2]){
    for(int i=0; i < 2; i++){
        for(int k=0; k < 2; k++){
            for(int j=0; j< 2; j++){
                printf(" [%d] ", matriz[i][k][j]);
            }
            printf("\n");
        }
    }
}

int main(){
    int vetor[8];
    int matriz[2][2][2];

    printf("Preencha o Vetor de 8 numeros: \n");

    preencherVetor(vetor);
    imprimirVetor(vetor);
    converterVetor(vetor, matriz);
    imprimirMatriz(matriz);
}
