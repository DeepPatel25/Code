class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double mini = DBL_MAX;

        int start = 0, end = nums.size() - 1;
        while (start < end) {
            double avg = (double)(nums[start] + nums[end]) / 2;
            mini = min(mini, avg);

            start++; end--;
        }

        return mini;
    }
};