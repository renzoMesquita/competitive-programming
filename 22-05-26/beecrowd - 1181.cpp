#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int col=12, lin = 12, i, j, l;
    float soma, media, mat[lin][col];
    char t;
    
    cin >> l;
    cin >> t;
    
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            cin >> mat[i][j];
        }
    }
    
    for(j=0; j<col; j++){
        soma += mat[l][j];
    }
    
    media = soma / 12;
    
    if(t == 'S'){
        cout << fixed << setprecision(1) << soma << '\n';
    }
    else if(t == 'M'){
        cout << fixed << setprecision(1) << media << '\n';
    }

    return 0;
}