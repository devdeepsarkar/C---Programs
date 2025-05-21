#include <bits/stdc++.h>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << "* ";
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
        nForest(n);
    }

    return 0;
}

/* 
2
3
5
*/

/*
* * * 
* * * 
* * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/