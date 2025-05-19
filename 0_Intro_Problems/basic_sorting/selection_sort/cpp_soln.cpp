#include <iostream>
using namespace std;

void print_arr(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << *(arr+i) << " ";
    }
    cout << "\n";
}

void selection_sort_asc(int arr[], int n){
    int min_idx=0, t=0;
    for(int i=0; i<n-1; i++){
        min_idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            t = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = t;
        }
    }
}

void selection_sort_dsc(int arr[], int n){
    int max_idx=0, t=0;
    for(int i=0; i<n-1; i++){
        max_idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[max_idx]){
                max_idx = j;
            }
        }
        if(max_idx != i){
            t = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = t;
        }
    }
}

int main(){
    int arr1[] = {13, 46, 24, 52, 20, 9};
    int arr2[] = {13, 46, 24, 52, 20, 9};
    selection_sort_asc(arr1, 6);
    print_arr(arr1, 6);
    selection_sort_dsc(arr2, 6);
    print_arr(arr2, 6);
}
