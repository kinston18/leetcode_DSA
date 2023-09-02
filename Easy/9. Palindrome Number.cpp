/*
  Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

*/


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        long long reversed = 0;
        long long temp = x;
        
        while(temp != 0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /=10;
        }
        return (reversed == x);
    }
};
