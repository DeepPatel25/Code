class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        gen(ans, "", n, n);
        
        return ans;
    }
    
    void gen(vector<string>& ans, string s, int start, int end){
        if(start==0 && end==0){
            ans.push_back(s);
            return;
        }
        
        if(start>0){
            gen(ans, s+'(', start-1, end);
        }
        
        if(start<end){
            gen(ans, s+')', start, end-1);
        }
    }
};