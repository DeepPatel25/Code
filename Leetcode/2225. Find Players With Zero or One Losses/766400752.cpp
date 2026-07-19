class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        unordered_map<int, pair<int,int>> m;
        for (auto match : matches) {
            m[match[0]].first++;
            m[match[1]].second++;
        }
        for (const auto &res : m) {
            if (res.second.first && res.second.second == 0) {
                ans[0].push_back(res.first);
            } else if (res.second.second == 1) {
                ans[1].push_back(res.first);
            }
        }
        sort(begin(ans[0]), end(ans[0]));
        sort(begin(ans[1]), end(ans[1]));
        return ans;
    }
};