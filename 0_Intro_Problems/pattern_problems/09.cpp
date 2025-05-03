/*
Pattern:

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=5; j>=1; j--){
            if(j<=i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(int k=2; k<=i; k++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n-1; i>=1; i--){
        cout << " ";
        for(int j=n-1; j>=1; j--){
            if(j>i){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        for(int k=2; k<=i; k++){
            cout << "*";
        }
        cout << "\n";
    }
}