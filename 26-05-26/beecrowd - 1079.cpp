#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n, i;
    double a, b, c, media;
    
    cin >> n;
    
    for(i=0; i<n; i++){
        a = 0;
        b = 0;
        c = 0;
        media = 0;
        cin >> a >> b >> c;
        media = ((a*2)+(b*3)+(c*5))/10;
        cout << fixed << setprecision(1) << media << "\n";
    }
 
    return 0;
}