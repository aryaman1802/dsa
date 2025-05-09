#include <bits/stdc++.h>
using namespace std;

// iterative approach
int get_factorial1(int n){
    if(n<0){
        return -1;   // factorial exists for non-negative numbers
    }
    else if(n==0){
        return 1;
    }
    else{
        int fac = 1;
        for(int i=1; i<=n; i++){
            fac *= i;
        }
        return fac;
    }
}


// recursive approach
int get_factorial2(int n){
    if((n==0) || (n==1)){
        // base case
        return 1;
    }
    else{
        // recursive case
        return n*get_factorial2(n-1);
    }
}


int main(){
    int n;
    cin >> n;
    cout << "Factorial of " << n
         << "\nApproach 1: " << get_factorial1(n)
         << "\nApproach 2: " << get_factorial2(n) << "\n";
}