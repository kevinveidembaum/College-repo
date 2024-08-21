#include <iostream>
using namespace std;
 
int main(){
	setlocale(LC_ALL, "portuguese");
	int n1;
	float x;
	cout << "Informe um valor: ";
	cin >> n1;
	if(n1 > 20){
		x = n1/2;
		cout << "A metade desse valor corresponte a: " << x;
	} else {
		cout << "O valor é menor que 20. ";
	}
}