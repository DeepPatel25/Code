class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        long long rightSum = std::accumulate(nums.begin(), nums.end(), 0LL);
        int ans = 0, n = nums.size();

        long long leftSum = 0LL;
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            rightSum -= nums[i];

            if (leftSum >= rightSum)
                ++ans;
        }

        return ans;
    }
};