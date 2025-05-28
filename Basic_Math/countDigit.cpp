#include <bits/stdc++.h>
using namespace std;

int main(){
    // Brute Force Approach
    int n, cnt=0;
    cin >> n; // 10256
    int temp = n;

    while(temp > 0){
        cnt++;
        temp /= 10;
    }
    cout << cnt << endl; // 5

    // Optimal Approach
    cout << (int)log10(n) + 1; // 5

    return 0;
}