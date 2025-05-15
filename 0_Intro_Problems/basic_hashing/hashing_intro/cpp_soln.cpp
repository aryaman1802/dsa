#include <bits/stdc++.h>
using namespace std;

void print_char_hashmap(int arr[]){
    for(char c='a'; c<='z'; c++){
        cout << c << ": " << arr[c-'a'] << "\n";
    }
}

void get_char_hashmap(string s){
    int hash[26] = {0};
    for(int i=0; i<s.length(); i++){
        hash[s[i] - 'a'] += 1;
    }
    print_char_hashmap(hash);
}

void use_map_approach(){
    // 1. input an array
    // 2. use a map to store the frequency of elements in the array
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n] = {0};
    map<int, int> m1;
    for(int i=0; i<n; i++){
        cout << "\nEnter an element to store in the array: ";
        cin >> arr[i];
        m1[arr[i]]++;
    }
    cout << "\n";

    // display the frequency of array elements
    for(auto i: m1){
        cout << "Key: " << i.first << "\tValue: " << i.second << "\n";
    }

}

int main(){
    // string s;
    // cout << "Enter a string (everything in lowercase): ";
    // // enter just one single word, not a sentence, 
    // // else we'll need to use getline instead of cin
    // cin >> s;
    // get_char_hashmap(s);
    use_map_approach();
}
