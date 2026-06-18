#include <iostream>
using namespace std;

int main() {

    int golI, golG;
    int grenais = 0, vitI = 0, vitG = 0, emp = 0;
    int resp;

    do {

        cin >> golI >> golG;

        if(golI > golG) {
            vitI++;
        }
        else if(golI < golG) {
            vitG++;
        }
        else {
            emp++;
        }

        grenais++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resp;

    } while(resp == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vitI << endl;
    cout << "Gremio:" << vitG << endl;
    cout << "Empates:" << emp << endl;

    if(vitI > vitG) {
        cout << "Inter venceu mais" << endl;
    }
    else if(vitG > vitI) {
        cout << "Gremio venceu mais" << endl;
    }
    else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}