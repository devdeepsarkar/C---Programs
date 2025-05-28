#include <bits/stdc++.h>
using namespace std;

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

class Solution {
public:
    int reverse(int x) {
        long long int temp, rev=0;
        temp = x;
        while(temp != 0){
            int ld = temp % 10;
            rev = (rev * 10) + ld;
            temp /= 10;
        }
        if(rev < -2147483648 || rev > 2147483648)
            return 0;

        /*
        if(res < pow(-2, 31) || res > (pow(2, 31) - 1))
            return 0;
        */
        return rev;
    }

    /*
    
    // Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
                return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
    */
}s1;

int main(){
    int n;
    cin >> n;
    cout << s1.reverse(n);

    return 0;
}

/*
i/p>> -153423646
o/p>> -646324351

i/p>> 153423646
o/p>> 0
*/