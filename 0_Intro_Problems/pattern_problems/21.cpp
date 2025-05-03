/*
Pattern:

****

*  *

*  *

****
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        cout << "*";
    }
    cout << "\n\n";
    for(int j=1; j<=n-2; j++){
        cout << "*";
        for(int k=2; k<=n-1; k++){
            cout << " ";
        }
        cout << "*";
        cout << "\n\n";
    }
    for(int i=1; i<=n; i++){
        cout << "*";
    }
    cout << "\n";
}