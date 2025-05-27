#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);

    for(auto it: dq){
        cout << it << " ";
    } // 1 2
    cout << endl;

    dq.push_front(4);
    dq.emplace_front(5);
    for(auto it: dq){
        cout << it << " ";
    } // 5 4 1 2
    cout << endl;

    dq.pop_back();
    for(auto it: dq){
        cout << it << " ";
    } // 5 4 1
    cout << endl;

    dq.pop_front();
    for(auto it: dq){
        cout << it << " ";
    } // 4 1
    cout << endl;

    int last_elem = dq.back();
    cout << last_elem << endl; // 1

    int first_elem = dq.front();
    cout << first_elem << endl; // 4

    deque<int> dq2 = {10, 20, 30, 40};

    cout << dq2[2] << endl;     // 30
    cout << dq2.at(2) << endl; // 30

    // rest of the functions are same as vector begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()


    return 0;
}

/*

deque vs vector:

vector is efficient for insertions/removals at the back.

deque is efficient for insertions/removals at both ends.

*/