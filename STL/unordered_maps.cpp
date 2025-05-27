// A container from the C++ STL that stores key-value pairs.
// Uses a hash table internally — so insertion, deletion, and search are O(1) on average.
// Does not maintain sorted order of keys (unlike map).

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> umap;

    // Insert key-value pairs
    umap["apple"] = 3;
    umap["banana"] = 5;
    umap["mango"] = 2;
    umap["banana"] = 6; // updates existing key

    // Insert using insert()
    umap.insert({"orange", 4});

    // Print all key-value pairs (unordered)
    cout << "Contents of unordered_map:\n";
    for (auto p : umap) {
        cout << p.first << " → " << p.second << endl;
    } /* Contents of unordered_map:
         orange → 4
         mango → 2
         banana → 6
         apple → 3 */

    // Access value
    cout << "\nbanana: " << umap["banana"] << endl;

    // Check existence
    if (umap.find("grape") == umap.end()) {
        cout << "grape not found\n";
    }

    // Erase an entry
    umap.erase("mango");

    cout << "\nAfter erasing 'mango':\n";
    for (auto p : umap) {
        cout << p.first << " → " << p.second << endl;
    } /* After erasing 'mango':
         orange → 4
         banana → 6
         apple → 3 */

    return 0;
}
