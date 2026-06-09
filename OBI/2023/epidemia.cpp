#include <iostream> 
using namespace std;

int main(){

    long long n, r, p, soma, dias, ultimo;

    cin >> n >> r >> p;

    dias = 0;
    soma = n;
    ultimo = n;
    
    while(soma < p){
        ultimo = ultimo * r;
        soma += ultimo;
        dias++;
    }

    cout << dias << endl;

    return 0;
}