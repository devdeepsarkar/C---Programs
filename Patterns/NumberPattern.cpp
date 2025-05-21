#include <bits/stdc++.h>
using namespace std;

void getNumberPattern(int n) {
   for(int i=0; i<2*n-1;i++){
       for(int j=0; j<2*n-1;j++){
           int top = i;
           int left = j;
           int right = (2*n-1)-1-j;
           int bottom = (2*n-1)-1-i;
           int val = min(min(top,bottom),min(left,right));
           cout << n - val;
       }
       cout << endl;
   }
}

int main(){
    int l;
    cin >> l;

    for(int k=0; k<l; k++){
        int n;
        cin >> n;
        getNumberPattern(n);
    }
    
    return 0;
}

/*
1
4
*/

/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/