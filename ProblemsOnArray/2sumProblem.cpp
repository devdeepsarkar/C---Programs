/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // brute force: T.C. = O(n^n), S(n) = O(1)
    vector<int> brutetwoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return {-1,-1};
    }


    // better soln: T.C. = O(n^logn)-->Ordered Map, S(n) = O(n)
    vector<int> bettertwoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> mpp;
        for(int i=0; i<n; i++) {
            int num1 = nums[i];
            int need = target - num1;
            if(mpp.find(need) != mpp.end()) {
                ans.push_back(i);
                ans.push_back(mpp[need]);
                break;
            }
            else mpp[nums[i]] = i; 
            
        }
        return ans;
    }
}s1;

// optimal soln: only if we need to return the numbers or need to return only yes/no and not the indexes
// T.C = O(N + NlogN), S(n) = O(1)
string optimaltwosum(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    sort(nums.begin(), nums.end());
    while(left<right) {
        int sum = nums[left] + nums[right];
        if(sum == target) return "YES";
        else if(sum > target)    right--;
        else    left++;   
    }
    return "NO";
}

int main(){

    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int target;
    cin >> target;

    vector<int> ans1;
    ans1 = s1.brutetwoSum(arr, target);
    cout << ans1[0] << " " << ans1[1] << endl;

    vector<int> ans2;
    ans2 = s1.brutetwoSum(arr, target);
    cout << ans2[0] << " " << ans2[1] << endl;

    cout << optimaltwosum(arr, target);
    
    

    return 0;
}

/*
i/p: 5
     2 7 11 15 3
     10

o/p: 1 4
     1 4
     YES

*/