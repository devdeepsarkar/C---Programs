#include <bits/stdc++.h>
using namespace std;
// int hash2[10000000];
// bool hash3[100000000];
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[20] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        // fetch
        cout << hash[num] << endl;
    }
    // int hash4[100000]={0};
    // bool hash5[1000000] = {0};

    return 0;
}

/*

i/p:    7
        1 2 2 1 1 4 3
        4
        1
        2
        3
        4

o/p:    3
        2
        1
        1

*/