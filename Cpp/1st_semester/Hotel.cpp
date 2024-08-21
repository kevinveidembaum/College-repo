#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo = 0, ndeDias, totalDiaria, somatorio = 0;
    string nome;

    cout << "Digite 0 no c�digo para encerrar." << endl;

    do {
        cout << "Digite o c�digo do cliente, nome e n�mero de dias:" << endl;
        cout << "C�digo do cliente: ";
        cin >> codigo;

        if (codigo == 0) {
            break; 
        }

        cin.ignore(); // Clear the input buffer

        cout << "Nome: ";
        getline(cin, nome);

        cout << "Quantidade de dias: ";
        cin >> ndeDias;

        if (ndeDias < 10) {
            totalDiaria = (30 + 15) * ndeDias;
        } else {
            totalDiaria = (30 + 8) * ndeDias;
        }

        cout << "Valor total com taxa di�ria: " << totalDiaria << endl;

        somatorio += totalDiaria;
    } while (codigo != 0); // Added missing semicolon

    cout << "O valor total arrecadado pela pousada � de: " << somatorio << endl;

    return 0;
}