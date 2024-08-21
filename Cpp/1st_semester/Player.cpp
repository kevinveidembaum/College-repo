#include <iostream>
using namespace std;
 
const float EXCELENTE = 1;
const float BOM = 0.8;
const float REGULAR = 0.3;
const float TREINAR = 0.1;
 
float aumentoSalario(float salario, float aumento){
	return salario +(salario * aumento);
}
 
int main(){
	float salario, novoSalario;
	int classe;
	while (true){
		cout << "Digite o salario do jogador: ";
		cin >> salario;
		cout << "Digite a classe que ele pertence: ";
		cin >> classe;
		if (classe > 4 || classe < 1){
			cout << "Programa encerrado com sucesso!";
			break;
		}
		if (classe == 1){
			novoSalario = aumentoSalario(salario, EXCELENTE);
			cout << "Sua classe e Excelente" << endl;
			cout << "Novo salario ficou em: " << novoSalario << endl;
		} else if(classe == 2){
			novoSalario = aumentoSalario(salario, BOM);
			cout << "Sua classe e BOM" << endl;
			cout << "Novo salario ficou em: " << novoSalario << endl;
		}else if(classe == 3){
			novoSalario = aumentoSalario(salario, REGULAR);
			cout << "Sua classe e REGULAR" << endl;
			cout << "Novo salario ficou em: " << novoSalario << endl;
		}else if(classe == 4){
			novoSalario = aumentoSalario(salario, TREINAR);
			cout << "Sua classe e TREINAR" << endl;
			cout << "Novo salario ficou em: " << novoSalario << endl;
		}
	}
}