class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi = INT_MIN;
        int sum = 0;

        for(int i = 0; i < k; i++) sum += nums[i];

        cout << (double)sum / k << endl;
        if(((double)sum / k) > maxi) maxi = (double)sum / k;
    cout << maxi << endl;
        for(int i = k; i < nums.size(); i++) {
            sum += (nums[i] - nums[i - k]);
            cout << (double)sum / k;
            if(((double)sum / k) > maxi) maxi = (double)sum / k;
        }

        return maxi;
    }
};