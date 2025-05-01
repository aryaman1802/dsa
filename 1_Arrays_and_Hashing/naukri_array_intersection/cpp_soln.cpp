#include <bits/stdc++.h>
using namespace std;

// time limit exceeded
vector<int> findArrayIntersection1(vector<int> &arr1, int n, vector<int> &arr2, int m){
    vector<int> ans;
    int element=0;
    for(int i=0; i<n; i++){
        element = arr1[i];
        for(int j=0; j<m; j++){
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}

int main(){
    
}