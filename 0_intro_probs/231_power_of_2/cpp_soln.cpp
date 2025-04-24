#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo_v2(int n){
    if(n > pow(2,30)){
        return false;
    }
    else if(n < 1){
        return false;
    }
    else{
        // if the number of 1 bits is equal to 1
        // then the number is a power of 2
        int count=0;
        while(n != 0){
            if(n&1){
                count++;
            }
            n = n >> 1;
        }
        if(count==1){
            return true;
        }
        else{
            return false;
        }
    }
}

bool isPowerOfTwo(int n){
    if(n > pow(2,30)){
        return false;
    }
    else if(n < 1){
        return false;
    }
    else{
        int x=0, num=1;
        while(num < n){
            num *= 2;
        }
        if(num == n){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    cout << isPowerOfTwo(1) << "\n";
    cout << isPowerOfTwo(16) << "\n";
    cout << isPowerOfTwo(3) << "\n";
    cout << isPowerOfTwo(6) << "\n";
    cout << isPowerOfTwo(-16) << "\n";
}