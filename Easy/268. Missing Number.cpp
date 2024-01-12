/*
  Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
  */

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //Step1: Find the length of array.
        int n = nums.size();

        //Step2: Calculate the actual sum using Mathematical formula
        long actualSum = (n*(n+1))/2;

        //Step3: Calculate the given sum.
        long sum = 0;
        for(int element: nums)
        {
            sum += element;
        }

        //Step 4: return actualSum-givenSum.
        return (int)(actualSum-sum);
}
};
