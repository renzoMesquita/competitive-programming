#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//ex 1435
 
int main() {
 
    int n, mat[n][n], i, j, valor;
    
    while(true){
        
        cin >> n;
        
        if(n == 0){
            break;
        }
        
        for(i=0; i<n; i++){
           
            for(j=0; j<n; j++){
                
                valor = min(min(i, j), min(n-1-i, n-1-j)) + 1;
                
                cout << setw(3) << valor;
                
                if(j != n-1){
                    cout << " ";
                }
            }
            
            cout << endl;
        }
        
        cout<< endl;
    }
 
    return 0;
}