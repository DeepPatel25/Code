class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int mod = 1e9 + 7;

        for (int i = 0; i < queries.size(); i++) {
            int idx = queries[i][0];

            while (idx <= queries[i][1]) {
                long long x = nums[idx];
                x *= queries[i][3];
                if (x >= mod) x %= mod;
                nums[idx] = x;
                idx += queries[i][2];
            }
        }

        int x = 0;
        for (int i: nums)
            x ^= i;
        
        return x;
    }
};