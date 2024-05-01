#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
 
int main(){
    setlocale(LC_ALL, "");
 
    int numeroTotal;
    float soma = 0; 
    // Solicitando ao usuário o número de elementos a serem somados
    cout << "Informe um número com a quantidade de números que serão somados: ";
    cin >> numeroTotal;
    // Declarando um array para armazenar os números a serem somados
    int somatorioArray[numeroTotal];
    // Loop para receber os números do usuário e armazená-los no array
    for(int c = 0; c < numeroTotal; c++){
        cout << "Digite um número para ser somado " << c + 1 << ": ";
        cin >> somatorioArray[c];
    }
    // Calculando a soma dos elementos do array
    for(int i = 0; i < numeroTotal; i++){
        soma += somatorioArray[i];
    }
    // Calculando a média dos elementos e atualizando o valor de 'soma'
    soma /= numeroTotal;
    
    // Imprimindo a média formatada para exibir 2 casas decimais
    cout << setiosflags (ios::fixed) << setprecision(2) << "A média dos números inseridos é: " << soma;

    return 0;
}