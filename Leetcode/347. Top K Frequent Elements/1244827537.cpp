class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<int> ans;
        for(auto it: mp) {
            if(it.second >= k) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};