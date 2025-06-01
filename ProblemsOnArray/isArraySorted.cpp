/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotn = 1;
        for(int i=1; i<n; i++){
            if((nums[i] < nums[i-1] && nums[i] <= nums[i%(n-1)]) || (nums[i] >= nums[i-1] && nums[i] > nums[i%(n-1)])){
                rotn--;
            }
            else if(nums[i] >= nums[i-1] && rotn >= 0) {

            }
            else
                return false;
        }
        if(rotn >= 0)
            return true;
        else
            return false;
    }
}s1;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin >> arr[i];
    
    cout << s1.check(arr);


    return 0;
}

/*

i/p:    3 4 5 1 2
o/p:    1

i/p:    2 1 3 4
o/p:    0

*/