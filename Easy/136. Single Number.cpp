/*
Assume the given array is: [4,1,2,1,2]
XOR of all elements = 4^1^2^1^2
      = 4 ^ (1^1) ^ (2^2)
      = 4 ^ 0 ^ 0 = 4^0 = 4
Hence, 4 is the single element in the array.

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        
        int xorr = 0;
        for(int i=0;i<n;i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};
