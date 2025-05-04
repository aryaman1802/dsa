// #include <bits/stdc++.h>
#include <queue>
#include <iostream>
using namespace std;

// Queue follows FIFO - First In First Out
// All queue operations happen in O(1)

int main(){
    queue<int> q;
    q.push(1);          // {1}
    q.push(5);          // {5,1}
    q.emplace(9);       // {9,5,1}
    q.emplace(4);       // {4,9,5,1}

    cout << q.back() << " " << q.front() << "\n";

    q.back() += 2;      // {6,9,5,1}
    q.front() += 3;     // {6,9,5,4}

    cout << q.back() << " " << q.front() << "\n";

    q.pop();            // {6,9,5}

    cout << q.back() << " " << q.front() << "\n";

    // size, swap, and empty - same as Stack
}