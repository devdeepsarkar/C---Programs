#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
            if(didSwap=0)   break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];
    bubble_sort(arr, n);

    for(int i=0; i<n; i++)  cout << arr[i] << " ";

    return 0;
}

/*

i/p:    6
        13 46 24 52 20 9
o/p:    9 13 20 24 46 52  // #runs = 5 (inner loop)


i/p:    6
        10 20 30 40 50 60
o/p:    10 20 30 40 50 60  // #runs = 1 (inner loop)

*/