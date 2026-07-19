class Solution {
public:
    vector<long long> countStableSubarrays(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<vector<long long>> dp(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (i == j) {
                    dp[i][j] = 1;
                } else {
                    if (nums[i] <= nums[j]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = 0;
                    }
                }
            }
        }

        vector<long long> ans(queries.size(), 0);

        for (int i = 0; i < queries.size(); i++) {
            int low = queries[i][0], high = queries[i][1];

            long long count = 0;
            for (int j = low; j <= high; j++) {
                for (int k = low; k <= high; k++) {
                    count += dp[j][k];
                }
            }

            ans[i] = count;
        }

        return ans;
    }
};