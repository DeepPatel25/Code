class Solution {
private:
    int helper(vector<int> &values, int i, int j, vector<vector<int>> &dp) {
        if (i + 1 == j) {
            return 0;
        }

        if (dp[i][j] != 0) {
            return dp[i][j];
        }

        int ans = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            ans = min(ans, values[i] * values[j] * values[k] + helper(values, i, k, dp) + helper(values, k, j, dp )); 
        }

        return dp[i][j] = ans;
    }

public:
    int minScoreTriangulation(vector<int>& values) {
        vector<vector<int>> dp(values.size(), vector<int>(values.size(), 0));
        return helper(values, 0, values.size() - 1, dp);
    }
};