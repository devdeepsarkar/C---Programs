#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    map<int, int> mpp; // hash
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    
    for(auto it : mpp){
        cout << it.first << " --> " << it.second << endl;
    }
    
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        // fetch
        cout << mpp[num] << endl;
    }



    return 0;
}

/*

i/p:    7
        1 2 2 1 1 4 3
        5
        1
        2
        3
        4
        6

o/p:    1 --> 3
        2 --> 2
        3 --> 1
        4 --> 1
        3
        2
        1
        1
        0

*/