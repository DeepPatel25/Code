class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int div = 2 * k + 1;
        long long sum = 0;
        vector<int> ans(n, -1);

        if(n < div) return ans;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            
            if(i - div >= 0) {
                sum -= nums[i - div];
            }
            if(i >= div - 1) {
                ans[i - k] = sum / div;
            }
        }

        return ans;
    }
};