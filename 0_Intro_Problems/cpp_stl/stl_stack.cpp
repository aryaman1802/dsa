// #include <bits/stdc++.h>
#include <stack>
#include <iostream>
using namespace std;

// Stack follows LIFO - Last In First Out
// All stack operations happen in O(1)

int main(){
    stack<int> s;
    s.push(1);          // {1}
    s.push(2);          // {2,1} 
    s.push(3);          // {3,2,1}
    s.push(4);          // {4,3,2,1}
    s.emplace(5);       // {5,4,3,2,1}

    cout << s.top() << "\n";    // 5
    // s[i] is invalid

    s.pop();          // {4,3,2,1}

    cout << s.size() << "\n"
         << s.top() << "\n"
         << s.empty() << "\n";

    stack<int> s1, s2;
    s1.swap(s2);

}