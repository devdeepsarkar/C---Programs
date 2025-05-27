#include <bits/stdc++.h>
using namespace std;

int main(){
    // map stores data in key value pairs 
    // maps are sorted on the basis of keys
    // stores distinct keys, duplicate keys are not allowed

    map<int, int> mpp;

    mpp[1] = 2; // 1 is key, 2 is value
    mpp.emplace(3,1); // 3 is key 1 is value
    mpp.insert({2, 4});

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    } /* 1 2
         2 4
         3 1 */
    cout << endl;

    cout << mpp[1] << endl; // 2 // accessing value using key
    cout << mpp[5] << endl; // 0 // (inserts 5 with default value 0)

    auto it2 = mpp.find(3);
    cout << (*it2).second << endl; // 1
    cout << it2->second << endl; // 1

    auto it3 = mpp.find(50); // key 5 is not present so it points to  mpp.end()

    auto it4 = mpp.lower_bound(2); // returns iterator to key >= 2
    auto it5 = mpp.upper_bound(3); // returns iterator to key > 3

    map<int, int> mp;
    mp[1] = 100;
    mp[3] = 200;
    mp[5] = 300;

    auto lb = mp.lower_bound(3); // returns iterator to key = 3
    auto ub = mp.upper_bound(3); // returns iterator to key = 5

    cout << lb->first << " " << lb->second << endl; // 3 200
    cout << ub->first << " " << ub->second << endl; // 5 300

    map<int, pair<int,int>> mpp2;
    map<pair<int,int>, int> mpp3;

    mpp3[{2,3}] = 10;

    // erase(), swap(), size(), empty() are same


    return 0;
}

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