/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

#include <bits/stdc++.h>
using namespace std;

// brute force: T.C. = O(n*n), S(n) = O(1)
int majorityElemBrute(vector<int> &nums) {
    int n = nums.size();
    for(int i=0; i<n; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++) {
            if(nums[i] == nums[j])  cnt++;
        }
        if(cnt > n/2)   return nums[i];
    }
    return -1;
}

// better: T.C. = O(n*logn + n), S(n) = O(n)
int majorityElemBetter(vector<int> &nums) {
    int n = nums.size();
    map<int, int> mpp;
    // count frequency of each elem
    for(int i=0; i<n; i++) mpp[nums[i]]++;
    // check the majority elem
    for(auto it: mpp)
        if(it.second > n/2) return it.first;
    return -1;
}

// optimal: T.C. = O(n + n-->only if its ambiguous that majority elem is present or not), S(n) = O(1)
int majorityElemOptimal(vector<int> &nums) {
    int n = nums.size();
    int cnt = 0, el;
    for(int i=0; i<n; i++) {
        if(cnt == 0) {
            cnt = 1;
            el = nums[i];
        }
        else if(nums[i] == el)  cnt++;
        else    cnt--;
    }

    int cnt1=0;
    for(int i=0; i<n; i++)
        if(nums[i] == el)  cnt1++;
    
    if(cnt1 > n/2)  return el;
    return -1;

}


int main() {

    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele); 
    }

    cout << majorityElemBrute(arr) << endl;
    cout << majorityElemBetter(arr) << endl;
    cout << majorityElemOptimal(arr) << endl;

    return 0;
}