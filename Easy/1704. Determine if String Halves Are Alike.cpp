/*
  You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.

 

Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

*/
class Solution {
public:
    
    bool isVowel(char &ch){
        return(ch =='a' || ch =='e'|| ch=='i'||ch=='o'||ch=='u' ||
               ch=='A' || ch =='E' || ch=='I'||ch=='O'||ch=='U');
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        
        int mid = n/2;
        
        int i=0,j=mid;
        int countL =0;
        int countR=0;
        
        while(i<n/2 && j<n){
            if(isVowel(s[i])) countL++;
            
            if(isVowel(s[j])) countR++;
            
            i++;
            j++;
        }
        
        return countL == countR;
        
    }
};
