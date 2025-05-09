#include <bits/stdc++.h>
using namespace std;

void display_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void rev_arr1(int arr[], int left, int right){
    if(left >= right){
        return;
    }
    else{
        int t = arr[left];
        arr[left] = arr[right];
        arr[right] = t;
        left++;
        right--;
        rev_arr1(arr, left, right);
    }
}


void rev_arr2(int arr[], int i, int n){
    if(i >= n/2){
        return;
    }
    else{
        int t = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = t;
        i++;
        rev_arr2(arr, i, n);
    }
}


void rev_arr3(int arr[], int n){
    reverse(arr, arr+n);
}

int main(){
    int arr1[] = {1,3,2,5,4};
    int arr2[] = {5,8,7,9};
    cout << "original arr1: ";
    display_arr(arr1, 5);
    cout << "original arr2: ";
    display_arr(arr2, 4);
    rev_arr1(arr1, 0, 4);
    display_arr(arr1, 5);
    rev_arr1(arr2, 0, 3);
    display_arr(arr2, 4);
    rev_arr2(arr1, 0, 5);
    display_arr(arr1, 5);
    rev_arr2(arr2, 0, 4);
    display_arr(arr2, 4);
    rev_arr3(arr1, 5);
    display_arr(arr1, 5);
    rev_arr3(arr2, 4);
    display_arr(arr2, 4);
}