#include <iostream>
#include <string>
using namespace std;

struct Pedido {
    int codigo;
    string descricao;
    double preco_unitario;
    int quantidade;
};

double calcularDesconto(double valor) {
    if (valor > 100) {
        return valor * 0.10;
    } else {
        return valor * 0.05;
    }
}

int main() {
    Pedido pedidos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Insira o codigo do produto: ";
        cin >> pedidos[i].codigo;

        cout << "Insira a descricao do produto: ";
        cin >> pedidos[i].descricao;

        cout << "Insira o preco unitario do produto: ";
        cin >> pedidos[i].preco_unitario;

        cout << "Insira a quantidade do produto: ";
        cin >> pedidos[i].quantidade;

        double valorCompra = pedidos[i].preco_unitario * pedidos[i].quantidade;
        double desconto = calcularDesconto(valorCompra);
        double valorFinal = valorCompra - desconto;

        cout << "Produto comprado: " << pedidos[i].descricao << "\n"; 
        cout << "Codigo do produto: " << pedidos[i].codigo << "\n";
        cout << "O valor da compra e: R$" << valorCompra << "\n";
        cout << "O desconto e: R$" << desconto << "\n";
        cout << "O valor final com desconto e: R$" << valorFinal << "\n\n";
    }

    return 0;
}