/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/

#include <bits/stdc++.h>
using namespace std;

// Brute Force: T.C. = O(n^2)    S.C. = O(1)
int missingNumBrute(int arr[], int n){
    for(int i=1; i<=n; i++){
        int flag=0;
        for(int j=0; j<n-1; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }

}

// Better Soln: T.C. = O(2n)    S.C. = O(n)
int missingNumHashing(int arr[], int n){
    int hash[n+1] = {0};
    for(int i=0; i<n-1; i++)  
        hash[arr[i]] = 1;
    for(int i=1; i<=n; i++) 
        if(hash[i]==0)  
            return i;

}

// optimal: T.C. = O(n)    S.C. = O(1)
int missingNumSumFormula(int arr[], int n){
    int sum = (n*(n+1))/2;      // for large valu of n it may overflow
    int s2 = 0;
    for(int i=0; i<n-1; i++) {
        s2 += arr[i];
    }
    return sum-s2;
}

// more optimal: T.C. = O(n)    S.C. = O(1)
int missingNumXOR(int arr[], int n){
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n-1; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0; i<n-1; i++)  cin >> arr[i];

    cout << missingNumBrute(arr, n) << endl;
    cout << missingNumHashing(arr, n) << endl;
    cout << missingNumSumFormula(arr, n) << endl;
    cout << missingNumXOR(arr, n);

    return 0;
}

/*
i/p: 6
     1 5 4 3 2

o/p: 6



*/