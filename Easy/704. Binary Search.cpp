/*

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        
        return -1;
        
        }
};
