class Solution {
public:
    int minCut(string s) {
        int mini = INT_MAX;
        int cut = 0;
        solve(0, s, mini, cut);
        return mini - 1;
    }

    void solve(int index, string &s, int &mini, int cut){
        if(index == s.size()){
            mini = min(mini, cut);
            return;
        }
        
        for(int i=index; i<s.size(); i++){
            if(isPalindrome(s, index, i)){
                solve(i+1, s, mini, cut+1);
            }
        }
    }
    
    bool isPalindrome(string s, int start, int end){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        
        return true;
    }
};