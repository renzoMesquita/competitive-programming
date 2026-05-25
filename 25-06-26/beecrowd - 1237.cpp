#include <iostream>
#include <string>

using namespace std;

int main() {

    string a, b;

    while(getline(cin, a) && getline(cin, b)){

        int maior = 0;

        for(int i = 0; i < a.length(); i++){

            for(int j = 0; j < b.length(); j++){

                int k = 0;

                while(
                    i + k < a.length() &&
                    j + k < b.length() &&
                    a[i + k] == b[j + k]
                ){
                    k++;
                }

                if(k > maior){
                    maior = k;
                }
            }
        }

        cout << maior << "\n";
    }

    return 0;
}