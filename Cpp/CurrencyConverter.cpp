#include <iostream>
using namespace std;
 
//Declaração das variáveis constantes
const float TAXA_DOLAR = (1/5.15);
const float TAXA_EURO =	(1/5.56);
const float TAXA_LIBRA = (1/6.48);
 
//Função para calcular a conversão das moedas
float calculoConversao(float real, float taxa){
	return real*taxa;
}
 
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float reais, valor_conv;
    int moeda;
	cout << "Digite a quantia em reais ";
    cin >> reais;
    cout << "Escolha a moeda " <<endl;
    cout << "1-Dolar  2-Euro  3-Libra" <<endl;
    cin >> moeda;
    switch(moeda){
        case 1:
            valor_conv = calculoConversao(reais, TAXA_DOLAR);
            cout << "Valor em Dolares: " << valor_conv;
            break;
        case 2:
            valor_conv = calculoConversao(reais, TAXA_EURO);
            cout << "Valor em Euro: " << valor_conv;
            break;
        case 3:
            valor_conv = calculoConversao(reais, TAXA_LIBRA);
            cout << "Valor em Libra: " << valor_conv;  
            break;
        default:
            cout << "Insira um valor valido";  
    }
}