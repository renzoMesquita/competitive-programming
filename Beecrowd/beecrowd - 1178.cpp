#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
 
int main() {
 
    int i;
    double n;
    vector<double> vet(100);
    
    cin >> n;
    vet[0] = n;
    for(i=1;i<100; i++){
        vet[i] = vet[i-1]/2.0;
    }
    
    for(i=0; i<100; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << vet[i] << "\n";
    }
 
    return 0;
}