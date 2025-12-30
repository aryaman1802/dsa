#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void algo1(){
    vector<int> v1 = {5,8,1,4,9,2,3,7,2};
    vector<int> v2(v1);
    vector<int> v3(v1);

    sort(v1.begin(), v1.end());
    for(int i: v1){
        cout << i << " ";
    }
    cout << "\n";

    for(int i: v2){
        cout << i << " ";
    }
    cout << "\n";

    sort(v2.begin()+4, v2.end());
    for(int i: v2){
        cout << i << " ";
    }
    cout << "\n";

    for(int i: v3){
        cout << i << " ";
    }
    cout << "\n";

    sort(v3.begin(), v3.end(), greater<int>());
    for(int i: v3){
        cout << i << " ";
    }
    cout << "\n";
}


// https://www.geeksforgeeks.org/comparator-in-cpp/
bool custom_comparator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second){
        return true;
    }
    else if(p1.second > p2.second){
        return false;
    }
    else{
        if(p1.first > p2.first){
            return true;
        }
        else{
            return false;
        }
    }
}

void algo2(){
    // vector<pair<int,int>> a = {{1,2}, {2,1}, {4,1}};
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
    
    // sort a to according to second element in ascending order
    // but if second element is same, then sort it according to 
    // first element but in descending order
    // sort(a.begin(), a.end(), custom_comparator);  // use this with vector, ie, a
    sort(a, a+3, custom_comparator);   // use this with array, ie, a[]

    for(pair<int,int> i: a){
        cout << "(" << i.first << "," << i.second << ")\t";  
    }
    cout << "\n";
}


void algo3(){
    string s = "123";
    // s must be sorted in ascending order before we use
    // next_permutation()
    sort(s.begin(), s.end());   
    do{
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));
}


void algo4(){
    int arr[8] = {5,8,1,5,11,3,7,9};
    int max1 = *max_element(arr, arr+8);
    int min1 = *min_element(arr, arr+8);
    cout << max1 << "  " << min1 << "\n";

    vector<int> v = {5,8,1,5,11,3,7,9};
    int max2 = *max_element(v.begin(), v.end());
    int min2 = *min_element(v.begin(), v.end());
    cout << max2 << "  " << min2 << "\n";
}


int main(){
    // algo1();
    // algo2();
    // algo3();
    algo4();
}
