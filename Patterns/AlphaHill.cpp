#include <bits/stdc++.h>
using namespace std;

void alphaHill(int n) {
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			cout << "  ";
		}
        for(char j = 'A'; j <= 'A' + i; j++){
            cout << j << " ";
        }
        for(char j = 'A' + i - 1; j >= 'A'; j--){
            cout << j << " ";
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
        alphaHill(n);
    }
    
    return 0;
}
/*
1
5
*/

/*
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A 
*/