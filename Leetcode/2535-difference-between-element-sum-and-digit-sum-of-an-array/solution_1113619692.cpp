class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0;
        int digSum = 0;
        int size = nums.size();

        for(int i = 0; i < size; i++) {
            eleSum += nums[i];

            while(nums[i] != 0) {
                digSum += (nums[i] % 10);
                nums[i] /= 10;
            }
        }

        return abs(eleSum - digSum);
    }
};