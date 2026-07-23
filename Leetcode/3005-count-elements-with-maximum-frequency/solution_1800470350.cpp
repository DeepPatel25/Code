class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi = 0;
        unordered_map<int, int> mp;

        for (int val: nums) {
            mp[val]++;
            maxi = max(maxi, mp[val]);
        }

        int count = 0;
        for (auto it: mp)
            count += (it.second == maxi ? maxi : 0);
        
        return count;
    }
};