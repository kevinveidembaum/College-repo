#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main(){
	float saldo, reajuste;
	cout << "Informe seu saldo atual para ver o reajuste" << endl;
	cin >> saldo;
	reajuste = saldo + (saldo*0.01);
	cout << "Seu novo saldo de acordo com o reajuste: \n" << reajuste << endl;
}