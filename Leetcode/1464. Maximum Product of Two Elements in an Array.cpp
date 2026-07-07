class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();

        return (nums[size - 2] - 1) * (nums[size - 1] - 1);
    }
};
