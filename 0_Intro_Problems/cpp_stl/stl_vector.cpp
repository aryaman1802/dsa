// #include <bits/stdc++.h>   // this contains all necessary headers
#include <vector>       // the one we need for only vectors
#include <iostream>
using namespace std;

/*
Size doubling property of a vector:

Suppose you have created a vector, and it's now full, but you want to add another element to it, then what C++ will do is it will create another vector of double the size of the original vector, and copy all the elements of the original vector to the new vector and also the one you wanted to add. Furthermore, it will dump the old vector, and keep the new (bigger) one. 

Note: This is the capacity of the vector (say, v), and find it by using "v.capacity()". To find the number of elements stored in the vector, we use "v.size()". 
*/

void vector_info1(){
    // Create an integer vector
    // Note: The size (and capacity) of a vector, when we create it, is 0.  
    vector<int> v;
    cout << "Capacity of vector v: " << v.capacity() << "\n";
    cout << "Size of vector v: " << v.size() << "\n";

    // Add any 2 numbers to v
    v.push_back(42);
    v.push_back(-8);
    cout << "Capacity of vector v: " << v.capacity() << "\n";
    cout << "Size of vector v: " << v.size() << "\n";
    // Add another number to v
    v.push_back(31);
    cout << "Capacity of vector v: " << v.capacity() << "\n";
    cout << "Size of vector v: " << v.size() << "\n";
    // Now, the capacity of v is 4 and not 3 because of the size doubling property 

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    // Another way to access the elements in a vector
    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }

    cout << "\n\nIs v empty: " << v.empty() << "\n";
    cout << "First element of v: " << v.front() << "\n";
    cout << "Last element of v: " << v.back() << "\n";

    // Remove the last element of v
    v.pop_back();

    cout << "\nAfter pop back:\n";

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\nCapacity of vector v: " << v.capacity() << "\n";
    cout << "Size of vector v: " << v.size() << "\n";

    // Delete all the elements of v
    v.clear();

    cout << "\nAfter clear:\n";
    cout << "Capacity of vector v: " << v.capacity() << "\n";
    cout << "Size of vector v: " << v.size() << "\n";    
    
    // Create  a vector of size 5 filled with 1
    vector<int> a(5,1);

    cout << "\nCapacity of vector a: " << a.capacity() << "\n";
    cout << "Size of vector a: " << a.size() << "\n";

    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << "\n";

    // Another way to print the elements of a:
    for(int i:a){
        cout << i << " ";
    }
    cout << "\n";

    // Create a new vector, but copy all the elements of vector a in it
    vector<int> b(a);

    cout << "\nCapacity of vector b: " << b.capacity() << "\n";
    cout << "Size of vector b: " << b.size() << "\n";

    for(int i:b){
        cout << i << " ";
    }
    cout << "\n";
}


void vector_info2(){
    // https://www.geeksforgeeks.org/vectoremplace_back-c-stl/
    // emplace_back inserts an element at the end of a vector 
    // but so in-place, and is generally faster than push_back

    vector<int> v;
    v.push_back(5);
    v.emplace_back(2);  

    vector<pair<int,int>> v2;
    v2.push_back({1,2});  // insert a pair into v2 using push_back
    v2.emplace_back(5,8);  // emplace_back assumes 5,8 is a pair

    vector<int> v3(5, 100);  // vector of size 5, filled with 100

    vector<int> v4(7);  // vector of size 7, filled with garbage values

    vector<int> v5(v3);  // vector of size 5, filled with 100

    for(int i: v5){
        cout << i << " ";
    }
    cout << "\n";
}


void vector_info3(){
    vector<int> v;
    v.emplace_back(5);
    v.emplace_back(7);
    v.emplace_back(1);
    v.emplace_back(3);
    v.emplace_back(9);

    // v.begin() gives the memory address of the 
    // first element of v, ie, 5
    // itr1 is an iterator (a pointer)
    vector<int>::iterator itr1 = v.begin();

    itr1++;   // now points to 7
    // we can dereference itr1 to see the value it points to
    cout << *(itr1) << "\n"; 

    itr1 += 2;   // now points to 3
    cout << *(itr1) << "\n"; 

    // Note: the elements of a vector are stored in contiguous
    // memory locations

    vector<int>::iterator itr2 = v.end();
    // v.end() points to the memory location right after the last 
    // element, and not the memory location of the last element
    cout << *(--itr2) << "\n";

    cout << v[0] << "  " << v.at(0) << "\n";
    cout << v.back() << "\n";

    for(vector<int>::iterator i=v.begin(); i!=v.end(); i++){
        cout << *(i) << " ";
    }
    cout << "\n";

    // the keyword auto automatically assigns the datatype
    auto ch = 'A';    // where the datatype of ch is char
    auto n = 5;       // where the datatype of n is int
    cout << ch << " " << n << "\n";

    for(auto i=v.begin(); i!=v.end(); i++){
        // where datatype of i is vector<int>::iterator 
        cout << *(i) << " ";
    }
    cout << "\n";
    
    for(auto i: v){
        // where datatype of i is int
        cout << i << " ";
    }
    cout << "\n";

    // v is {5,7,1,3,9}
    
    v.erase(v.begin());   // deletes only 5
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n";

    // now, v is {7,1,3,9}
    v.erase(v.begin()+1, v.begin()+3);   // deletes both 1 and 3
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n";

    // now, v is {7,9}

    vector<int> v1(2,100);   // {100, 100}
    v1.insert(v1.begin(), 300);   // {300, 100, 100}
    v1.insert(v1.begin()+1, 2, 39);   // {300, 39, 39, 100, 100}
    
    vector<int> v2;
    v2.emplace_back(8);
    v2.emplace_back(-19);
    v2.emplace_back(42);

    for(int i: v1){
        cout << i << " ";
    }
    cout << "\n";

    v1.insert(v1.begin(), v2.begin(), v2.end());   // {8,-19,42,300,39,39,100,100}

    for(int i: v1){
        cout << i << " ";
    }
    cout << "\n";

    // v1 = {10,20};    // a vector
    // v2 = {30,40};    // also a vector
    // v1.swap(v2);
    // now, v1 becomes {30,40}
    // v2 becomes {10,20}

    v1.clear();    // erases the entire vector

    cout << "Is vector v1 empty: " << v1.empty() << "\n";

}


int main(){
    // vector_info1();
    // vector_info2();
    vector_info3();
}