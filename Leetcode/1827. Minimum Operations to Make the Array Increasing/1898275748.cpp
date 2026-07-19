class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] >= nums[i]) {
                int add = nums[i - 1] - nums[i] + 1;
                count += add;
                nums[i] += add;
            }
        }

        return count;
    }
};