#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> estoque(n);
    for(int i = 0; i < n; i++){
        cin >> estoque[i];
    }

    int p, vendidos = 0;
    cin >> p;

    for(int i = 0; i < p; i++){
        int pedido;
        cin >> pedido;

        if(estoque[pedido - 1] > 0){
            estoque[pedido - 1]--;
            vendidos++;
        }
    }

    cout << vendidos << endl;

    return 0;
}