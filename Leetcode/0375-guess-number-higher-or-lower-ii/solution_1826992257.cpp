class Solution {
public:
    int getMoneyAmount(int n) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        // len = length of the current range
        for (int len = 2; len <= n; ++len) {
            for (int start = 1; start + len - 1 <= n; ++start) {
                int end = start + len - 1;
                dp[start][end] = INT_MAX;

                for (int x = start; x < end; ++x) {
                    int cost = x + max(dp[start][x - 1], dp[x + 1][end]);
                    dp[start][end] = min(dp[start][end], cost);
                }
            }
        }

        return dp[1][n];
    }
};
