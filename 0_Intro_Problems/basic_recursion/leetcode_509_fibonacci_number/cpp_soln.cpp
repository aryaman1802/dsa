#include <iostream>
using namespace std;

// recursion
int fib1(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib1(n-1) + fib1(n-2);
    }
}


// fastest (iterative version is faster than its recursive counterpart)
int fib2(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        int a=0, b=1, c=0;
        for(int i=2; i<=n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fib1(n) << "\n"
         << fib2(n) << "\n";
}