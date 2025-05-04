// #include <bits/stdc++.h>
#include <set>
#include <iostream>

// A Set stores everything in a sorted order and everything is unique.

using namespace std;

int main(){
    set<int> s;
    s.insert(5);        // {5}
    s.emplace(8);       // {5,8}
    s.insert(1);        // {1,5,8}
    s.emplace(5);       // {1,5,8}
    s.emplace(4);      // {1,4,5,8} 

    // begin(), end(), size(), empty(), swap() are same as that of vector

    auto itr = s.find(4);   // returns an iterator pointing to 4
    cout << *(itr) << "\n";

    auto itr = s.find(3);  // returns an iterator that points after 
    // the last element, ie, *(--itr) will point to the last element
    cout << *(--itr) << "\n";

    s.erase(5);   // removes 5 from the set (takes logarithmic time, ie, O(log n))

    int c1 = s.count(4);  // returns 1 if 4 exists else returns 0
    int c2 = s.count(5);  // returns 0 as 5 does not exist

    s.erase(s.find(4));   // takes constant time, ie, O(1)

    s.emplace(5);   // {1,5,8}
    s.emplace(4);   // {1,4,5,8}

    auto itr1 = s.find(4);
    auto itr2 = s.find(8);
    s.erase(itr1, itr2);    // {1,8}

    // begin, end, size, swap, and empty - same as vector
}