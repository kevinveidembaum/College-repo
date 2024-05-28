#include <iostream>
using namespace std;

int main() {
    int n, quadrado;
    do {
        cout << "Digite um numero: ";
        cin >> n;
        quadrado = n * n;
        cout << "Quadrado do numero " << n << ": " << quadrado << endl;
    } while (n % 6 != 0);

    return 0;
}