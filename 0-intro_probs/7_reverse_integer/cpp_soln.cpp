#include <iostream>
using namespace std;

int reverse_int(int n){
    int digit=0, reversed_num=0;
    while(n != 0){
        digit = n%10;
        if((reversed_num > (INT16_MAX/10)) || (reversed_num < (INT16_MIN/10))){
            return 0;
        }
        reversed_num = (reversed_num*10) + digit;
        n /= 10;
    }
    return reversed_num;
}

int main(){
    cout << reverse_int(123) << "\n";
    cout << reverse_int(-123) << "\n";
    cout << reverse_int(120) << "\n";
}
