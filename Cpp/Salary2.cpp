#include <iostream>
#include <locale.h>
using namespace std;
 
int main(){
	float salario, desconto;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe seu salário atual: ";
	cin >> salario;
	if(salario <= 600 && salario > 0){
		cout << "Você está isento do INSS.";
	}else if(salario > 600 && salario <= 1200){
		desconto = salario - (salario*0.2);
		cout << "Seu desconto foi de 20%." << endl;
		cout << "Salário com desconto: " << desconto;
	}else if(salario > 1200 && salario <= 2000){
		desconto = salario -(salario*0.25);
		cout << "Seu desconto foi de 25%."<< endl;
		cout << "Salário com desconto: " << desconto;
	}else if(salario>2000){
		desconto = salario -(salario*0.3);
		cout << "Seu desconto foi de 30%."<< endl;
		cout << "Salário com desconto: " << desconto;
	}else{
		cout << "Informe um valor válido.";
	}
}