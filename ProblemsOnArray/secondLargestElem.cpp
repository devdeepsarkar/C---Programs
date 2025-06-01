// In an interview always go with brute --> better --> optimal for a soln

#include <bits/stdc++.h>
using namespace std;

// brute force soln takes O(nlogn + n) T.C.
int bruteSecondLargestElem(vector<int> arr, int n) {
    sort(arr.begin(), arr.end()); // O(nlogn)
    int largest = arr[n-1];
    int slargest = -1;
    for(int i=n-2; i>=0; i--){  // O(n)
        if(arr[i]<largest) {
            slargest = arr[i];
            break;
        }
    }
    return slargest;
}

// better soln takes O(2n) T.C.
int betterSecondLargestElem(vector<int> arr, int n) {
    int largest = arr[0]; // O(n)
    for(int i=0; i<n; i++) {
        if(arr[i]>largest)  largest = arr[i];
    }
    int slargest = -1;
    for(int i=n-1; i>=0; i--){  // O(n)
        if(arr[i]<largest && arr[i]>slargest)  slargest = arr[i];
    }
    return slargest;
}

// Optimal soln takes O(n) T.C.
int optimalSecondLargestElem(vector<int> arr, int n) {
    int largest = arr[0];
    int slargest = -1;
    for(int i=1; i<n; i++) {
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest)  slargest = arr[i];
    }
    return slargest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin >> arr[i];
    
    cout << bruteSecondLargestElem(arr, n) << endl;
    cout << betterSecondLargestElem(arr, n) << endl;
    cout << optimalSecondLargestElem(arr, n) << endl;


    return 0;
}

/*

i/p:    6
        13 46 24 52 20 9
o/p:    46
        46
        46
        
*/