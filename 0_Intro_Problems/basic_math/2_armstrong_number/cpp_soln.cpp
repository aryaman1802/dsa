#include <bits/stdc++.h>
using namespace std;

bool is_armstrong(int n){
    int s=0, num=n, r=0;
    while(n!=0){
        r = n%10;
        s += (r*r*r);
        n /= 10;
    }
    return s==num;
}


int main(){
    cout << is_armstrong(153) << "\n"
         << is_armstrong(371) << "\n";
}