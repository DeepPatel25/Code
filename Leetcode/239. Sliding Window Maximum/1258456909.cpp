class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int maxi = INT_MIN;

        for(int i = 0; i < k; i++) {
            maxi = max(maxi, nums[i]);
        }

        ans.push_back(maxi);
        for(int i = k; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            ans.push_back(maxi);
        }

        return ans;
    }
};