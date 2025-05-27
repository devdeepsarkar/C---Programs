#include <bits/stdc++.h>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top() << endl; // 10

    pq.pop();
    cout << pq.top() << endl; // 8

    // size(), swap(), empty() funcn same as other

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);
    mpq.push(2);
    mpq.push(8);
    mpq.emplace(10);

    cout << mpq.top() << endl; // 2

    return 0;
}


/*

The general form of priority_queue is:

priority_queue<Type, Container, Comparator>
Now let's plug in the actual values:

int

The type of elements stored in the heap.

Here, we’re working with integers.

vector<int>

The underlying container used to store the elements.

By default, priority_queue uses a vector to hold the data.

greater<int>

This is the comparator function object.

It changes the default behavior from a max-heap to a min-heap.

With greater<int>, smaller numbers are given higher priority, so the smallest element is at the top.

*/