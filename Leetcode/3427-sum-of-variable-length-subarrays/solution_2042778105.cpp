class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int start = max(0, i - nums[i]);

            while (start <= i)
                sum += nums[start++];
        }

        return sum;
    }
};