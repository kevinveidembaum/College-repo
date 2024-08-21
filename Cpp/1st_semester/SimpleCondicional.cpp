#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	cout << "Digite um número: ";
	cin >> n1;
	cout << "Digite outro: ";
	cin >> n2;
	if(n1 == n2){
		cout << "Os números são iguais.";
	} else{
		cout << "Os números são diferentes.";
	}
	}