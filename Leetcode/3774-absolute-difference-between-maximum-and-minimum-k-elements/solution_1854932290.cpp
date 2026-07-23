class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int maxiSum = 0;
        for (int i = 0; i < k; i++) {
            maxiSum += nums[i];
        }

        int miniSum = 0;
        for (int i = nums.size() - 1; k > 0; i--, k--) {
            miniSum += nums[i];
        }

        return std::abs(miniSum - maxiSum);
    }
};