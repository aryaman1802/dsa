#include <bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    int r=0, sign=1;
    if(n<0){
        sign = -1;
    }
    n = abs(n);
    while(n>0){
        if((r > (INT16_MAX/10)) || (r < (INT16_MIN/10))){
            return 0;
        }
        r = r*10 + n%10;
        n /= 10;
    }
    r *= sign;
    return r;
}


int main(){
    cout << reverse_num(123) << "\n"
         << reverse_num(-123) << "\n"
         << reverse_num(120) << "\n";
}