#include <iostream>
#include <locale.h>
using namespace std;
 
int main(){
	setlocale(LC_ALL, "portuguese");
	char cand1[20], cand2[20];
	int votos1, votos2;
	cout << "Informe o nome do primeiro candidato: " << endl;
	cin >> cand1;
	cout << "Informe o nome do segundo candidato: " << endl;
	cin >> cand2;
	cout << "Digite o número de votos do primeiro candidato: " << endl;
	cin >> votos1;
	cout << "Digite o número de votos do segundo candidato: " << endl;
	cin >> votos2;
	if(votos1 > votos2){
		cout << "Candidato " << cand1 << " foi eleito com " << votos1 << " votos" << endl;
	} else{
		cout << "Candidato " << cand2 << " foi eleito com " << votos2 << " votos" << endl;
	}
}