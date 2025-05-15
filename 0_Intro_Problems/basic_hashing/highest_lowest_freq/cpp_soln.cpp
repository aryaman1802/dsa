#include <bits/stdc++.h>
using namespace std;

bool custom_comparator(pair<int,int> p1, pair<int,int> p2){
    return p1.second > p2.second;
}

vector<pair<int,int>> sort_map_by_values(map<int,int> &m){
    vector<pair<int,int>> v;
    for(auto &it: m){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), custom_comparator);
    return v;
}

void display_arr(int* arr){
    for(int i=0; i<2; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void display_freqmap(vector<pair<int,int>> v){
    cout << "Element\t\tFrequency:\n"
         << v.begin()->first << "\t\t" << v.begin()->second << "\n"
         << v.rbegin()->first << "\t\t" << v.rbegin()->second << "\n";
}

// https://stackoverflow.com/a/3473448
int* high_low_freq1(int* arr, int n){
    int* freq = new int[2];
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    vector<pair<int,int>> v = sort_map_by_values(m);
    freq[0] = v.begin()->second;
    freq[1] = v.rbegin()->second;
    return freq;
}

vector<pair<int,int>> high_low_freq2(int arr[], int n){
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    vector<pair<int,int>> v = sort_map_by_values(m);
    return v;
}

int main(){
    int arr1[] = {10,5,10,15,10,5};
    int arr2[] = {2,2,3,4,4,2};
    int* f1 = high_low_freq1(arr1, 6);
    int* f2 = high_low_freq1(arr2, 6);
    cout << "arr1: \n";
    display_arr(f1);
    display_freqmap(high_low_freq2(arr1, 6));
    cout << "arr2: \n";
    display_arr(f2);
    display_freqmap(high_low_freq2(arr2, 6));
}