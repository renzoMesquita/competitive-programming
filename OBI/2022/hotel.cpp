#include <iostream>
using namespace std;

int main(){

    int d, a, n, dias, valor;
    
    cin >> d >> a >> n;

    dias = 32 - n;

    if(n <= 15){
        valor = dias * (d + (n-1)*a);
    }
    else{
        valor = dias * (d + (14)*a);
    }

    cout << valor << endl;

    return 0;
}