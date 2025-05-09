#include <bits/stdc++.h>
using namespace std;

// iterative approach
// time complexity = O(n)
// space complexity = O(1)
int get_sum1(int n){
    int s=0;
    for(int i=1; i<=n; i++){
        s += i;
    }
    return s;
}


// recursive approach
// time complexity = O(n)
// space complexity = O(1)
int get_sum2(int n){
    if(n==1){
        // base case
        return 1;
    }
    else{
        return n + get_sum2(n-1);
    }
}


// optimal approach: discovered by Gauss
// sum(n) = (n*(n+1))/2, where n is natural number
// time complexity = O(1)
// space complexity = O(1)
int get_sum3(int n){
    int s = (n*(n+1))/2;
    return s;
}


int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of 1 to " << num << ":\n"
         << "Approach 1: " << get_sum1(num) << "\n"
         << "Approach 2: " << get_sum2(num) << "\n"
         << "Approach 3: " << get_sum3(num) << "\n";
}
