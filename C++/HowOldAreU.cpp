#include <iostream>
using namespace std;
#include <locale.h>
 
int main(){
	int idade;
	setlocale(LC_ALL, "");
	cout << "Informe sua idade ";
	cin >> idade;
	if(idade<18)
		cout << "Você é menor de idade ";
			else if(idade >= 18 && idade < 80)
				cout << "Você é maior de idade";
					else
						cout << "Você tem 80 ou mais anos.";

    return 0;
}