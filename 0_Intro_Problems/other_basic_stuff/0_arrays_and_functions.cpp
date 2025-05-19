#include <iostream>
using namespace std;

void print_arr1(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void print_arr2(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << *(arr+i) << " ";
    }
    cout << "\n";
}

void print_arr3(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        // Behind the scenes, arr[i] is interpreted by the 
        // compiler as *(arr + i)
    }
    cout << "\n";
}

int main(){
    int arr1[] = {1,5,8,2,7,9};
    print_arr1(arr1, 6);
    print_arr2(arr1, 6);
    print_arr3(arr1, 6);
}