#include <iostream>
using namespace std;

int main(){

    int t, tempo=0, antes, depois, n, i;

    cin >> n;

    for(i=0; i<n; i++){
        
        cin >> t;

        antes = tempo;
        tempo += t;
        depois = tempo;

        if(antes < 120 && depois > 120){
            tempo += 180;
        }
        if(antes < 720 && depois > 720){
            tempo += 180;
        }

    }

    cout << tempo << endl;

    return 0;
}