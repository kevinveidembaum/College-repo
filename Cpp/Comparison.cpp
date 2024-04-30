#include <iostream>
#include <locale.h>
using namespace std;
 
int main(){
	setlocale(LC_ALL, "portuguese");
	int n1;
	cout << "Insira um valor: ";
	cin >> n1;
	if(n1<20)
		cout << "O número inserido é menor que 20.";
			else if(n1==20)
				cout << "O número inserido é igual a 20.";
					else
						cout << "O número inserido é maior que 20";
	return 0;
}