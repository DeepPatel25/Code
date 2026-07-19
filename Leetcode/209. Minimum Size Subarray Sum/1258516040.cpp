class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int sum = 0, mini = INT_MAX;
        int n = nums.size();

        while(j < n) {
            sum += nums[j++];
            
            while(sum >= target) {
                mini = min(mini, j - i);
                sum -= nums[i++];
            }
        }

        return mini == INT_MAX ? 0 : mini;
    }
};
