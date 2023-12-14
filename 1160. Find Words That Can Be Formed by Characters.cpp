/*
You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.

 

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
  */

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>counts(26,0);
        for(char c: chars){
            counts[c-'a']++;
        }
        
        int ans = 0;
        for(string word:words){
            vector<int> wordCount(26,0);
            
            for(char c:word){
                wordCount[c-'a']++;
            }
            
            bool good = true;
            for(int i=0;i<26;i++){
                if(counts[i]<wordCount[i]){
                    good = false;
                    break;
                }
            }
            
            if(good){
                ans+=word.size();
            }
        }
        return ans;
    }
};
