#include <iostream>
using namespace std;
 
int main() {
 
    int maiorPos=0, i, maiorVal=0, n;
    
    for(i=1; i<=100; i++){
        cin >> n;
        
        if(n > maiorVal){
            maiorVal = n;
            maiorPos = i;
        }
    }
    
    cout << maiorVal << "\n";
    cout << maiorPos << "\n";
 
    return 0;
}