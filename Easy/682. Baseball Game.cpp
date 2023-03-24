/*
["5","2","C","D","+"]

stack : 5 10 15 -> 30

*/


//T.C. : O(N)
//S.C. : O(N)
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(auto x : operations){
            if(x== "C"){
                s.pop();
            }
        else if(x== "D"){
            int a= s.top();
        s.push(a*2);
        }
        else if(x=="+"){
            int  a= s.top();
        s.pop();
        int y = s.top();
        s.push(a);
        s.push(a+y);
        }
        else{
            s.push(stoi(x));  // stoi-> conversion of string into integer
        }
    }
    int ans = 0;
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
        return ans;
    }
};
