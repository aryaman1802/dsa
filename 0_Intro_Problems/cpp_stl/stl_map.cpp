#include <map>
#include <iostream>
using namespace std;

/*
- Map is like a dictionary in Python.
- The keys should be unique, but the values can be duplicate.
- Map stores the keys in a sorted order.
*/

int main(){
    map<int, int> m1;    // both key and value are integers
    map<int, pair<int,int>> m2;   // key is an integer but value is a pair
    map<pair<int,int>, int> m3;   // key is  a pair but value is an integer

    // 2 ways to assign key-value pair
    m1[1] = 2;           // key is 1 and value is 2
    m1.insert({5,7});    // key is 5 and value is 7

    cout << "m1:\n";
    for(auto i: m1){
        cout << "key: " << i.first << 
        "\tvalue: " << i.second << "\n";
    }
    cout << m1[1] << " " << m1[5] << " ";
    auto itr = m1.find(5);
    cout << (*itr).first << " " << (*itr).second << "\n";
    itr = m1.find(81);    // returns an iterator that points after 
    // the last element, ie, *(--itr) will point to the last element
    
    m2[921] = {2016, 2017};
    m2.insert({253, {2022, 2026}});

    cout << "\nm2:\n";
    for(auto i: m2){
        cout << "key: " << i.first 
             << "\t\tvalue: " << i.second.first
             << " " << i.second.second << "\n";
    }
    cout << m2[921].first << " " << m2[921].second 
         << "\t" << m2[253].first << " " << m2[253].second
         << "\n";
    auto itr1 = m2.find(921);
    cout << (*itr1).first << "\t"
         << (*itr1).second.first << " " << (*itr1).second.second << "\n";

    m3[{42,1}] = 0;
    m3.insert({{-1, 91}, 52});
    
    cout << "\nm3:\n";
    for(auto i: m3){
        cout << "key: " << i.first.first << " " << i.first.second
             << "\t\tvalue: " << i.second << "\n";
    }
    cout << m3[{42,1}] << " " << m3[{-1,91}] << "\n\n";

    cout << m1.size() << "\t" << m2.size() << "\t" << m3.size() << "\n";

    // Other functions are same as that of vector:
    // empty, erase, swap
}