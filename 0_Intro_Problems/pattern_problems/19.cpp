/*
Pattern:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=5; i>=1; i--){
        for(int j=1; j<=5; j++){
            if(j>i){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        for(int k=5; k>=1; k--){
            if(k>i){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
    for(int x=1; x<=n; x++){
        for(int y=1; y<=5; y++){
            if(y<=x){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(int z=n; z>=1; z--){
            if(z>x){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}