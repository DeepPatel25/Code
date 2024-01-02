class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;

        int size = 0;
        for(auto it : mp)
            size = max(size, it.second);
        
        vector<vector<int>> ans(size);

        for(auto it : mp) {
            for(int i = 0; i < it.second; i++) {
                ans[i].push_back(it.first);
            }
        }

        return ans;
    }
};