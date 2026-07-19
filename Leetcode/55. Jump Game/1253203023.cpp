class Solution {
private:
    bool solve(int index, vector<int> &nums) {
        if(index >= nums.size()) return false;
        if(index == nums.size() - 1) return true;
        if(nums[index] == 0) return false;

        bool ans = false;
        for(int i = 1; i <= nums[index]; i++) {
            ans = (ans | solve(index + i, nums));
        }

        return ans;
    }

public:
    bool canJump(vector<int>& nums) {
        return solve(0, nums);
    }
};