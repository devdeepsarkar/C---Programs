#include <bits/stdc++.h>
using namespace std;

// Pass by referenceby
void doSomething(string &s){
    s[0] = 'T';
    cout << "Inside Function: " << s << endl; // Inside Function: Tag
}


int main(){

    string s;
    cin >> s;   // Bag
    cout << "Before Function calling: " << s << endl;   // Before Function calling: Bag
    doSomething(s);
    cout << "Inside main after function calling: " << s;    // Inside main after function calling: Tag

    return 0;
}