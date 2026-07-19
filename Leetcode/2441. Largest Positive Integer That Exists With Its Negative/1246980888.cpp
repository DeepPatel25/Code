class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            
            if(mp[-nums[i]] > 0) {
                maxi = max(maxi, abs(nums[i]));
            }
        }

        return maxi == 0 ? -1 : maxi;
    }
};