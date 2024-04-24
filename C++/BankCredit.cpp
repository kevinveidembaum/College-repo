#include <iostream>
#include <locale.h>
using namespace std;
 
//Declaração das constantes referentes aos valores do saldo médio do cliente e percentuais
const float LIMITE_SALDO_1 = 500.00;
const float LIMITE_SALDO_2 = 1000.00;
const float LIMITE_SALDO_3 = 3000.00;
const float TAXA_PERCENTUAL_1 = 0.3;
const float TAXA_PERCENTUAL_2 = 0.4;
const float TAXA_PERCENTUAL_3 = 0.5;
 
//Função para calcular o valor do crédito e imprimir na tela
void valorDoCredito(float saldoMedio, float porcentagem){
	cout << "Seu crédito atual é de: R$" << saldoMedio << endl;
	cout << "E lhe foi concedido um crédito especial de " << (porcentagem*100) << "%" << endl;
	cout << "Que corresponde a: R$" << saldoMedio * porcentagem;
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
		valorDoCredito(saldoMedio, TAXA_PERCENTUAL_1);
	} else if(saldoMedio > LIMITE_SALDO_2 && saldoMedio <= LIMITE_SALDO_3){
		valorDoCredito(saldoMedio, TAXA_PERCENTUAL_2);
	} else{
		valorDoCredito(saldoMedio, TAXA_PERCENTUAL_3);
	}
}