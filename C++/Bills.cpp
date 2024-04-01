#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int jan, fev, mar;
    float consumo_medio, total, total_desconto, media_desconto;
    cout << "Informe o valor de consumo energético em janeiro: " << endl; 
	cin >> jan;
	cout << "Informe agora o valor de fevereiro: " << endl; 
	cin >> fev;
	cout << "Por ultimo informe o valor referente a março: " << endl; 
	cin >> mar;
	total = jan+fev+mar;
	consumo_medio = total/3;
	total_desconto = total - (total*0.2);
	media_desconto = total_desconto/3;
	cout << "==========================Resultados=========================== \n";
	cout << "O valor total de energia consumida nos tres primeiros meses foi: \n" << total << endl;
	cout << "O consumo medio sendo: \n" << consumo_medio << endl;
	cout << "Agora em comparação com um desconto de 20%, o total seria: " << total_desconto << endl;
	cout << "E a nova media seria: " << media_desconto << endl;
}