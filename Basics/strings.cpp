#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello";
    cout << s << endl; // Hello
    cout << s[0] << endl; // H

    int len = s.size();// to calculate length of string
    cout << s[len - 1]; //to print last char // o

    cout << endl << s[1] << endl; // e
    s[1] = 'o'; 
    cout << s[1]; // o

    return 0;
}