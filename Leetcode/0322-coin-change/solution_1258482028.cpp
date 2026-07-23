class Solution {
public:
    void solve(int amount, vector<int> &coins, vector<int> &dp, int &mini,
        int count) {
        if(amount == 0) {
            mini = min(mini, count);
            return;
        }

        for(int i = 0; i < coins.size(); i++) {
            if(amount - coins[i] >= 0)  {
                solve(amount - coins[i], coins, dp, mini, count + 1);
            }
        }
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        int mini = INT_MAX;
        solve(amount, coins, dp, mini, 0);

        return mini == INT_MAX ? -1 : mini;
    }
};