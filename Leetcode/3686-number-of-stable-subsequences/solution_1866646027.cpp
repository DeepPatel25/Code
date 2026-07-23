class Solution {
private:
    const int mod = 1e9 + 7;

    long long int solve(int prev, int i, int count, vector<int> &nums, vector<vector<vector<int>>> &dp) {
        if (count < 0) return 0;
        if (i == nums.size()) return prev == -1 ? 0: 1;
        if (dp[i][prev + 1][count] != -1) return dp[i][prev + 1][count];

        long long int pick = 0;

        if (nums[i] % 2 == prev)
            pick = solve(prev, i + 1, count - 1, nums, dp);
        else
            pick = solve(nums[i] % 2, i + 1, 1, nums, dp);

        long long int skip = solve(prev, i + 1, count, nums, dp);
        return dp[i][prev + 1][count] = (skip + pick) % mod;
    }

public:
    int countStableSubsequences(vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(3, vector<int>(3, -1)));
        return solve(-1, 0, 2, nums, dp);
    }
};