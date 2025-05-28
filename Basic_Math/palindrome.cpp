#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp, rev=0;
        temp = x;
        while(temp > 0){
            int ld = temp % 10;
            rev = (rev * 10) + ld;
            temp /= 10;
        }
        if(x == rev)
            return true;
        return false;
        
    }
}s1;

int main(){
    int n;
    cin >> n;
    cout << s1.isPalindrome(n);

    return 0;
}

/*
i/p>> -153423646
o/p>> 0

i/p>> 121
o/p>> 1
*/