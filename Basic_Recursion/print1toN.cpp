#include <bits/stdc++.h>
using namespace std;

// print linearly from 1 to N
void print1toNLinearly(int i, int n){
    if(i > n)   return;
    cout << i << " ";
    print1toNLinearly(i+1, n);

}

// print from 1 to N using Backtracking
void print1toNBacktracking(int i, int n){
    if(i < 1)   return;
    print1toNBacktracking(i-1, n);
    cout << i << " ";

}

int main(){
    int n;
    cin >> n;
    print1toNLinearly(1, n);
    cout << endl;
    print1toNBacktracking(n,n);

    return 0;
}

/*
i/p:    5
o/p:    1 2 3 4 5
        1 2 3 4 5 
*/