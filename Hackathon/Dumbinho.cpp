#include <iostream>
#include <string>
using namespace std;

//Função para verificar se é par ou ímpar, retornando o nome da marca das balas
string Parimpar(int x){ 
    if(x%2 == 0)
        return "dumbinho";
            else
                return "8-bonito";
    
}

int main() {
    int numero, soma=0;
    cout << "Digite um número: ";
    cin >> numero;

    //Convertendo int para string
    string strNumero = to_string(numero);

    //Loop que seleciona e armazena cada número individualmente
    for (char c : strNumero) {
        int digito = c - '0';
        soma += digito;     //Realiza a soma dos números
    }

    //Imprime na tela a marca das balas, sendo 8-bonito para caso seja ímpar
    //E dumbinho para caso a soma resulte em número par
    cout << Parimpar(soma);

    return 0;
}
