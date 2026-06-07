#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, k, i;
    
    cin >> n >> k;
    vector<int> vet(n);

    for(i=0; i<n; i++){
        cin >> vet[i];
    }

    sort(vet.begin(), vet.end());

    cout << vet[k];

    return 0;

}