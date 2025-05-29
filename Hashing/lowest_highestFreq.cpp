// Given an array of size N. Find the highest and lowest frequency element.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // pre computing
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // max min element
    int max;
    int min;
    int cnt_max = mpp[arr[0]], cnt_min = mpp[arr[0]];

    for(auto it : mpp){
        if(it.second >= cnt_max){
            cnt_max = it.second;
            max = it.first;
        }
        if(it.second < cnt_min){
            cnt_min = it.second;
            min = it.first;
        }

    }
    cout << "Most frequent: "<< max << endl;
    cout << "least frequent: " << min << endl;
    
    return 0;
}

/*

i/p:    6
        10 5 10 15 10 5
o/p:    Most frequent: 10
        least frequent: 15

i/p:    6
        2 2 3 4 4 2
o/p:    Most frequent: 2
        least frequent: 3

*/