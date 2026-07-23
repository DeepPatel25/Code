class Solution {
public:
    int maxFixedPoints(vector<int>& nums) {
        vector<int> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back(nums[i] - i);
        }

        vector<int> dp;

        for (int x : arr) {
            auto it = upper_bound(dp.begin(), dp.end(), x);
            if (it == dp.end()) dp.push_back(x);
            else *it = x;
        }

        return dp.size();
    }
};