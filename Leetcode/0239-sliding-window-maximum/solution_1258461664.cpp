class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;

        int count = 0, maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            count++;

            if(count >= k) {
                if(mp.rbegin() != mp.rend()) {
                    maxi = max(maxi, mp.rbegin()->first);
                }

                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                ans.push_back(maxi);
            }
        }

        return ans;
    }
};