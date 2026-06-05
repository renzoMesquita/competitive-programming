#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long a, b, c, d, low, high, k_min;

    cin >> a >> b >> c >> d;

    low = c - b;
    high = c - a;

    if(d > high){
        cout << "N\n";
        return 0;
    }

    if(low <= 0){
        k_min = 1;
    }
    else{
        k_min = max(1LL, (low + (d - 1)) / d);
    }

    long long valor = k_min * d;

    if(valor >= low && valor <= high){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;

}