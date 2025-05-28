#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0){
        if(a > b)   a = a % b;
        else    b = b % a;

    }
    if(a == 0)   cout << b << " ";
    else    cout << a << " "; 

    return 0;
}

/*

i/p>>   20 10
o/p>>   10

i/p>>   52 10
o/p>>   2

*/

// TC=O(logbasephi(min(a,b)))