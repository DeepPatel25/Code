class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size = nums.size();
        int leftSum = 0;
        int rightSum = 0;
        vector<int> ans(size);

        for(int i = 0; i < size; i++) rightSum += nums[i];
        
        for(int i = 0; i < size; i++) {
            rightSum -= nums[i];
            ans[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }

        return ans;
    }
};