#include <iostream>
#include <set>
using namespace std;

int main(){
    // everything is the same as set
    // only that multiset also stores duplicate elements

    multiset<int> ms;
    ms.insert(1);      // {1}
    ms.insert(2);      // {1,2}
    ms.insert(1);      // {1,1,2}
    ms.insert(3);      // {1,1,2,3}
    ms.insert(2);      // {1,1,2,2,3}   -- elements are stored in sorted order

    ms.erase(1);     // all 1s will be erased

    ms.erase(ms.find(2));    // only one 2 will be erased
}