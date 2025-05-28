#include <iostream>
using namespace std;

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void bubble_sort_asc1(int arr[], int n){
    bool swap_done = true;
    int t = 0;
    while(swap_done){
        swap_done = false;
        for(int i=1; i<n; i++){
            if(arr[i-1] > arr[i]){
                t = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = t;
                swap_done = true;
            }
        }
    }
}

void bubble_sort_dsc1(int arr[], int n){
    bool swap_done = true;
    int t = 0;
    while(swap_done){
        swap_done = false;
        for(int i=1; i<n; i++){
            if(arr[i-1] < arr[i]){
                t = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = t;
                swap_done = true;
            }
        }
    }
}

void bubble_sort_asc2(int arr[], int n){
    int t = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void bubble_sort_dsc2(int arr[], int n){
    int t = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] < arr[j+1]){
                t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int main(){
    int arr1[] = {13, 46, 24, 52, 20, 9};
    int arr2[] = {13, 46, 24, 52, 20, 9};
    int arr3[] = {13, 46, 24, 52, 20, 9};
    int arr4[] = {13, 46, 24, 52, 20, 9};
    bubble_sort_asc1(arr1, 6);
    print_arr(arr1, 6);
    bubble_sort_dsc1(arr2, 6);
    print_arr(arr2, 6);
    bubble_sort_asc2(arr3, 6);
    print_arr(arr3, 6);
    bubble_sort_dsc2(arr4, 6);
    print_arr(arr4, 6);
}
