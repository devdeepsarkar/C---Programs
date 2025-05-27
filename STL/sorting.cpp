#include <bits/stdc++.h>
using namespace std;

int main(){
    // sorting an array
    int a[5] = {5, 2, 10, 20, 8};
    sort(a, a+5);
    for(auto it: a){
        cout << it << " ";
    } // 2 5 8 10 20 
    cout << endl;

    // sorting a vector
    vector<int> v = {33, 44, 11, 5, 9, 100};
    sort(v.begin(), v.end());
    for(auto it: v){
        cout << it << " ";
    } // 5 9 11 33 44 100  
    cout << endl;

    // sorting a particular part
    int a2[10] = {5, 2, 10, 20, 8, 1, 3, 6, 100, 23};
    sort(a2+2, a2+7);
    for(auto it: a2){
        cout << it << " ";
    } // 5 2 1 3 8 10 20 6 100 23 
    cout << endl;


    // sort in descending order
    sort(a2, a2+10, greater<int>());
    for(auto it: a2){
        cout << it << " ";
    } // 100 23 20 10 8 6 5 3 2 1  
    cout << endl;
    /*
    incorrect: sort(a2, a2+10, greater<int>);

    greater<int> is a class, not a function. You should pass an object of it like this:
        sort(a2, a2+10, greater<int>());

    In a priority queue, you use greater<int> (without parentheses) because you're passing a type, not calling a function. Since, priority_queue expects a type, not an object.
    */

    return 0;
}