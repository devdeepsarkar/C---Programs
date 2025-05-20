#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    switch(num){
        case 1:
            cout << "Sunday";
            break;

        case 2:
            cout << "Monday";
            break;

        case 3:
            cout << "Tuesday";
            break;

        case 4:
            cout << "Wedday";
            break;

        case 5:
            cout << "Thursday";
            break;

        case 6:
            cout << "Friday";
            break;

        case 7:
            cout << "Satday";
            break;

        default:
            cout << "Invalid Num";
            break;

    }

    return 0;
}