class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int n = nums.size();
        int preSum = 0, count = 0;

        for(int i = 0; i < n; i++) {
            preSum += nums[i];
            int rem = preSum - k;
            count += mp[rem];
            mp[preSum] += 1;
        }

        return count;
    }
};