#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int N, i;
    
    cin >> N;
    
    vector<int> vet(N);
    
    for(i=0; i < N; i++){
        cin >> vet[i];
    }
    
    int maior;
    int escondido = 0;
    
    for(i = N - 1; i >= 0; i--){
        if(i == N - 1){
            maior = vet[i];
        }
        else{
            if(vet[i] <= maior){
                escondido++;
            }
            else{
                maior = vet[i];
            }
        }
    }
    
    cout << escondido << endl;
    
    return 0;
}