class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int low, int high, int isFirstOccur){
        int index = -1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                index = mid;
                
                if(isFirstOccur)
                    high = mid-1;
                else
                    low = mid +1;
            }
            else if(nums[mid]>target)
                high = mid-1;
            else
                low = mid+1;
            
            mid = low+(high-low)/2;
        }
        return index;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccur = binarySearch(nums,target,0,nums.size()-1,1);
        int lastOccur = binarySearch(nums,target,0,nums.size()-1,0);
  return vector<int>{firstOccur,lastOccur};
    }
};
