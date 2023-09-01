/*
    Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
    */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};
