class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_min(n, 0), suffix_min(n, 0);

        prefix_min[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix_min[i] = min(prefix_min[i - 1], nums[i]);
        }

        suffix_min[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suffix_min[i] = min(suffix_min[i + 1], nums[i]);
        }

        int ans = INT_MAX;
        for(int i = 1; i < n - 1; i++) {
            if(prefix_min[i - 1] < nums[i] && suffix_min[i + 1] < nums[i]) {
                ans = min(ans, nums[i] + prefix_min[i - 1] + suffix_min[i + 1]);
            }
        }

        return ans != INT_MAX ? ans: -1;
    }
};