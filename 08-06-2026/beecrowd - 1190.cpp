#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char O;
    cin >> O;

    double M[12][12];
    double soma = 0.0;
    int contador = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
            
            if (j > i && j > 11 - i) {
                soma += M[i][j];
                contador++;
            }
        }
    }

    cout << fixed << setprecision(1);

    if (O == 'S') {
        cout << soma << endl;
    } else if (O == 'M') {
        cout << (soma / contador) << endl;
    }

    return 0;
}