#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    cout << q.back() << endl; // 9


    // q-->{1, 2, 4}
    cout << q.front() << endl; // 1

    q.pop();
    cout << q.front() << endl; // 2

    // size(), swap(), empty() same as stack

    return 0;
}