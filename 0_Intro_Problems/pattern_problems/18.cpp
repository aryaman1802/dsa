/*
Pattern:

E
D E
C D E
B C D E
A B C D E
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(char i='E'; i>='A'; i--){
        for(char j=i; j<='E'; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}