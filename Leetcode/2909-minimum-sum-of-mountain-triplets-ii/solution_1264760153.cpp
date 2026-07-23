class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return -1; // Not enough elements to form the triplet

        int prefix_min = nums[0];
        int ans = INT_MAX;

        // First pass to track suffix minimums from the right
        vector<int> suffix_min(n);
        suffix_min[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix_min[i] = min(suffix_min[i + 1], nums[i]);
        }

        // Second pass to find the minimum sum
        for (int i = 1; i < n - 1; i++) {
            if (prefix_min < nums[i] && suffix_min[i + 1] < nums[i]) {
                ans = min(ans, nums[i] + prefix_min + suffix_min[i + 1]);
            }
            prefix_min = min(prefix_min, nums[i]);
        }

        return ans != INT_MAX ? ans : -1;
    }
};
