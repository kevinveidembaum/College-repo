#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main(){
	int a, b, aux;
	cout << "Informe um valor para A: " << endl;
	cin >> a;
	cout << "Informe agora um valor para B: " << endl;
	cin >> b;
	cout << "Valor de A: " << a << endl;
	cout << "Valor de B: " << b << endl;
	cout << "Invertendo... \n";
	aux = a;
	a = b;
	b = aux;
	cout << "Valor de A: " << a << endl;
	cout << "Valor de B: " << b << endl;
}