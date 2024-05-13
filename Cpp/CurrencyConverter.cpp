#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float reais, taxa, valor_conv;
    int moeda;
    printf("Digite a quantia em reais ");
    scanf("%f", &reais);
    printf("Escolha a moeda 1-dólar  2-euro  3-libra ");
    scanf("%d", &moeda);
    switch(moeda){
        case 1:
            printf("Informe a taxa do dólar ");
            scanf("%f", &taxa);
            valor_conv = reais/taxa;
            printf("Valor em dólares %.2f \n", valor_conv);
            break;
        case 2:
            printf("Informe a taxa do euro ");
            scanf("%f", &taxa);
            valor_conv = reais/taxa;
            printf("Valor em euros %.2f \n", valor_conv);
            break;
        case 3:
            printf("Informe a taxa da libra ");
            scanf("%f", &taxa);
            valor_conv = reais/taxa;
            printf("Valor em libras %.2f \n", valor_conv);   
            break;
        default:
            printf("Moeda inválida");   
    }
}