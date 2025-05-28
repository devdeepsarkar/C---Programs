#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Brute force Approach
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;

    // Optimal Approach
    vector<int> ls;
    for(int i = 1; i * i <= n; i++){ // for(int i = 1; i <= sqrt(n); i++)
        if( n % i == 0){
            ls.push_back(i);
            cout << i << " ";
            if(i != n/i){
                ls.push_back(n/i);
                cout << n/i << " ";
            }
        }
    }
    cout << endl;
    sort(ls.begin(), ls.end());
    for(auto it: ls) cout << it << " ";

    return 0;
}

/*

i/p>>   36
o/p>>   1 2 3 4 6 9 12 18 36 
        1 36 2 18 3 12 4 9 6 
        1 2 3 4 6 9 12 18 36 

i/p>>   11
o/p>>   1 11 
        1 11 
        1 11 

*/