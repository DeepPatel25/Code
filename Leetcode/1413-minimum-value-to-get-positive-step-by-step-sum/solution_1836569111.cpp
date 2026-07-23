class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini = INT_MAX, n = nums.size(), sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum < mini)
                mini = sum;
        }
        return mini > 0 ? mini : abs(mini) + 1;
    }
};