#include <iostream>
using namespace std;

int subtractProductAndSum(int n){
    int sod = 0;  // sum of digits
    int pod = 1;  // product of digits
    // Extract digits
    int d = 1;
    while (n!=0){
        d = n%10;   // extract the last digit
        pod *= d;
        sod += d;
        n /= 10;   // remove the last digit
    }
    return (pod - sod);
}

int main(){
    cout << subtractProductAndSum(234) << "\n";
    cout << subtractProductAndSum(4421) << "\n";
}