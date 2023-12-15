/*

  Example 1:

Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
Output: "Sao Paulo" 
Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".

  */
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i =0;i<paths.size();i++){
            string candidate = paths[i][1];
            bool good = true;
            
            for(int j=0;j<paths.size();j++){
                if(paths[j][0]==candidate){
                    good = false;
                    break;
                }
            }
            if(good){
                return candidate;
            }
        }
        return "";
    }
};
