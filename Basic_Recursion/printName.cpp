// Print name n times
#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    // base case
    if(i > n)
        return;
    
    cout << "Devdeep" << endl;
    printName(i+1, n);
}

int main(){
    int n;
    cin >> n;
    printName(1, n);

    return 0;
}

/*
i/p:    5
o/p:    Devdeep
        Devdeep
        Devdeep
        Devdeep
        Devdeep
*/