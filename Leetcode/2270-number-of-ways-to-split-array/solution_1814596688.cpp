class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long rightSum = std::accumulate(nums.begin(), nums.end(), 0LL);
        cout << rightSum << endl;
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