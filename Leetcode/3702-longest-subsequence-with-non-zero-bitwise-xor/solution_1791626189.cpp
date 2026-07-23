class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorValue = 0;

        for (int val: nums)
            xorValue ^= val;

        if (xorValue != 0) return nums.size();
        return nums.size() == 1 ? 0 : nums.size() - 1;
    }
};