class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int digitSum = 0;
            while(nums[i] != 0) {
                digitSum += nums[i] % 10;
                nums[i] /= 10;
            }
            nums[i] = digitSum;
        }
        
        long long count = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                count += abs(nums[i] - nums[j]);
            }
        }
        
        return count;
    }
};