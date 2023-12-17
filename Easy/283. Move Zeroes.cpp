/*
  Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
  */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]!=0){
                swap(nums[i++],nums[j++]);
            }
            else
                j++;
        }
    }
};


class Solution {
public:
void moveZeroes(vector& nums) {
int i=0,j=0;
while(j<nums.size()){
if(nums[j]!=0){
swap(nums[i],nums[j]);
i++;
}
j++;
}}};
