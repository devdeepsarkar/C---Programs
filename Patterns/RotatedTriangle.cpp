#include <bits/stdc++.h>
using namespace std;

void RotatedTriangle(int n) {
	for(int i = 0; i <= 2*n - 1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
		for(int j = 1; j <= stars; j++){
			cout << "*";
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
        RotatedTriangle(n);
    }

    return 0;
}

/*
1
3
*/

/*

*
**
***
**
*

*/