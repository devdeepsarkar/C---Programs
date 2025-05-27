#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(4);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    for(auto i : ms){
        cout << i << " ";
    } // 1 1 1 2 2 2 3 3 3 3 3 4 5
    cout << endl;

    int cnt = ms.count(1);
    cout << cnt << endl; // 3

    ms.erase(1); // All 1's deleted
    for(auto i : ms){
        cout << i << " ";
    } // 2 2 2 3 3 3 3 3 4 5
    cout << endl;

    ms.erase(ms.find(2)); // single 2 deleted
    for(auto i : ms){
        cout << i << " ";
    } // 2 2 3 3 3 3 3 4 5
    cout << endl;

    auto it_start = ms.find(3);  // points to the first 3
    auto it_end = it_start;
    advance(it_end, 2);          // move 2 steps ahead
    ms.erase(it_start, it_end);  // erase first 2 threes
    for(auto i : ms){
        cout << i << " ";
    } // 2 2 3 3 3 4 5
    cout << endl;


    // rest all func same as set

    return 0;
}

/*

    --> ms.erase(ms.find(3), ms.find(3) + 2);

        This will not compile because you’re trying to do ms.find(3) + 2, which assumes random-access iterators (like in a vector), but:

            multiset uses bidirectional iterators, not random-access iterators.

            So it + 2 is invalid.


        ✅ Correct Way to Erase First Two Occurrences of 3:

            auto it = ms.find(3);
            auto it2 = it;
            advance(it2, 2);  // Move 2 steps forward
            ms.erase(it, it2);

    --> ms.erase(ms.find(3), advance(ms.find(3), 2));

        You cannot use advance() inside a function call like that. Here's why:

            advance(ms.find(3), 2) modifies the iterator in-place, but it does not return the updated iterator.

            It returns void, so you are effectively writing: ms.erase(ms.find(3), void) → compile-time error.

*/