#include <iostream>
using namespace std;

int bitwiseComplement(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 0;
    }
    else{
        int num=n, mask=0;
        while(num != 0){
            mask = mask << 1;
            mask = mask | 1;
            num = num >> 1;
        }
        int ans = (~n)&(mask);
        return ans;
    }
}

int main(){
    cout << bitwiseComplement(5) << "\n";
    cout << bitwiseComplement(7) << "\n";
    cout << bitwiseComplement(10) << "\n";
}