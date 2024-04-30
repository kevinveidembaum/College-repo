#include <iostream>
#include <locale.h>
using namespace std;
 
int main(){
	int n1;
	setlocale( LC_ALL, "portuguese" );
	cout << "Informe um número: ";
	cin >> n1;
	if(n1%2==0)
		cout << "Esse número é par";
			else
				cout << "Esse número é ímpar";
    
	return 0;
}