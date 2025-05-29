#include <bits/stdc++.h>
using namespace std;

// parameterised way
void sumParameters(int n, int sum){
    if(n < 1){
        cout << sum << endl;
        return;
    }
    sumParameters(n-1, n+sum);
}

// functional
int sumFunctional(int n){
    if(n < 1){
        return 0;
    }
    return n + sumFunctional(n-1);
}

int main(){
    int n;
    cin >> n;
    sumParameters(n, 0);
    cout << sumFunctional(n);

    return 0;
}

/*
i/p:    5
o/p:    15
        15

i/p:    10
o/p:    55
        55

*/