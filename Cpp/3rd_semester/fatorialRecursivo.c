#include <stdio.h>

void fatorial(float num, float i, float res) {
    if (i > num) {
        printf("O fatorial de %.0f é %.0f\n", num, res);
        return;  
    }

 
    res *= i;
    printf("%0.f x %0.f = %.0f\n", num, i, res);

    fatorial(num, i + 1, res);
}

int main() {
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Não é possível calcular o fatorial de números negativos.\n");
    } else {
        fatorial(num, 1, 1);
    }

    return 0;
}
