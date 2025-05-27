#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    for(auto i : st){
        cout << i << " ";
    } // 1 2 3 4
    cout << endl;

    auto it = st.find(3);
    cout << *it << endl; // 3

    auto it2 = st.find(6); // if an elem is not present it returns an iterator which points to st.end()

    st.erase(4); // takes elem or iterator
    for(auto i : st){
        cout << i << " ";
    } // 1 2 3
    cout << endl;

    int cnt = st.count(2); // stores 1 if elem is present otherwise 0 b'coz set stores distinct values so single instance of each element will be present
    cout << cnt << endl; // 1

    auto it3 = st.find(3);
    st.erase(it3);
    for(auto i : st){
        cout << i << " ";
    } // 1 2
    cout << endl;

    st.emplace(3);
    st.emplace(4);
    st.emplace(5);
    st.emplace(6);
    for(auto i : st){
        cout << i << " ";
    } // 1 2 3 4 5 6
    cout << endl;

    auto it4 = st.find(2);
    auto it5 = st.find(4);
    st.erase(it4, it5);
    for(auto i : st){
        cout << i << " ";
    } // 1 4 5 6
    cout << endl;


    // functionality of insert() in vector can also be used here also, which increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as rest
    // lower_bound() and upper_bound func works the same way as it does in vector

    return 0;
}

/*
    [] and .at() is not supported
*/

/*

lower_bound(key):
    Returns an iterator **to the first element that is >= key.

    If the key exists, it returns the iterator to that key.

    If not, it returns the next greater element.

upper_bound(key):
    Returns an iterator to the first element that is strictly > key.

    If no such element exists, it returns container.end().

set<int> st = {1, 2, 4, 6};

auto lb = st.lower_bound(3); // returns iterator to 4
auto ub = st.upper_bound(4); // returns iterator to 6

if (lb != st.end()) cout << *lb << endl; // prints 4
if (ub != st.end()) cout << *ub << endl; // prints 6

*/