class Solution {
public:
    long long helper(vector<int>& nums, vector<int>& cost, int median) {
        long long res = 0;
        for(int i = 0; i < nums.size(); i++)
            res += 1L * abs(nums[i] - median) * cost[i];

        return res;
    }

    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size();
        long long total = 0;
        long long sum = 0;
        long long median;
        vector<pair<int, int>> vi;

        for(int i = 0; i < n; ++i) vi.push_back({nums[i], cost[i]});
        sort(vi.begin(), vi.end());
        for(int i = 0; i < n; ++i) sum += vi[i].second;

        int i = 0;
        while(total < (sum + 1) / 2 && i < n) {
            total += vi[i].second;
            median = vi[i].first;
            i++;
        }

        return helper(nums, cost, median);
    }
};