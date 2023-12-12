/*
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 

Example 1:

Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 

*/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = nums[nums.size()-1];
            int y = nums[nums.size()-2];
        return (x-1)*(y-1);
    }
};
/* 
Alog used:
// Step 1: Sort the numbers from smallest to largest.
 // Step 2: Get the two largest numbers after sorting.
// Step 3: Multiply one less than the biggest number with one less than the second biggest number.
      
      */
