#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0, maxi = LONG_MIN;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if(sum > maxi)  maxi = sum; 
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
}s1;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele); 
    }

    cout << s1.maxSubArray(arr) << endl;

    return 0;
}