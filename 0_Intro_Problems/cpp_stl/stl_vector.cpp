// #include <bits/stdc++.h>   // this contains all necessary headers
#include <vector>       // the one we need for only vectors
#include <iostream>
using namespace std;

/*
Size doubling property of a vector:

Suppose you have created a vector, and it's now full, but you want to add another element to it, then what C++ will do is it will create another vector of double the size of the original vector, and copy all the elements of the original vector to the new vector and also the one you wanted to add. Furthermore, it will dump the old vector, and keep the new (bigger) one. 

Note: This is the capacity of the vector (say, v), and find it by using "v.capacity()". To find the number of elements stored in the vector, we use "v.size()". 
*/

int main(){
    
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

    return 0;
}