// #include <bits/stdc++.h>   // this contains all necessary headers
#include <array>       // the one we need for only arrays
#include <iostream>
using namespace std;

int main(){
    
    int basic[3] = {1,2,3};

    // integer array of size 4
    array<int, 4> a = {5,6,7,8};

    cout << "Size of a: " << a.size() << "\n";

    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << "\n";

    for(int i=0; i<a.size(); i++){
        cout << a.at(i) << " ";
    }

    cout << "\nIs a empty: " << a.empty();
    cout << "\nFirst element of a: " << a.front();
    cout << "\nLast element of a: " << a.back(); 
    cout << "\n";

    return 0;
}