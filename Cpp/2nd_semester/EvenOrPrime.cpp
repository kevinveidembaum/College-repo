#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, qntdPares, qntdPrimos = 0;

    for(int i = 1; i <= 10; i++){
        printf("\nDigite o %i° número: ", i);
        scanf("%i", &num);

        if(num%2==0){
            qntdPares++;
        }

        if(num >= 2){
            int eh_primo = 1;  

            for(int k = 2; k <= sqrt(num); k++){
                if(num % k == 0){
                    eh_primo = 0;  
                    break;
                }
            }

            if(eh_primo) {
                qntdPrimos++;
            }
        }
    }

    printf("Quantidade de números primos: %i\n", qntdPrimos);
    printf("Quantidade de números pares: %i\n", qntdPares);

    return 0;
}
