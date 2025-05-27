#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    
    cout << st.top() << endl; // 5

    st.pop(); // st after --> {1, 2, 3, 3} // The pop() function in std::stack does not return a value. It’s a void function — it simply removes the top element.
    cout << st.top() << endl; // 3

    cout << st.size() << endl; // 4

    cout << st.empty() << endl; // 0 means false

    stack<int> st1, st2;
    st1.push(10);
    st2.push(500);
    st1.swap(st2);

    cout << st1.top() << endl; // 500
    cout << st2.top() << endl;  // 10

    return 0;
}

// All oprn in stack happens in O(1) time