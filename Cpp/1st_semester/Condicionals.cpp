#include <iostream>
using namespace std;
 
int main(){
	int n1, n2, X;
	cout << "Informe um valor: ";
	cin >> n1;
	cout << "Informe outro valor: ";
	cin >> n2;
	X = n1 + n2;
	if(X > 10){
		cout << "A soma dos dois valores resulta em: " << X;
	} else {
		cout << "O resultado da soma foi menor que 10. ";
	}
}