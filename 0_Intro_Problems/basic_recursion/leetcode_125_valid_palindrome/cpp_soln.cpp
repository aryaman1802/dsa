#include <bits/stdc++.h>
using namespace std;

// fastest
bool isPalindrome1(string s){
    string s1 = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++){
        if((isdigit(s[i])) || (isalpha(s[i]))){
            s1 += s[i];
        }
    }
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
}


// 2nd fastest
bool isPalindrome2(string s){
    string s1 = "";
    int l = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<l; i++){
        if((isdigit(s[i])) || (isalpha(s[i]))){
            s1 += s[i];
        }
    }
    int l1 = s1.length();
    for(int i=0; i<l1/2; i++){
        if(s1[i] != s1[l1-1-i]){
            return false;
        }
    }
    return true;
}


string process_string(string s){
    string s1 = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++){
        if((isdigit(s[i])) || (isalpha(s[i]))){
            s1 += s[i];
        }
    }
    return s1;
}


bool isPalindrome3(int i, string s, int n){
    if(i >= n/2){
        return true;
    }
    else{
        if(s[i] != s[n-1-i]){
            return false;
        }
        return isPalindrome3(i+1, s, n);
    }
}


int main(){
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = " ";
    cout << isPalindrome1(s1) << "\n"
         << isPalindrome1(s2) << "\n"
         << isPalindrome1(s3) << "\n"
         << isPalindrome2(s1) << "\n"
         << isPalindrome2(s2) << "\n"
         << isPalindrome2(s3) << "\n"
         << isPalindrome3(0, process_string(s1), process_string(s1).length()) << "\n"
         << isPalindrome3(0, process_string(s2), process_string(s2).length()) << "\n"
         << isPalindrome3(0, process_string(s3), process_string(s3).length()) << "\n";
}