// find union of two sorted array

#include <bits/stdc++.h>
using namespace std;

// Brute Force: T(n)=O(n1logn + n2logn + n1+n2), S(n)=O((n1+n2) + (n1+n2))-->for set(part of algorithm) and unionn array(declared only for the sake of returing ans)
int* unionBrute(int arr1[], int arr2[], int n1, int n2, int* sizee) {
    set<int> st;    // size of n --> n=n1+n2 in W.C.

    for(int i=0; i<n1; i++) {   // O(n1logn)
        st.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++) {   // O(n2logn)
        st.insert(arr2[i]);
    }

    *sizee = st.size();
    int* unionn = new int[*sizee];
    int u=0;
    for(auto it: st) {      // O(n1 + n2)
        unionn[u++] = it;
    }
    return unionn;
}

// optimal soln: T(n)=O(n1+n2), S(n)=O(n1+n2)-->unionn array(declared only for the sake of returing ans we can directly print the result to reduce S(n) to O(1))
vector<int> unionOptimal(int arr1[], int arr2[], int n1, int n2) {
    vector<int> unionn;

    int i = 0;
    int j = 0;
    while(i<n1 && j<n2) {
        if(arr1[i] <= arr2[j]) {
            if(unionn.size() == 0 || unionn.back() != arr1[i]) {
            unionn.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(unionn.size() == 0 || unionn.back() != arr2[j]) {
            unionn.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < n1) {
    if(unionn.back() != arr1[i]) {
        unionn.push_back(arr1[i]);
    }
    i++;
    }
    while(j < n2) {
        if(unionn.back() != arr2[j]) {
            unionn.push_back(arr2[j]);
        }
        j++;
    }
    return unionn;
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

    // int sizee=0;
    // int* unionn = unionBrute(arr1, arr2, n1, n2, &sizee);
    // for(int i=0; i<sizee; i++)  cout << unionn[i] << " ";

    vector<int> unionn = unionOptimal(arr1, arr2, n1, n2);
    for(auto it : unionn)   cout << it << " ";

    return 0;
}

/*

i/p:    5
        11 20 51 58 65
        7
        4 6 11 20 20 30 98
o/p:    4 6 11 20 30 51 58 65 98 

*/