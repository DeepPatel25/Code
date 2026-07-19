class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int deleteItem = 0, leftOver = 0;

        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;

        for(auto it: mp) {
            deleteItem += it.second / 2;
            leftOver += it.second % 2;
        }

        return {deleteItem, leftOver};
    }
};