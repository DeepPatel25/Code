class Solution {
public:
    int solve(int i, int j, string &word1, string &word2, vector<vector<int>> &dp) {
        if(i == word1.length()) {
            return word2.length() - j;
        }

        if(j == word2.length()) {
            return word1.length() - i;
        }

        if(dp[i][j] != -1) return dp[i][j];

        int ans;
        if(word1[i] == word2[j]) ans = solve(i + 1, j + 1, word1, word2, dp);
        else {
            int insertVal = solve(i, j + 1, word1, word2, dp);
            int deleteVal = solve(i + 1, j, word1, word2, dp);
            int replaceVal = solve(i + 1, j + 1, word1, word2, dp);

            ans = min(insertVal, min(deleteVal, replaceVal)) + 1;
        }

        return dp[i][j] = ans;
    }
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        return solve(0, 0, word1, word2, dp);
    }
};