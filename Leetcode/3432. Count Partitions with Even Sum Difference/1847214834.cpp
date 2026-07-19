class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(), nums.end(), 0),
            n = nums.size(),
            leftSum = 0,
            count = 0;

        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            rightSum -= nums[i];

            if (abs(leftSum - rightSum) % 2 == 0)
                count++;
        }

        return count;
    }
};