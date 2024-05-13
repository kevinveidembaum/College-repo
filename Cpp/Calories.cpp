#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op_prato, op_sob, op_bebida, calorias;
    calorias = 0;
    printf("Restaurante Fatec - VERSÃO 2");
    printf("Escolha o prato 1-Vegetariano 2-Peixe 3-Frango 4-Carne ");
    scanf("%d", &op_prato);
    switch(op_prato){
        case 1:
             calorias = calorias + 180;
             break;
        case 2:
            calorias = calorias + 230;
            break;
        case 3:
            calorias = calorias + 250;
            break;
        case 4:
            calorias = calorias + 350;
            break;
        default:
            printf("Prato inválido");
    }
    printf("Escolha a sobremesa 1-Abacaxi 2-Sorvete 3-Mousse 4-Torta ");
    scanf("%d", &op_sob);
    switch(op_sob){
        case 1:
            calorias = calorias + 75;
               break;
        case 2:
            calorias = calorias + 110;
              break;
        case 3:
             calorias = calorias + 170;
             break;
        case 4:
             calorias = calorias + 200;
             break;
        default:
          printf("Sobremesa inválida");
    }
    printf("Escolha a bebida 1-Chá 2-Suco laranja 3-Suco melão 4-Refri ");
    scanf("%d", &op_bebida);
    switch(op_bebida){
        case 1:
              calorias = calorias + 200;
              break;
        case 2:
              calorias = calorias + 70;
              break;
        case 3:
              calorias = calorias + 100;
            break;
        case 4:
              calorias = calorias + 75;
              break;
        default:
             printf("Bebida inválida");
    }
printf("Total de calorias consumidas %d", calorias);
}