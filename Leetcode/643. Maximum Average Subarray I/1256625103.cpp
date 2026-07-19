class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi = DBL_MIN;
        int sum = 0;

        for(int i = 0; i < k; i++) sum += nums[i];

        if(((double)sum / k) > maxi) maxi = (double)sum / k;

        for(int i = k; i < nums.size(); i++) {
            sum += (nums[i] - nums[i - k]);
            if(((double)sum / k) > maxi) maxi = (double)sum / k;
        }

        return maxi;
    }
};