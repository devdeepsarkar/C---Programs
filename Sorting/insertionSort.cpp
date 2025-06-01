#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];
    insertion_sort(arr, n);

    for(int i=0; i<n; i++)  cout << arr[i] << " ";

    return 0;
}

/*

i/p:    6
        13 46 24 52 20 9
o/p:    9 13 20 24 46 52  // #runs = 6 (inner loop)


i/p:    6
        10 20 30 40 50 60
o/p:    10 20 30 40 50 60  // #runs = 0 (inner loop)

*/