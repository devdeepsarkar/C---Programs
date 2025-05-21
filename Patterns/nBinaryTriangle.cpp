#include <bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n) {
    int start;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout << start <<" ";
            start = 1 - start; //for flipping 1 to 0 and 0 to 1
        }
        cout << endl;
    }
}

int main(){
    int l;
    cin >> l;
    for(int i=0; i<l; i++){
        int n;
        cin >> n;
        nBinaryTriangle(n);
    }
    return 0;
}

/*
1
5
*/

/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/