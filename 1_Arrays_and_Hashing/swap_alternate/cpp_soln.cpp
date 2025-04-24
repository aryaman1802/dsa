#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n){
    int t=0;
    if(n%2 != 0)
        n--;
    for(int i=0; i<n; i+=2){
        t = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = t;
    }
}

int main(){
    int arr1[] = {1,2,7,8,5};
    int arr2[] = {1,2,3,4,5,6};
    swapAlternate(arr1, 5);
    printArr(arr1, 5);
    swapAlternate(arr2, 6);
    printArr(arr2, 6);
    return 0;
}