#include <bits/stdc++.h>
using namespace std;

// brute force approach
bool is_palindrome1(int n){
    if(n<0){
        return false;
    }
    else{
        int num=n, r=0;
        while(n>0){
            r = r*10 + n%10;
            n /= 10;
        }
        return num==r;
    }
}


bool is_palindrome2(int n){
    if(n<0 || (n%10==0 && n!=0)){
        return false;
    }
    int rev_half=0;  // reversed half
    while(n>rev_half){
        rev_half = rev_half*10 + n%10;
        n /= 10;
    }
    // discard the middle digit for odd-length numbers
    // eg: n=12221 -->  rev_half=122 and updated n is n=12
    // so, n is equal to rev_half/10, which is 12 
    // eg: n=1221  -->  rev_half=12 and updated n is n=12
    // so, n is equal to rev_half
    return (n==rev_half) || (n==rev_half/10);
}


bool is_palindrome3(int n){
    // pow(2,31)-1 = 2147483647
    if(n<0 || n>=2147483647){
        return false;
    }
    long int rev=0;
    int num=n;
    while(n>0){
        rev = rev*10;
        if(rev > 2147483647){
            return false;
        }
        rev += n%10;
        n /= 10;
    }
    return num==rev;
}


int main(){
    cout << is_palindrome1(121) << "\n"
         << is_palindrome1(-121) << "\n"
         << is_palindrome1(10) << "\n"
         << is_palindrome2(121) << "\n"
         << is_palindrome2(-121) << "\n"
         << is_palindrome2(10) << "\n"
         << is_palindrome3(121) << "\n"
         << is_palindrome3(-121) << "\n"
         << is_palindrome3(10) << "\n";
}