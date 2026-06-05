#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int e, s, l, dif;

    cin >> e;
    cin >> s;
    cin >> l;

    dif = abs(e - s) + abs(e-l);

    cout << 2*dif << endl;

    return 0;

}