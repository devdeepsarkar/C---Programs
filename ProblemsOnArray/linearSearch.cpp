#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int k, int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == k) return i;
    }
    return -1;
}

int main() {
    int n, k;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];

    cin >> k;

    cout << linearSearch(arr, k, n) << " ";

    return 0;
}

/*

i/p:    5
        11 20 51 48 65
        65
o/p:    4

*/