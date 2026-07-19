class Solution {
private:
    bool isValid(int i, int j, vector<int>& nums) {
        for (int iter = i; iter < j - 1; iter++) {
            if (nums[iter] >= nums[iter + 1]) return false;
        }

        return true;
    }

public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        if (k == 1) return true;
        for (int i = 0; i < n - 2 * k; i++) {
            if (isValid(i, i + k, nums) && isValid(i + k, i + 2 * k, nums)) return true;
        }

        return false;
    }
};