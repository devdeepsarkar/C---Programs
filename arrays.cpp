#include <bits/stdc++.h>
using namespace std;

int main(){
    // 1D array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // 20 30 40 50 60
    cout << arr[2]; // 40

    // 2D array
    int a[3][5];
    a[0][4] = 600;
    cout << endl << a[0][4]; // 600
    cout << endl << a[1][3]; //Garbage Value

    return 0;
}