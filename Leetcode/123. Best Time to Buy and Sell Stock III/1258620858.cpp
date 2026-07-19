class Solution {
public:
    int solve(int ind, bool buy, vector<int>& prices, int count,
        vector<vector<vector<int>>> &dp) {
        
        if(ind == prices.size() || count == 0) {
            return 0;
        }

        if(dp[ind][buy][count] != -1) return dp[ind][buy][count];

        if(buy) {
            return dp[ind][buy][count] = 
            max(-prices[ind] + solve(ind + 1, 0, prices, count, dp), solve(ind + 1, 1, prices, count, dp));
        }

        return dp[ind][buy][count] = max(prices[ind] + solve(ind + 1, 1, prices, count - 1, dp),
                        solve(ind + 1, 0, prices, count, dp));
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0, 1, prices, 2, dp);
    }
};