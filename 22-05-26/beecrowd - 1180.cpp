#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 
    int n, i, n1, menor, indice_menor;
    
    cin >> n;
    
    vector <int> vet(n);
    
    for(i=0; i<n; i++){
        cin >> n1;
        vet[i] = n1;
    }
    
    menor = vet[0];
    indice_menor = 0;
    for(i=1; i<n; i++){
        if(vet[i] < menor){
            menor = vet[i];
            indice_menor = i;
        }
    }
    
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << indice_menor << endl;
 
    return 0;
}