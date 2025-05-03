/*
Pattern:

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j==i){
                for(int k=j; k>=1; k--){
                    cout << i;
                }
                break;
            }
            else{
                cout << j;
            }
        }
        for(int k=2; k<=n; k++){
            if(k>i){
                cout << k;
            }
            else{
                cout << i;
            }
        }
        cout << "\n";
    }
    for(int i=2; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j>=i){
                cout << j;
            }
            else{
                cout << i;
            }
        }
        for(int k=2; k<=n; k++){
            if(k>=i){
                cout << k;
            }
            else{
                cout << i;
            }
        }
        cout << "\n";
    }
}