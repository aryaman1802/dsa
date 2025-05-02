/*
Pattern:

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=5, c=1;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            c=0;
        }
        else{
            c=1;
        }
        for(int j=1; j<=i; j++){
            if(c==1){
                cout << c << " ";
                c=0;
            }
            else{
                cout << c << " ";
                c=1;
            }
        }
        cout << "\n";
    }
}