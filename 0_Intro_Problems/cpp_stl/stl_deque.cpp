// #include <bits/stdc++.h>   // this contains all necessary headers
#include <deque>       // the one we need for only deques
#include <iostream>
using namespace std;

int main(){
    deque<int> d;
    
    d.push_back(5);
    d.push_back(7);
    d.push_back(3);

    for(int i: d){
        cout << i << " ";
    }
    cout << "\n";

    d.push_front(8);

    for(int i: d){
        cout << i << " ";
    }
    cout << "\n";

    d.pop_back();
    for(int i: d){
        cout << i << " ";
    }
    cout << "\n";

    d.pop_front();
    for(int i: d){
        cout << i << " ";
    }
    cout << "\n";

    cout << "Element at first index: " << d[1] << "\n";
    cout << "Element at first index: " << d.at(1) << "\n";

    cout << "d.front() = " << d.front() << "\n";
    cout << "d.back() = " << d.back() << "\n";

    cout << "Is d empty: " << d.empty() << "\n";
    cout << "size of d = " << d.size() << "\n";

    d.push_back(1);
    d.push_back(-4);
    for(int i: d){
        cout << i << " ";
    }
    cout << "\n";
    
    // Delete the first (index 0) element
    d.erase(d.begin(), d.begin()+1);
    for(int i: d){
        cout << i << " ";
    }
    cout << "\n";

    cout << "size of d = " << d.size() << "\n";

    // Rest of the functions are same as that of vector:
    // begin, end, clear, insert, size, swap
}