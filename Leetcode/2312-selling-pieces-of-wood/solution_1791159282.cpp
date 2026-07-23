class Solution {
public:
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        // create dp for storing maximum ans value of each space
        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

        // update current height, width value with respected price of wood
        for (int i = 0; i < prices.size(); i++)
            dp[prices[i][0]][prices[i][1]] = prices[i][2];

        // iterate over all positions of wood
        for (int i = 1; i < m + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                
                // check for verical max amount can be get
                for (int k = 0; k <= i; k++)
                    dp[i][j] = max(dp[i][j], dp[i - k][j] + dp[k][j]);
                
                // check for horizontal max amount can be get
                for (int k = 0; k <= j; k++)
                    dp[i][j] = max(dp[i][j], dp[i][j - k] + dp[i][k]);
            }
        }

        return dp[m][n];
    }
};