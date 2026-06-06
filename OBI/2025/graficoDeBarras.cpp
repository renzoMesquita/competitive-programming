#include <iostream> 
#include <vector>
using namespace std;

int main(){

    int N, i, j;
    
    cin >> N;
    
    vector <int> vet(N);

    int maior = 0;
    for(i=0; i<N; i++){
        cin >> vet[i];
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    for(i = 0;i < maior; i++){
        for(j=0; j < N; j++){
            if(i < maior - vet[j]){
                cout << 0;
            }
            else{
                cout << 1;
            }
        }
        cout << "\n";
    }

    return 0;

}