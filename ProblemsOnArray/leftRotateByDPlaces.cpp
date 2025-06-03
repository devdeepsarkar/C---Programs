#include <bits/stdc++.h>
using namespace std;

// brute force soln: T(n)=O(n+d), S(n)=O(d) --> extra space
void leftRotateBrute(vector<int> &arr, int d) {
    int n = arr.size();
    d = d % n; // reduce d to multiples of n in case d is very large
    int temp[d];
    
    // copy to temp
    for(int i=0; i<d; i++) {    // O(d)
        temp[i] = arr[i];
    }
    
    // shift
    for(int i=d; i<n; i++){     // O(n-d)
        arr[i-d] = arr[i];
    }

    // copyback to array
    for(int i=n-d; i<n; i++){   // O(d)
        arr[i] = temp[i - (n-d)];
    }

}


void reversee(vector<int>::iterator start, vector<int>::iterator end) {
    end--;
    while (start <= end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
// optimal soln:    T(n)=O(2n), S(n)=O(1)
void leftRotateOptimal(vector<int> &arr, int d) {
    int n = arr.size();
    d = d%n;
    reversee(arr.begin(), arr.begin()+d);    // O(d)
    reversee(arr.begin()+d, arr.begin()+n);  // O(n-d)
    reversee(arr.begin(), arr.end());        // O(n)

}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;

    // leftRotateBrute(arr, d);
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }

    leftRotateOptimal(arr, d);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*

i/p:    5
        10 20 30 40 50
        2
o/p:    30 40 50 10 20

*/