#include <iostream>
#include <map>
using namespace std;

// Função para converter número romano em inteiro
int romanToInt(string s) {
    // Mapa para armazenar os valores dos números romanos
    map<char, int> roman{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0; // Variável para armazenar o total
    int prev = 0; // Variável para armazenar o valor anterior

    // Loop para percorrer a string de trás para frente
    for (int i = s.length() - 1; i >= 0; --i) {
        // Se o valor atual for maior ou igual ao anterior, adiciona ao total
        if (roman[s[i]] >= prev)
            total += roman[s[i]];
        // Se o valor atual for menor que o anterior, subtrai do total
        else
            total -= roman[s[i]];

        // Atualiza o valor anterior
        prev = roman[s[i]];
    }

    // Retorna o total
    return total;
}

int main() {
    string roman; // Variável para armazenar o número romano
    cout << "Insira um número romano: ";
    cin >> roman; // Lê o número romano

    // Converte o número romano em inteiro
    int result = romanToInt(roman);
    // Exibe o resultado
    cout << "O valor inteiro é: " << result << endl;

    return 0;
}
