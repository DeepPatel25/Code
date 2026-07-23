class Solution {
private:
    bool solve(int index, vector<int> &nums, vector<int> &dp) {
        if(index >= nums.size()) return false;
        if(index == nums.size() - 1) return true;
        if(nums[index] == 0) return false;

        if(dp[index] != -1) return dp[index];

        bool ans = false;
        for(int i = 1; i <= nums[index]; i++) {
            ans = (ans | solve(index + i, nums, dp));
        }

        return dp[index] = ans;
    }

public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }
};