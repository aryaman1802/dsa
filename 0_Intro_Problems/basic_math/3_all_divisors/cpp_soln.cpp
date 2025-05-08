#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v){
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n";
}


// brute force approach
vector<int> get_all_divisors1(int n){
    vector<int> d;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            d.push_back(i);
        }
    }
    return d;
}


// optimal approach
vector<int> get_all_divisors2(int n){
    vector<int> d;
    int f=0, sqrtn=sqrt(n);
    for(int i=1; i<=sqrtn; i++){
        if(n%i == 0){
            d.push_back(i);
            f = (int)n/i;
            if((n%f == 0) && (f != i)){
                d.push_back(f);
            }
        }
    }
    sort(d.begin(), d.end());
    return d;
}


int main(){
    vector<int> v1 = get_all_divisors1(36);
    vector<int> v2 = get_all_divisors2(36);
    print_vector(v1);
    print_vector(v2);
    return 0;
}