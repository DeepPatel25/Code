class Solution {
private:
    bool isValid(int i, string s, unordered_set<string> &se, vector<int> &dp) {
        if(i == s.length()) return true;
        if(dp[i] != -1) return dp[i];

        string temp = "";
        for(int j = i; j < s.size(); j++) {
            temp += s[j];
            if(se.find(temp) != se.end()) {
                if(isValid(j + 1, s, se, dp)) {
                    return dp[i] = true;
                }
            }
        }

        return dp[i] = false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> se;
        vector<int> dp(s.length(), -1);

        for(string val: wordDict) {
            se.insert(val);
        }

        return isValid(0, s, se, dp);
    }
};