#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, qntdEntre10e20 = 0, somaTotalMult = 0, qntdTotalMult = 0, somaPrimos = 0;

    for(int i = 1; i <= 10; i++){
        printf("\nDigite o %i° número: ", i);
        scanf("%i", &num);

        if(num%3==0 && num > 10){
            qntdTotalMult++;
            somaTotalMult += num;
        }

        if (num >= 10 && num <= 20) {
            qntdEntre10e20++;
        }

        if(num >= 2){
            int ehPrimo = 1;
            for(int k = 2; k <= sqrt(num); k++){
                if(num % k == 0){
                    ehPrimo = 0;
                    break;
                }
            }
            if(ehPrimo){
                somaPrimos += num;
            }
        }
    }

    if(qntdTotalMult > 0){
        float media = (float)somaTotalMult/qntdTotalMult; 
        printf("Média dos números múltiplos de 3 maiores que 10: %.2f\n", media);
    } else {
        printf("Nenhum número múltiplo de 3 e maior que 10 foi inserido.\n");
    }

    printf("Soma dos números primos: %i\n", somaPrimos);
    printf("Quantidade de números entre 10 e 20: %i\n", qntdEntre10e20);

    return 0;
}

