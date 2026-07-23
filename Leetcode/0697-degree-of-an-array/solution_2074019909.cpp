class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int maxi = INT_MIN;
 
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
            maxi = max(maxi, (int)mp[nums[i]].size());
        }

        int min = INT_MAX;
        for (auto& it: mp) {
            if (it.second.size() == maxi)
                min = ::min(min, it.second[it.second.size() - 1] - it.second[0] + 1);
        }

        return min;
    }
};