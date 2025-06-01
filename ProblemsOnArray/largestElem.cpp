// In an interview always go with brute --> better --> optimal for a soln

#include <bits/stdc++.h>
using namespace std;

// brute force soln takes O(nlogn) T.C.
int bruteLargestElem(int arr[], int n) {
    sort(arr, arr+n); // O(nlogn)
    return arr[n-1];
}

// Optimal soln takes O(n) T.C.
int optimalLargestElem(int arr[], int n) {
    int largest = arr[0]; // O(n)
    for(int i=0; i<n; i++) {
        if(arr[i]>largest)  largest = arr[i];
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    
    cout << bruteLargestElem(arr, n) << endl;
    cout << optimalLargestElem(arr2, n) << endl;


    return 0;
}

/*

i/p:    6
        13 46 24 52 20 9
o/p:    52
        52

*/