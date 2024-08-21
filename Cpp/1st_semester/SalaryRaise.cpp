#include <iostream>
#include <locale.h>
using namespace std;

// Constantes para os limites de salário e taxas de reajuste
const float LIMITE_SALARIO_1 = 1500.0;
const float LIMITE_SALARIO_2 = 3000.0;
const float TAXA_REAJUSTE_1 = 0.15;
const float TAXA_REAJUSTE_2 = 0.10;
const float TAXA_REAJUSTE_3 = 0.05;

// Calcula o reajuste do salário
float CalculoReajuste(float salario, float taxaReajuste) {
    return salario + (salario * taxaReajuste);
}

// Exibe a mensagem sobre o valor do reajuste final
void ExibirMensagemReajuste(int porcentagem) {
    cout << "Você recebeu um reajuste em seu pagamento de " << porcentagem << "%." << endl;
}

int main() {
    float salario, salarioReajustado;
    setlocale(LC_ALL, "portuguese");

    cout << "Informe seu salário para o reajuste: ";
    cin >> salario;

    if (salario < LIMITE_SALARIO_1) {
        ExibirMensagemReajuste(15);
        salarioReajustado = CalculoReajuste(salario, TAXA_REAJUSTE_1);
    } else if (salario >= LIMITE_SALARIO_1 && salario <= LIMITE_SALARIO_2) {
        ExibirMensagemReajuste(10);
        salarioReajustado = CalculoReajuste(salario, TAXA_REAJUSTE_2);
    } else {
        ExibirMensagemReajuste(5);
        salarioReajustado = CalculoReajuste(salario, TAXA_REAJUSTE_3);
    }

    cout << "Após reajuste: R$" << salarioReajustado << endl;
    return 0;
}