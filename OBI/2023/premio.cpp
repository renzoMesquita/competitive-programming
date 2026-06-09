#include <iostream>
using namespace std;

int main(){

    int p, d, b, soma;

    cin >> p >> d >> b;

    soma += p;
    soma += 2*d;
    soma += 3*b;

    if(soma > 150){
        cout << "B" << endl;
    }
    else if(soma >= 120){
        cout << "D" << endl;
    }
    else if(soma >= 100){
        cout << "P" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}