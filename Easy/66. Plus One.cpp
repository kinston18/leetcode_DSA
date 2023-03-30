/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].



*/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            int num = digits[i]+carry;
            digits[i]=num%10;
            carry=num/10;
        }
        if(carry>0){
            digits.push_back(0);
            n=digits.size();
            for(int i = n-1;i>0;i--){
                digits[i]=digits[i-1];
            }
            digits[0]=carry;
        }
        return digits;
    }
};
