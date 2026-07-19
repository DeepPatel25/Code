class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto val: nums) {
            if(++mp[val] >= 3) return false;
        }

        return true;
    }
};