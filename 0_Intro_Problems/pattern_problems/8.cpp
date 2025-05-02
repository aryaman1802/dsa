/*
Pattern:

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
    for(int i=n; i>=1; i--){
        for(int j=5; j>=1; j--){
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