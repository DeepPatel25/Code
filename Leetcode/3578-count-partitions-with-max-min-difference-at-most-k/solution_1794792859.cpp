class Solution {
private:
    const int modulo = 1e9 + 7;
    vector<int> dp;

    int solve(int i, vector<int> &nums, int k) {
        if (i == nums.size()) return 1;
        if (dp[i] != -1) return dp[i];

        int mini = INT_MAX, maxi = INT_MIN;
        long long ways = 0;
        
        for (int j = i; j < nums.size(); j++) {
            mini = min(mini, nums[j]);
            maxi = max(maxi, nums[j]);

            if (maxi - mini <= k) {
                ways += solve(j + 1, nums, k);
                if (ways >= modulo) ways -= modulo;
            } else {
                break;
            }
        }

        return dp[i] = ways;
    }
    
public:
    int countPartitions(vector<int>& nums, int k) {
        dp.assign(nums.size(), -1);
        return solve(0, nums, k);
    }
};