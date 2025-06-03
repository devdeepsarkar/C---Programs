#include <bits/stdc++.h>
using namespace std;

// Brute Force Soln: T(n)=O(2n), S(n)=O(n)
void zeroestoEndBrute(int arr[], int n) {
    vector<int> temp;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) temp.push_back(arr[i]);
    }

    for(int i=0; i<temp.size(); i++) {
        arr[i] = temp[i];
    }

    for(int i=temp.size(); i<n; i++)    arr[i]=0;
}

// Optimal Solution: T(n)=O(n), S(n)=O(1)
void zeroestoEndOptimal(int arr[], int n) {
    int j=-1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            j=i;
            break;
        }
    }

    if(j != -1) {
        for(int i=j; i<n; i++) {
            if(arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];

    // zeroestoEndBrute(arr, n);
    // for(int i=0; i<n; i++)  cout << arr[i] << " ";

    zeroestoEndOptimal(arr, n);
    for(int i=0; i<n; i++)  cout << arr[i] << " ";

    return 0;
}

/*

i/p:    11
        1 2 0 3 4 5 0 0 0 6 0
o/p:    1 2 3 4 5 6 0 0 0 0 0 

*/