class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;

        for(int val: nums) mp[val]++;
        for(auto it: mp) pq.push({it.second, it.first});

        while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};