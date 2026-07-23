class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool> ans;
        unordered_map<int, int> preCompute;
        int idx = 0;
        preCompute[0] = idx;

        for (int i = 1; i < n; i++)
            preCompute[i] = abs(nums[i] - nums[i - 1]) > maxDiff ? ++idx : idx;

        for (auto& q: queries)
            ans.push_back(q[0] == q[1] || preCompute[q[0]] == preCompute[q[1]]);

        return ans;
    }
};