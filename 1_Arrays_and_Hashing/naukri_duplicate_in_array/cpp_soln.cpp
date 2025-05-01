#include <iostream>
using namespace std;

// brute force
int getDuplicate1(int arr[], int n){
    bool flag = false;
    for(int i=0; i<n; i++){
        flag = false;
        for(int j=0; j<n; j++){
            if((i!=j) && (arr[i]==arr[j])){
                flag = true;
            }
        }
        if(flag){
            return arr[i];
        }
    }
    return -42;
}

/*
Using XOR:

- First eliminate the duplicate from the array by doing: ans = ans^arr[i]
- Since numbers in the array are from 1 to N-1, at least once. 
so do XOR with them and ans, ie, ans^i. This will eliminate the 
unique numbers, leaving ans with the duplicate number.
*/
int getDuplicate2(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr1[] = {4,2,1,3,1};
    int arr2[] = {6,3,1,5,4,3,2};
    cout << getDuplicate1(arr1, 5) << "\n";
    cout << getDuplicate1(arr2, 7) << "\n";
    cout << getDuplicate2(arr1, 5) << "\n";
    cout << getDuplicate2(arr2, 7) << "\n";
}