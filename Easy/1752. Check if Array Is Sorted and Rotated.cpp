/*

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].

*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size()-1;
        
        int count =0;
        if(nums[n]>nums[0]){
            count++;
        }
        
        for(int i=1;i<=n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(count<=1)  // if the count is more than 1 that means there are more than 2 values which is greater than there previous value in that case the array is not  sorted and rotated
            return true;
        
        return false;
    }
};
