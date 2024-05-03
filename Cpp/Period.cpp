#include <locale.h>
#include <iostream>
using namespace std;
 
 
int main(){
	setlocale(LC_ALL, "");
	char periodo;
	cout << "Informe qual período você faz parte: " << endl;
	cout << "(M)Matutino  (V)Vespertino  (N)Noturno" << endl;
	cin >> periodo;
	switch(periodo){
		case 'M':
			cout << "Matutino" << endl;
			cout << "Bom dia!";
			break;
		case 'V':
			cout << "Vespertino" << endl;
			cout << "Boa tarde!";
			break;
		case 'N':
			cout << "Noturno" << endl;
			cout << "Boa Noite!";
			break;
	}
}