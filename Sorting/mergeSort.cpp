#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        if(arr[left] > arr[right]) {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void merge_sort(int arr[], int low, int high){
    if(low>=high) return;
    int mid = (high+low)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];
    merge_sort(arr, 0, n-1);
    for(int i=0; i<n; i++)  cout << arr[i] << " ";


    return 0;
}

/*

i/p:    6
        13 46 24 52 20 9
o/p:    9 13 20 24 46 52 


i/p:    6
        10 20 30 40 50 60
o/p:    10 20 30 40 50 60 

*/