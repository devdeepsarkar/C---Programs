#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    for(int i = 0; i < n; i++){
		for(char j = 0; j < n - i; j++){
			cout << char('A' + j) << " ";
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
        nLetterTriangle(n);
    }

    return 0;
}

/*
1
5
*/

/*
A B C D E 
A B C D 
A B C 
A B 
A 
*/