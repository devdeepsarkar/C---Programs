#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // brute force: using sorting algo --> merge sort: T(n)=O(nlogn), S(n)=O(n)

    // better soln : T(n) = O(2n), S(n) = O(1)
    void sortColorsBetter(vector<int>& nums) {
        int n0=0, n1=0, n2=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0)  n0++;
            else if(nums[i] == 1)   n1++;
            else if(nums[i] == 2)   n2++;
        }
        for(int j=0; j<n0; j++) nums[j]=0;
        for(int j=0; j<n1; j++) nums[j+n0]=1;
        for(int j=0; j<n2; j++) nums[j+n0+n1]=2;
    }

    // optimal soln (Dutch National Flag Algorithm): T(n)=O(n), S(n)=O(1)
    void sortColorsOptimal(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        
        while(mid<=high) {
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)   mid++;
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
}s1;


int main() {
    int n;
    cin >> n;
    vector<int> arr1, arr2;
    for(int i=0; i<n; i++) {
        int ele;
        cin >> ele;
        arr1.push_back(ele); 
        arr2.push_back(ele);
    }

    s1.sortColorsBetter(arr1);
    for(auto it : arr1)  cout << it << " ";
    cout << endl;

    s1.sortColorsOptimal(arr1);
    for(auto it : arr1)  cout << it << " ";

    return 0;
}

/*
i/p: 11
     0 1 1 0 1 2 1 2 0 0 0

o/p: 0 0 0 0 0 1 1 1 1 2 2 
     0 0 0 0 0 1 1 1 1 2 2 

*/