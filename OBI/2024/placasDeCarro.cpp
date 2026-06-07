#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string placa;
    cin >> placa;

    if (placa.size() == 8) {
        if (isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
            placa[3] == '-' &&
            isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
            
            cout << "1" << endl;
            return 0;
        }
    }

    if (placa.size() == 7) {
        if (isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
            isdigit(placa[3]) &&
            isalpha(placa[4]) &&
            isdigit(placa[5]) && isdigit(placa[6])) {
            
            cout << "2" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}
