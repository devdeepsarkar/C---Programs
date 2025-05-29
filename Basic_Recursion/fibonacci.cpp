#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=1)    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}

/*

i/p:    4   // 1 1 2 3
o/p:    3

i/p:    5   // 1 1 2 3 5
o/p:    5

*/