class Solution {
public:
    int maxPower(string s) {
        int maxi=1;
        int cnt=1;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                cnt++;
            }
            else
                cnt=1;
            
            maxi=max(cnt,maxi);
        }
        return maxi;
    }
};
