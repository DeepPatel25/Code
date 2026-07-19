class Solution {
public:
    int solve(int amount, vector<int> &coins, vector<int> &dp, int &mini,
        int count) {
        if(amount == 0) {
            mini = min(mini, count);
            return dp[amount] = mini;
        }

        if(dp[amount] != -1) return dp[amount];

        int temp = INT_MAX;
        for(int i = coins.size() - 1; i >= 0; i--) {
            if(amount - coins[i] >= 0)  {
                temp = min(temp, solve(amount - coins[i], coins, dp, mini, count + 1));
            }
        }

        return dp[amount] = temp;
    }

    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());

        vector<int> dp(amount + 1, -1);
        int mini = INT_MAX;
        solve(amount, coins, dp, mini, 0);

        return mini == INT_MAX ? -1 : dp[amount];
    }
};