class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int modulo = 1e9 + 7;
        int ans = 0;
        map<int, int> mp;

        for (int i = 0; i < requests.size(); i++)
            for (int j = requests[i][0]; j <= requests[i][1]; j++)
                mp[j]++;

        vector<pair<int, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(),
            [](const auto &a, const auto &b) {
                return a.second > b.second;
            });
        
        sort(nums.begin(), nums.end());

        for (int i = 0, j = nums.size() - 1; i < vec.size(); i++, j--) {
            ans = (ans + ((vec[i].second * nums[j]) % modulo)) % modulo;
            cout << ans << endl;
        }
        
        return ans;
    }
};