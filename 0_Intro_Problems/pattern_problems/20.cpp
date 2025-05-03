/*
Pattern:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(int k=n; k>=1; k--){
            if(k<=i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    n-=1;
    for(int x=1; x<=n; x++){
        for(int y=n; y>=1; y--){
            if(y>=x){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "  ";
        for(int z=1; z<=n; z++){
            if(z<x){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}