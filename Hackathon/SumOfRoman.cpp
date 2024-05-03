#include <iostream>
#include <locale.h>
#include <map>
#include <string>
using namespace std;


int main(){
    setlocale(LC_ALL, "");
    
    map<char, int> romanoParaInt = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    string numeroRomano;

    cout << "Informe um número Romano: ";
    getline(cin, numeroRomano);

}