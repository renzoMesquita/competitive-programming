#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int i, j, lin=12, col=12, quantidade;
    char o;
    float mat[lin][col], n, soma, media; 
    
    cin >> o;
    
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            cin >> n;
            mat[i][j] = n;
        }
    }
    
    soma = 0.0;
    quantidade = 0;
    
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if(i + j < 11){
                soma += mat[i][j];
                quantidade++;
            }
        }
    }
    
    media = soma / quantidade;
    
    if(o == 'S'){
        cout << fixed << setprecision(1) << soma << '\n';
    }
    if(o == 'M'){
        cout << fixed << setprecision(1) << media << "\n";
    }
 
    return 0;
}