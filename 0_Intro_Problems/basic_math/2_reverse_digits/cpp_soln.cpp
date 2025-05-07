#include <bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    int r=0;
    bool sign_flag=false;
    if(n < 0){
        sign_flag = true;
    }
    n = abs(n);
    while(n>0){
        r = r*10 + n%10;
        n /= 10;
    }
    if(sign_flag){
        r *= -1;
    }
    return r;
}


int main(){
    cout << reverse_num(123) << "\n"
         << reverse_num(-123) << "\n"
         << reverse_num(120) << "\n";
}