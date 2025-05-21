#include <bits/stdc++.h>
using namespace std;
int main(){
    // int(-10^9 to 10^9), long(-10^12 to 10^12), long long(-10^18 to 10^18), float, double, string, char, getline

    // string
    // string s1;
    // cin >> s1; // hello devdeep // will take one string as input
    // cout << s1 << endl; // hello

    // string s2, s3; 
    // cin >> s2 >> s3; // hello devdeep // will take two string as input seperated by space
    // cout << s2 << " " << s3 << endl; // hello devdeep

    //getline
    // string str;
    // getline(cin, str); // hello devdeep // will take whole line as input
    // cout << str << endl; // hello devdeep

    // char
    char ch1;
    cin >> ch1; // h or hello // will take one character as input
    cout << ch1 << endl; // h

    char ch2 = 'c'; // use single quotes for char
    cout << ch2 << endl; // c
    cout << (char)('a' + 1) << endl; // b

    string s = "c"; // use double quotes for string //ends up taking more space than char
    cout << s << endl; // c
    cout << s[0] << endl; // c
    cout << s[0] + 1 << endl; // 100 // ascii value of c is 99, so c+1 = 100
    cout << (char) (s[0] + 1) << endl; // d



}