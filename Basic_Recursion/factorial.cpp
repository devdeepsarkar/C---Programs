#include <bits/stdc++.h>
using namespace std;

// parameterised way
void factParameters(int n, int f){
    if(n < 1){
        cout << f << endl;
        return;
    }
    factParameters(n-1, n*f);
}

// functional
int factFunctional(int n){
    if(n < 1){
        return 1;
    }
    return n * factFunctional(n-1);
}

int main(){
    int n;
    cin >> n;
    factParameters(n, 1);
    cout << factFunctional(n);

    return 0;
}

/*
i/p:    5
o/p:    120
        120

i/p:    10
o/p:    3628800
        3628800

*/