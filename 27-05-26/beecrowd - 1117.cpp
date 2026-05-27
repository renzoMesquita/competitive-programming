#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double nota, soma = 0, media;
    int validas = 0;

    while(validas < 2) {

        cin >> nota;

        if(nota >= 0 && nota <= 10) {
            soma += nota;
            validas++;
        }
        else {
            cout << "nota invalida" << endl;
        }
    }

    media = soma / 2.0;

    cout << fixed << setprecision(2);
    cout << "media = " << media << endl;

    return 0;
}