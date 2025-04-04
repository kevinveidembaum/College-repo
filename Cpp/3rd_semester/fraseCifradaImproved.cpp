#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool ehVogal(char letra) {
    const string vogais = "aeiouAEIOU";
    return vogais.find(letra) != string::npos;
}

int main() {
    string fraseOriginal, somenteConsoantes, somenteVogais, fraseCifrada;
    int qtdVogais = 0, qtdConsoantes = 0, qtdPalavras = 1;
    
    cout << "Digite uma frase: ";
    getline(cin, fraseOriginal);
    
    for (char letra : fraseOriginal) {
        if (isalpha(letra)) {
            if (ehVogal(letra)) {
                qtdVogais++;
                somenteVogais += letra;
            } else {
                qtdConsoantes++;
                somenteConsoantes += letra;
            }
        } else if (isspace(letra)) {
            qtdPalavras++;
        }
    }
    
    string stringConcatenada = somenteConsoantes + somenteVogais;
    string chave = "Bunda";
    string cifrada = stringConcatenada + chave;
    
    for (char letra : cifrada) {
        if (isalpha(letra)) {
            fraseCifrada += ehVogal(letra) ? letra + 5 : letra - 3;
        }
    }
    
    cout << "\nResultados:" << endl;
    cout << "A frase Original: " << fraseOriginal << endl;
    cout << "A quantidade de Letras: " << fraseOriginal.length() << endl;
    cout << "A quantidade de Vogais: " << qtdVogais << endl;
    cout << "A quantidade de Consoantes: " << qtdConsoantes << endl;
    cout << "A quantidade de Palavras: " << qtdPalavras << endl;
    cout << "String de Consoantes: " << somenteConsoantes << endl;
    cout << "String de Vogais: " << somenteVogais << endl;
    cout << "Concatenando essas Strings: " << stringConcatenada << endl;
    cout << "Frase Final Cifrada: " << fraseCifrada << endl;
    
    return 0;
}
