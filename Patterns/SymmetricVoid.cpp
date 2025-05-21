#include <bits/stdc++.h>
using namespace std;

void symmetricVoid(int n) {
    int space = 0;
    for(int i = 0; i < n; i++){
        // stars
		for(int j = n-i; j > 0; j--){
			cout << "* ";
		}
        // spaces
        for(int j = 0; j < space; j++){
            cout << "  ";
        }
        // // stars
        for(int j = n-i; j > 0; j--){
			cout << "* ";
		}
		cout << endl;
        space += 2;
	}
    space = (n-1)*2;
    for(int i = 0; i < n; i++){
        // stars
		for(int j = 0; j <= i; j++){
			cout << "* ";
		}
        // spaces
        for(int j = 0; j < space; j++){
            cout << "  ";
        }
        // // stars
        for(int j = 0; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
        space -= 2;
	}
}

int main(){
    int l;
    cin >> l;

    for(int k=0; k<l; k++){
        int n;
        cin >> n;
        symmetricVoid(n);
    }
    
    return 0;
}