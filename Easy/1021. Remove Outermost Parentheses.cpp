
/*
example

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int sum =1;
        string ans = "";
        
        int open = 1;
        int end = 0;
         for (int i=1;i<s.size();i++){
             if(s[i]=='('){
                 open++;
             }
             else
                 end++;
             if(s[i]==')' && open == end){
                 open =0;
                 end = 0;
                              }
             else if(open > 1){
                 ans += s[i];
             }
         }
        return ans;
    }
};
