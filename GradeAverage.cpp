#include <iostream>
using namespace std;
 
int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	cout << "Informe sua primeira nota: ";
	cin >> nota1;
	cout << "Informe sua segunda nota: ";
	cin >> nota2;
	media = (nota1+nota2)/2;
	if(media >= 6.0){
		cout << "Você foi APROVADO! \n";
		cout << "Sua nota final foi " << media << endl;
	} else {
		cout << "Você foi REPROVADO! \n";
		cout << "Sua nota final foi " << media << endl; 
	}
}