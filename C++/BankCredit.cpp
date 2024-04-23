#include <iostream>
#include <locale.h>
using namespace std;
 
//Declaração das constantes referentes aos valores do saldo médio do cliente
const float LIMITE_SALDO_1 = 500.00;
const float LIMITE_SALDO_2 = 1000.00;
const float LIMITE_SALDO_3 = 3000.00;
 
//Função para calcular o valor do crédito e imprimir na tela
void valorDoCredito(float saldoMedio, float porcentagem){
	cout << "Seu crédito atual é de: R$" << saldoMedio << endl;
	cout << "E lhe foi concedido um crédito especial de " << porcentagem << "%" << endl;
	cout << "Que corresponde a: R$" << saldoMedio * porcentagem/100;
}
 
int main(){
	float saldoMedio;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe seu saldo: ";
	cin >> saldoMedio;
	if(saldoMedio <= LIMITE_SALDO_1){
		cout << "Seu crédito atual é de: R$" << saldoMedio << endl;
		cout << "Infelizmente você não possui crédito disponível";
	} else if(saldoMedio > LIMITE_SALDO_1 && saldoMedio <= LIMITE_SALDO_2){
		valorDoCredito(saldoMedio, 30);
	} else if(saldoMedio > LIMITE_SALDO_2 && saldoMedio <= LIMITE_SALDO_3){
		valorDoCredito(saldoMedio, 40);
	} else{
		valorDoCredito(saldoMedio, 50);
	}
}