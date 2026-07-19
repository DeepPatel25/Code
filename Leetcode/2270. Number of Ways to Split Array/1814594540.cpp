class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int rightSum = std::accumulate(nums.begin(), nums.end(), 0);
        int ans = 0, n = nums.size();

        int leftSum = 0;
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            rightSum -= nums[i];

            if (leftSum >= rightSum)
                ++ans;
        }

        return ans;
    }
};