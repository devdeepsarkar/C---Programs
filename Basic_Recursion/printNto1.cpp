#include <bits/stdc++.h>
using namespace std;

// print linearly from N to 1
void printNto1Linearly(int i, int n){
    if(i < 1)   return;
    cout << i << " ";
    printNto1Linearly(i-1, n);

}

// print from N to 1 using backtracking
void printNto1Backtracking(int i, int n){
    if(i > n)   return;
    printNto1Backtracking(i+1, n);
    cout << i << " ";

}

int main(){
    int n;
    cin >> n;
    printNto1Linearly(n, n);
    cout << endl;
    printNto1Backtracking(1, n);

    return 0;
}

/*
i/p:    5
o/p:    5 4 3 2 1 
        5 4 3 2 1 
*/