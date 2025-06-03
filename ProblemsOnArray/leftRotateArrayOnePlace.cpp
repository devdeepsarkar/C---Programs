#include <bits/stdc++.h>
using namespace std;

void leftRotateOne(vector<int> &arr) {
    int n = arr.size();
    int fst = arr[0];
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = fst;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    leftRotateOne(arr);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*

i/p:    5
        10 20 30 40 50
o/p:    20 30 40 50 10 

*/