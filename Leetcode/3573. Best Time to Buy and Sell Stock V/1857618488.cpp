class Solution {
private:
    long long f(int i, int status, int k, vector<int> &prices, vector<vector<vector<long long>>> &dp) {
        if (k == 0)
            return 0;
        
        if (i == prices.size() - 1) {
            if (status == 0) return 0;
            else if (status == 1) return prices[i];
            return -prices[i];
        }

        if (dp[i][status][k] != INT_MIN)
            return dp[i][status][k];

        long long ans = INT_MIN;
        ans = max(ans, f(i + 1, status, k, prices, dp));

        if (status == 0) {
            ans = max(ans, -prices[i] + f(i + 1, 1, k, prices, dp));
            ans = max(ans, prices[i] + f(i + 1, 2, k, prices, dp));
        } else if (status == 1) {
            ans = max(ans, prices[i] + f(i + 1, 0, k - 1, prices, dp));
        } else {
            ans = max(ans, -prices[i] + f(i + 1, 0, k - 1, prices, dp));
        }

        return dp[i][status][k] = ans;
    }

public:
    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(3, vector<long long>(k + 1, INT_MIN)));
        return f(0, 0, k, prices, dp);
    }
};