#include <bits/stdc++.h>
using namespace std;

void numberCrown(int n) {
    for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i; j++){
            cout << j <<" ";
        }
        //space
        for(int j=1; j<=n-i; j++){
            cout << "    ";
        }
        //number
        for(int j=i; j>=1; j--){
            cout << j <<" ";
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
        numberCrown(n);
    }
    return 0;
}

/*
1
5
*/

/*
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
*/