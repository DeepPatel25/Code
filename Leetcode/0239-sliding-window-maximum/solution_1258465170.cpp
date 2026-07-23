class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;

        int i = 0, j = 0, count = 0;

        while(j < nums.size()) {
            mp[nums[j++]]++;
            count++;

            if(count >= k) {
                ans.push_back(mp.rbegin()->first);

                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
        }

        return ans;
    }
};