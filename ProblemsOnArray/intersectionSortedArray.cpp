#include <bits/stdc++.h>
using namespace std;

// brute force: T(n)=O(n1*n2), S(n)=O(n2)-->ignoring the ans vector
vector<int> intersectionBrute(int arr1[], int arr2[], int n1, int n2) {
    int visited[n2] = {0};
    vector<int> ans;

    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            if(arr1[i] < arr2[j])   break;
            if(arr1[i] == arr2[j] && visited[j] == 0) {
                ans.push_back(arr2[j]);
                visited[j] == 1;
                break;
            }
        }
    }
    return ans;
}

// optimal soln: T(n)=O(n1+n2), S(n)=O(1)-->ignoring the ans vector
vector<int> intersectionOptimal(int arr1[], int arr2[], int n1, int n2) {
    vector<int> ans;
    int i=0, j=0;
    while(i<n1 && j<n2) {
        if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}


int main() {
    int n1;
    cin >> n1;
    int arr1[n1];
    for(int i=0; i<n1; i++)  cin >> arr1[i];
    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i=0; i<n2; i++)  cin >> arr2[i];

    // vector<int> inter = intersectionBrute(arr1, arr2, n1, n2);
    // for(auto it : inter)   cout << it << " ";

    vector<int> inter = intersectionOptimal(arr1, arr2, n1, n2);
    for(auto it : inter)   cout << it << " ";

    return 0;
}

/*

i/p:    6
        1 11 20 51 58 65
        8
        4 6 11 20 20 30 58 65
o/p:    11 20 58 65 

*/