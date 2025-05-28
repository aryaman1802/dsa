#include <iostream>
using namespace std;

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertion_sort_asc(int arr[], int n){
    int t=0;
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }
}

void insertion_sort_dsc(int arr[], int n){
    int t=0;
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] > arr[j-1]){
                t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }
}

int main(){
    int arr1[] = {13, 46, 24, 52, 20, 9};
    int arr2[] = {13, 46, 24, 52, 20, 9};
    insertion_sort_asc(arr1, 6);
    print_arr(arr1, 6);
    insertion_sort_dsc(arr2, 6);
    print_arr(arr2, 6);
}
