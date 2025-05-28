#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Optimal Approach
    int cnt=0;
    for(int i = 1; i <= sqrt(n); i++){
        if( n % i == 0){
            cnt++;
            if(i != n/i){
                cnt++;
            }
        }
    }
    // cout << cnt << endl;
    if(cnt == 2){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not prime" << endl;
    }

    return 0;
}

/*

i/p>>   11
o/p>>   Prime

i/p>>   20
o/p>>   Not prime

*/