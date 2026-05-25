#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int i, j, lin=12, col=12, quantidade=0;
    double mat[lin][col], n, soma=0, media;
    char O;
    
    cin >> O;
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin >> n;
            mat[i][j] = n;
        }
    }
    
    for(i=0; i<5; i++){
        for(j=0; j<12; j++){
            if(j>i && j+i<11){
                soma += mat[i][j];
                quantidade++;
            }
        }
    }
    
    media = soma / quantidade;
    
    if(O == 'S'){
        cout << fixed << setprecision(1) << soma << "\n";
    }
    
    if(O == 'M'){
        cout << fixed << setprecision(1) << media << "\n";
    }
    
    return 0;
}