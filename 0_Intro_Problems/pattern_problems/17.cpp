/*
Pattern:

   A
  ABA
 ABCBA
ABCDCBA
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=4;
    char ch='A';
    for(int i=1; i<=n; i++){
        ch='A';
        for(int j=n; j>=1; j--){
            if(j<=i){
                cout << ch++;
            }
            else{
                cout << " ";
            }
        }
        ch-=2;
        for(char k=ch; k>='A'; k--){
            cout << k;
        }
        cout << "\n";
    }
}