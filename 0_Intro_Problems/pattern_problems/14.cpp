/*
Pattern:

A
AB
ABC
ABCD
ABCDE
    
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    char ch='A';
    for(int i=0; i<n; i++){
        ch='A';
        for(int j=0; j<=i; j++){
            cout << ch++;
        }
        cout << "\n";
    }
}