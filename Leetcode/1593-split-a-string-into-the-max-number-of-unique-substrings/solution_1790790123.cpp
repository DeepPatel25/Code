class Solution {
private:
    int helper(int i, string &s, unordered_set<string> &st, string temp, vector<int> &dp) {
        // if i value becomes the length of string then return 0;
        if (i == s.size()) return 0;

        if (dp[i] != 0) return dp[i];

        // append current value into string
        temp += s[i];

        // prepare op1 and op2 for calculation
        int op1 = 0, op2 = 0;

        // Check temp value exists in set or not
        if (st.find(temp) == st.end()) {

            // if not then insert in set
            st.insert(temp);

            // call helper function with split part
            op1 = 1 + helper(i + 1, s, st, "", dp);

            // remove from set after successful backtracking operation
            st.erase(temp);
        }

        // call helper function if you don't choose to split
        op2 = helper(i + 1, s, st, temp, dp);

        // return maximum value can be gain from both operations.
        return dp[i] = max(op1, op2);
    }

public:
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        vector<int> dp(s.size(), 0);
        return helper(0, s, st, "", dp);    
    }
};