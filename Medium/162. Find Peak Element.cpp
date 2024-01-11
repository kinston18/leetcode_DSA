class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        int m = s + (e-s)/2;
        while(s<e){
            if(nums[m]<nums[m+1]){
                s = m + 1;
                m = s + (e-s)/2;
            }
            else{
                e = m;
                m = s + (e-s)/2;
            }
        }
        return e;
    }
};
