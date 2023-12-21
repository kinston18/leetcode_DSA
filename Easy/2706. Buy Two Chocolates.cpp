/*Input: prices = [1,2,2], money = 3
Output: 0
Explanation: Purchase the chocolates priced at 1 and 2 units respectively. You will have 3 - 3 = 0 units of money afterwards. Thus, we return 0.
*/
  

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        
        int minCost = prices[0] + prices[1];
        
        if(minCost <= money){
            return money - minCost;
        }
        else
            return money;
    }
};
