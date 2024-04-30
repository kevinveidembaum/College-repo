#include <iostream>
#include <locale.h>
using namespace std;
 
int main(){
	int n1;
	setlocale( LC_ALL, "portuguese" );
	cout << "Informe um número: ";
	cin >> n1;
	if(n1 >= 1000 && n1 <= 9999){
        int duasCasas = n1*0.01;
        int multiplo4 = (duasCasas % 4);
        if(multiplo4 == 0){
            cout << "O valor informado é multiplo de 4.";
        } else{
            cout << "O valor informado não é multiplo de 4.";
        }
    }else{
        cout << "Informe um valor com 4 digitos.";
    }
}