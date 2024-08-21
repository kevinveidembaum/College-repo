#include <iostream>
using namespace std;
 
int main() {
    int num_espectadores = 6;
    int idade, opiniao;
    int soma_idades_excelente = 0, quantidade_excelente = 0;
    int quantidade_regular = 0, quantidade_bom = 0;
    cout << "Digite a idade e a opiniao (3 - Excelente, 2 - Bom, 1 - Regular) de cada espectador:\n";
    int contador = 1;
    while (contador <= num_espectadores) {
        cout << "Espectador " << contador << ":\n";
        cout << "Idade: ";
        cin >> idade;
        cout << "Opiniao (3 - Excelente, 2 - Bom, 1 - Regular): ";
        cin >> opiniao;
        if (opiniao == 3) {
            soma_idades_excelente += idade;
            quantidade_excelente++;
        } else if (opiniao == 1) {
            quantidade_regular++;
        } else if (opiniao == 2) {
            quantidade_bom++;
        }
        contador++;
    }
    double media_idades_excelente = 0.0;
    if (quantidade_excelente > 0) {
        media_idades_excelente = static_cast<double>(soma_idades_excelente) / quantidade_excelente;
    }
    double percentual_bom = 0.0;
    if (num_espectadores > 0) {
        percentual_bom = (static_cast<double>(quantidade_bom) / num_espectadores) * 100.0;
    }
    cout << "\nResultados:\n";
    cout << "1. Média das idades das pessoas que responderam excelente: " << media_idades_excelente << endl;
    cout << "2. Quantidade de pessoas que responderam regular: " << quantidade_regular << endl;
    cout << "3. Porcentagem de pessoas que responderam 'bom' entre todos os espectadores: " << percentual_bom << "%" << endl;
    return 0;
}