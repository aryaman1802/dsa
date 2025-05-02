/*
Pattern:

1      1
12    21
123  321
12344321
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout << j;
            }
            else{
                cout << " ";
            }
        }
        for(int k=n; k>=1; k--){
            if(k<=i){
                cout << k;
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}