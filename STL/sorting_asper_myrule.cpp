#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &p1, const pair<int,int> &p2){
    if(p1.second < p2.second)
        return true;
    if(p1.second > p2.second)
        return false;
    // they are same
    if(p1.first > p2.first)
        return true;
    return false;

}

int main(){
    vector<pair<int,int>> v;
    v.emplace_back(1,2);
    v.emplace_back(2,1);
    v.emplace_back(4,1);

    /*
    Rules of sorting:
        1. sort it according to second element in ascending order.
        2. if second element is same, then sort it according to first element but in descending order.
    */

    sort(v.begin(), v.end(), comp);

    for (auto it : v) {
        cout << it.first << " " << it.second << endl;
    } /* 4 1
         2 1
         1 2 */

    return 0;
}

/*

The function:

    bool comp(pair<int, int> p1, pair<int,int> p2)
    works even without & because in C++, function arguments are passed by value by default.

✅ Why it works:
    When you write:

        bool comp(pair<int, int> p1, pair<int,int> p2)

        Each pair is copied into the function when it's called. This is fine because:

            pair<int, int> is a small, lightweight object (two integers).

            Copying is inexpensive.

            So yes, the logic still works as intended.

⚠️ But what's the difference if we use &?

    bool comp(const pair<int, int>& p1, const pair<int,int>& p2)

    ✅ Benefits of using references (&) with const:

            Avoids copying (saves memory and CPU cycles).

            Improves performance, especially for larger structures (like pair<string, vector<int>>).

            Adding const ensures the function does not modify the input values.

💡 Summary:
        Version	                    Copies Data?	Modifiable?	    Efficient?
        pair<int, int> p1	        ✅ Yes	        ✅ Yes	     ✅ For small types
        const pair<int, int>& p1	❌ No	        ❌ No	     ✅ Always
        pair<int, int>& p1	        ❌ No	        ✅ Yes	     ❌ Unsafe unless needed

🔁 Recommendation:
        Always use const & when:

        You're not modifying the input.

        The object is non-trivial or large (e.g., vector, string, map).

So for sorting pairs:

    bool comp(const pair<int, int>& p1, const pair<int,int>& p2)
    is best practice ✅

*/