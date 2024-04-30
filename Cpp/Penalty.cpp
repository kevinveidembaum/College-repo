#include <iostream>
#include <locale.h>
using namespace std;

//Declaração de constantes em relação as taxas e limites do valor de Imposto
const double LIMITE_IMPOSTO_1 = 500.00;
const double LIMITE_IMPOSTO_2 = 1800.00;
const double TAXA_1 = 0.01;
const double TAXA_2 = 0.02;
const double TAXA_3 = 0.04;

// Função para calcular a multa com base no valor do imposto e nos meses em atraso
float calcularMulta(float valorImposto, int meses) {
    if (valorImposto <= LIMITE_IMPOSTO_1) {
        return valorImposto * meses * TAXA_1;
    } else if (valorImposto > LIMITE_IMPOSTO_1 && valorImposto <= LIMITE_IMPOSTO_2) {
        return valorImposto * meses * TAXA_2;
    } else {
        return valorImposto * meses * TAXA_3;
    }
}

int main() {
    int numeroRegistro, meses;
    float valorImposto, multa;
    setlocale(LC_ALL, "portuguese");

    cout << "Informe o número de registro: ";
    cin >> numeroRegistro;
    cout << "Valor do Imposto: ";
    cin >> valorImposto;
    cout << "Número de meses em atraso: ";
    cin >> meses;

    multa = calcularMulta(valorImposto, meses);

    cout << "Seu número de registro é " << numeroRegistro << endl;
    cout << "E sua multa equivale a: " << multa;

    return 0;
}
