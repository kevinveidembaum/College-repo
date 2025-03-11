#include "soma.h"
#include "mult.h"
#include "sub.h"
#include "div.h"
#include "variaveis.h"
#include <stdio.h>

int main(){
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("Resultado Soma: %.2f\n", somar(num1, num2));
    printf("Resultado Sub: %.2f\n", subtrair(num1, num2));
    printf("Resultado Mult: %.2f\n", multiplicar(num1, num2));
    printf("Resultado Div: %.2f\n", dividir(num1, num2));

    return 0;
}