#include <iostream>
using namespace std;
 
 int main(){
    int n1, n2, sum, res;
    setlocale(LC_ALL, "portuguese");

    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;
    sum = n1+n2;
    if(sum >=10){
        res = sum + 5;
        cout << "O resultado da soma + 5 é: " << res;
    }else {
        res = sum - 7;
        cout << "O resultado da soma - 7 é: " << res;
    }
 }