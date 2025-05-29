#include <bits/stdc++.h>
using namespace std;

bool stringPalindrome(int i, string &s){
    if(i >= s.size())   return 1;
    if(s[i] != s[s.size()-i-1]) return 0;
    return stringPalindrome(i+1, s);
}

int main(){
    string s;
    cin >> s;

    cout << stringPalindrome(0, s);

    return 0;
}

/*

i/p:    madam
o/p:    1

i/p:    madim
o/p:    0

*/