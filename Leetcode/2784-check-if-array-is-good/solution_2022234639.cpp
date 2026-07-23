class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi =  INT_MIN;

        for (int i: nums)
            maxi = max(maxi, i);
        
        unordered_map<int, int> mp;
        for (int i = 1; i <= maxi; i++) {
            if (i == maxi)
                mp[i]++;
            
            mp[i]++;
        }

        for (int i: nums)
            mp[i]--;
        
        for (auto it: mp)
            if (it.second != 0)
                return false;
        
        return true;
    }
};