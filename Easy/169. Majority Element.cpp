/*
Input: nums = [2,2,1,1,1,2,2]
Output: 2
  */


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
