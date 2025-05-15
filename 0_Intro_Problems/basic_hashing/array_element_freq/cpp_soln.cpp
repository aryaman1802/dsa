#include <bits/stdc++.h>
using namespace std;

void display_hashmap(unordered_map<int,int> m){
    for(auto& i: m){
        cout << "Key: " << i.first << "\t\tValue: "
             << i.second << "\n";
    }
}

unordered_map<int,int> get_freq1(int arr[], int n){
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    return m;
}

int main(){
    int arr1[] = {10,5,10,15,10,5};
    int arr2[] = {2,2,3,4,4,2};
    cout << "arr1: \n";
    display_hashmap(get_freq1(arr1, 6));
    cout << "\narr2: \n";
    display_hashmap(get_freq1(arr2, 6));
}
