class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> mp;
        int count = 0;
        for(int val: nums) mp[val]++;

        for(int i = 0; i < nums.size() - 2; i++) {
            if(mp.find(nums[i] + diff) != mp.end()) {
                if(mp.find(nums[i] + diff + diff) != mp.end()) {
                    count++;
                }
            }
        }

        return count;
    }
};