/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

    Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
    Return k.

*/

#include <bits/stdc++.h>
using namespace std;

// Brute Force soln: T.C = O(nlogn + n)
int removeDuplicatesBrute(vector<int> nums, int n) {
    set<int> st;
    for(auto it: nums)  st.insert(it);
    
    int index = 0;
    for(auto it: st) {
        nums[index] = it;
        index++;
    }
    return index;
}

// optimal soln: T.C = O(n), S.C. = O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(int j=1; j<n; j++){
            if(nums[j]>nums[i]) {
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
}s1;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin >> arr[i];
    
    cout << removeDuplicatesBrute(arr, n) << endl;
    cout << s1.removeDuplicates(arr) << endl;


    return 0;
}

/*

i/p:    1 1 2
o/p:    2
        2

i/p:    0 0 1 1 1 2 2 3 3 4
o/p:    5
        5

*/