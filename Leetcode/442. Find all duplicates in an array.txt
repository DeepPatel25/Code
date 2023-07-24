class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[abs(nums[i]) - 1] < 0)
                ans.push_back(abs(nums[i]));
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }

        return ans;
        
        // map<int, int> mp;
        // int n = nums.size();

        // for(int i = 0; i < n; i++) mp[nums[i]]++;

        // vector<int> ans;
        // for(auto it: mp) {
        //     if(it.second == 2) ans.push_back(it.first);
        // }

        // return ans;
    }
};