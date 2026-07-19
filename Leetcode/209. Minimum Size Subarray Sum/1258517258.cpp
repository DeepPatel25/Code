class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int sum = 0, mini = INT_MAX;
        int n = nums.size();

        for (int j = 0; j < n; j++) {
            sum += nums[j];

            while (sum >= target) {
                mini = min(mini, j - i + 1); // Calculate length of subarray on the fly
                sum -= nums[i++];
            }
        }

        return (mini == INT_MAX) ? 0 : mini; // If sum is less than target, return 0
    }
};
