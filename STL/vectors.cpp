#include <bits/stdc++.h>
using namespace std;

int main(){
    // Initialisation of vector
    vector<int> v;

    // Inserting and accessing elements in vector
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4); // {1, 2, 3, 4}
    cout << v[0] << " " << v[1] << endl; // 1 2     // Access just like an array

    // vector with pair datatype
    vector<pair<int, int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(10,20); // No need to mention curley braces, it automatically assumes it as pair
    cout << v2[0].first << " " << v2[1].second << endl; // 1 20

    // vector with same instances
    vector<int> v3(5, 100); // 5 instances of 100
    cout << v3[0] << " " << v3[1] <<" "<< v3[2]<< " " << v3[3] << " " << v3[4] << endl; // 100 100 100 100 100

    // copy one vector into another
    vector<int> v4(3, 20);
    vector<int> v5(v4);
    cout << v5[0] << " " << v5[1] << " " << v5[2] << endl; // 20 20 20

    v5.emplace_back(30); // we can dynamically increase the size of vector
    cout << v5[3] << endl; // 30

    // Accessing an elements in vector {1, 2, 3, 4}
    // 1. Similar to an array
    cout << v[0] << " " << v.at(0) << endl; // 1

    // 2. Using Iterators
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " " << endl; // 2

    it += 2;
    cout << *(it) << " " << endl; // 4

    // Iterator apart from  begin()
    vector<int>::iterator it2 = v.end(); // pint to memory locn right after the last element
    it2--;
    cout << *(it2) << endl; // 4

    vector<int>::reverse_iterator it3 = v.rend(); // need reverse iterator
    it3--; // perform decrement oprn to move
    cout << *(it3) << endl; // 1

    vector<int>::reverse_iterator it4 = v.rbegin(); // need reeverse iterator
    cout << *(it4) << endl; // 4
    it4++; // perform increment oprn to move
    cout << *(it4) << endl; // 3

    cout << v.back() << endl; // 4  // access last element


    // Print the vector
    // 1. By looping just like array
    for(int i=0; i<4; i++){
        cout << v[i] << " ";
    } // 1 2 3 4
    cout << endl;

    // 2. By using iterator
    for(vector<int>::iterator it5 = v.begin(); it5!=v.end(); it5++){
        cout << *(it5) << " ";
    }
    cout << endl; // 1 2 3 4

    // 3. By using auto keyword
    for(auto it6 = v.begin(); it6!=v.end(); it6++){
        cout << *(it6) << " ";
    } // 1 2 3 4
    cout << endl;

    // 4. Using for each loop
    for(auto it7 : v){
        cout << it7 << " ";
    } // 1 2 3 4
    cout << endl;


    // Deletion on vector
    vector<int> vec;
    vec.emplace_back(11);
    vec.emplace_back(21);
    vec.emplace_back(31);
    vec.emplace_back(41);
    vec.emplace_back(51);

    // before: {11, 21, 31, 41, 51}
    vec.erase(vec.begin() + 1); // address you want to delete
    for(auto i : vec){
        cout << i << " ";
    } // after: 11 31 41 51
    cout << endl;

    vec.erase(vec.begin() + 1, vec.begin() + 3);
    for(auto i : vec){
        cout << i << " ";
    } // 11 51
    cout << endl;


    // insert function
    // before: {11, 51}
    vec.insert(vec.begin(), 61); // address followed by element to insert
    for(auto i : vec){
        cout << i << " ";
    } // after: 61 11 51
    cout << endl;

    vec.insert(vec.begin() + 1, 2, 71); // address followed by number of instances followed by element to insert
    for(auto i : vec){
        cout << i << " ";
    } // after: 61 71 71 11 51 
    cout << endl;

    // copy elements of one vector into other vector
    vec.insert(vec.end(), v.begin(), v.end()); // addr of insertn, start addr of other vector, end addr of other vector
    for(auto i : vec){
        cout << i << " ";
    } // after: 61 71 71 11 51 1 2 3 4 
    cout << endl;


    // other oprn in vector
    // 1. size()
    cout << vec.size() << endl; // 9

    // 2. pop_back() pops last element
    vec.pop_back();
    for(auto i : vec){
        cout << i << " ";
    } // after: 61 71 71 11 51 1 2 3 
    cout << endl;

    // 3. swap()
    v.swap(vec);
    for(auto i : vec){
        cout << i << " ";
    } // 1 2 3 4 
    cout << endl;

    // 4. clear()
    vec.clear();
    for(auto i : vec){
        cout << i << " ";
    } //
    cout << endl;
    
    // 5. empty() --> if empty prints 1 otherwise 0
    cout << vec.empty() << endl; // 1


    return 0;
}


/*

lower_bound() and upper_bound() do exist for vectors, but they are not member functions like in set or map. Instead, they are available as standalone functions in the <algorithm> header.

lower_bound(key):
    Returns an iterator **to the first element that is >= key.

    If the key exists, it returns the iterator to that key.

    If not, it returns the next greater element.

upper_bound(key):
    Returns an iterator to the first element that is strictly > key.

    If no such element exists, it returns container.end().

Example:

    vector<int> v = {1, 3, 3, 5, 7, 9};

    auto lb = lower_bound(v.begin(), v.end(), 3);
    auto ub = upper_bound(v.begin(), v.end(), 3);

    cout << "Lower bound of 3: " << *lb << endl; // 3
    cout << "Upper bound of 3: " << *ub << endl; // 5

*/

/*
In vector we can dynamically increse the size. what happens if contiguous memory location is not available?

Yes, std::vector in C++ can dynamically increase its size, but it must always maintain a contiguous block of memory. So when more space is needed and there isn’t enough contiguous memory after the current block, something important happens:

What happens when a vector runs out of space?
A new, larger contiguous block of memory is allocated.

Typically double the current capacity (e.g., if current capacity is 8, new one may be 16).

All existing elements are copied (or moved) into the new block.

This is done via copy constructors or move constructors of the stored type.

The old memory block is deallocated.

The vector now points to the new block with the increased capacity.

*/