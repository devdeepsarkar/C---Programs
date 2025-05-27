// A multimap stores key-value pairs, like map.
// But multiple values for the same key are allowed.
// Automatically sorted by keys.
// Each insert() adds a new entry — even if the key is already present.
// only mpp[key] cannot be used

#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm;

    // Inserting values
    // only mm[key] cannot be used
    mm.insert({1, "apple"});
    mm.insert({2, "banana"});
    mm.insert({1, "apricot"});
    mm.insert({3, "cherry"});
    mm.insert({2, "blueberry"});

    // Print all key-value pairs
    cout << "All elements in multimap:\n";
    for (auto &p : mm) {
        cout << p.first << " → " << p.second << endl;
    } /* All elements in multimap:
         1 → apple
         1 → apricot
         2 → banana
         2 → blueberry
         3 → cherry
    */

    // cout << "\nValues for key 2:\n";
    // auto range = mm.equal_range(2);
    // for (auto it = range.first; it != range.second; ++it) {
    //     cout << it->first << " → " << it->second << endl;
    // }

    return 0;
}
