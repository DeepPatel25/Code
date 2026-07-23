class Solution {
public:
    int minDifference(vector<int>& nums) {
        int size = nums.size();
        if(size <= 3) return 0;

        sort(nums.begin(), nums.end());
        int diff = INT_MAX;

        for(int i = 0; i <= 3; i++) {
            int temp = nums[size - 4 + i] - nums[i];
            diff = min(diff, temp);
        }

        return diff;
    }
};