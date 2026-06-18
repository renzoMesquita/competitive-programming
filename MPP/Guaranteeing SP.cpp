#include <iostream>
using namespace std;

int main(){
    
    string cod;

    while(cod.size() != 5){
        cin >> cod;
    }

    if(cod[3] == 'S'){
        if(cod[4] == 'P'){
            cout << 'S' << endl;
        }
        else{
            cout << 'T' << endl;
        }
    }
    else if(cod[4] == 'P'){
        cout << "T" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
    
}