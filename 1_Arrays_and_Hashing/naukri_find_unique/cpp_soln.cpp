#include <iostream>
using namespace std;

int getUnique1(int arr[], int n){
    bool flag = false;
    for(int i=0; i<n; i++){
        flag = false;
        for(int j=0; j<n; j++){
            if((i!=j) && (arr[i]==arr[j])){
                flag = true;
            }
        }
        if(flag == false){
            return arr[i];
        }
    }
    return -42;
}

int getUnique2(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = (ans^arr[i]);
    }
    return ans;
}

int main(){
    int arr1[] = {2,3,1,6,3,6,2};
    int arr2[] = {2,4,7,2,7};
    cout << getUnique1(arr1, 7) << "\n";
    cout << getUnique1(arr2, 5) << "\n";
    cout << getUnique2(arr1, 7) << "\n";
    cout << getUnique2(arr2, 5) << "\n";
}
