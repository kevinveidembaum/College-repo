#include <iostream>
#include <locale.h>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    int op_prato, op_sob, op_bebida, calorias = 0;
 
    cout << "Restaurante Fatec - VERSÃO 2" << endl;
    cout << "Escolha o prato: " << endl;
    cout << "1-Vegetariano 2-Peixe 3-Frango 4-Carne "<< endl;
    cin >> op_prato;
 
    switch (op_prato) {
        case 1:
            calorias += 180;
            break;
        case 2:
            calorias += 230;
            break;
        case 3:
            calorias += 250;
            break;
        case 4:
            calorias += 350;
            break;
        default:
            cout << "Prato inválido";
    }
 
    cout << "Escolha a sobremesa: " << endl;
    cout << "1-Abacaxi 2-Sorvete 3-Mousse 4-Torta " << endl;
    cin >> op_sob;
 
    switch (op_sob) {
        case 1:
            calorias += 75;
            break;
        case 2:
            calorias += 110;
            break;
        case 3:
            calorias += 170;
            break;
        case 4:
            calorias += 200;
            break;
        default:
            cout << "Sobremesa inválida";
    }
 
    cout << "Escolha a bebida: " << endl;
    cout << "1-Cha 2-Suco laranja 3-Suco melao 4-Refri " << endl;
    cin >> op_bebida;
 
    switch (op_bebida) {
        case 1:
            calorias += 200;
            break;
        case 2:
            calorias += 70;
            break;
        case 3:
            calorias += 100;
            break;
        case 4:
            calorias += 75;
            break;
        default:
            cout << "Bebida inválida";
    }
 
    cout << "Total de calorias consumidas: " << calorias << endl;
    return 0;
}