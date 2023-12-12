/*

  Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number
*/

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size()-1;i>=0;i--){
            if((num[i]-'0')%2 != 0)
                return num.substr(0,i+1);
        }
        return "";
    }
};
