class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        int max1 = 0;
        int max2 = 0;

        for(int i = 0; i < nums.size(); i+=2){
            max1 += nums[i];
            max2 += nums[i+1];
        }

        return max(max1, max2);
    }
};