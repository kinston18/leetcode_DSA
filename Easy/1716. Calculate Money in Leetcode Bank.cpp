/*

  Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.
Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day.

 

Example 1:

Input: n = 4
Output: 10
Explanation: After the 4th day, the total is 1 + 2 + 3 + 4 = 10.
  */


class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int monday = 1;
        
        while(n>0){
            for(int day = 0; day< min(n,7);day++){
                ans = ans + monday + day;
            }
            n=n-7;
            monday++;
        }
        return ans;
    }
};




//alternate solution:

class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        for(int day=0;day<n;day++)
        {
            total+=(day/7+1)+(day%7);
        }
        return total;
        
    }
};
