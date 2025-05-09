#include <iostream>
using namespace std;

// time complexity = O(n)
// space complexity = O(n)  --> stack space
void recursion_demo1(int n){
    if(n<=0){
        return;
    }
    cout << "Aryaman " << n << "\n";
    recursion_demo1(n-1);
    cout << "after recursion_demo(n-1) " << n << "\n"; 
}


void recursion_demo2(int i, int n){
    if(i > n){
        return;
    }
    else{
        cout << i << " ";
        recursion_demo2(i+1, n);
    }
}


void recursion_demo3(int n){
    if(n<=0){
        return;
    }
    else{
        recursion_demo3(n-1);
        cout << n << " ";
    }
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // recursion_demo1(n);
    // recursion_demo1(n);
    recursion_demo3(n);
    cout << "\n";
}

