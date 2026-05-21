#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vetPar;
    vector<int> vetImpar;
    int i, n, j;

    for(i=0; i<15; i++){
        cin >> n;

        if(n % 2 == 0){
            vetPar.push_back(n);
            if(vetPar.size() == 5){
                for(j=0; j<5; j++)
                    cout << "par[" << j << "] = " << vetPar[j] << "\n";
                vetPar.clear();
            }
        } else {
            vetImpar.push_back(n);
            if(vetImpar.size() == 5){
                for(j=0; j<5; j++)
                    cout << "impar[" << j << "] = " << vetImpar[j] << "\n";
                vetImpar.clear();
            }
        }
    }

    for(j=0; j<vetImpar.size(); j++)
        cout << "impar[" << j << "] = " << vetImpar[j] << "\n";
    for(j=0; j<vetPar.size(); j++)
        cout << "par[" << j << "] = " << vetPar[j] << "\n";

    return 0;
}