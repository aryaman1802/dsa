#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << "\n\n";
    
    pair<int, pair<int, int>> p2 = {8, {14, 2}};
    cout << p2.first << " " << p2.second.first
         << p2.second.second << "\n\n";

    pair<int, int> arr[] = {{3,5}, {0,-1}, {9,42}};
    for(int i=0; i<3; i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}