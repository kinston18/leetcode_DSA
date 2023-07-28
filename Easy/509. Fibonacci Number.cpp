/* Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
  */


class Solution {
public:
    int fib(int n) {
        //base case
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int ans = fib(n-1) + fib (n-2);
        return ans;
    }
};




class Solution {
public:
     int fib(int n) {
        if (n < 2)
        return n;

        int* memo = new int[n+1];
        memo[0] = 0;
        memo[1] = 1;

        for (int i = 2; i <= n; i++) {
        memo[i] = memo[i-1] + memo[i-2];
        }

        return memo[n];
    }
};
