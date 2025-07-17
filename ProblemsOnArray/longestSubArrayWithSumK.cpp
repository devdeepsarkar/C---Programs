#include <bits/stdc++.h>
using namespace std;

// brute force: T(n) ~ O(n^3), S(n) = O(1)
int bruteSubArray(int arr[], int n, int k) {
    int len=0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int s=0;
            for(int x=i; x<=j; x++) {
                s += arr[x];
            }
            if(s == k)  len = max(len, j-i+1);
        }
    }
    return len;
}

// brute force optimal: T(n)=O(n^2), S(n)=o(1)
int bruteSubArrayOptimal(int arr[], int n, int k) {
    int len=0;
    for(int i=0; i<n; i++) {
        int s=0;
        for(int j=i; j<n; j++) {
            s += arr[j];
            if(s == k)  len = max(len, j-i+1);
        }
    }
    return len;
}

// better solution: T(n)=O(nlogn)-->ordered map, O(n) B.C O(n^2)W.C-->Unordered map, S(n)=O(n)
int betterSubArray(int arr[], int n, int k){
    map<long long, int> preSumMap;
    long long sum=0;
    int maxlen=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum==k){
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum-k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxlen;
}

// optimal: two pointer approach: T(n)=O(2n), S(n)=O(1)
int optimalSubArray(int arr[], int n, int k) {
    int left=0, right=0;
    long long sum = arr[0];
    int maxlen = 0;
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        
        if(sum == k) {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if(right < n)    sum += arr[right];
    }
    return maxlen;
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];
    int k;
    cin >> k;

    cout << bruteSubArray(arr, n, k) << endl;
    cout << bruteSubArrayOptimal(arr, n, k) << endl;
    cout << betterSubArray(arr, n, k) << endl;
    cout << optimalSubArray(arr, n, k) << endl;

    return 0;
}

/*
i/p:    9
        1 2 0 0 0 3 1 1 1 4 2 3
        5
o/p:    5
(0 0 0 3 1)
*/