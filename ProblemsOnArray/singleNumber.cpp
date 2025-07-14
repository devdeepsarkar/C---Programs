/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
*/

#include <bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int n) {
    int xor1 = 0;
    for(int i=0; i<n; i++){
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];

    cout << singleNumber(arr, n) << endl;

    return 0;
}