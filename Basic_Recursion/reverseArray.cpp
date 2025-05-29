#include<bits/stdc++.h>
using namespace std;

// using two pointers
void reverseTwo(int l, int r, int arr[], int n){
    if(l >= r)  return;
    swap(arr[l], arr[r]);
    reverseTwo(l+1, r-1, arr, n);

}

// using single pointers
void reverseOne(int l, int arr[], int n){
    if(l >= n/2)  return;
    swap(arr[l], arr[n-l-1]);
    reverseOne(l+1, arr, n);

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    reverseTwo(0, n-1, arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;


    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    reverseOne(0, arr2, n2);
    for(int i = 0; i < n2; i++){
        cout << arr2[i] << " "; 
    }


    return 0;
}

/*

i/p:    5
        1 2 3 4 5
        6
        10 20 30 40 50 60
o/p:    5 4 3 2 1
        60 50 40 30 20 10 

*/