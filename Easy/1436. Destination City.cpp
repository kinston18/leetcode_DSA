/*

  Example 1:

Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
Output: "Sao Paulo" 
Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".

  */

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // Loop through each path in the list
        for (int i = 0; i < paths.size(); i++) {
            // Pick the destination city from the current path
            string candidate = paths[i][1];

            // Assume this city is good (for now)
            bool good = true;

            // Check if this city is also a starting city in other paths
            for (int j = 0; j < paths.size(); j++) {
                // If the city is found as a starting city, it's not good
                if (paths[j][0] == candidate) {
                    good = false;
                    // No need to check further, we found it
                    break;
                }
            }

            // If the city is good (not a starting city in other paths), return it
            if (good) {
                return candidate;
            }
        }

        // If no good city is found, return an empty string
        return "";
    }
};
