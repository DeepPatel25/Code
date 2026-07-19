class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int i = nums.size() - 1;

        while (i >= 0) {
            nums.push_back(nums[i]);
            i--;
        }

        return nums;
    }
};