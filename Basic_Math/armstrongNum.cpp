#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int x) {
        int temp, sum=0;
        temp = x;
        int cnt = 0;
        while(temp > 0){
            cnt++;
            temp /= 10;
        }
        temp = x;
        // cout << cnt << endl;
        while(temp > 0){
            int ld = temp % 10;
            sum = sum + pow(ld, cnt);
            temp /= 10;
        }
        if(x == sum)
            return true;
        return false;
        
    }
}s1;

int main(){
    int n;
    cin >> n;
    cout << s1.isArmstrong(n);

    return 0;
}

/*
i/p>> 371
o/p>> 1

i/p>> 1634
o/p>> 1

i/p>> 163
o/p>> 0
*/