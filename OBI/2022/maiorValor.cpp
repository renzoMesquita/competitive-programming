#include <iostream>
using namespace std;

int somaDigitos(int n){
    int soma = 0;
    while(n > 0){
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main(){
    int n, m, s;
    cin >> n >> m >> s;

    for(int i = m; i >= n; i--){
        if(somaDigitos(i) == s){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}