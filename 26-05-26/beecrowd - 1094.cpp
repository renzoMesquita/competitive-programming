#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int  i, n, quant, quantC=0, quantR=0, quantS=0, total;
    double pC, pR, pS;
    char t;
    
    cin >> n;
    
    for(i=0; i<n; i++){
        cin >> quant >> t;
        
        if(t == 'C'){
            quantC += quant;
        }
        else if(t == 'R'){
            quantR += quant;
        }
        else if(t == 'S'){
            quantS += quant;
        }
    }
    
    total = quantC + quantR + quantS;
    
    pC = (quantC * 100.0) / total;
    pR = (quantR * 100.0) / total;
    pS = (quantS * 100.0) / total;
    
    cout << "Total: " << total << " cobaias" << "\n";
    cout << "Total de coelhos: " << quantC << "\n";
    cout << "Total de ratos: " << quantR << "\n";
    cout << "Total de sapos: " << quantS << "\n";
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << pC << " %" << "\n";
    cout << "Percentual de ratos: " << fixed << setprecision(2) << pR << " %" << "\n";
    cout << "Percentual de sapos: " << fixed << setprecision(2) << pS << " %" << "\n";
    
 
    return 0;
}