#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main(){
	char descricao[20];
	int qnt_vendida;
	float v_prod_real, taxa_euro, total_v_real, total_v_euro;
	cout << "Ola oferecemos nossos produtos nos valores da moeda real e euro \n"  << endl;
	cout << "Descreva com uma palavra o produto desejado: " << endl;
	cin >> descricao;
	cout << "Digite quantos produtos deseja adquirir: " << endl;
	cin >> qnt_vendida;
	cout << "Informe o preço do respectivo produto: " << endl;
	cin >> v_prod_real;
	cout << "Para finalizar, indique a taxa do euro em relacao ao real: " << endl;
	cin >> taxa_euro;
	total_v_real = qnt_vendida * v_prod_real;
	total_v_euro = total_v_real/taxa_euro;
	cout << "Seu produto que corresponde com a descricao abaixo \n" << endl;
	cout << descricao << endl;	
	cout << "Custa em seu total em reais: " << total_v_real << ". Sendo seu valor em euro: " << total_v_euro << endl;

}