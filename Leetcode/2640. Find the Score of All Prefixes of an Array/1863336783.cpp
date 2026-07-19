class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans(nums.size(), 0);
        
        int maxi = 0;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            ans[i] = maxi + nums[i] + sum;
            sum = ans[i];
        }

        return ans;
    }
};