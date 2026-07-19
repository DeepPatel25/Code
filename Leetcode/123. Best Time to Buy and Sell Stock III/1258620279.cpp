class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;

        // Define the DP array
        vector<vector<int>> dp(n, vector<int>(3, 0));
        
        // Initialize the DP array
        dp[0][0] = 0; // No stock bought at index 0
        dp[0][1] = -prices[0]; // One stock bought at index 0
        dp[0][2] = 0; // No stock bought and transaction completed at index 0
        
        for (int i = 1; i < n; ++i) {
            // Update the DP array based on the current stock price
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][2]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
            dp[i][2] = dp[i - 1][1] + prices[i];
        }
        
        // Return the maximum profit when no stock is held at the end
        return max(dp[n - 1][0], dp[n - 1][2]);
    }
};
