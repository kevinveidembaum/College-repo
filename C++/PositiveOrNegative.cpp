#include <iostream>
#include <locale.h>
using namespace std;
 
int main(){
	setlocale(LC_ALL, "portuguese");
	int n1;
	cout << "Insira um valor: ";
	cin >> n1;
	if(n1<0)
		cout << "O número é negativo.";
			else if(n1>0)
				cout << "O número é positivo";
					else
						cout << "O número é nulo";
	return 0;
}