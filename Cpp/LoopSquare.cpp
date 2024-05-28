#include <iostream>
using namespace std;

void square(int n){
    cout << "Quadrado do numero " << n << ": " << (n * n) << endl;
}

int main() {
    int n;
    do {
        cout << "Digite um numero: ";
        cin >> n;
        square(n);
    } while (n % 6 != 0);

    return 0;
}