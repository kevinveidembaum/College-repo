#include <iostream>
using namespace std;

int main(){
    int c = 0;
    int n;

    cout << "Please type a number: ";
    cin >> n;

    while(n > 0){
        c++;
        cout << "Please type a number: ";
        cin >> n;
    }

    cout << "Total of positive numbers: " << c;
}
