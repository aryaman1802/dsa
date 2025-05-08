#include <bits/stdc++.h>
using namespace std;

// brute force approach
bool isPrime1(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


// optimal approach
bool isPrime2(int n){
    int c=0, sqrtn=sqrt(n);
    for(int i=2; i<=sqrtn; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    cout << "Is 143 a prime number: " << isPrime1(143) << "\n"
         << "Is 143 a prime number: " << isPrime2(143) << "\n"
         << "Is 2 a prime number: " << isPrime1(2) << "\n"
         << "Is 2 a prime number: " << isPrime2(2) << "\n"
         << "Is " << n << " a prime number: " << isPrime1(n) << "\n"
         << "Is " << n << " a prime number: " << isPrime2(n) << "\n";
}