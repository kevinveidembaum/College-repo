#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
 
//Declaração das constantes, o consumo de km/litro por carro
const float CONSUMO_LITRO1 = 8;
const float CONSUMO_LITRO2 = 9;
const float CONSUMO_LITRO3 = 12;
 
//Função que calcula e mostra na tela o consumo Médio de combustível
void consumoEstimado(float quilometragem, float litro){
	quilometragem /= litro;
	cout << "O consumo médio de combustível irá ser de: " << quilometragem << "L";
}

int main(){
	setlocale(LC_ALL, "");
	float valorKm;
	char carro;
	cout << fixed << setprecision(2); //Usado para formatar o float para duas casas decimais
	cout << "Informe a distância da viagem: ";
	cin >> valorKm;
	cout << "Informe o tipo de carro que será usado" << endl;
	cout << "(A)  (B)  (C)" << endl;
	cin >> carro;
	switch(carro){
		case 'A':
			consumoEstimado(valorKm, CONSUMO_LITRO1);
			break;
		case 'B':
			consumoEstimado(valorKm, CONSUMO_LITRO2);
			break;
		case 'C':
			consumoEstimado(valorKm, CONSUMO_LITRO3);
			break;
		default:
			cout << "Por favor Informe um valor válido.";
			break;
	}
	return 0;
}