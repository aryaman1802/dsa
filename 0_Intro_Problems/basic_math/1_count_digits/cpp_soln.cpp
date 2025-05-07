#include <bits/stdc++.h>
using namespace std;

// brute force approach
int count_digits1(int n){
    int c=0;
    while(n!=0){
        n/=10;
        c++;
    }
    return c;
}


// optimal approach
int count_digits2(int n){
    int c = (int)(log10(n)+1);
    return c;
}


int main(){
    int num;
    cin >> num;
    cout << count_digits1(num) << "\n";
    cout << count_digits2(num) << "\n";
}