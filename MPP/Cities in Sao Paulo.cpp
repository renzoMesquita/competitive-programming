#include <iostream>
using namespace std;

bool dentro(int x, int y){
    if(y == 0){
        return x >= -200 && x <= 200;
    }
    if(y < 0){
        y *= -1;
        x *= -1;
    }
    return y <= 100 && y - x <= 200 && y + x <= 100;
}


int main(){
    int n;
    cin >> n;

    int x, y;

    for(int i; i<n; i++){
        cin >> x >> y;
        cout << (dentro(x, y) ? 'S' : 'N') << endl;
    }

    return 0;

}