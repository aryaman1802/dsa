#include <iostream>
using namespace std;

int hammingWeight(int n){
    int count = 0;
    while(n != 0){
        // check if the rightmost bit is 1
        if(n & 1){
            count++;
        }
        // right shift the binary form of the number
        n = n >> 1;
    }
    return count;
}

int main(){
    cout << hammingWeight(11) << "\n";
    cout << hammingWeight(128) << "\n";
    cout << hammingWeight(2147483645) << "\n";
}