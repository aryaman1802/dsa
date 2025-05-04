#include <bits/stdc++.h>
using namespace std;

/*
Push = O(log n)
Top = O(1)
Pop = O(log n)
*/

int main(){
    // Maximum Heap
    priority_queue<int> pq;
    pq.push(5);         // {5}
    pq.push(8);         // {8,5}
    pq.emplace(2);      // {8,5,2}
    pq.emplace(10);     // {10,8,5,2}
    cout << pq.top() << "\n";    // 10
    pq.pop();           // {8,5,2}
    cout << pq.top() << "\n";   // 8

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq.push(5);         // {5}
    pq.push(8);         // {5,8}
    pq.emplace(2);      // {2,5,8}
    pq.emplace(10);     // {2,5,8,10}
    cout << pq.top() << "\n";    // 2
    pq.pop();           // {5,8,10}
    cout << pq.top() << "\n";   // 5
}