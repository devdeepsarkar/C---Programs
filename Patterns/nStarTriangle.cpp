#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
	for(int i = 0; i < n; i++){
        //space
		for(int j = 0; j < n-i-1; j++){
			cout << " ";
		}
        //star
        for(int j = 0; j < 2*i+1; j++){
			cout << "*";
		}
        //number
        for(int j = 0; j < n-i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
}
/*
2
3
5
*/

/*
  *  
 *** 
*****
    *    
   ***   
  *****  
 ******* 
*********
*/

void nStarTriangleReverse(int n) {
	int t = n*2-1;
    for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			cout << " ";
		}
        for(int j = 0; j < t; j++){
			cout << "*";	
		}
		t = t - 2;
        for(int j = 0; j < i; j++){
			cout << " ";
		}
		cout << endl;
	}
}
/*
*****
 *** 
  *  
*********
 ******* 
  *****  
   ***   
    *  
*/

int main(){
    int l;
    cin >> l;

    for(int k=0; k<l; k++){
        int n;
        cin >> n;
        nStarTriangle(n);
        nStarTriangleReverse(n);
    }

    return 0;
}

/*
  *  
 *** 
*****
*****
 *** 
  *  
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *  
*/