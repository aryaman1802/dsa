#include <list>
#include <iostream>
using namespace std;

/*
A singly linked list is maintained for the vector data structure.

A doubly linked list is maintained for the list data structure, and so
inserting elements is much more efficient than in vectors. 
*/

int main(){
    list<int> a;
    a.push_back(2);
    a.emplace_back(4);

    a.push_front(5);
    a.emplace_front(9);

    for(int i: a){
        cout << i << " ";
    }
    cout << "\n";

    // Rest of the functions are same as that of vector:
    // begin, end, clear, insert, size, swap
}