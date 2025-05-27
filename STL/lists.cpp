#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    for(auto i : ls){
        cout << i << " ";
    } // 2, 4
    cout << endl;

    ls.push_front(50);
    for(auto i : ls){
        cout << i << " ";
    } // 50, 2, 4
    cout << endl;

    ls.emplace_front(100);
    for(auto i : ls){
        cout << i << " ";
    } // 100, 50, 2, 4
    cout << endl;


    // We cannot access elements in std::list like in an array or vector using the [] operator or .at(index).



    // ALL OTHER FUNCTIONS ARE SAME AS VECTOR begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()
    // insert() in vector is costly for large data, especially at the front or middle,
    // because it shifts elements (vector uses dynamic array).
    // In contrast, list uses a doubly linked list, so insertions at any position using iterators are O(1).
    // push_front() is efficient in list but not available in vector.

    return 0;
}

/*

std::vector allows fast random access using [] or at() (because of contiguous memory).

std::list allows fast insertion/deletion in the middle (because of linked pointers), but no fast access by index.

*/