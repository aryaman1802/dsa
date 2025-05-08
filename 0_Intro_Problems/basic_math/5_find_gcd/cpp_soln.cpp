#include <bits/stdc++.h>
using namespace std;

// brute force approach
// time complexity = O(min(n1, n2))
// space complexity = O(1)
int gcd1(int n1, int n2){
    int hcf=1;
    int n = min(n1, n2);
    for(int i=1; i<=n; i++){
        if((n1%i == 0) && (n2%i == 0)){
            hcf = i;
        }
    }
    return hcf;
}


// better approach
// time complexity = O(min(n1,n2))
// space complexity = O(1)
int gcd2(int n1, int n2){
    int n = min(n1,n2);
    for(int i=n; i>0; i--){
        if((n1%i == 0) && (n2%i == 0))
            return i;
    }
    return 1;
}


// optimal approach (Euclidean algorithm)
// time complexity = O(min(n1,n2))
// space complexity = O(1)
int gcd3(int n1, int n2){
    while((n1 > 0) && (n2 > 0)){
        if(n1 > n2)
            n1 = n1%n2;
        else
            n2 = n2%n1;
    }
    if(n1 == 0)
        return n2;
    else
        return n1;
}


int main(){
    int n1, n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    cout << "GCD of " << n1 << " and " << n2 << " is:\n"
         << "Approach 1: " << gcd1(n1, n2) << "\n"
         << "Approach 2: " << gcd2(n1, n2) << "\n"
         << "Approach 3: " << gcd3(n1, n2) << "\n";
}